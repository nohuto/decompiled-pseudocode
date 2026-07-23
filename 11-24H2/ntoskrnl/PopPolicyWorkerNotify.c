/*
 * XREFs of PopPolicyWorkerNotify @ 0x140A4C540
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPolicyWorkerNotify(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // eax
  __int64 *v5; // rcx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = _InterlockedExchange(&PopNotifyEvents, 0);
    if ( !v2 )
      break;
    while ( v2 )
    {
      _BitScanForward(&v4, v2);
      v2 &= ~(1 << v4);
      v5 = &PopNotifyWork[2 * v4];
      if ( *v5 )
      {
        guard_dispatch_icall_no_overrides(*((unsigned int *)v5 + 2), a2);
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          __fastfail(0x20u);
      }
    }
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}
