/*
 * XREFs of imp_WdfDeviceCreateSymbolicLink @ 0x14007E0D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14004533C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x14007C414 (--1FxAutoString@@QEAA@XZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140094D58 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateSymbolicLink(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *SymbolicLinkName)
{
  unsigned __int16 v5; // r9
  __int64 result; // rax
  int SymbolicLink; // ebx
  FxAutoString pdoName; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+80h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  pdoName = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !SymbolicLinkName )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !SymbolicLinkName->Length )
  {
    v5 = 29;
LABEL_9:
    SymbolicLink = -1073741808;
    WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0x12u, v5, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
    goto LABEL_11;
  }
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result < 0 )
    return result;
  SymbolicLink = FxValidateUnicodeString(pFxDriverGlobals, SymbolicLinkName);
  if ( SymbolicLink >= 0 )
  {
    if ( !pDevice->m_SymbolicLinkName.Buffer )
    {
      SymbolicLink = FxDevice::CreateSymbolicLink(pDevice, pFxDriverGlobals, SymbolicLinkName);
      goto LABEL_11;
    }
    v5 = 30;
    goto LABEL_9;
  }
LABEL_11:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)SymbolicLink;
}
