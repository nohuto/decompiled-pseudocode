/*
 * XREFs of ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1400A291C
 * Callers:
 *     imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x14008B790 (imp_WdfPdoAddEjectionRelationsPhysicalDevice.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1400658D4 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ??0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400AC190 (--0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::AddEjectionDevice(
        FxPkgPdo *this,
        _DEVICE_OBJECT *DependentDevice,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v8; // rax
  FX_POOL **v9; // rax
  FxRelatedDeviceList *v10; // rcx
  _QWORD *v11; // rax
  int v12; // edi
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 m_ObjectSize; // rax
  const void *_a1; // rcx
  FX_POOL **v17; // rax
  __int64 v18; // rax
  FxObject *v19; // rdi
  int v20; // ebx
  __m128i v21; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  if ( this->m_EjectionDeviceList )
    goto LABEL_13;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_EjectionDeviceList )
    goto LABEL_7;
  m_Globals = this->m_Globals;
  v8 = retaddr;
  v21.m128i_i64[0] = 0LL;
  v21.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v8 = 0LL;
  v9 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v21, 0x50uLL, m_Globals->Tag, v8);
  v10 = (FxRelatedDeviceList *)v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 12) = 0;
    *(_WORD *)((char *)v9 + 53) = 0;
    v9[5] = 0LL;
    v11 = v9 + 1;
    v11[1] = v11;
    *v11 = v11;
    v10->m_TransactionHead.Blink = &v10->m_TransactionHead;
    v10->m_TransactionHead.Flink = &v10->m_TransactionHead;
    v10->m_ListLock.m_Lock = 0LL;
    v10->m_ListLock.m_DbgFlagIsInitialized = 1;
    v10->__vftable = (FxRelatedDeviceList_vtbl *)FxRelatedDeviceList::`vftable';
    v10->m_DeleteOnRemove = 1;
    v10->m_NeedReportMissing = 0;
    this->m_EjectionDeviceList = v10;
LABEL_7:
    v12 = 0;
    goto LABEL_8;
  }
  this->m_EjectionDeviceList = 0LL;
  v12 = -1073741670;
  m_DeviceBase = this->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !(_WORD)m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x19u, WPP_FxPkgPdo_cpp_Traceguids, _a1);
LABEL_8:
  FxNonPagedObject::Unlock(this, irql, v6);
  if ( v12 < 0 )
    return (unsigned int)v12;
LABEL_13:
  v17 = FxObjectHandleAlloc2(
          this->m_Globals,
          (unsigned __int64)DependentDevice,
          0xA8uLL,
          a4,
          0LL,
          0,
          FxObjectTypeInternal);
  if ( !v17 )
    return 3221225626LL;
  FxRelatedDevice::FxRelatedDevice((FxRelatedDevice *)v17, DependentDevice, this->m_Globals);
  v19 = (FxObject *)v18;
  if ( !v18 )
    return 3221225626LL;
  v20 = FxTransactionedList::Add(this->m_EjectionDeviceList, this->m_Globals, (FxTransactionedEntry *)(v18 + 104));
  if ( v20 < 0 )
    FxObject::DeleteFromFailedCreate(v19);
  return (unsigned int)v20;
}
