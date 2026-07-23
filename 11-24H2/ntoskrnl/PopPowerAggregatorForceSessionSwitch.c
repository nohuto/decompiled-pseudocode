/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x140AC5414
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D01C0 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x140756A10 (PopPreCriticalBatteryNotify.c)
 *     PopNotifyLidStateChange @ 0x140AA6AB8 (PopNotifyLidStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409A2738 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  v4 = 0;
  if ( (_DWORD)xmmword_140F08C70 == 1 )
  {
    v2 = 3LL;
    if ( BYTE8(xmmword_140F08C80) && (a1 != 4 || dword_140F08D88 != 8 && dword_140F08D88 != 2) )
      v2 = 2LL;
    goto LABEL_12;
  }
  if ( (_DWORD)xmmword_140F08C70 == 4 && BYTE8(xmmword_140F08C80) && ((a1 - 43) & 0xFFFFFFFC) == 0 && a1 != 44 )
  {
    v2 = 10LL;
LABEL_12:
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v2, &v4, 0, a1);
  }
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
