/*
 * XREFs of ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1400127B8
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140011E70 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxIoTargetRemote::GetTargetDeviceRelations(FxIoTargetRemote *this, unsigned __int8 *Close)
{
  _IRP *v3; // rbx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  PIRP Irp; // rax
  PIRP v7; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v9; // rax
  NTSTATUS Status; // edi
  _DEVICE_OBJECT **Information; // rcx
  const void *_a1; // rcx
  _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF
  char v15; // [rsp+58h] [rbp-20h]

  v3 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(this->m_TargetDevice);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v7 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v15 = 0;
    v3 = Irp;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    Irp->IoStatus.Status = -1073741637;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v9 = v3->Tail.Overlay.CurrentStackLocation;
    v15 = 1;
    v9[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
    v9[-1].Context = &Event;
    v9[-1].Control = -32;
    Status = IofCallDriver(AttachedDeviceReference, v3);
    if ( Status == 259 )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
      Status = v7->IoStatus.Status;
    }
    if ( Status >= 0 )
    {
      Information = (_DEVICE_OBJECT **)v7->IoStatus.Information;
      this->m_TargetPdo = Information[1];
      ExFreePoolWithTag(Information, 0);
LABEL_7:
      Status = 0;
      goto LABEL_8;
    }
    if ( Status != -1073741670 )
      goto LABEL_7;
  }
  else
  {
    Status = -1073741670;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1, -1073741670);
  }
  *Close = 1;
LABEL_8:
  ObfDereferenceObject(AttachedDeviceReference);
  if ( v3 )
    IoFreeIrp(v3);
  return (unsigned int)Status;
}
