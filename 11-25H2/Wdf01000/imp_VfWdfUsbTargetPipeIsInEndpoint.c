/*
 * XREFs of imp_VfWdfUsbTargetPipeIsInEndpoint @ 0x1400E1680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeIsInEndpoint(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *))WdfVersion.Functions.pfnWdfUsbTargetPipeIsInEndpoint)(
           DriverGlobals,
           Pipe);
}
