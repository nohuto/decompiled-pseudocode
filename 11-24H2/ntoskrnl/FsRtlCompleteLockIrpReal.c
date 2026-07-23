/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x1403CCD18
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14027DC3C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateLock @ 0x1402E26A0 (FsRtlPrivateLock.c)
 *     FsRtlUninitializeFileLock @ 0x1403BF440 (FsRtlUninitializeFileLock.c)
 *     FsRtlProcessFileLock @ 0x1403CC8D0 (FsRtlProcessFileLock.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404C3A20 (FsRtlPrivateCancelFileLockIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
    v6 = guard_dispatch_icall_no_overrides(a2, a3);
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
