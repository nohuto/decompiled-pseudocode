/*
 * XREFs of PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1404A7ED4
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A2061C (PopInitializeHeteroProcessors.c)
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
