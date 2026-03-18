/*
 * XREFs of imp_WdfChildListRetrievePdo @ 0x140017D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x140017F3C (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_Ddd @ 0x14008B078 (WPP_IFR_SF_Ddd.c)
 */

WDFDEVICE__ *__fastcall imp_WdfChildListRetrievePdo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_RETRIEVE_INFO *RetrieveInfo)
{
  unsigned __int8 v5; // dl
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  _FX_DRIVER_GLOBALS *v8; // rbx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rax
  FxChildList *v10; // rcx
  unsigned int m_IdentificationDescriptionSize; // edx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  unsigned __int64 DeviceFromId; // rax
  const void *v14; // rdi
  unsigned int m_AddressDescriptionSize; // eax
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  int _a2; // [rsp+30h] [rbp-38h]
  unsigned int _a3; // [rsp+38h] [rbp-30h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxChildList *pList; // [rsp+80h] [rbp+18h] BYREF

  pList = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  v8 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0x2Cu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
  if ( !RetrieveInfo )
    FxVerifierNullBugCheck(v8, retaddr);
  if ( RetrieveInfo->Size != 40 )
  {
    WPP_IFR_SF_Ddd(v8, v5, v6, v7, traceGuid, RetrieveInfo->Size, _a2, _a3);
    return 0LL;
  }
  IdentificationDescription = RetrieveInfo->IdentificationDescription;
  if ( !IdentificationDescription )
  {
    WPP_IFR_SF_D(v8, 2u, 0xCu, 0x2Eu, WPP_FxChildListAPI_cpp_Traceguids, 0xC000000D);
    return 0LL;
  }
  v10 = pList;
  m_IdentificationDescriptionSize = pList->m_IdentificationDescriptionSize;
  if ( m_IdentificationDescriptionSize != IdentificationDescription->IdentificationDescriptionSize )
  {
    WPP_IFR_SF_dd(
      v8,
      2u,
      0xCu,
      0x2Fu,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescription->IdentificationDescriptionSize,
      m_IdentificationDescriptionSize);
    return 0LL;
  }
  AddressDescription = RetrieveInfo->AddressDescription;
  if ( AddressDescription )
  {
    m_AddressDescriptionSize = pList->m_AddressDescriptionSize;
    if ( m_AddressDescriptionSize )
    {
      if ( m_AddressDescriptionSize == AddressDescription->AddressDescriptionSize )
        goto LABEL_8;
      WPP_IFR_SF_dd(
        v8,
        2u,
        0xCu,
        0x31u,
        WPP_FxChildListAPI_cpp_Traceguids,
        AddressDescription->AddressDescriptionSize,
        m_AddressDescriptionSize);
    }
    else
    {
      WPP_IFR_SF_D(v8, 2u, 0xCu, 0x30u, WPP_FxChildListAPI_cpp_Traceguids, 0xC0000010);
    }
    return 0LL;
  }
LABEL_8:
  RetrieveInfo->Status = WdfChildListRetrieveDeviceUndefined;
  DeviceFromId = (unsigned __int64)FxChildList::GetDeviceFromId(v10, RetrieveInfo);
  if ( DeviceFromId )
  {
    v14 = (const void *)(DeviceFromId ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(DeviceFromId + 10) )
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v8->FxVerboseOn )
    WPP_IFR_SF_qqd(v8, 5u, 0xCu, 0x32u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v14, RetrieveInfo->Status);
  return (WDFDEVICE__ *)v14;
}
