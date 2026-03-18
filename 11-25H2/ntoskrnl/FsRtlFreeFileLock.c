/*
 * XREFs of FsRtlFreeFileLock @ 0x1403D2290
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeFileLock @ 0x1403D22C0 (FsRtlUninitializeFileLock.c)
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}
