/*
 * XREFs of KeRundownApcQueues @ 0x1408A7A74
 * Callers:
 *     sub_140694D80 @ 0x140694D80 (sub_140694D80.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     KiFlushQueueApc @ 0x140206720 (KiFlushQueueApc.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KiAcquireReleaseThreadLock @ 0x140462EC4 (KiAcquireReleaseThreadLock.c)
 *     KeForceResumeThread @ 0x140479A40 (KeForceResumeThread.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rsi
  _QWORD *result; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1);
  KeForceResumeThread(a1);
  KeLeaveCriticalRegionThread();
  v2 = KiFlushQueueApc(a1, 1);
  v6 = v2;
  if ( v2 )
  {
    v8 = v2;
    do
    {
      v9 = v8 - 2;
      v8 = (_QWORD *)*v8;
      if ( v9[5] )
        guard_dispatch_icall_no_overrides(v9, v3, v4, v5);
      else
        ExFreePoolWithTag(v9, 0);
    }
    while ( v8 != v6 );
  }
  result = KiFlushQueueApc(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
