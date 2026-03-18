/*
 * XREFs of imp_VfWdfRequestWdmFormatUsingStackLocation @ 0x1400E0E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfRequestWdmFormatUsingStackLocation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _IO_STACK_LOCATION *Stack)
{
  WdfVersion.Functions.pfnWdfRequestWdmFormatUsingStackLocation(DriverGlobals, Request, Stack);
}
