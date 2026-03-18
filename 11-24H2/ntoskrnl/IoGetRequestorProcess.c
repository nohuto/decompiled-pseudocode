/*
 * XREFs of IoGetRequestorProcess @ 0x1403DBA00
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14024D62C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1403DB600 (FsRtlProcessFileLock.c)
 *     FsRtlCheckLockForWriteAccess @ 0x1403DB780 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlCheckLockForReadAccess @ 0x1403DB820 (FsRtlCheckLockForReadAccess.c)
 *     IopDoesCompletionNeedsApc @ 0x1403DC510 (IopDoesCompletionNeedsApc.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoGetRequestorProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
    return (PEPROCESS)(Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL);
  if ( !Thread )
    return 0LL;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( !ApcEnvironment )
    return Thread->Process;
  if ( ApcEnvironment == 1 )
    return Thread->ApcState.Process;
  else
    return 0LL;
}
