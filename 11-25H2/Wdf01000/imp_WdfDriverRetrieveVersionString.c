/*
 * XREFs of imp_WdfDriverRetrieveVersionString @ 0x140093A80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x140083A78 (-Assign@FxString@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall imp_WdfDriverRetrieveVersionString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  __int64 result; // rax
  const wchar_t *v6; // rdx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxString *pString; // [rsp+50h] [rbp+18h] BYREF
  FxDriver *pDriver; // [rsp+58h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pDriver = 0LL;
  pString = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver,
    &pFxDriverGlobals);
  if ( !String )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v4 = pFxDriverGlobals;
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    FxObjectHandleGetPtr(v4, (unsigned __int64)String, 0x1007u, (void **)&pString);
    v6 = L"Kernel Mode Driver Framework (verifier on) version 01.035.0";
    if ( !v4->FxVerifierOn )
      v6 = L"Kernel Mode Driver Framework version 01.035.0";
    return FxString::Assign(pString, v6);
  }
  return result;
}
