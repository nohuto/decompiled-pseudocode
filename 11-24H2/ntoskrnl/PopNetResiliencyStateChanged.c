/*
 * XREFs of PopNetResiliencyStateChanged @ 0x140AC9288
 * Callers:
 *     PdcPoNetworkResiliency @ 0x14075D110 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 *     PopNetUpdateDsAccounting @ 0x1404C2150 (PopNetUpdateDsAccounting.c)
 *     Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline @ 0x1405D82A0 (Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline.c)
 *     PopNetArmDsEvaluationTimer @ 0x140A98458 (PopNetArmDsEvaluationTimer.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
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
      PopQueueWorkItem((__int64)&unk_140F07988, DelayedWorkQueue);
    }
  }
  return PopReleasePolicyLock(v4, v3, v5, v6, v8);
}
