/*
 * XREFs of KsGateTurnInputOn @ 0x140003FA4
 * Callers:
 *     USBType1AsyncEndpointPollCallback @ 0x140003CE0 (USBType1AsyncEndpointPollCallback.c)
 *     USBMidiOutCompleteCallback @ 0x14000E170 (USBMidiOutCompleteCallback.c)
 * Callees:
 *     <none>
 */

void __stdcall KsGateTurnInputOn(PKSGATE Gate)
{
  while ( Gate && _InterlockedIncrement(&Gate->Count) == 1 )
    Gate = Gate->NextGate;
}
