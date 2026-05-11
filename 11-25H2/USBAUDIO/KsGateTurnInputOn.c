/*
 * XREFs of KsGateTurnInputOn @ 0x1400041D4
 * Callers:
 *     USBType1AsyncEndpointPollCallback @ 0x140003F10 (USBType1AsyncEndpointPollCallback.c)
 *     USBMidiOutCompleteCallback @ 0x14000EA80 (USBMidiOutCompleteCallback.c)
 * Callees:
 *     <none>
 */

void __stdcall KsGateTurnInputOn(PKSGATE Gate)
{
  while ( Gate && _InterlockedIncrement(&Gate->Count) == 1 )
    Gate = Gate->NextGate;
}
