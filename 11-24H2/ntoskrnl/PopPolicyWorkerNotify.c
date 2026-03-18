/*
 * XREFs of PopPolicyWorkerNotify @ 0x140A545F0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPolicyWorkerNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // eax
  __int64 *v7; // rcx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v4 = _InterlockedExchange(&PopNotifyEvents, 0);
    if ( !v4 )
      break;
    while ( v4 )
    {
      _BitScanForward(&v6, v4);
      v4 &= ~(1 << v6);
      v7 = &PopNotifyWork[2 * v6];
      if ( *v7 )
      {
        guard_dispatch_icall_no_overrides(*((unsigned int *)v7 + 2), a2, a3, a4);
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          __fastfail(0x20u);
      }
    }
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}
