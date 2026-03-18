/*
 * XREFs of imp_VfWdfIoTargetStart @ 0x1400DFBF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoTargetStart(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *))WdfVersion.Functions.pfnWdfIoTargetStart)(
           DriverGlobals,
           IoTarget);
}
