/*
 * XREFs of PopPowerAggregatorTriggerAdaptiveAction @ 0x140758390
 * Callers:
 *     PopAdaptiveStandbyActionWorker @ 0x14075F2D0 (PopAdaptiveStandbyActionWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409A2738 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorTriggerAdaptiveAction(int a1)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  __int64 result; // rax
  _DWORD v7[4]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v9; // [rsp+48h] [rbp-18h]
  __int64 v10; // [rsp+58h] [rbp-8h]

  v10 = 0LL;
  v8[0] = 17;
  v9 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F08C70 != 1 )
    goto LABEL_14;
  if ( byte_140F08D8C )
  {
    v2 = a1 - 1;
    if ( !v2 )
    {
LABEL_11:
      v8[0] = 13;
      goto LABEL_14;
    }
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
LABEL_9:
        PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
        goto LABEL_14;
      }
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 || !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_14;
        goto LABEL_9;
      }
      if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_11;
    }
    else
    {
      v8[0] = 14;
    }
  }
  else
  {
    dword_140F08D90 = a1;
  }
LABEL_14:
  result = PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( v8[0] != 17 )
  {
    v7[2] = 0;
    v8[1] = 128;
    v7[0] = 3;
    v7[1] = -2147483612;
    return PopExecutePowerAction(v8, 0, v7, 5, 1u);
  }
  return result;
}
