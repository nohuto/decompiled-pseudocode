/*
 * XREFs of KsGateTurnInputOff @ 0x140003CB0
 * Callers:
 *     USBType1BuildIsochUrbRequest @ 0x140002710 (USBType1BuildIsochUrbRequest.c)
 *     USBCaptureStateChangePin @ 0x140004620 (USBCaptureStateChangePin.c)
 *     USBMidiOutCreateBulkUrbs @ 0x1400092AC (USBMidiOutCreateBulkUrbs.c)
 *     USBCaptureCreatePin @ 0x14003EB00 (USBCaptureCreatePin.c)
 * Callees:
 *     <none>
 */

void __stdcall KsGateTurnInputOff(PKSGATE Gate)
{
  for ( ; Gate; Gate = Gate->NextGate )
  {
    if ( _InterlockedExchangeAdd(&Gate->Count, 0xFFFFFFFF) != 1 )
      break;
  }
}
