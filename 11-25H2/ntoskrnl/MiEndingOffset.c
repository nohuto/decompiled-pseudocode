/*
 * XREFs of MiEndingOffset @ 0x14034EDF8
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiCanFileBeTruncatedInternal @ 0x14034EBE4 (MiCanFileBeTruncatedInternal.c)
 *     MiFinishMdlForMappedFileFault @ 0x14034EE44 (MiFinishMdlForMappedFileFault.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
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
