/*
 * XREFs of KeRundownApcQueues @ 0x1408FDCCC
 * Callers:
 *     sub_140695E50 @ 0x140695E50 (sub_140695E50.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiFlushQueueApc @ 0x14032DD00 (KiFlushQueueApc.c)
 *     KiAcquireReleaseThreadLock @ 0x1404584D4 (KiAcquireReleaseThreadLock.c)
 *     KeForceResumeThread @ 0x1404752D0 (KeForceResumeThread.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rsi
  _QWORD *result; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1);
  KeForceResumeThread(a1);
  KeLeaveCriticalRegionThread();
  v2 = KiFlushQueueApc(a1, 1);
  v4 = v2;
  if ( v2 )
  {
    v6 = v2;
    do
    {
      v7 = v6 - 2;
      v6 = (_QWORD *)*v6;
      if ( v7[5] )
        guard_dispatch_icall_no_overrides(v7, v3);
      else
        ExFreePoolWithTag(v7, 0);
    }
    while ( v6 != v4 );
  }
  result = KiFlushQueueApc(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
