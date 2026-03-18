/*
 * XREFs of FsRtlFreeFileLock @ 0x1403DF720
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeFileLock @ 0x1403DF750 (FsRtlUninitializeFileLock.c)
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}
