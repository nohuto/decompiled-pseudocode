/*
 * XREFs of imp_WdfDeviceMiniportCreate @ 0x14007F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14004259C (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140042BC4 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x140043258 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ??0FxMpDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@PEAU_DEVICE_OBJECT@@22@Z @ 0x14008289C (--0FxMpDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@PEAU_DEVICE_OBJECT@@22@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceMiniportCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *AttachedDeviceObject,
        _DEVICE_OBJECT *Pdo,
        WDFDEVICE__ **Device)
{
  _DEVICE_OBJECT *v9; // rbp
  _DEVICE_OBJECT *v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  FX_POOL **v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  FxDeviceBase *v17; // rdi
  int Target; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxDriver *pDriver; // [rsp+78h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pDriver = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver,
    &pFxDriverGlobals);
  if ( !DeviceObject )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v9 = AttachedDeviceObject;
  v10 = Pdo;
  if ( AttachedDeviceObject )
  {
    if ( !Pdo )
      FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  }
  else if ( Pdo )
  {
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  }
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(pFxDriverGlobals, Attributes, 0);
    if ( (int)result >= 0 )
    {
      v14 = FxObjectHandleAlloc2(pFxDriverGlobals, v12, 0xD0uLL, v13, Attributes, 0, FxObjectTypeExternal);
      if ( v14
        && (FxMpDevice::FxMpDevice((FxMpDevice *)v14, pFxDriverGlobals, pDriver, DeviceObject, v9, v10),
            (v17 = (FxDeviceBase *)v15) != 0LL) )
      {
        if ( v9
          && (Target = FxDeviceBase::AllocateTarget((FxDeviceBase *)v15, (FxIoTarget **)(v15 + 200), 0, v16), Target < 0)
          || (Target = FxDisposeList::_Create(
                         pFxDriverGlobals,
                         v17->m_DeviceObject.m_DeviceObject,
                         &v17->m_DisposeList,
                         v16),
              Target < 0)
          || (Target = FxDeviceBase::ConfigureConstraints(v17, Attributes), Target < 0)
          || (Target = FxObject::Commit(v17, Attributes, (void **)Device, 0LL, 1u), Target < 0) )
        {
          FxObject::DeleteFromFailedCreate(v17);
        }
        return (unsigned int)Target;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
