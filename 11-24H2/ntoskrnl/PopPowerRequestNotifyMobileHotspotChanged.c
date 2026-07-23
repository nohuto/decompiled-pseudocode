/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x14074809C
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x1405CD410 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x140444AC4 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A314CC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A473B0 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestNotifyMobileHotspotChanged(__int64 a1)
{
  char v1; // bl

  v1 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  if ( byte_140F0E221 != v1 )
  {
    byte_140F0E221 = v1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, v1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  return PopReleaseRwLock(&PopPowerRequestLock);
}
