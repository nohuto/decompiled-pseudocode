/*
 * XREFs of imp_VfWdfTimerCreate @ 0x1400E0F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfTimerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFTIMER__ **Timer)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_TIMER_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFTIMER__ **))WdfVersion.Functions.pfnWdfTimerCreate)(
           DriverGlobals,
           Config,
           Attributes,
           Timer);
}
