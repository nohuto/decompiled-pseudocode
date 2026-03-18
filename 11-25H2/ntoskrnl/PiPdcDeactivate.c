/*
 * XREFs of PiPdcDeactivate @ 0x14096DDBC
 * Callers:
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x14096DC14 (PnpDeleteDeviceActionRequest.c)
 *     PnpCompleteDeviceEvent @ 0x14096DC54 (PnpCompleteDeviceEvent.c)
 * Callees:
 *     Pdcv2ActivationClientDeactivate @ 0x14096DDD8 (Pdcv2ActivationClientDeactivate.c)
 */

__int64 __fastcall PiPdcDeactivate(void *a1)
{
  __int64 result; // rax

  if ( a1 )
    return Pdcv2ActivationClientDeactivate(a1);
  return result;
}
