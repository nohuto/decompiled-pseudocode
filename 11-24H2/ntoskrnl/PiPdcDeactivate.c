/*
 * XREFs of PiPdcDeactivate @ 0x1409EF744
 * Callers:
 *     PnpRequestDeviceAction @ 0x14046C968 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x1409EF704 (PnpDeleteDeviceActionRequest.c)
 *     PnpCompleteDeviceEvent @ 0x1409EF9F0 (PnpCompleteDeviceEvent.c)
 * Callees:
 *     Pdcv2ActivationClientDeactivate @ 0x1409EF760 (Pdcv2ActivationClientDeactivate.c)
 */

__int64 __fastcall PiPdcDeactivate(void *a1)
{
  __int64 result; // rax

  if ( a1 )
    return Pdcv2ActivationClientDeactivate(a1);
  return result;
}
