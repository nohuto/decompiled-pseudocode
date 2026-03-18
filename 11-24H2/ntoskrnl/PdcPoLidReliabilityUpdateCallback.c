/*
 * XREFs of PdcPoLidReliabilityUpdateCallback @ 0x140753FD0
 * Callers:
 *     PopLidReliabilityInit @ 0x1405D3AF8 (PopLidReliabilityInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409BC77C (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoLidReliabilityUpdateCallback(char a1)
{
  __int64 result; // rax
  BOOL v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 != 0;
  _InterlockedExchange(&PopLidStateIsReliable, v3);
  result = PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_RELIABILITY, 4LL, &v3);
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
    BYTE1(PopBsdPowerTransitionExtension) = BYTE1(PopBsdPowerTransitionExtension) & 0xEF | (16 * (a1 & 1));
    PopBsdHandleRequest(2u);
    return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
  }
  return result;
}
