/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1404B41E4
 * Callers:
 *     PpmIdleRegisterDefaultStates @ 0x14073E1EC (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x140A640E0 (PpmUpdateIdleStates.c)
 *     PoInitializePrcb @ 0x140B4FD6C (PoInitializePrcb.c)
 * Callees:
 *     <none>
 */

bool PpmHvUseNativeAlgorithms()
{
  char v0; // dl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x400) == 0;
  return v0;
}
