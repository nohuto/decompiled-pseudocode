/*
 * XREFs of PoUnregisterSystemState @ 0x1404AA220
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140A31CC0 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
