/*
 * XREFs of FsRtlInsertPerFileContext @ 0x14057FEF0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInsertPerFileContextWithReserve @ 0x14045B800 (FsRtlInsertPerFileContextWithReserve.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileContext(PVOID *PerFileContextPointer, PFSRTL_PER_FILE_CONTEXT Ptr)
{
  return FsRtlInsertPerFileContextWithReserve((volatile signed __int64 *)PerFileContextPointer, Ptr, 0);
}
