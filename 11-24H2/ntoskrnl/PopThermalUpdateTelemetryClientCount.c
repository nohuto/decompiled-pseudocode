/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1405D17D4
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x1407493A8 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x140749974 (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x140749BB8 (PopOrphanPowerLimitExtension.c)
 *     PopAssociateThermalRequest @ 0x14074A358 (PopAssociateThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14074A6E8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneAdd @ 0x140752BE0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x140752D30 (PopThermalZoneRemove.c)
 *     PopDeactiveThermalRequest @ 0x140AB2D98 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v5[0] = 0LL;
      v5[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, (LARGE_INTEGER)-864000000000LL, 0LL, (__int64)v5);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer, 0LL, v2, v3);
  }
  return PopReleaseRwLock(&PopThermalTelemetryLock);
}
