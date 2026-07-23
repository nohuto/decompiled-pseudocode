/*
 * XREFs of FsRtlInsertPerFileContext @ 0x14057D330
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInsertPerFileContextWithReserve @ 0x140450C00 (FsRtlInsertPerFileContextWithReserve.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileContext(PVOID *PerFileContextPointer, PFSRTL_PER_FILE_CONTEXT Ptr)
{
  return FsRtlInsertPerFileContextWithReserve((volatile signed __int64 *)PerFileContextPointer, Ptr, 0);
}
