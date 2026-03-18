/*
 * XREFs of PdcPoLidReliabilityUpdateCallback @ 0x140747EE0
 * Callers:
 *     PopLidReliabilityInit @ 0x1405CF0EC (PopLidReliabilityInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409649CC (PopSetPowerSettingValueAcDc.c)
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
