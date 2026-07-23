/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1404AE364
 * Callers:
 *     PpmIdleRegisterDefaultStates @ 0x1407485F0 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x140A5FB30 (PpmUpdateIdleStates.c)
 *     PoInitializePrcb @ 0x140B61F64 (PoInitializePrcb.c)
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
