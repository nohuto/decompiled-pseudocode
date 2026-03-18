/*
 * XREFs of MiDereferenceControlAreaFile @ 0x14042C500
 * Callers:
 *     MiAllowImageMap @ 0x1408694B4 (MiAllowImageMap.c)
 *     MiMapImageForEnclaveUse @ 0x1408DB088 (MiMapImageForEnclaveUse.c)
 *     MiFillMapFileInfo @ 0x1408E3144 (MiFillMapFileInfo.c)
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
 *     MiCreateSectionCommon @ 0x14096B594 (MiCreateSectionCommon.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 *     MmGetFileNameForSection @ 0x140A830BC (MmGetFileNameForSection.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 *     MiLoadUserSymbols @ 0x140AB13D8 (MiLoadUserSymbols.c)
 *     MiCallImageNotify @ 0x140AC26CC (MiCallImageNotify.c)
 *     MmCreateSpecialImageSection @ 0x140AE6B20 (MmCreateSpecialImageSection.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
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
