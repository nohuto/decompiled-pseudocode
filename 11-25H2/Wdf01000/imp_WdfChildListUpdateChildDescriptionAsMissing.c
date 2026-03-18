/*
 * XREFs of imp_WdfChildListUpdateChildDescriptionAsMissing @ 0x140055E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x14007F1FC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListUpdateChildDescriptionAsMissing(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  unsigned int IdentificationDescriptionSize; // edx
  unsigned int _a3; // ecx
  unsigned int v8; // edi
  int updated; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxChildList *pList; // [rsp+70h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v5 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0x27u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
  IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
  _a3 = pList->m_IdentificationDescriptionSize;
  if ( _a3 == IdentificationDescription->IdentificationDescriptionSize )
  {
    updated = FxChildList::UpdateAsMissing(pList, IdentificationDescription);
    v8 = updated;
    if ( v5->FxVerboseOn )
      WPP_IFR_SF_qd(v5, 5u, 0xCu, 0x29u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, updated);
  }
  else
  {
    v8 = -1073741808;
    WPP_IFR_SF_DDd(
      v5,
      IdentificationDescriptionSize,
      0xCu,
      0x28u,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescriptionSize,
      _a3,
      -1073741808);
  }
  return v8;
}
