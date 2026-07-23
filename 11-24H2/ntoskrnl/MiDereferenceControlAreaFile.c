/*
 * XREFs of MiDereferenceControlAreaFile @ 0x14041F2B0
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
 *     MiCreateSectionCommon @ 0x140954024 (MiCreateSectionCommon.c)
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 *     MiMapImageForEnclaveUse @ 0x140A2AB18 (MiMapImageForEnclaveUse.c)
 *     MmGetFileNameForSection @ 0x140A7DBDC (MmGetFileNameForSection.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 *     MiLoadUserSymbols @ 0x140AAC348 (MiLoadUserSymbols.c)
 *     MiCallImageNotify @ 0x140ABD9B4 (MiCallImageNotify.c)
 *     MmCreateSpecialImageSection @ 0x140AE8400 (MmCreateSpecialImageSection.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
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
