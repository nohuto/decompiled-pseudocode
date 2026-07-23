/*
 * XREFs of MiReferenceControlAreaFile @ 0x14041CAA0
 * Callers:
 *     MmIsFileMapped @ 0x140860F44 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140861574 (MmSectionToSectionObjectPointers.c)
 *     MiAllowImageMap @ 0x14086D7E4 (MiAllowImageMap.c)
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8910 (NtAreMappedFilesTheSame.c)
 *     MiFillMapFileInfo @ 0x140919CF4 (MiFillMapFileInfo.c)
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x14093DD34 (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x14093DDBC (MiParseComAndCetHeaders.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCreateSectionCommon @ 0x140954024 (MiCreateSectionCommon.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x140A15B1C (MmGetFileNameForAddress.c)
 *     MiMapImageForEnclaveUse @ 0x140A2AB18 (MiMapImageForEnclaveUse.c)
 *     MmGetFileNameForSection @ 0x140A7DBDC (MmGetFileNameForSection.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 *     MiLoadUserSymbols @ 0x140AAC348 (MiLoadUserSymbols.c)
 *     MiCallImageNotify @ 0x140ABD9B4 (MiCallImageNotify.c)
 *     MmCreateSpecialImageSection @ 0x140AE8400 (MmCreateSpecialImageSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rbx
  unsigned int v5; // r8d
  ULONG_PTR v6; // rbx
  __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  KIRQL v11; // bp
  __int64 v12; // r8
  __int64 v13; // r9

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 > 1 )
    goto LABEL_5;
  if ( v5 )
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFuLL);
    if ( v8 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v6, 0x10uLL, v8 + 15);
    _m_prefetchw((const void *)(a1 + 64));
    v9 = *(_QWORD *)(a1 + 64);
    while ( (v9 & 0xF) == 0 && v6 == (v9 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v9 + 15, v9);
      if ( v10 == v9 )
        goto LABEL_5;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFF1uLL);
LABEL_5:
    ObpTraceObjectReferenceIfActive(v6 - 48);
    if ( v6 )
      return v6;
  }
  v11 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v6 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
  MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 72), v11, v12, v13);
  return v6;
}
