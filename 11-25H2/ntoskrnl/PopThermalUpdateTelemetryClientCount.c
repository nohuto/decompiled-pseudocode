/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1405CF604
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x14073EFA8 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x14073F574 (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x14073F7B8 (PopOrphanPowerLimitExtension.c)
 *     PopAssociateThermalRequest @ 0x14073FF58 (PopAssociateThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407402E8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneAdd @ 0x1407487F0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x140748940 (PopThermalZoneRemove.c)
 *     PopDeactiveThermalRequest @ 0x140AB450C (PopDeactiveThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
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
