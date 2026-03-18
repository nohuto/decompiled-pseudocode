/*
 * XREFs of imp_VfWdfIoTargetCloseForQueryRemove @ 0x1400DF780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoTargetCloseForQueryRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  WdfVersion.Functions.pfnWdfIoTargetCloseForQueryRemove(DriverGlobals, IoTarget);
}
