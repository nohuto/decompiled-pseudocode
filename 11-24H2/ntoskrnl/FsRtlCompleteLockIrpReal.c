/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x1403DBA48
 * Callers:
 *     FsRtlPrivateLock @ 0x140248460 (FsRtlPrivateLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14024D62C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1403DB600 (FsRtlProcessFileLock.c)
 *     FsRtlUninitializeFileLock @ 0x1403DF750 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404CA500 (FsRtlPrivateCancelFileLockIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

_DWORD *__fastcall FsRtlCompleteLockIrpReal(__int64 a1, __int64 a2, IRP *a3, NTSTATUS a4, _DWORD *a5, __int64 a6)
{
  int v6; // ebx
  _DWORD *result; // rax

  v6 = a4;
  if ( a1 )
  {
    if ( a6 )
      *(_QWORD *)(a6 + 120) = 0LL;
    a3->IoStatus.Status = a4;
    v6 = guard_dispatch_icall_no_overrides(a2, a3, a3, a1);
  }
  else
  {
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 1);
  }
  result = a5;
  *a5 = v6;
  return result;
}
