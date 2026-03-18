/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1404B3B14
 * Callers:
 *     PpmIdleRegisterDefaultStates @ 0x14074A2C0 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x140A66D50 (PpmUpdateIdleStates.c)
 *     PoInitializePrcb @ 0x140B5FE98 (PoInitializePrcb.c)
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
