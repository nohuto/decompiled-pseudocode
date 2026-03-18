/*
 * XREFs of PoUnregisterSystemState @ 0x1404AF830
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140A3C4E0 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
