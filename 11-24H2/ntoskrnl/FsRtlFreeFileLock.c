/*
 * XREFs of FsRtlFreeFileLock @ 0x1403BF410
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeFileLock @ 0x1403BF440 (FsRtlUninitializeFileLock.c)
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}
