/*
 * XREFs of KeyboardClassPowerComplete @ 0x1C00018B0
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C0001B70 (KeyboardClassCancelPendingIrpLeds.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0002F10 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall KeyboardClassPowerComplete(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v3; // rsi
  char v6; // bl
  UCHAR MinorFunction; // al
  ULONG Options; // edx
  POWER_STATE v9; // edi
  PIRP Irp; // rax
  IRP *v11; // rdi
  struct _FILE_OBJECT *FileObject; // r8
  __int64 v13; // rdx
  struct _IO_STACK_LOCATION *v14; // rax
  struct _IO_STACK_LOCATION *v15; // rax
  struct _DEVICE_OBJECT *v17; // rcx
  NTSTATUS v18; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = *(_QWORD *)(a1 + 64);
  v6 = 1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v9.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( MinorFunction )
  {
    if ( MinorFunction == 2 )
    {
      if ( Options )
      {
        if ( Options == 1 )
        {
          PoSetPowerState(*(PDEVICE_OBJECT *)v3, DevicePowerState, v9);
          *(POWER_STATE *)(v3 + 188) = v9;
          Irp = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
          v11 = Irp;
          if ( Irp )
          {
            if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), Irp, File, 1u, 0x20u) < 0 )
            {
              IoFreeIrp(v11);
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 100);
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                v13 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL;
                FileObject = (struct _FILE_OBJECT *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                                    + 3 * *(unsigned int *)(v3 + 196));
              }
              else
              {
                FileObject = CurrentStackLocation->FileObject;
                v13 = v3 + 156;
              }
              v14 = v11->Tail.Overlay.CurrentStackLocation;
              v14[-1].MajorFunction = 15;
              v14[-1].Parameters.Read.ByteOffset.LowPart = 720904;
              v14[-1].Parameters.Create.Options = 4;
              v14[-1].Parameters.Read.Length = 0;
              v14[-1].FileObject = FileObject;
              v15 = v11->Tail.Overlay.CurrentStackLocation;
              v15[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KeyboardClassSetLedsComplete;
              v15[-1].Context = (PVOID)v3;
              v15[-1].Control = -32;
              v11->AssociatedIrp.MasterIrp = (struct _IRP *)v13;
              KeyboardClassCancelPendingIrpLeds(v3);
              _InterlockedExchange64((volatile __int64 *)(v3 + 368), (__int64)v11);
              _InterlockedExchange((volatile __int32 *)(v3 + 376), 1);
              IofCallDriver(*(PDEVICE_OBJECT *)(v3 + 16), v11);
            }
          }
        }
      }
      else
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v3, SystemPowerState, v9);
        v17 = *(struct _DEVICE_OBJECT **)v3;
        *(POWER_STATE *)(v3 + 192) = v9;
        v18 = PoRequestPowerIrp(v17, 2u, (POWER_STATE)1, KeyboardClassPoRequestComplete, 0LL, 0LL);
        if ( v18 < 0 )
          a2->IoStatus.Status = v18;
      }
      PoStartNextPowerIrp(a2);
      goto LABEL_16;
    }
LABEL_15:
    PoStartNextPowerIrp(a2);
    if ( !v6 )
      return 0LL;
LABEL_16:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, 0x20u);
    return 0LL;
  }
  v6 = 0;
  if ( a2 != *(IRP **)(v3 + 296) || _InterlockedExchange((volatile __int32 *)(v3 + 320), 3) != 1 )
    goto LABEL_15;
  PoStartNextPowerIrp(a2);
  return 3221225494LL;
}
