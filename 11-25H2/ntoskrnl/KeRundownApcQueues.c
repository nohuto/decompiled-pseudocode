/*
 * XREFs of KeRundownApcQueues @ 0x1408F56FC
 * Callers:
 *     sub_140689930 @ 0x140689930 (sub_140689930.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     KiFlushQueueApc @ 0x1402047F0 (KiFlushQueueApc.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KiAcquireReleaseThreadLock @ 0x1404636FC (KiAcquireReleaseThreadLock.c)
 *     KeForceResumeThread @ 0x14047D350 (KeForceResumeThread.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  _QWORD *result; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1);
  KeForceResumeThread(a1);
  KeLeaveCriticalRegionThread(a1);
  v2 = KiFlushQueueApc(a1, 1);
  v3 = v2;
  if ( v2 )
  {
    v5 = v2;
    do
    {
      v6 = v5 - 2;
      v5 = (_QWORD *)*v5;
      if ( v6[5] )
        guard_dispatch_icall_no_overrides(v6);
      else
        ExFreePoolWithTag(v6, 0);
    }
    while ( v5 != v3 );
  }
  result = KiFlushQueueApc(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
