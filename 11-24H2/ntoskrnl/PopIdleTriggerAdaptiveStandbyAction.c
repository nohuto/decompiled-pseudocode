/*
 * XREFs of PopIdleTriggerAdaptiveStandbyAction @ 0x14075C50C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140A23DB4 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B26F0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D63C4 (PopIdleArmAoAcDozeS4Timer.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x140759F40 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopIdleTriggerAdaptiveStandbyAction(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-8h]

  Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
  PopAcquirePolicyLock(v3, v2);
  v7 = 3LL;
  if ( a1 == 3 )
  {
    PopPowerAggregatorTriggerAdaptiveAction(3);
  }
  else
  {
    dword_140F0BDA0 = a1;
    if ( byte_140F0BDC0 )
    {
      PopIdleCancelAoAcDozeS4Timer(4u);
      PopIdleArmAoAcDozeS4Timer();
    }
  }
  return PopReleasePolicyLock(v7, v4, v5, v6, v9);
}
