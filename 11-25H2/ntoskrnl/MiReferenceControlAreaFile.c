/*
 * XREFs of MiReferenceControlAreaFile @ 0x14042F960
 * Callers:
 *     MmGetFileNameForAddress @ 0x140899218 (MmGetFileNameForAddress.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     MiCreateSectionCommon @ 0x1408C2964 (MiCreateSectionCommon.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8E90 (NtAreMappedFilesTheSame.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiFillMapFileInfo @ 0x140903B10 (MiFillMapFileInfo.c)
 *     MiAllowImageMap @ 0x140903D34 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x14093AC3C (MmCreateSpecialImageSection.c)
 *     MmExtendSection @ 0x14093ADB0 (MmExtendSection.c)
 *     MiParseImageLoadConfig @ 0x140942E10 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1409439E4 (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x140943A6C (MiParseComAndCetHeaders.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MmIsFileMapped @ 0x140986274 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1409868A4 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1409CC068 (MiMapImageForEnclaveUse.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmGetFileNameForSection @ 0x140A7F334 (MmGetFileNameForSection.c)
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 *     MiLoadUserSymbols @ 0x140AABED8 (MiLoadUserSymbols.c)
 *     MiCallImageNotify @ 0x140ABE8DC (MiCallImageNotify.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // rax
  signed __int64 v4; // rbx
  unsigned int v5; // edx
  ULONG_PTR v6; // rbx
  __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  KIRQL v11; // bp

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
    while ( (unsigned __int64)(v9 & 0xF) + 15 <= 0xF && v6 == (v9 & 0xFFFFFFFFFFFFFFF0uLL) )
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
  MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 72), v11);
  return v6;
}
