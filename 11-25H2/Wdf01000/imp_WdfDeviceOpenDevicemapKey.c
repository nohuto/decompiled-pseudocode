/*
 * XREFs of imp_WdfDeviceOpenDevicemapKey @ 0x140091C90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140052C6C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400532F8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x140094FA8 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 */

__int64 __fastcall imp_WdfDeviceOpenDevicemapKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ **v8; // r14
  _FX_DRIVER_GLOBALS *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rcx
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned __int16 v13; // r9
  _WDF_OBJECT_ATTRIBUTES *ObjectType; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  FX_POOL **v17; // rax
  FxRegKey *v18; // rdi
  FxDevice *v19; // rcx
  int v20; // esi
  FxDevice *pDevice; // [rsp+40h] [rbp-38h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 retaddr; // [rsp+78h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+80h] [rbp+8h] BYREF

  pDevice = 0LL;
  pFxDriverGlobals = 0LL;
  keyHandle = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  v8 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v9 = pFxDriverGlobals;
  v10 = pFxDriverGlobals;
  *Key = 0LL;
  result = FxValidateUnicodeString(v10, KeyName);
  if ( (int)result >= 0 )
  {
    if ( !KeyName->Length )
    {
      v12 = -1073741811;
      v13 = 20;
LABEL_16:
      WPP_IFR_SF_D(v9, 2u, 0x12u, v13, WPP_FxDeviceApi_cpp_Traceguids, v12);
      return v12;
    }
    v12 = FxVerifierCheckIrqlLevel(v9, 0);
    if ( (v12 & 0x80000000) != 0 )
    {
      FxVerifierDbgBreakPoint(v9);
      return v12;
    }
    ObjectType = KeyAttributes;
    result = FxValidateObjectAttributes(v9, KeyAttributes, 1);
    if ( (int)result < 0 )
      return result;
    v17 = FxObjectHandleAlloc2(v9, v15, 0x78uLL, v16, ObjectType, 0, FxObjectTypeExternal);
    v18 = (FxRegKey *)v17;
    if ( !v17 )
    {
      v12 = -1073741670;
      v13 = 21;
      goto LABEL_16;
    }
    FxObject::FxObject((FxObject *)v17, (_FX_DRIVER_GLOBALS *)0x1006, 0x78u, v9);
    v18->m_ObjectFlags |= 0x11u;
    v18->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
    v18->m_Lock = 0LL;
    v18->m_Key = 0LL;
    v18->m_DeviceBase = pDevice;
    v20 = FxObject::Commit(v18, ObjectType, (void **)&keyHandle, 0LL, 1u);
    if ( v20 < 0 || (v20 = FxDevice::OpenDevicemapKeyWorker(v19, v9, KeyName, DesiredAccess, v18), v20 < 0) )
      FxObject::DeleteFromFailedCreate(v18);
    else
      *v8 = keyHandle;
    return (unsigned int)v20;
  }
  return result;
}
