/*
 * XREFs of imp_WdfChildListRequestChildEject @ 0x14008B3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DD @ 0x140002E14 (WPP_IFR_SF_DD.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x14002F85C (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140046ACC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfChildListRequestChildEject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  unsigned __int8 v5; // dl
  _FX_DRIVER_GLOBALS *v6; // rdi
  FxDevice *DeviceFromId; // rax
  FxDevice *v8; // rbx
  const void *v9; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  __int64 m_ObjectSize; // rax
  const void *v13; // rbx
  _WDF_CHILD_RETRIEVE_INFO info; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 retaddr; // [rsp+98h] [rbp+28h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+A0h] [rbp+30h] BYREF
  FxChildList *pList; // [rsp+B0h] [rbp+40h] BYREF

  pList = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  v6 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0x33u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(v6, retaddr);
  if ( pList->m_IdentificationDescriptionSize == IdentificationDescription->IdentificationDescriptionSize )
  {
    *(_QWORD *)&info.Size = 40LL;
    info.IdentificationDescription = IdentificationDescription;
    memset(&info.AddressDescription, 0, 24);
    DeviceFromId = FxChildList::GetDeviceFromId(pList, &info);
    v8 = DeviceFromId;
    if ( v6->FxVerboseOn )
    {
      if ( DeviceFromId )
      {
        v9 = (const void *)((unsigned __int64)DeviceFromId ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !DeviceFromId->m_ObjectSize )
          v9 = 0LL;
      }
      else
      {
        v9 = 0LL;
      }
      WPP_IFR_SF_qq(v6, 5u, 0xCu, 0x35u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v9);
    }
    if ( v8 )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(v8);
      if ( SafePhysicalDevice )
      {
        IoRequestDeviceEject(SafePhysicalDevice);
        return 1;
      }
      m_ObjectSize = v8->m_ObjectSize;
      v13 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_q(v6, 2u, 0x12u, 0x36u, WPP_FxChildListAPI_cpp_Traceguids, v13);
    }
  }
  else
  {
    WPP_IFR_SF_DD(
      v6,
      v5,
      0xCu,
      0x34u,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescription->IdentificationDescriptionSize,
      pList->m_IdentificationDescriptionSize);
  }
  return 0;
}
