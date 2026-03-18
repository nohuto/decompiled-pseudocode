/*
 * XREFs of MiEndingOffset @ 0x140314E58
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x14023A108 (MiFinishMdlForMappedFileFault.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x140314C44 (MiCanFileBeTruncatedInternal.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
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
