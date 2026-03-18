/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14004C950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDevice::DispatchWithLock(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v5; // esi
  _IO_STACK_LOCATION *v6; // rax
  NTSTATUS v7; // eax
  unsigned int v8; // ebp
  __int64 v9; // rsi
  _QWORD *v10; // r8
  _IO_STACK_LOCATION *v11; // rax
  __int64 MajorFunction; // r14
  _QWORD *v13; // rdi
  unsigned __int8 MinorFunction; // bp
  _QWORD *v15; // r10
  unsigned int v16; // r11d
  unsigned int i; // edx
  __int16 v18; // ax
  unsigned __int64 v19; // rcx
  unsigned int v20; // edi
  int v22; // ecx
  __int64 v23; // rcx
  _IO_STACK_LOCATION *v24; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 22 || CurrentStackLocation->MajorFunction == 23 )
    goto LABEL_30;
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
    if ( ((__int64)DeviceObject[1].CurrentIrp & 1) == 0 )
      goto LABEL_12;
    v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v5 >= 0 )
    {
      v6 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v6[-1].MajorFunction = *(_OWORD *)&v6->MajorFunction;
      *(_OWORD *)&v6[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v6->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v6[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v6->Parameters.SetQuota + 6);
      v6[-1].FileObject = v6->FileObject;
      v6[-1].Control = 0;
      if ( IoSetCompletionRoutineEx(
             DeviceObject,
             Irp,
             FxDevice::_CompletionRoutineForRemlockMaintenance,
             DeviceObject,
             1u,
             1u,
             1u) < 0 )
      {
        v24 = Irp->Tail.Overlay.CurrentStackLocation;
        v24[-1].CompletionRoutine = FxDevice::_CompletionRoutineForRemlockMaintenance;
        v24[-1].Context = DeviceObject;
        v24[-1].Control = -32;
      }
      --Irp->CurrentLocation;
      --Irp->Tail.Overlay.CurrentStackLocation;
      goto LABEL_12;
    }
LABEL_31:
    Irp->IoStatus.Status = v5;
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v5;
  }
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
LABEL_30:
    v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v5 >= 0 )
      goto LABEL_12;
    goto LABEL_31;
  }
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
  v8 = v7;
  if ( v7 < 0 )
  {
    Irp->IoStatus.Status = v7;
    IofCompleteRequest(Irp, 0);
    return v8;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
LABEL_12:
  v9 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  v10 = *(_QWORD **)(v9 + 368);
  while ( 1 )
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    if ( v10 == (_QWORD *)(v9 + 368) )
      break;
    MajorFunction = v11->MajorFunction;
    v13 = v10;
    MinorFunction = v11->MinorFunction;
    v10 = (_QWORD *)*v10;
    v15 = &v13[3 * MajorFunction];
    if ( v15[2] )
    {
      v16 = *((_DWORD *)v15 + 6);
      if ( !v16 )
      {
LABEL_20:
        v18 = *(_WORD *)(v9 + 10);
        v19 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( *((_BYTE *)v13 + 688) )
        {
          if ( !v18 )
            v19 = 0LL;
        }
        else if ( !v18 )
        {
          v19 = 0LL;
        }
        v20 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v15[2])(v19, Irp, v10);
        if ( (_DWORD)MajorFunction == 22
          || (_DWORD)MajorFunction == 23
          || (_DWORD)MajorFunction == 27 && MinorFunction != 2 )
        {
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v9 + 144) + 336LL), Irp, 0x20u);
        }
        return v20;
      }
      for ( i = 0; i < v16; ++i )
      {
        if ( *(_BYTE *)(i + v15[4]) == MinorFunction )
          goto LABEL_20;
      }
    }
  }
  v22 = v11->MajorFunction;
  if ( v22 == 15 )
  {
LABEL_28:
    v23 = *(_QWORD *)(v9 + 640);
  }
  else if ( v22 == 16 )
  {
LABEL_33:
    v23 = *(_QWORD *)(v9 + 656);
  }
  else
  {
    switch ( v11->MajorFunction )
    {
      case 0u:
      case 2u:
      case 0x12u:
        goto LABEL_33;
      case 3u:
      case 4u:
      case 0xEu:
        goto LABEL_28;
      case 0x16u:
      case 0x1Bu:
        v23 = *(_QWORD *)(v9 + 648);
        if ( !v23 )
          goto LABEL_36;
        return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v23 + 64LL))(v23, Irp);
      case 0x17u:
        v23 = *(_QWORD *)(v9 + 664);
        return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v23 + 64LL))(v23, Irp);
      default:
LABEL_36:
        v23 = *(_QWORD *)(v9 + 672);
        break;
    }
  }
  return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v23 + 64LL))(v23, Irp);
}
