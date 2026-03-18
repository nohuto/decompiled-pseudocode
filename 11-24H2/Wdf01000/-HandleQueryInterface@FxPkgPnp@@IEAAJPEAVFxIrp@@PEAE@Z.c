/*
 * XREFs of ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x14002FE54
 * Callers:
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14002F4F0 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140063E30 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400050C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     FxIsEqualGuid @ 0x14003167C (FxIsEqualGuid.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x140032070 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140033950 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x140061000 (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140061D04 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x14007DAC0 (-HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x140083920 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x1400842CC (-HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _SINGLE_LIST_ENTRY *v7; // rbx
  _QWORD *QuadPart; // r13
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxCompanionTarget *v11; // rcx
  int Status; // edi
  _FX_DRIVER_GLOBALS *Next; // rdx
  _SINGLE_LIST_ENTRY *i; // r15
  _SINGLE_LIST_ENTRY *v15; // r14
  char v16; // r15
  _IO_SECURITY_CONTEXT *v17; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v20; // rcx
  int v21; // eax
  void (__fastcall *v22)(_QWORD, _IO_SECURITY_CONTEXT *); // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v25; // eax
  _IO_STACK_LOCATION *v26; // rcx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp+20h]

  m_Irp = Irp->m_Irp;
  *CompleteRequest = 0;
  Parameters = 0LL;
  v7 = 0LL;
  QuadPart = 0LL;
  SecurityContext = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( RtlCompareMemory(SecurityContext, &FxPkgPnp::GUID_POWER_THREAD_INTERFACE, 0x10uLL) == 16 )
    return FxPkgPnp::HandleQueryInterfaceForPowerThread(this, Irp, CompleteRequest);
  if ( RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( FxDevice::IsPdo(this->m_Device) )
      return FxPkgPdo::HandleQueryInterfaceForReenumerate((FxPkgPdo *)this, Irp, CompleteRequest);
LABEL_4:
    Status = Irp->m_Irp->IoStatus.Status;
    FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, v10, 0LL);
    for ( i = this->m_QueryInterfaceHead.Next; ; i = i->Next )
    {
      if ( !i )
        goto LABEL_9;
      v15 = i - 5;
      if ( FxIsEqualGuid(
             Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryInterface.InterfaceType,
             (const _GUID *)&i[-5]) )
      {
        break;
      }
    }
    Next = (_FX_DRIVER_GLOBALS *)v15[2].Next;
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( Next )
    {
      if ( LOWORD(Next->Linkage.Flink) > CurrentStackLocation->Parameters.QueryInterface.Size
        || WORD1(Next->Linkage.Flink) > CurrentStackLocation->Parameters.QueryInterface.Version )
      {
        Status = -1073741306;
LABEL_9:
        v16 = 0;
        v15 = 0LL;
        goto LABEL_10;
      }
      if ( !LOBYTE(v15[6].Next) )
        memmove(QuadPart, Next, LOWORD(Next->Linkage.Flink));
    }
    v7 = v15[4].Next;
    Status = 0;
    v16 = BYTE1(v15[6].Next);
LABEL_10:
    FxWaitLockInternal::ReleaseLock(&this->m_QueryInterfaceLock, Next);
    if ( Status < 0 )
    {
      if ( !v15 )
        return Status;
      goto LABEL_21;
    }
    if ( !v15 )
      return Status;
    v17 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( v7 )
    {
      v20 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v20 = 0LL;
      v21 = ((__int64 (__fastcall *)(unsigned __int64, _IO_SECURITY_CONTEXT *, _QWORD *, _NAMED_PIPE_CREATE_PARAMETERS *))v7)(
              v20,
              v17,
              QuadPart,
              Parameters);
      Status = v21;
      if ( v21 < 0 && v21 != -1073741637 )
        goto LABEL_21;
    }
    else
    {
      Status = 0;
    }
    if ( v16 )
    {
      v25 = PnpPassThroughQI(this->m_Device, Irp);
    }
    else
    {
      v22 = (void (__fastcall *)(_QWORD, _IO_SECURITY_CONTEXT *))QuadPart[2];
      if ( v22 )
        v22(QuadPart[1], v17);
      if ( FxDevice::IsPdo(this->m_Device) )
        goto LABEL_21;
      Irp->m_Irp->IoStatus.Status = Status;
      v26 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v26[-1].MajorFunction = *(_OWORD *)&v26->MajorFunction;
      *(_OWORD *)&v26[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v26->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v26[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v26->Parameters.SetQuota + 6);
      v26[-1].FileObject = v26->FileObject;
      v26[-1].Control = 0;
      v25 = FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
    }
    Status = v25;
LABEL_21:
    *CompleteRequest = 1;
    return Status;
  }
  if ( RtlCompareMemory(SecurityContext, &GUID_SECURE_DRIVER_INTERFACE, 0x10uLL) != 16 || !this->m_CompanionTarget )
    goto LABEL_4;
  return FxCompanionTarget::HandleQueryInterfaceForSecureDriver(v11, Irp, CompleteRequest);
}
