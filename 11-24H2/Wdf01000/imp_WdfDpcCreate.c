/*
 * XREFs of imp_WdfDpcCreate @ 0x14006ADB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140020DF4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14006AEC8 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDpcCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DPC_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDPC__ **Dpc)
{
  _FX_DRIVER_GLOBALS *v4; // rbp
  int result; // eax
  unsigned __int8 v9; // dl
  FxObject *pParent; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pParent = 0LL;
  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  result = FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 24);
  if ( result >= 0 )
  {
    FxObjectHandleGetPtrAndGlobals(
      v4,
      (unsigned __int64)Attributes->ParentObject,
      0x1000u,
      (void **)&pParent,
      &pFxDriverGlobals);
    if ( !Config )
      FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
    if ( !Dpc )
      FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
    if ( Config->Size == 24 )
    {
      result = FxValidateObjectAttributes(pFxDriverGlobals, Attributes, 0);
      if ( result >= 0 )
        return FxDpc::_Create(pFxDriverGlobals, Config, Attributes, pParent, Dpc);
    }
    else
    {
      WPP_IFR_SF_DDd(pFxDriverGlobals, v9, 0x12u, 0xAu, WPP_FxDpcApi_cpp_Traceguids, Config->Size, 0x18u, -1073741820);
      return -1073741820;
    }
  }
  return result;
}
