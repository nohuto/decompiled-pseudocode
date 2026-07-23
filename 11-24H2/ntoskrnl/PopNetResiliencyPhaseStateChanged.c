/*
 * XREFs of PopNetResiliencyPhaseStateChanged @ 0x14075B9E8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     PopNetArmDsEvaluationTimer @ 0x140A94C14 (PopNetArmDsEvaluationTimer.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetResiliencyPhaseStateChanged(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-8h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  if ( v2 )
  {
    PopNetResiliencyEngaged = 1;
    PopNetArmDsEvaluationTimer(v3, (unsigned int)_InterlockedExchange(&PopNetGracePeriodState, 1));
  }
  else
  {
    PopNetResiliencyEngaged = 0;
    KeCancelTimer2((__int64)&PopNetEvaluationTimer, 0LL, v4, v5);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&unk_140F07C88, DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v7, v6, v8, v9, v11);
}
