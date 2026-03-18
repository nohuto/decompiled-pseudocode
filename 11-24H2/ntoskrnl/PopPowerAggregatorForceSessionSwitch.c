/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x140AC7988
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D6D70 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x140758590 (PopPreCriticalBatteryNotify.c)
 *     PopNotifyLidStateChange @ 0x140AAB888 (PopNotifyLidStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline @ 0x1405D78D0 (Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  unsigned int v2; // ebx
  bool v3; // zf
  int v5; // [rsp+38h] [rbp+10h] BYREF

  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  v5 = 0;
  if ( (_DWORD)xmmword_140F08910 == 1 )
  {
    v2 = 3;
    if ( (unsigned int)Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !BYTE8(xmmword_140F08920) )
        goto LABEL_16;
      if ( a1 != 4 )
      {
LABEL_10:
        v2 = 2;
        goto LABEL_16;
      }
      if ( dword_140F08A28 == 8 )
      {
LABEL_16:
        PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v2, &v5, 0, a1);
        return PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
      }
      v3 = dword_140F08A28 == 2;
    }
    else
    {
      if ( a1 == 4 )
        goto LABEL_16;
      v3 = BYTE8(xmmword_140F08920) == 0;
    }
    if ( !v3 )
      goto LABEL_10;
    goto LABEL_16;
  }
  if ( (_DWORD)xmmword_140F08910 == 4 && BYTE8(xmmword_140F08920) && ((a1 - 43) & 0xFFFFFFFC) == 0 && a1 != 44 )
  {
    v2 = 10;
    goto LABEL_16;
  }
  return PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
}
