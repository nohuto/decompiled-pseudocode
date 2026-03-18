/*
 * XREFs of imp_WdfDriverIsVersionAvailable @ 0x140093980
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_dddd @ 0x140093348 (WPP_IFR_SF_dddd.c)
 */

bool __fastcall imp_WdfDriverIsVersionAvailable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        _WDF_DRIVER_VERSION_AVAILABLE_PARAMS *VersionAvailableParams)
{
  unsigned __int8 v4; // dl
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxDriver *pDriver; // [rsp+70h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDriver = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver,
    &pFxDriverGlobals);
  if ( !VersionAvailableParams )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) < 0 )
    return 0;
  if ( VersionAvailableParams->Size != 12 )
  {
    WPP_IFR_SF_DDd(
      pFxDriverGlobals,
      v4,
      0x11u,
      0xFu,
      WPP_FxDriverApi_cpp_Traceguids,
      VersionAvailableParams->Size,
      0xCu,
      -1073741820);
    return 0;
  }
  WPP_IFR_SF_dddd(
    pFxDriverGlobals,
    4u,
    0x11u,
    0x10u,
    WPP_FxDriverApi_cpp_Traceguids,
    1,
    35,
    VersionAvailableParams->MajorVersion,
    VersionAvailableParams->MinorVersion);
  if ( VersionAvailableParams->MajorVersion != 1 )
    return 0;
  return VersionAvailableParams->MinorVersion <= 0x23;
}
