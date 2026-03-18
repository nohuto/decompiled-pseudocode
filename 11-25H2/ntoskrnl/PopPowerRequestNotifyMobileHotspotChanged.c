/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x14073DCEC
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x1405CB5A0 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14044E080 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A37004 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A4D1E4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestNotifyMobileHotspotChanged(__int64 a1)
{
  char v1; // bl

  v1 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  if ( byte_140F0D8B1 != v1 )
  {
    byte_140F0D8B1 = v1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, v1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  return PopReleaseRwLock(&PopPowerRequestLock);
}
