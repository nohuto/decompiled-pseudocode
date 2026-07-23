/*
 * XREFs of MiEndingOffset @ 0x1403F2438
 * Callers:
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403F1ED8 (MiFinishMdlForMappedFileFault.c)
 *     MiCanFileBeTruncatedInternal @ 0x1403F2224 (MiCanFileBeTruncatedInternal.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEndingOffset(_DWORD *a1)
{
  unsigned __int64 v1; // rdx

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x20) != 0 )
    v1 = ((unsigned int)a1[9] + (unsigned __int64)(unsigned int)a1[10]) << 9;
  else
    v1 = ((unsigned int)a1[10] + ((unsigned int)a1[9] | ((unsigned __int64)(a1[8] & 0xFFC0) << 26))) << 12;
  return v1 + ((unsigned __int64)(unsigned int)a1[8] >> 20);
}
