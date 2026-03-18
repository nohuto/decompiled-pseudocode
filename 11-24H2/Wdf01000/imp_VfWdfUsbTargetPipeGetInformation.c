/*
 * XREFs of imp_VfWdfUsbTargetPipeGetInformation @ 0x1400E1640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfUsbTargetPipeGetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  WdfVersion.Functions.pfnWdfUsbTargetPipeGetInformation(DriverGlobals, Pipe, PipeInformation);
}
