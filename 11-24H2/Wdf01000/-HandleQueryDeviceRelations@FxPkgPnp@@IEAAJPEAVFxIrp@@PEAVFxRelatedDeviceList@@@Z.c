/*
 * XREFs of ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x140062AEC
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14002E798 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140062980 (-_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?_ComputeRelationsSize@FxChildList@@SA_KK@Z @ 0x14002F644 (-_ComputeRelationsSize@FxChildList@@SA_KK@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1400314BC (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?Invoke@FxPnpDeviceD0EntryPostInterruptsEnabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1400314E8 (-Invoke@FxPnpDeviceD0EntryPostInterruptsEnabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140031BCC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140031EE8 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryDeviceRelations(FxPkgPnp *this, FxIrp *Irp, FxRelatedDeviceList *List)
{
  __int64 result; // rax
  _IRP *m_Irp; // rax
  unsigned int v8; // r12d
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  WDFDEVICE__ *v12; // rdx
  unsigned int v13; // ebx
  unsigned int *Information; // rdi
  __int64 v15; // rdx
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  _DWORD *Pool2; // rbp
  unsigned int i; // ebx
  unsigned __int8 m_Retries; // bl
  FxDeviceBase *v22; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  bool v25; // bl
  size_t v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  void *v31; // rcx
  DEVICE_RELATION_TYPE Type; // [rsp+98h] [rbp+20h]

  if ( !List )
    return 3221225659LL;
  m_Irp = Irp->m_Irp;
  v8 = 0;
  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  LOWORD(m_Irp) = m_DeviceBase->m_ObjectSize;
  v12 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !(_WORD)m_Irp )
    v12 = 0LL;
  Type = CurrentStackLocation->Parameters.QueryDeviceRelations.Type;
  FxPnpDeviceD0EntryPostInterruptsEnabled::Invoke(&this->m_DeviceRelationsQuery, v12, Type);
  v13 = 0;
  Information = (unsigned int *)Irp->m_Irp->IoStatus.Information;
  FxTransactionedList::LockForEnum(List, m_Globals);
  v15 = 0LL;
  while ( 1 )
  {
    NextEntryLocked = FxTransactionedList::GetNextEntryLocked(
                        List,
                        (FxTransactionedEntry *)((v15 + 104) & -(__int64)(v15 != 0)));
    v15 = (unsigned __int64)&NextEntryLocked[-3].m_TransactionedObject & ((unsigned __int128)-(__int128)(unsigned __int64)NextEntryLocked >> 64);
    if ( !v15 )
      break;
    ++v13;
  }
  if ( v13 )
  {
    if ( Information )
      v13 += *Information;
  }
  else if ( !List->m_NeedReportMissing || Information )
  {
    FxTransactionedList::UnlockFromEnum(List, m_Globals);
    return 3221225659LL;
  }
  v17 = FxChildList::_ComputeRelationsSize(v13);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v17, v18);
  if ( Pool2 )
  {
    if ( Information && *Information )
    {
      v26 = FxChildList::_ComputeRelationsSize(*Information);
      memmove(Pool2, Information, v26);
    }
    v27 = 0LL;
    while ( 1 )
    {
      v28 = (__int64)FxTransactionedList::GetNextEntryLocked(
                       List,
                       (FxTransactionedEntry *)((v27 + 104) & -(__int64)(v27 != 0)));
      v29 = v28 - 104;
      v30 = -v28;
      v27 = v29 & -(__int64)(v30 != 0);
      if ( !v27 )
        break;
      v31 = *(void **)((v29 & -(__int64)(v30 != 0)) + 0x98);
      if ( *(_DWORD *)(v27 + 160) == 1 )
        *(_DWORD *)(v27 + 160) = 2;
      *(_QWORD *)&Pool2[2 * *Pool2 + 2] = v31;
      ObfReferenceObject(v31);
      ++*Pool2;
    }
    List->m_Retries = 0;
    v25 = 0;
  }
  else
  {
    if ( Information )
    {
      for ( i = 0; i < *Information; ++i )
        ObfDereferenceObject(*(PVOID *)&Information[2 * i + 2]);
    }
    ++List->m_Retries;
    v8 = -1073741670;
    m_Retries = List->m_Retries;
    v22 = this->m_DeviceBase;
    m_ObjectSize = v22->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x1Fu, WPP_FxPkgPnp_cpp_Traceguids, _a1, Type, -1073741670);
    v25 = m_Retries < 3u;
  }
  FxTransactionedList::UnlockFromEnum(List, this->m_Globals);
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( v25 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, Type);
  result = v8;
  Irp->m_Irp->IoStatus.Status = v8;
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)Pool2;
  return result;
}
