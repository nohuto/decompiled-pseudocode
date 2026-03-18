/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x14048BE20
 * Callers:
 *     FsRtlPrivateLock @ 0x140373FB0 (FsRtlPrivateLock.c)
 *     FsRtlProcessFileLock @ 0x140376870 (FsRtlProcessFileLock.c)
 *     FsRtlUninitializeFileLock @ 0x1403D22C0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14045B2D4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404CA600 (FsRtlPrivateCancelFileLockIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS *__fastcall FsRtlCompleteLockIrpReal(__int64 a1, __int64 a2, IRP *a3, NTSTATUS a4, NTSTATUS *a5, __int64 a6)
{
  NTSTATUS v6; // ebx
  NTSTATUS *result; // rax

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
