/*
 * XREFs of ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1400422C4
 * Callers:
 *     imp_WdfDeviceCreate @ 0x140042100 (imp_WdfDeviceCreate.c)
 * Callees:
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x140042564 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14004259C (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140042688 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxDevice@@QEAA@PEAVFxDriver@@@Z @ 0x140042B18 (--0FxDevice@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140047E04 (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140048558 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400488D4 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x14007CE60 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?MoveContexts@FxObject@@QEAAJPEAV1@@Z @ 0x1400970B8 (-MoveContexts@FxObject@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDevice::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        FxDevice **Device)
{
  __int64 v4; // rdi
  FX_POOL **v8; // rax
  FxDevice *v9; // rax
  FxDevice *v10; // rbx
  FxDevice *v11; // rbp
  int v12; // esi
  FxDevice *v13; // rcx
  int v14; // ecx
  int v15; // ecx
  int v17; // eax
  FxObject *v18; // rcx
  __int64 v19; // rax
  _LIST_ENTRY *v20; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _QWORD *v22; // rdx
  _QWORD *i; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *v26; // r9
  _LIST_ENTRY *Blink; // rdx
  void *object; // [rsp+78h] [rbp+10h] BYREF

  v4 = (__int64)*DeviceInit;
  *Device = 0LL;
  v8 = FxObjectHandleAlloc2(
         FxDriverGlobals,
         (unsigned __int64)DeviceInit,
         0x2C0uLL,
         (__int64)Device,
         DeviceAttributes,
         0,
         FxObjectTypeExternal);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_15;
  }
  FxDevice::FxDevice((FxDevice *)v8, *(FxDriver **)(v4 + 8));
  v10 = v9;
  v11 = v9;
  if ( !v9 )
  {
LABEL_15:
    v12 = -1073741670;
    goto LABEL_9;
  }
  v12 = FxDevice::Initialize(v9, (WDFDEVICE_INIT *)v4, DeviceAttributes);
  v13 = v10;
  if ( v12 < 0 )
    goto LABEL_8;
  v14 = *(_DWORD *)(v4 + 36);
  if ( !v14 )
  {
    v17 = FxDevice::FdoInitialize(v10, (WDFDEVICE_INIT *)v4);
    goto LABEL_11;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v17 = FxDevice::PdoInitialize(v10, (WDFDEVICE_INIT *)v4);
    goto LABEL_11;
  }
  if ( v15 == 1 )
  {
    v17 = FxDevice::ControlDeviceInitialize(v10, (WDFDEVICE_INIT *)v4);
LABEL_11:
    v12 = v17;
    v13 = v10;
    if ( v17 >= 0 )
      goto LABEL_7;
LABEL_8:
    FxDevice::DeleteDeviceFromFailedCreate(v13, v12, 0);
    v11 = 0LL;
    goto LABEL_9;
  }
LABEL_7:
  v12 = FxDisposeList::_Create(v10->m_Globals, v10->m_DeviceObject.m_DeviceObject, &v10->m_DisposeList);
  v13 = v10;
  if ( v12 < 0 )
    goto LABEL_8;
  v12 = FxObject::Commit(v10, DeviceAttributes, &object, v10->m_Driver, 1u);
  v13 = v10;
  if ( v12 < 0 )
    goto LABEL_8;
  v18 = *(FxObject **)(v4 + 936);
  if ( v18 )
  {
    v12 = FxObject::MoveContexts(v18, v10);
    v13 = v10;
    if ( v12 < 0 )
      goto LABEL_8;
  }
  v19 = *(_QWORD *)(v4 + 48);
  if ( v19 )
  {
    v10->m_DeviceName = *(_UNICODE_STRING *)(v19 + 104);
    *(_OWORD *)(v19 + 104) = 0LL;
  }
  v20 = *(_LIST_ENTRY **)(v4 + 264);
  if ( v20 )
  {
    Blink = v10->m_PreprocessInfoListHead.Blink;
    if ( Blink->Flink != &v10->m_PreprocessInfoListHead )
LABEL_38:
      __fastfail(3u);
    v20->Flink = &v10->m_PreprocessInfoListHead;
    v20->Blink = Blink;
    Blink->Flink = v20;
    v10->m_PreprocessInfoListHead.Blink = v20;
    *(_QWORD *)(v4 + 264) = 0LL;
    ++v10->m_DeviceObject.m_DeviceObject->StackSize;
  }
  m_DeviceObject = v10->m_DeviceObject.m_DeviceObject;
  if ( ((__int64)m_DeviceObject[1].CurrentIrp & 1) != 0 )
    ++m_DeviceObject->StackSize;
  if ( v10->m_SelfIoTargetNeeded )
    ++v10->m_DeviceObject.m_DeviceObject->StackSize;
  v22 = (_QWORD *)(v4 + 920);
  v11 = v10;
  for ( i = *(_QWORD **)(v4 + 920); i != v22; i = (_QWORD *)*i )
  {
    v25 = (_LIST_ENTRY *)i[4];
    if ( v25 )
    {
      v26 = v10->m_PreprocessInfoListHead.Blink;
      if ( v26->Flink != &v10->m_PreprocessInfoListHead )
        goto LABEL_38;
      v25->Flink = &v10->m_PreprocessInfoListHead;
      v25->Blink = v26;
      v26->Flink = v25;
      v10->m_PreprocessInfoListHead.Blink = v25;
      i[4] = 0LL;
      ++v10->m_DeviceObject.m_DeviceObject->StackSize;
    }
  }
  m_PkgPnp = v10->m_PkgPnp;
  if ( m_PkgPnp )
    m_PkgPnp->FinishInitialize(m_PkgPnp, (WDFDEVICE_INIT *)v4);
  *(_QWORD *)(v4 + 16) = v10;
  *DeviceInit = 0LL;
  if ( !*(_BYTE *)(v4 + 24) )
    WDFDEVICE_INIT::`scalar deleting destructor'((WDFDEVICE_INIT *)v4, (unsigned int)v22);
LABEL_9:
  *Device = v11;
  return (unsigned int)v12;
}
