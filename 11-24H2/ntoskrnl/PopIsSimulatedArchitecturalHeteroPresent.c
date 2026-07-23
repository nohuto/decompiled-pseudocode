/*
 * XREFs of PopIsSimulatedArchitecturalHeteroPresent @ 0x140AB519C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     PopHeteroCapabilityDeepCopy @ 0x140A72C3C (PopHeteroCapabilityDeepCopy.c)
 */

char __fastcall PopIsSimulatedArchitecturalHeteroPresent(__int64 a1)
{
  int *v1; // rdx
  char v2; // bl
  int v4; // esi

  v1 = (int *)PpmHeteroCapabilitySimulation;
  v2 = 0;
  if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 1) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(PpmHeteroCapabilitySimulation + 4);
    if ( (unsigned int)PopHeteroCapabilityDeepCopy(a1, v1) )
      return 1;
    else
      *(_DWORD *)(a1 + 4) = v4;
  }
  return v2;
}
