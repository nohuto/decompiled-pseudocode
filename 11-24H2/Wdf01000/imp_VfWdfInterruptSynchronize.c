/*
 * XREFs of imp_VfWdfInterruptSynchronize @ 0x1400DEE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfInterruptSynchronize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        unsigned __int8 (__fastcall *Callback)(WDFINTERRUPT__ *, void *),
        void *Context)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFINTERRUPT__ *, unsigned __int8 (__fastcall *)(WDFINTERRUPT__ *, void *), void *))WdfVersion.Functions.pfnWdfInterruptSynchronize)(
           DriverGlobals,
           Interrupt,
           Callback,
           Context);
}
