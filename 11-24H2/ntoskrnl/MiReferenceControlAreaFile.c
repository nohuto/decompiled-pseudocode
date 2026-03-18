/*
 * XREFs of MiReferenceControlAreaFile @ 0x1402464D0
 * Callers:
 *     MmGetFileNameForAddress @ 0x140838768 (MmGetFileNameForAddress.c)
 *     MiAllowImageMap @ 0x1408694B4 (MiAllowImageMap.c)
 *     MiMapImageForEnclaveUse @ 0x1408DB088 (MiMapImageForEnclaveUse.c)
 *     MiFillMapFileInfo @ 0x1408E3144 (MiFillMapFileInfo.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1408E5280 (MiUnmapVad.c)
 *     NtAreMappedFilesTheSame @ 0x1408E8130 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1408EF744 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408EFD74 (MmSectionToSectionObjectPointers.c)
 *     MiParseImageLoadConfig @ 0x1408F42B8 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1408F4E8C (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x1408F4F14 (MiParseComAndCetHeaders.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCreateSectionCommon @ 0x14096B594 (MiCreateSectionCommon.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 *     MmGetFileNameForSection @ 0x140A830BC (MmGetFileNameForSection.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 *     MiLoadUserSymbols @ 0x140AB13D8 (MiLoadUserSymbols.c)
 *     MiCallImageNotify @ 0x140AC26CC (MiCallImageNotify.c)
 *     MmCreateSpecialImageSection @ 0x140AE6B20 (MmCreateSpecialImageSection.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
    ObpTraceObjectReferenceIfActive(v6 - 48, 1LL, 1666411853LL);
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
