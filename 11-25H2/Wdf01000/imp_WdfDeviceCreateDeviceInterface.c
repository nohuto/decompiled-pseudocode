/*
 * XREFs of imp_WdfDeviceCreateDeviceInterface @ 0x140053AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140019C10 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x14001A750 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001C030 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x14004A608 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140052C6C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400532DC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140053CFC (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  __int64 result; // rax
  bool v9; // zf
  ULONG Tag; // ecx
  void *v11; // rax
  FX_POOL **v12; // rax
  _FX_DRIVER_GLOBALS *v13; // rdx
  FxDeviceInterface *v14; // rdi
  int v15; // eax
  int v16; // esi
  FxPkgPnp *m_PkgPnp; // r14
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _FX_DRIVER_GLOBALS *v19; // rdx
  FxDeviceInterface *v20; // rbx
  _SINGLE_LIST_ENTRY *p_m_DeviceInterfaceHead; // rcx
  _SINGLE_LIST_ENTRY *i; // rax
  unsigned int _a2; // edi
  unsigned __int16 v24; // r9
  __m128i v25; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  _FX_DRIVER_GLOBALS *status; // [rsp+80h] [rbp+30h] BYREF
  FxDevice *pDevice; // [rsp+90h] [rbp+40h] BYREF

  status = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &status);
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(status, retaddr);
  v7 = status;
  result = FxVerifierCheckIrqlLevel(status, 0);
  if ( (int)result >= 0 )
  {
    if ( !ReferenceString || (result = FxValidateUnicodeString(v7, ReferenceString), (int)result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        _a2 = -1073741808;
        v24 = 10;
      }
      else
      {
        v9 = v7->FxPoolTrackingOn == 0;
        Tag = v7->Tag;
        v25.m128i_i64[0] = 0LL;
        v25.m128i_i64[1] = 256LL;
        if ( v9 )
          v11 = 0LL;
        else
          v11 = retaddr;
        v12 = FxPoolAllocator(v7, &v7->FxPoolFrameworks, &v25, 0x40uLL, Tag, v11);
        v14 = (FxDeviceInterface *)v12;
        if ( v12 )
        {
          *(_OWORD *)v12 = 0LL;
          *((_OWORD *)v12 + 2) = 0LL;
          *((_OWORD *)v12 + 1) = 0LL;
          v12[6] = 0LL;
          *((_WORD *)v12 + 28) = 256;
          *(_GUID *)v12 = *InterfaceClassGUID;
          if ( ReferenceString )
          {
            v15 = FxDuplicateUnicodeString(v7, ReferenceString, (_UNICODE_STRING *)v12 + 1);
            v16 = v15;
            if ( v15 < 0 )
            {
              WPP_IFR_SF_qd(v7, 2u, 2u, 0xCu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, v15);
              v20 = v14;
              goto LABEL_27;
            }
          }
          m_PkgPnp = pDevice->m_PkgPnp;
          FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v13, 0LL);
          SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
          if ( SafePhysicalDevice )
          {
            v16 = FxDeviceInterface::Register(v14, SafePhysicalDevice);
            v20 = v14;
            if ( v16 < 0 )
              goto LABEL_15;
          }
          else
          {
            v16 = 0;
          }
          p_m_DeviceInterfaceHead = &m_PkgPnp->m_DeviceInterfaceHead;
          v20 = v14;
          for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
            p_m_DeviceInterfaceHead = i;
          p_m_DeviceInterfaceHead->Next = &v14->m_Entry;
LABEL_15:
          FxWaitLockInternal::ReleaseLock(&m_PkgPnp->m_DeviceInterfaceLock, v19);
          if ( v16 >= 0 )
            return (unsigned int)v16;
LABEL_27:
          FxDeviceInterface::`scalar deleting destructor'(v20);
          return (unsigned int)v16;
        }
        _a2 = -1073741670;
        v24 = 11;
      }
      WPP_IFR_SF_qd(v7, 2u, 2u, v24, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, _a2);
      return _a2;
    }
  }
  return result;
}
