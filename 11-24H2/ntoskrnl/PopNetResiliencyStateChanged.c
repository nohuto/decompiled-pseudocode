/*
 * XREFs of PopNetResiliencyStateChanged @ 0x140AC71C0
 * Callers:
 *     PdcPoNetworkResiliency @ 0x14075C0B0 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     PopNetUpdateDsAccounting @ 0x1404BD740 (PopNetUpdateDsAccounting.c)
 *     Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline @ 0x1405D57C8 (Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline.c)
 *     PopNetArmDsEvaluationTimer @ 0x140A94C14 (PopNetArmDsEvaluationTimer.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetResiliencyStateChanged(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-8h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  PopNetUpdateDsAccounting(v2);
  if ( !(unsigned int)Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v2 )
    {
      PopNetResiliencyEngaged = 1;
      _InterlockedExchange(&PopNetGracePeriodState, 1);
      PopNetArmDsEvaluationTimer();
    }
    else
    {
      PopNetResiliencyEngaged = 0;
      KeCancelTimer2((__int64)&PopNetEvaluationTimer, 0LL, v5, v6);
      _InterlockedExchange(&PopNetGracePeriodState, 0);
      PopQueueWorkItem((__int64)&unk_140F07C88, DelayedWorkQueue);
    }
  }
  return PopReleasePolicyLock(v4, v3, v5, v6, v8);
}
