/*
 * XREFs of KsGateTurnInputOff @ 0x140003EE0
 * Callers:
 *     USBType1BuildIsochUrbRequest @ 0x140002940 (USBType1BuildIsochUrbRequest.c)
 *     USBCaptureStateChangePin @ 0x140004850 (USBCaptureStateChangePin.c)
 *     USBMidiOutCreateBulkUrbs @ 0x140005A10 (USBMidiOutCreateBulkUrbs.c)
 *     USBCaptureCreatePin @ 0x14003F2C0 (USBCaptureCreatePin.c)
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
