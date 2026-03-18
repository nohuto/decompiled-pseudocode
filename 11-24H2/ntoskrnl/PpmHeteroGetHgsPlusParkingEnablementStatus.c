/*
 * XREFs of PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1404A8C20
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A2A138 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

bool PpmHeteroGetHgsPlusParkingEnablementStatus()
{
  char v0; // cl

  v0 = 0;
  if ( PopHeteroSystem == 5 )
    return PpmHeteroHgsThreadEnabled != 0;
  return v0;
}
