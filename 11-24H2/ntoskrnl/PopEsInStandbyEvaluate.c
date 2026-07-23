/*
 * XREFs of PopEsInStandbyEvaluate @ 0x140A31120
 * Callers:
 *     PopEsInStandbyLowPowerEpochCallback @ 0x140A310F0 (PopEsInStandbyLowPowerEpochCallback.c)
 *     PopEsInStandbyAcDcCallback @ 0x140AC73D0 (PopEsInStandbyAcDcCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PopGetPowerSettingValue @ 0x14048C3EC (PopGetPowerSettingValue.c)
 *     PopTraceEsBgActivityPolicyUpdate @ 0x140756A38 (PopTraceEsBgActivityPolicyUpdate.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     PopEsQueueStateEvaluation @ 0x140A31258 (PopEsQueueStateEvaluation.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A313DC (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall PopEsInStandbyEvaluate(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int PowerSettingValue; // esi
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v6; // edi
  __int64 v7; // rdx
  struct _EX_RUNDOWN_REF *v8; // rsi
  int v9; // ebx
  int v10; // ecx
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+70h] [rbp+28h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+30h] BYREF
  int v15; // [rsp+80h] [rbp+38h] BYREF
  int v16; // [rsp+88h] [rbp+40h] BYREF

  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_ACDC_POWER_SOURCE, a2, 3, &v16, 4u, &v14);
  if ( PowerSettingValue >= 0 )
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_LOW_POWER_EPOCH, v2, 3, &v15, 4u, &v14);
    if ( PowerSettingValue >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = 1;
      v7 = PopEsWnfSubscriptionOpportunisticCs;
      v14 = 1;
      --CurrentThread->KernelApcDisable;
      v8 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(v4, v7);
      if ( v8 )
      {
        v9 = ExpWnfReadStateData((__int64)v8, v12, &v13, 1u, &v14);
        ExReleaseRundownProtection_0(v8 + 1);
        PowerSettingValue = 0;
        if ( v9 < 0 )
          PowerSettingValue = v9;
        KeLeaveCriticalRegion();
        if ( PowerSettingValue >= 0 && v14 )
        {
          if ( !v15 || v16 != 1 || v13 || (PopAggressiveStandbyAppliedActions & 1) != 0 )
            v6 = 0;
          v10 = PopEsBgActivityPolicy;
          if ( PopEsBgActivityPolicy != v6 )
          {
            PopEsBgActivityPolicy = v6;
            PopTraceEsBgActivityPolicyUpdate(v10);
            PopEsQueueStateEvaluation(0LL);
          }
        }
      }
      else
      {
        KeLeaveCriticalRegion();
        return (unsigned int)-1073741772;
      }
    }
  }
  return (unsigned int)PowerSettingValue;
}
