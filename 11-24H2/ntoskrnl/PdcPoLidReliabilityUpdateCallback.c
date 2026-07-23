/*
 * XREFs of PdcPoLidReliabilityUpdateCallback @ 0x1407522F0
 * Callers:
 *     PopLidReliabilityInit @ 0x1405D1218 (PopLidReliabilityInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
    BYTE1(PopBsdPowerTransitionExtension) = BYTE1(PopBsdPowerTransitionExtension) & 0xEF | (16 * (a1 & 1));
    PopBsdHandleRequest(2u);
    return PopReleaseRwLock(&PopBsdUpdateLock);
  }
  return result;
}
