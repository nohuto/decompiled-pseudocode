/*
 * XREFs of ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x140051248
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140050DA0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14007A808 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x140051308 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 */

__int64 __fastcall FxCmResList::_CreateAndInit(
        FxCmResList **ResourceList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *AccessFlags,
        _WDF_OBJECT_ATTRIBUTES *a4,
        unsigned __int8 FxDriverGlobals_0)
{
  unsigned int v5; // ebx
  FxCmResList *v8; // rsi

  v5 = 0;
  *ResourceList = 0LL;
  v8 = (FxCmResList *)FxObjectHandleAlloc2(
                        FxDriverGlobals,
                        (unsigned __int64)FxDriverGlobals,
                        0x98uLL,
                        (__int64)a4,
                        0LL,
                        0,
                        FxObjectTypeExternal);
  if ( v8 )
  {
    FxResourceCollection::FxResourceCollection(v8, FxDriverGlobals, 0x1036u, 0x98u, FxDriverGlobals_0);
    v8->__vftable = (FxCmResList_vtbl *)FxCmResList::`vftable';
    *ResourceList = v8;
  }
  else
  {
    v5 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxResource_hpp_Traceguids, 0xC000009A);
  }
  return v5;
}
