/*
 * XREFs of imp_VfWdfDpcCancel @ 0x1400DE750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDpcCancel(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc, __int64 Wait)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDPC__ *, __int64))WdfVersion.Functions.pfnWdfDpcCancel)(
           DriverGlobals,
           Dpc,
           Wait);
}
