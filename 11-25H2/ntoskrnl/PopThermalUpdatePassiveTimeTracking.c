/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x140A8AAD8
 * Callers:
 *     PopCoolingTelemetryWorker @ 0x140431084 (PopCoolingTelemetryWorker.c)
 *     PopCoolingSxTransition @ 0x1404312F0 (PopCoolingSxTransition.c)
 *     PopThermalSxEntry @ 0x1404DA77C (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x1405CF530 (PopThermalTelemetryWorker.c)
 *     PopOrphanCoolingExtension @ 0x1407402E8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140748940 (PopThermalZoneRemove.c)
 *     PopThermalWorker @ 0x140A3C300 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x140A8A9A0 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x140AB450C (PopDeactiveThermalRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdatePassiveTimeTracking(__int64 a1, unsigned __int8 a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    v2 = 21;
    do
    {
      if ( a2 >= PopThermalTrackingThresholds[v2 - 1] )
        break;
      --v2;
    }
    while ( v2 );
    v3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 24) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
