/*
 * XREFs of MiDereferenceControlAreaFile @ 0x140432C40
 * Callers:
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     MiCreateSectionCommon @ 0x1408C2964 (MiCreateSectionCommon.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8E90 (NtAreMappedFilesTheSame.c)
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
 *     MmGetFileNameForSection @ 0x140A7F334 (MmGetFileNameForSection.c)
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 *     MiLoadUserSymbols @ 0x140AABED8 (MiLoadUserSymbols.c)
 *     MiCallImageNotify @ 0x140ABE8DC (MiCallImageNotify.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall MiDereferenceControlAreaFile(__int64 a1, signed __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  do
  {
    if ( (a2 ^ (unsigned __int64)v2) >= 0xF )
    {
      ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, 0x63536D4Du);
      return;
    }
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 + 1, v2);
  }
  while ( v3 != v2 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(a2 - 48, 0, 1u, 0x63536D4Du);
}
