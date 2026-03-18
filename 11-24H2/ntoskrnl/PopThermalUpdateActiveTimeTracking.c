/*
 * XREFs of PopThermalUpdateActiveTimeTracking @ 0x140AA26A4
 * Callers:
 *     PopCoolingTelemetryWorker @ 0x1404275F4 (PopCoolingTelemetryWorker.c)
 *     PopCoolingSxTransition @ 0x140427860 (PopCoolingSxTransition.c)
 *     PopThermalSxEntry @ 0x1404D972C (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x1405D3F40 (PopThermalTelemetryWorker.c)
 *     PoSetThermalActiveCooling @ 0x14074BEF0 (PoSetThermalActiveCooling.c)
 *     PopOrphanCoolingExtension @ 0x14074C3B8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140754A10 (PopThermalZoneRemove.c)
 *     PopThermalWorker @ 0x140A40A30 (PopThermalWorker.c)
 *     PopDeactiveThermalRequest @ 0x140AB88D4 (PopDeactiveThermalRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdateActiveTimeTracking(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    a2 = (unsigned __int8)a2;
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      result = *(unsigned __int8 *)(a1 + 1);
      if ( (unsigned int)a2 >= (unsigned int)result )
        break;
      *(_QWORD *)(a1 + 8 * a2 + 360) += v3;
      a2 = (unsigned int)(a2 + 1);
    }
    *(_QWORD *)(a1 + 520) += v3;
    *(_QWORD *)(a1 + 16) = v2;
  }
  return result;
}
