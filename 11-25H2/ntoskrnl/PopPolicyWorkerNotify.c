/*
 * XREFs of PopPolicyWorkerNotify @ 0x140A50D90
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PopPolicyWorkerNotify()
{
  unsigned int v0; // ebx
  unsigned int v2; // eax
  __int64 *v3; // rcx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v0 = _InterlockedExchange(&PopNotifyEvents, 0);
    if ( !v0 )
      break;
    while ( v0 )
    {
      _BitScanForward(&v2, v0);
      v0 &= ~(1 << v2);
      v3 = &PopNotifyWork[2 * v2];
      if ( *v3 )
      {
        guard_dispatch_icall_no_overrides(*((unsigned int *)v3 + 2));
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          __fastfail(0x20u);
      }
    }
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}
