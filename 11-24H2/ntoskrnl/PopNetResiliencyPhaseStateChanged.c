/*
 * XREFs of PopNetResiliencyPhaseStateChanged @ 0x14075CA48
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 *     PopNetArmDsEvaluationTimer @ 0x140A98458 (PopNetArmDsEvaluationTimer.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
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
    PopQueueWorkItem((__int64)&unk_140F07988, DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v7, v6, v8, v9, v11);
}
