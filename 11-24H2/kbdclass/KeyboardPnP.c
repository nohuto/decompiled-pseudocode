/*
 * XREFs of KeyboardPnP @ 0x1C0001240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqc @ 0x1C0001790 (WPP_RECORDER_SF_qqc.c)
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C0001B70 (KeyboardClassCancelPendingIrpLeds.c)
 *     KeyboardClassRemoveDevice @ 0x1C0001C50 (KeyboardClassRemoveDevice.c)
 *     KeyboardStart @ 0x1C0001F70 (KeyboardStart.c)
 *     KbdEnableDisablePort @ 0x1C000F5E0 (KbdEnableDisablePort.c)
 *     KeyboardSendIrpSynchronously @ 0x1C000F9C0 (KeyboardSendIrpSynchronously.c)
 */

__int64 __fastcall KeyboardPnP(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r15d
  struct _IO_STACK_LOCATION *v11; // rax
  unsigned int v12; // edi
  bool v14; // zf
  struct _IO_STACK_LOCATION *v15; // rax
  unsigned int v16; // ebx
  PIO_WORKITEM *Pool2; // r15
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v19; // eax
  struct _IO_STACK_LOCATION *v20; // rax
  struct _IO_STACK_LOCATION *v21; // rax
  char v22; // di
  char *v23; // r15
  void *v24; // rbp
  ULONG RemlockSize; // [rsp+20h] [rbp-48h]
  _QWORD v26[5]; // [rsp+40h] [rbp-28h] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( *((_BYTE *)DeviceExtension + 64) )
  {
    v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, File, 1u, 0x20u);
    v10 = v6;
    if ( v6 < 0 )
    {
      Irp->IoStatus.Status = v6;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v10;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqc(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          v8,
          v9,
          RemlockSize,
          (char)DeviceObject,
          (char)Irp,
          CurrentStackLocation->MinorFunction);
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        KeyboardClassCancelPendingIrpLeds(DeviceExtension);
        KeyboardClassRemoveDevice(DeviceExtension);
        IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
        v15 = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
        *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v15[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v15->Parameters.SetQuota + 6);
        v15[-1].FileObject = v15->FileObject;
        v15[-1].Control = 0;
        v16 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
        {
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 1 )
          {
            LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
            if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
            {
              ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
              WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
            }
          }
          else
          {
            *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49] + 19) = 1;
            *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49]) = 0uLL;
          }
        }
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
        RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 22));
        ExFreePoolWithTag(*((PVOID *)DeviceExtension + 13), 0);
        IoDeleteDevice(DeviceObject);
        return v16;
      }
      else
      {
        switch ( CurrentStackLocation->MinorFunction )
        {
          case 0u:
            Pool2 = (PIO_WORKITEM *)ExAllocatePool2(64LL, 16LL, 1130652235LL);
            if ( !Pool2 )
              goto LABEL_20;
            WorkItem = IoAllocateWorkItem(DeviceObject);
            *Pool2 = WorkItem;
            if ( WorkItem )
            {
              Pool2[1] = (PIO_WORKITEM)Irp;
              IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, KeyboardStartWorker, File, 1u, 0x20u);
              v20 = Irp->Tail.Overlay.CurrentStackLocation;
              v12 = 259;
              *(_OWORD *)&v20[-1].MajorFunction = *(_OWORD *)&v20->MajorFunction;
              *(_OWORD *)&v20[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v20->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v20[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v20->Parameters.SetQuota + 6);
              v20[-1].FileObject = v20->FileObject;
              v20[-1].Control = 0;
              v21 = Irp->Tail.Overlay.CurrentStackLocation;
              v21[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&KeyboardPnpStartCompletion;
              v21[-1].Context = Pool2;
              v21[-1].Control = -32;
              Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
              IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
            }
            else
            {
              ExFreePoolWithTag(Pool2, 0);
LABEL_20:
              KeyboardSendIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
              v26[1] = Irp;
              v26[0] = 0LL;
              v19 = KeyboardStart(DeviceObject, v26);
              Irp->IoStatus.Status = v19;
              Irp->IoStatus.Information = 0LL;
              v12 = v19;
              IofCompleteRequest(Irp, 0);
            }
            break;
          case 4u:
            if ( *((_BYTE *)DeviceExtension + 65) )
            {
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                && SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > 0 )
              {
                v22 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49] + 16);
                v23 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49];
                v23[16] = 0;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                if ( v22 )
                {
                  v24 = (void *)_InterlockedExchange64((volatile __int64 *)DeviceExtension + 41, 0LL);
                  if ( v24 )
                    IoUnregisterPlugPlayNotification(v24);
                  KbdEnableDisablePort(0LL, Irp, DeviceExtension, v23);
                }
              }
              else
              {
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
            }
            *((_BYTE *)DeviceExtension + 65) = 0;
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            goto LABEL_8;
          case 0x14u:
            if ( !*((_BYTE *)DeviceExtension + 66) )
            {
              LODWORD(Irp->IoStatus.Information) |= 0x20u;
              Irp->IoStatus.Status = 0;
            }
            goto LABEL_7;
          case 0x17u:
            KeyboardClassCancelPendingIrpLeds(DeviceExtension);
            v14 = *((_QWORD *)DeviceExtension + 12) == 0LL;
            *((_BYTE *)DeviceExtension + 363) = 1;
            if ( !v14 )
              IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 22), 0);
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            goto LABEL_8;
          default:
LABEL_7:
            v11 = Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
            *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v11[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v11->Parameters.SetQuota + 6);
            v11[-1].FileObject = v11->FileObject;
            v11[-1].Control = 0;
LABEL_8:
            v12 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
            break;
        }
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
        return v12;
      }
    }
  }
  else
  {
    Irp->IoStatus.Status = -1073741637;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return 3221225659LL;
  }
}
