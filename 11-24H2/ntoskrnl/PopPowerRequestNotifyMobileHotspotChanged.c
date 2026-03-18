/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x140749D6C
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x1405CFCA0 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14044DBC4 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A3BCEC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A50600 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestNotifyMobileHotspotChanged(__int64 a1)
{
  char v1; // bl

  v1 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  if ( byte_140F0E081 != v1 )
  {
    byte_140F0E081 = v1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, v1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  return PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
}
