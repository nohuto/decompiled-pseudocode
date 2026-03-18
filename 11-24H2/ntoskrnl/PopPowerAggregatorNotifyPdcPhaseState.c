/*
 * XREFs of PopPowerAggregatorNotifyPdcPhaseState @ 0x140759914
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406F53DC (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

void __fastcall PopPowerAggregatorNotifyPdcPhaseState(int a1, char a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+20h] [rbp-40h]
  _DWORD v13[4]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF

  if ( a1 != 2 )
    return;
  memset(v14, 0, sizeof(v14));
  IsEnabledDeviceUsageNoInline = Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
  v5 = 0LL;
  if ( IsEnabledDeviceUsageNoInline )
    v5 = 17LL;
  LODWORD(v14[0]) = v5;
  PopAcquirePolicyLock(v5, v4);
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  if ( !a2 )
  {
    byte_140F08A2C = 0;
    goto LABEL_21;
  }
  if ( (_DWORD)xmmword_140F08910 == 1 )
  {
    PoModernStandbyActionInProgress = 1;
    byte_140F08A2C = 1;
    if ( dword_140F08A30 != 1 )
    {
      if ( dword_140F08A30 == 2 )
        goto LABEL_16;
      if ( dword_140F08A30 == 3 )
      {
LABEL_12:
        PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
LABEL_19:
        dword_140F08A30 = 0;
        goto LABEL_21;
      }
      if ( dword_140F08A30 != 4 )
      {
        if ( dword_140F08A30 != 5
          || !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        {
          goto LABEL_19;
        }
        goto LABEL_12;
      }
      if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_19;
    }
    if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
    {
      LODWORD(v14[0]) = 13;
      goto LABEL_19;
    }
LABEL_16:
    v6 = Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
    v7 = v14[0];
    if ( v6 )
      v7 = 14;
    LODWORD(v14[0]) = v7;
    goto LABEL_19;
  }
LABEL_21:
  PopPowerAggregatorEvaluateDozeTimers();
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( LODWORD(v14[0]) != 17 )
    {
      v13[2] = 0;
      DWORD1(v14[0]) = 128;
      v13[0] = 3;
      v13[1] = -2147483612;
      PopExecutePowerAction(v14, 0, v13, 5, 1u);
    }
  }
  PopReleasePolicyLock(v9, v8, v10, v11, v12);
}
