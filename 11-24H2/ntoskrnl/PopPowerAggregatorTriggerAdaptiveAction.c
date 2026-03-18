/*
 * XREFs of PopPowerAggregatorTriggerAdaptiveAction @ 0x140759F40
 * Callers:
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x14075C50C (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopAdaptiveStandbyActionWorker @ 0x1407602D0 (PopAdaptiveStandbyActionWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorTriggerAdaptiveAction(int a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  __int64 result; // rax
  _DWORD v9[4]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-20h] BYREF

  memset(v10, 0, sizeof(v10));
  IsEnabledDeviceUsageNoInline = Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
  v3 = 0;
  if ( IsEnabledDeviceUsageNoInline )
    v3 = 17;
  LODWORD(v10[0]) = v3;
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F08910 != 1 )
    goto LABEL_18;
  if ( !byte_140F08A2C )
  {
    dword_140F08A30 = a1;
    goto LABEL_18;
  }
  v4 = a1 - 1;
  if ( !v4 )
    goto LABEL_13;
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_15:
    if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
      LODWORD(v10[0]) = 14;
    goto LABEL_18;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_11:
    PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
    goto LABEL_18;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_18;
LABEL_13:
    if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
    {
      LODWORD(v10[0]) = 13;
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  if ( v7 == 1 && (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_11;
LABEL_18:
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  result = Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( LODWORD(v10[0]) != 17 )
    {
      v9[2] = 0;
      DWORD1(v10[0]) = 128;
      v9[0] = 3;
      v9[1] = -2147483612;
      return PopExecutePowerAction(v10, 0, v9, 5, 1u);
    }
  }
  return result;
}
