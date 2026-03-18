/*
 * XREFs of ?GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z @ 0x14003E9C0
 * Callers:
 *     ?AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x14003E860 (-AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x14003E8A0 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     imp_WdfWdmDriverGetWdfDriverHandle @ 0x1400943D0 (imp_WdfWdmDriverGetWdfDriverHandle.c)
 * Callees:
 *     <none>
 */

FxDriver *__fastcall FxDriver::GetFxDriver(_DRIVER_OBJECT *DriverObject)
{
  return *(FxDriver **)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
}
