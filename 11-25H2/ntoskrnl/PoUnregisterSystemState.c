/*
 * XREFs of PoUnregisterSystemState @ 0x1404AE990
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140A35B50 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
