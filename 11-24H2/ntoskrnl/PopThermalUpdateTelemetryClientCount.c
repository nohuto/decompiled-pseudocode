/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1405D4014
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x14074B078 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x14074B644 (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x14074B888 (PopOrphanPowerLimitExtension.c)
 *     PopAssociateThermalRequest @ 0x14074C028 (PopAssociateThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14074C3B8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneAdd @ 0x1407548C0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x140754A10 (PopThermalZoneRemove.c)
 *     PopDeactiveThermalRequest @ 0x140AB88D4 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive(&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v5[0] = 0LL;
      v5[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v5);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer, 0LL, v2, v3);
  }
  return PopReleaseRwLock((signed __int64 *)&PopThermalTelemetryLock);
}
