/*
 * XREFs of imp_VfWdfFdoUnlockStaticChildListFromIteration @ 0x1400DEBD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfFdoUnlockStaticChildListFromIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  WdfVersion.Functions.pfnWdfFdoUnlockStaticChildListFromIteration(DriverGlobals, Fdo);
}
