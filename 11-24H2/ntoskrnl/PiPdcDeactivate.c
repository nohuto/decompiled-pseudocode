/*
 * XREFs of PiPdcDeactivate @ 0x1409ED014
 * Callers:
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x1409ECFD4 (PnpDeleteDeviceActionRequest.c)
 *     PnpCompleteDeviceEvent @ 0x1409ED2C0 (PnpCompleteDeviceEvent.c)
 * Callees:
 *     Pdcv2ActivationClientDeactivate @ 0x1409ED030 (Pdcv2ActivationClientDeactivate.c)
 */

__int64 __fastcall PiPdcDeactivate(void *a1)
{
  __int64 result; // rax

  if ( a1 )
    return Pdcv2ActivationClientDeactivate(a1);
  return result;
}
