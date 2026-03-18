/*
 * XREFs of imp_VfWdfIoTargetPurge @ 0x1400DF9A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoTargetPurge(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, __int64 Action)
{
  WdfVersion.Functions.pfnWdfIoTargetPurge(DriverGlobals, IoTarget, (_WDF_IO_TARGET_PURGE_IO_ACTION)Action);
}
