/*
 * XREFs of imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x14001A810
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140019BF0 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     FxIsEqualGuid @ 0x140019D5C (FxIsEqualGuid.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x14001A750 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001C030 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140052C6C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceRetrieveDeviceInterfaceString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *v8; // rbx
  int result; // eax
  int v10; // ebp
  FxPkgPnp *m_PkgPnp; // r14
  _FX_DRIVER_GLOBALS *v12; // rdx
  _FX_DRIVER_GLOBALS *v13; // rdx
  _SINGLE_LIST_ENTRY *i; // rsi
  FxString *pString; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+80h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+90h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  pString = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v8 = pFxDriverGlobals;
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( result >= 0 )
  {
    if ( !RefString || (result = FxValidateUnicodeString(v8, RefString), result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        WPP_IFR_SF_qd(v8, 2u, 2u, 0xEu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, -1073741808);
        return -1073741808;
      }
      else
      {
        FxObjectHandleGetPtr(v8, String, 0x1007u, (void **)&pString);
        v10 = -1073741772;
        m_PkgPnp = pDevice->m_PkgPnp;
        FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v12, 0LL);
        for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
        {
          if ( FxIsEqualGuid((const _GUID *)&i[-6], InterfaceClassGUID) )
          {
            if ( RefString )
            {
              if ( RefString->Length == LOWORD(i[-4].Next)
                && RtlCompareMemory(RefString->Buffer, i[-3].Next, RefString->Length) == RefString->Length )
              {
LABEL_10:
                if ( i[-1].Next )
                  v10 = FxString::Assign(pString, (const _UNICODE_STRING *)&i[-2]);
                else
                  v10 = -1073741436;
                break;
              }
            }
            else if ( !LOWORD(i[-4].Next) )
            {
              goto LABEL_10;
            }
          }
        }
        FxWaitLockInternal::ReleaseLock(&m_PkgPnp->m_DeviceInterfaceLock, v13);
        return v10;
      }
    }
  }
  return result;
}
