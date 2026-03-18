/*
 * XREFs of imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x140070A10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x14002FADC (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListAddOrUpdateChildDescriptionAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  unsigned int *v7; // r9
  _FX_DRIVER_GLOBALS *v8; // rdi
  unsigned int m_AddressDescriptionSize; // eax
  unsigned int AddressDescriptionSize; // edx
  unsigned int _a2; // ebx
  unsigned __int16 v13; // r9
  unsigned __int8 v14; // dl
  unsigned __int16 v15; // r9
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxChildList *pList; // [rsp+70h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+80h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  v8 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0x21u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(v8, retaddr);
  if ( AddressDescription )
  {
    m_AddressDescriptionSize = pList->m_AddressDescriptionSize;
    if ( !m_AddressDescriptionSize )
    {
      _a2 = -1073741808;
      WPP_IFR_SF_D(v8, 2u, 0xCu, 0x22u, WPP_FxChildListAPI_cpp_Traceguids, 0xC0000010);
      return _a2;
    }
    AddressDescriptionSize = AddressDescription->AddressDescriptionSize;
    if ( m_AddressDescriptionSize != AddressDescription->AddressDescriptionSize )
    {
      v15 = 35;
LABEL_17:
      _a2 = -1073741808;
      WPP_IFR_SF_DDd(
        v8,
        AddressDescriptionSize,
        0xCu,
        v15,
        WPP_FxChildListAPI_cpp_Traceguids,
        AddressDescriptionSize,
        m_AddressDescriptionSize,
        -1073741808);
      return _a2;
    }
  }
  else if ( pList->m_AddressDescriptionSize )
  {
    _a2 = -1073741808;
    v13 = 36;
    v14 = 2;
LABEL_10:
    WPP_IFR_SF_qd(v8, v14, 0xCu, v13, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, _a2);
    return _a2;
  }
  m_AddressDescriptionSize = pList->m_IdentificationDescriptionSize;
  AddressDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
  if ( m_AddressDescriptionSize != IdentificationDescription->IdentificationDescriptionSize )
  {
    v15 = 37;
    goto LABEL_17;
  }
  _a2 = FxChildList::Add(pList, IdentificationDescription, AddressDescription, v7);
  if ( v8->FxVerboseOn )
  {
    v13 = 38;
    v14 = 5;
    goto LABEL_10;
  }
  return _a2;
}
