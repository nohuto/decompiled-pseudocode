/*
 * XREFs of imp_WdfChildListRetrieveAddressDescription @ 0x14008B560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x14008C5CC (-GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_.c)
 */

__int64 __fastcall imp_WdfChildListRetrieveAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  unsigned int IdentificationDescriptionSize; // edx
  unsigned int _a3; // eax
  unsigned __int16 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxChildList *pList; // [rsp+80h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  v7 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0xEu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( !AddressDescription )
    FxVerifierNullBugCheck(v7, retaddr);
  IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
  _a3 = pList->m_IdentificationDescriptionSize;
  if ( _a3 != IdentificationDescription->IdentificationDescriptionSize )
  {
    v10 = 15;
LABEL_9:
    v11 = -1073741808;
    WPP_IFR_SF_DDd(
      v7,
      IdentificationDescriptionSize,
      0xCu,
      v10,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescriptionSize,
      _a3,
      -1073741808);
    return v11;
  }
  _a3 = pList->m_AddressDescriptionSize;
  if ( !_a3 )
  {
    v11 = -1073741808;
    WPP_IFR_SF_D(v7, 2u, 0xCu, 0x10u, WPP_FxChildListAPI_cpp_Traceguids, 0xC0000010);
    return v11;
  }
  IdentificationDescriptionSize = AddressDescription->AddressDescriptionSize;
  if ( _a3 != AddressDescription->AddressDescriptionSize )
  {
    v10 = 17;
    goto LABEL_9;
  }
  v12 = FxChildList::GetAddressDescription(pList, IdentificationDescription, AddressDescription);
  v11 = v12;
  if ( v7->FxVerboseOn )
    WPP_IFR_SF_qd(v7, 5u, 0xCu, 0x12u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v12);
  return v11;
}
