/*
 * XREFs of imp_VfWdfWaitLockRelease @ 0x1400E1840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfWaitLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWAITLOCK__ *Lock)
{
  WdfVersion.Functions.pfnWdfWaitLockRelease(DriverGlobals, Lock);
}
