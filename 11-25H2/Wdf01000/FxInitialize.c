/*
 * XREFs of FxInitialize @ 0x14006D198
 * Callers:
 *     imp_WdfDriverCreate @ 0x14006CBA0 (imp_WdfDriverCreate.c)
 * Callees:
 *     FxRegistrySettingsInitialize @ 0x14006D2D4 (FxRegistrySettingsInitialize.c)
 *     ?FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x14006D92C (-FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x14006D9FC (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     FxRegisterBugCheckCallback @ 0x14006DB24 (FxRegisterBugCheckCallback.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x14006E080 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     FxCacheBugCheckDriverInfo @ 0x1400834B4 (FxCacheBugCheckDriverInfo.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008433C (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     LockVerifierSection @ 0x1400968C0 (LockVerifierSection.c)
 *     WPP_IFR_SF_Z @ 0x1400969D8 (WPP_IFR_SF_Z.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140097B90 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1400982AC (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall FxInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_DRIVER_CONFIG *a4)
{
  unsigned __int8 v7; // si
  const _UNICODE_STRING *v8; // rdx
  _DRIVER_OBJECT *v9; // r8
  int v10; // esi
  const _UNICODE_STRING *v12; // rdx
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF
  int v14; // [rsp+5Ch] [rbp+24h]

  v14 = HIDWORD(a4);
  v13 = 0;
  v7 = 0;
  if ( MmIsVerifierEnabled(&v13) >= 0 && v13 == 33 )
    v7 = MmIsDriverVerifying(DriverObject) != 0;
  FxRegistrySettingsInitialize(FxDriverGlobals, RegistryPath, v7);
  FxIFRStart(FxDriverGlobals, v8, v9);
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_Z(FxDriverGlobals, 5u, 0x11u, 0xDu, WPP_globals_cpp_Traceguids, RegistryPath);
  v10 = FxPoolInitialize(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
  if ( v10 >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierLock )
    {
      FxDriverGlobals->ThreadTableLock.m_Lock = 0LL;
      FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 1;
      FxVerifierLock::AllocateThreadTable(FxDriverGlobals);
    }
    FxCacheBugCheckDriverInfo(FxDriverGlobals);
    FxRegisterBugCheckCallback(FxDriverGlobals, DriverObject);
    if ( RegistryPath && !_FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(FxDriverGlobals, v12) )
      _FX_DRIVER_GLOBALS::RegisterClientVersion(FxDriverGlobals, RegistryPath);
    if ( FxDriverGlobals->FxVerifierOn )
      LockVerifierSection(FxDriverGlobals, RegistryPath);
    return 0LL;
  }
  else
  {
    FxIFRStop(FxDriverGlobals);
    return (unsigned int)v10;
  }
}
