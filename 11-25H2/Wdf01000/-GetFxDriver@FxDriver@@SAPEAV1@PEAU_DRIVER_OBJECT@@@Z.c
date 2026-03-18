/*
 * XREFs of ?GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z @ 0x14004A7E0
 * Callers:
 *     ?AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x14004A680 (-AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x14004A6C0 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     imp_WdfWdmDriverGetWdfDriverHandle @ 0x140094370 (imp_WdfWdmDriverGetWdfDriverHandle.c)
 * Callees:
 *     <none>
 */

FxDriver *__fastcall FxDriver::GetFxDriver(_DRIVER_OBJECT *DriverObject)
{
  return *(FxDriver **)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
}
