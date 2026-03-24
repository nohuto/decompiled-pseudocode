/*
 * XREFs of MousePnP @ 0x1C0002B50
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassRemoveDevice @ 0x1C0003050 (MouseClassRemoveDevice.c)
 *     WPP_RECORDER_SF_qqc @ 0x1C0003210 (WPP_RECORDER_SF_qqc.c)
 *     MouseStart @ 0x1C00034B0 (MouseStart.c)
 *     MouEnableDisablePort @ 0x1C000EFB0 (MouEnableDisablePort.c)
 *     MouseSendIrpSynchronously @ 0x1C000F6A0 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MousePnP(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r15d
  struct _IO_STACK_LOCATION *v11; // rax
  unsigned int v12; // edi
  struct _IO_STACK_LOCATION *v14; // rax
  unsigned int v15; // ebx
  PIO_WORKITEM *Pool2; // r15
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v18; // eax
  struct _IO_STACK_LOCATION *v19; // rax
  struct _IO_STACK_LOCATION *v20; // rax
  char v21; // di
  char *v22; // r15
  void *v23; // rbp
  ULONG RemlockSize; // [rsp+20h] [rbp-48h]
  _QWORD v25[5]; // [rsp+40h] [rbp-28h] BYREF

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
      if ( CurrentStackLocation->MinorFunction == 23 )
      {
        LOBYTE(v7) = 1;
        MouseClassRemoveDevice(DeviceExtension, v7);
LABEL_12:
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
LABEL_8:
        v12 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
      }
      else
      {
        switch ( CurrentStackLocation->MinorFunction )
        {
          case 0u:
            Pool2 = (PIO_WORKITEM *)ExAllocatePool2(64LL, 16LL, 1131769677LL);
            if ( !Pool2 )
              goto LABEL_20;
            WorkItem = IoAllocateWorkItem(DeviceObject);
            *Pool2 = WorkItem;
            if ( WorkItem )
            {
              Pool2[1] = (PIO_WORKITEM)Irp;
              IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, MouseStartWorker, File, 1u, 0x20u);
              v19 = Irp->Tail.Overlay.CurrentStackLocation;
              v12 = 259;
              *(_OWORD *)&v19[-1].MajorFunction = *(_OWORD *)&v19->MajorFunction;
              *(_OWORD *)&v19[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v19->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v19[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v19->Parameters.SetQuota + 6);
              v19[-1].FileObject = v19->FileObject;
              v19[-1].Control = 0;
              v20 = Irp->Tail.Overlay.CurrentStackLocation;
              v20[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&MousePnpStartCompletion;
              v20[-1].Context = Pool2;
              v20[-1].Control = -32;
              Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
              IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
            }
            else
            {
              ExFreePoolWithTag(Pool2, 0);
LABEL_20:
              MouseSendIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
              v25[1] = Irp;
              v25[0] = 0LL;
              v18 = MouseStart(DeviceObject, v25);
              Irp->IoStatus.Status = v18;
              Irp->IoStatus.Information = 0LL;
              v12 = v18;
              IofCompleteRequest(Irp, 0);
            }
            break;
          case 2u:
            MouseClassRemoveDevice(DeviceExtension, 0LL);
            IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
            v14 = Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
            *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v14->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v14[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v14->Parameters.SetQuota + 6);
            v14[-1].FileObject = v14->FileObject;
            v14[-1].Control = 0;
            v15 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
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
                *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45] + 19) = 1;
                *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45]) = 0uLL;
              }
            }
            ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
            RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 22));
            ExFreePoolWithTag(*((PVOID *)DeviceExtension + 13), 0);
            IoDeleteDevice(DeviceObject);
            return v15;
          case 4u:
            if ( *((_BYTE *)DeviceExtension + 65) )
            {
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                && SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > 0 )
              {
                v21 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45] + 16);
                v22 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45];
                v22[16] = 0;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                if ( v21 )
                {
                  v23 = (void *)_InterlockedExchange64((volatile __int64 *)DeviceExtension + 39, 0LL);
                  if ( v23 )
                    IoUnregisterPlugPlayNotification(v23);
                  MouEnableDisablePort(0LL, 0LL, DeviceExtension, v22);
                }
              }
              else
              {
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
            }
            *((_BYTE *)DeviceExtension + 65) = 0;
            goto LABEL_12;
          default:
            v11 = Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
            *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v11[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v11->Parameters.SetQuota + 6);
            v11[-1].FileObject = v11->FileObject;
            v11[-1].Control = 0;
            goto LABEL_8;
        }
      }
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
      return v12;
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
