/*
 * XREFs of MouseClassPower @ 0x1C00010F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqsd @ 0x1C00016E0 (WPP_RECORDER_SF_qqsd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0002630 (WPP_RECORDER_SF_qq.c)
 *     MouseClassCheckWaitWakeEnabled @ 0x1C00037A0 (MouseClassCheckWaitWakeEnabled.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C0010710 (MouseClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall MouseClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v4; // rsi
  char v5; // r13
  char v6; // r15
  ULONG Options; // r12d
  __int64 LowPart; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  UCHAR MinorFunction; // al
  const char *v13; // rax
  NTSTATUS v14; // ebp
  KIRQL v15; // al
  char v16; // bl
  struct _IO_STACK_LOCATION *v18; // rax
  struct _IO_STACK_LOCATION *v19; // rax
  KIRQL v20; // al
  POWER_STATE v21; // r8d
  NTSTATUS v22; // ebx
  KIRQL v23; // al
  KIRQL v24; // al
  int RemlockSize; // [rsp+20h] [rbp-58h]
  NTSTATUS v26; // [rsp+80h] [rbp+8h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  v6 = 1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels || !*(_BYTE *)(v4 + 64) )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  v26 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v26 < 0 )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v26;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v26;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction != 2 )
  {
    if ( MinorFunction )
    {
      if ( MinorFunction != 3 )
        goto LABEL_16;
      if ( (int)LowPart < 5 && (int)LowPart > *(_DWORD *)(v4 + 272) )
      {
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
        if ( *(_QWORD *)(v4 + 280) && !*(_BYTE *)(v4 + 288) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v23);
          v14 = -1073741101;
          v16 = 0;
          a2->IoStatus.Status = -1073741101;
LABEL_23:
          if ( v14 >= 0 )
          {
            if ( !v16 )
              goto LABEL_16;
LABEL_31:
            IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
            v18 = a2->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
            *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v18->Parameters.SetQuota + 6);
            v18[-1].FileObject = v18->FileObject;
            v18[-1].Control = 0;
            v19 = a2->Tail.Overlay.CurrentStackLocation;
            v19[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&MouseClassPowerComplete;
            v19[-1].Context = 0LL;
            v19[-1].Control = -32;
            a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
            v14 = 259;
LABEL_25:
            if ( !v6 )
              return (unsigned int)v14;
LABEL_26:
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
            return (unsigned int)v14;
          }
LABEL_24:
          a2->IoStatus.Status = v14;
          PoStartNextPowerIrp(a2);
          IofCompleteRequest(a2, 0);
          goto LABEL_25;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v23);
      }
      v14 = 0;
      a2->IoStatus.Status = 0;
      v16 = 0;
      goto LABEL_23;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, v9, 5, 91, RemlockSize, v5, (char)a2);
    }
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
    if ( *(_QWORD *)(v4 + 280) )
    {
      *(_QWORD *)(v4 + 296) = a2;
    }
    else
    {
      *(_QWORD *)(v4 + 280) = a2;
      *(_BYTE *)(v4 + 288) = 0;
      if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v4 + 304), 0) - 1) > 1 )
      {
        v14 = 0;
        v16 = 1;
        goto LABEL_22;
      }
    }
    v16 = 0;
    v14 = -1073741436;
LABEL_22:
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v15);
    v6 = v16;
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = "S";
    if ( Options )
      v13 = "D";
    WPP_RECORDER_SF_qqsd(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)"D",
      v10,
      v11,
      RemlockSize,
      v5,
      (char)a2,
      (__int64)v13,
      LowPart - 1);
  }
  if ( Options )
  {
    if ( Options == 1 )
    {
      a2->IoStatus.Status = 0;
      if ( *(_DWORD *)(v4 + 172) < (int)LowPart )
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, (POWER_STATE)LowPart);
        *(_DWORD *)(v4 + 172) = LowPart;
      }
      else if ( *(_DWORD *)(v4 + 172) > (int)LowPart )
      {
        goto LABEL_31;
      }
    }
LABEL_16:
    PoStartNextPowerIrp(a2);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v14 = PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
    goto LABEL_25;
  }
  if ( *(_DWORD *)(v4 + 176) >= (int)LowPart )
  {
    if ( *(_DWORD *)(v4 + 176) <= (int)LowPart )
    {
      if ( (_DWORD)LowPart == 1 && *(int *)(v4 + 268) > 1 && *(int *)(v4 + 272) > 1 )
      {
        v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
        if ( !*(_QWORD *)(v4 + 280) || *(_BYTE *)(v4 + 288) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v24);
          if ( (unsigned __int8)MouseClassCheckWaitWakeEnabled(v4) )
            MouseClassCreateWaitWakeIrp((PVOID)v4);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v24);
        }
      }
      a2->IoStatus.Status = 0;
      goto LABEL_16;
    }
    a2->IoStatus.Status = 0;
    goto LABEL_31;
  }
  v14 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v14 < 0 )
    goto LABEL_24;
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
  if ( *(_QWORD *)(v4 + 280) && !*(_BYTE *)(v4 + 288) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v20);
    if ( (int)LowPart < 5 )
    {
      v21.SystemState = *(SYSTEM_POWER_STATE *)(v4 + 4 * LowPart + 248);
      goto LABEL_40;
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v20);
  }
  v21.SystemState = PowerSystemSleeping3;
LABEL_40:
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v22 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)v4, 2u, v21, MouseClassPoRequestComplete, a2, 0LL);
  if ( v22 >= 0 )
  {
    v14 = 259;
    goto LABEL_26;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  PoStartNextPowerIrp(a2);
  a2->IoStatus.Status = v22;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return 259LL;
}
