/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x140AC1E1C
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D7ED0 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x14074C4D0 (PopPreCriticalBatteryNotify.c)
 *     PopNotifyLidStateChange @ 0x140AA62C8 (PopNotifyLidStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline @ 0x1405D2DB0 (Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140964338 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  unsigned int v2; // ebx
  bool v3; // zf
  int v5; // [rsp+38h] [rbp+10h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  v5 = 0;
  if ( (_DWORD)xmmword_140F08290 == 1 )
  {
    v2 = 3;
    if ( (unsigned int)Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !BYTE8(xmmword_140F082A0) )
        goto LABEL_16;
      if ( a1 != 4 )
      {
LABEL_10:
        v2 = 2;
        goto LABEL_16;
      }
      if ( dword_140F083A8 == 8 )
      {
LABEL_16:
        PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v2, &v5, 0, a1);
        return PopReleaseRwLock(&PopPowerAggregatorLock);
      }
      v3 = dword_140F083A8 == 2;
    }
    else
    {
      if ( a1 == 4 )
        goto LABEL_16;
      v3 = BYTE8(xmmword_140F082A0) == 0;
    }
    if ( !v3 )
      goto LABEL_10;
    goto LABEL_16;
  }
  if ( (_DWORD)xmmword_140F08290 == 4 && BYTE8(xmmword_140F082A0) && ((a1 - 43) & 0xFFFFFFFC) == 0 && a1 != 44 )
  {
    v2 = 10;
    goto LABEL_16;
  }
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
