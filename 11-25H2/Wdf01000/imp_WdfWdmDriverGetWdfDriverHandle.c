/*
 * XREFs of imp_WdfWdmDriverGetWdfDriverHandle @ 0x140094370
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z @ 0x14004A7E0 (-GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFDRIVER__ *__fastcall imp_WdfWdmDriverGetWdfDriverHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject)
{
  unsigned __int64 FxDriver; // rax
  unsigned __int16 v3; // cx
  WDFDRIVER__ *result; // rax
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  FxDriver = (unsigned __int64)FxDriver::GetFxDriver(DriverObject);
  v3 = *(_WORD *)(FxDriver + 10);
  result = (WDFDRIVER__ *)(FxDriver ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v3 )
    return 0LL;
  return result;
}
