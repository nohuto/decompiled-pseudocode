/*
 * XREFs of ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x140047C74
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140047750 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     imp_WdfChildListCreate @ 0x14008B1D0 (imp_WdfChildListCreate.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1400A7090 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x140047B28 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     ?Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z @ 0x140047D3C (-Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z.c)
 */

__int64 __fastcall FxChildList::_CreateAndInit(
        FxChildList **ChildList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *ListAttributes,
        unsigned __int64 TotalDescriptionSize,
        FxDevice *Device,
        _WDF_CHILD_LIST_CONFIG *ListConfig,
        unsigned __int8 Static)
{
  unsigned int v7; // ebx
  FX_POOL **v11; // rcx
  FxChildList *v12; // rax
  FxChildList *v13; // rdi

  v7 = 0;
  *ChildList = 0LL;
  v11 = FxObjectHandleAlloc2(
          FxDriverGlobals,
          (unsigned __int64)FxDriverGlobals,
          0x168uLL,
          TotalDescriptionSize,
          ListAttributes,
          0,
          FxObjectTypeExternal);
  if ( v11
    && (FxChildList::FxChildList((FxChildList *)v11, FxDriverGlobals, TotalDescriptionSize, Device, Static),
        (v13 = v12) != 0LL) )
  {
    FxChildList::Initialize(v12, ListConfig);
    *ChildList = v13;
  }
  else
  {
    v7 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, 0xAu, WPP_FxChildList_cpp_Traceguids, 0xC000009A);
  }
  return v7;
}
