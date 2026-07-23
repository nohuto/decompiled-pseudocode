/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140AA0694
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404AECD0 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x14075B798 (PopNetDisengageNetworkRefresh.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x14075B920 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-8h]

  v4 = a1;
  PopReleasePolicyLock(a1, a2, a3, a4, v8);
  if ( qword_140E676A0 )
  {
    LOBYTE(v6) = v4;
    guard_dispatch_icall_no_overrides(v6, v5);
  }
  return PopAcquirePolicyLock(v6, v5);
}
