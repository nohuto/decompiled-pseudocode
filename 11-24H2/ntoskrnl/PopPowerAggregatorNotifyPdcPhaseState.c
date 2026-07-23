/*
 * XREFs of PopPowerAggregatorNotifyPdcPhaseState @ 0x140757DB4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406F33DC (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409A2738 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

void __fastcall PopPowerAggregatorNotifyPdcPhaseState(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-40h]
  _DWORD v8[4]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v9[2]; // [rsp+40h] [rbp-20h] BYREF

  if ( (_DWORD)a1 != 2 )
    return;
  v2 = a2;
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[0]) = 17;
  PopAcquirePolicyLock(a1, a2);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  if ( !v2 )
  {
    byte_140F08D8C = 0;
    goto LABEL_16;
  }
  if ( (_DWORD)xmmword_140F08C70 == 1 )
  {
    PoModernStandbyActionInProgress = 1;
    byte_140F08D8C = 1;
    if ( dword_140F08D90 != 1 )
    {
      if ( dword_140F08D90 == 2 )
      {
        LODWORD(v9[0]) = 14;
        goto LABEL_13;
      }
      if ( dword_140F08D90 == 3 )
        goto LABEL_10;
      if ( dword_140F08D90 != 4 )
      {
        if ( dword_140F08D90 != 5
          || !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        {
          goto LABEL_13;
        }
LABEL_10:
        PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
LABEL_13:
        dword_140F08D90 = 0;
        goto LABEL_16;
      }
      if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_13;
    }
    LODWORD(v9[0]) = 13;
    goto LABEL_13;
  }
LABEL_16:
  PopPowerAggregatorEvaluateDozeTimers();
  PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( LODWORD(v9[0]) != 17 )
  {
    v8[2] = 0;
    DWORD1(v9[0]) = 128;
    v8[0] = 3;
    v8[1] = -2147483612;
    PopExecutePowerAction(v9, 0, v8, 5, 1u);
  }
  PopReleasePolicyLock(v4, v3, v5, v6, v7);
}
