/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140AA5624
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404B4490 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x14075C7F8 (PopNetDisengageNetworkRefresh.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x14075C980 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-8h]

  v4 = a1;
  PopReleasePolicyLock(a1, a2, a3, a4, v10);
  if ( qword_140E67530 )
  {
    LOBYTE(v6) = v4;
    guard_dispatch_icall_no_overrides(v6, v5, v7, v8);
  }
  return PopAcquirePolicyLock(v6, v5);
}
