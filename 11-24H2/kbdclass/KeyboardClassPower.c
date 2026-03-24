/*
 * XREFs of KeyboardClassPower @ 0x1C00031A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0002F10 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqsd @ 0x1C00037A0 (WPP_RECORDER_SF_qqsd.c)
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0003960 (KeyboardClassCheckWaitWakeEnabled.c)
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C0010BB0 (KeyboardClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall KeyboardClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v4; // rsi
  char v5; // r13
  char v6; // r12
  ULONG Options; // r15d
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
  KIRQL v22; // al
  NTSTATUS v23; // ebx
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
        goto LABEL_13;
      if ( (int)LowPart < 5 && (int)LowPart > *(_DWORD *)(v4 + 288) )
      {
        v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
        if ( *(_QWORD *)(v4 + 296) && !*(_BYTE *)(v4 + 304) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v24);
          v14 = -1073741101;
          v16 = 0;
          a2->IoStatus.Status = -1073741101;
          goto LABEL_21;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v24);
      }
      v14 = 0;
      a2->IoStatus.Status = 0;
      v16 = 0;
LABEL_21:
      if ( v14 < 0 )
      {
LABEL_22:
        a2->IoStatus.Status = v14;
        PoStartNextPowerIrp(a2);
        IofCompleteRequest(a2, 0);
        goto LABEL_23;
      }
      if ( !v16 )
        goto LABEL_13;
LABEL_27:
      IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
      v18 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
      *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v18->Parameters.SetQuota + 6);
      v18[-1].FileObject = v18->FileObject;
      v18[-1].Control = 0;
      v19 = a2->Tail.Overlay.CurrentStackLocation;
      v19[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KeyboardClassPowerComplete;
      v19[-1].Context = 0LL;
      v19[-1].Control = -32;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      v14 = 259;
LABEL_23:
      if ( !v6 )
        return (unsigned int)v14;
LABEL_24:
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
      return (unsigned int)v14;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, v9, 5, 97);
    }
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
    if ( *(_QWORD *)(v4 + 296) )
    {
      *(_QWORD *)(v4 + 312) = a2;
    }
    else
    {
      *(_QWORD *)(v4 + 296) = a2;
      *(_BYTE *)(v4 + 304) = 0;
      if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v4 + 320), 0) - 1) > 1 )
      {
        v14 = 0;
        v16 = 1;
        goto LABEL_20;
      }
    }
    v16 = 0;
    v14 = -1073741436;
LABEL_20:
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v15);
    v6 = v16;
    goto LABEL_21;
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
    if ( Options != 1 )
    {
LABEL_13:
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v14 = PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      goto LABEL_23;
    }
    a2->IoStatus.Status = 0;
    if ( *(_DWORD *)(v4 + 188) < (int)LowPart )
    {
      PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, (POWER_STATE)LowPart);
      *(_DWORD *)(v4 + 188) = LowPart;
      goto LABEL_13;
    }
    if ( *(_DWORD *)(v4 + 188) <= (int)LowPart )
      goto LABEL_13;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v4 + 192) >= (int)LowPart )
  {
    if ( *(_DWORD *)(v4 + 192) <= (int)LowPart )
    {
      if ( (_DWORD)LowPart == 1 && *(int *)(v4 + 284) > 1 && *(int *)(v4 + 288) > 1 )
      {
        v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
        if ( !*(_QWORD *)(v4 + 296) || *(_BYTE *)(v4 + 304) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v22);
          if ( (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(v4) )
            KeyboardClassCreateWaitWakeIrp((PVOID)v4);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v22);
        }
      }
      a2->IoStatus.Status = 0;
      goto LABEL_13;
    }
    a2->IoStatus.Status = 0;
    goto LABEL_27;
  }
  v14 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v14 < 0 )
    goto LABEL_22;
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
  if ( !*(_QWORD *)(v4 + 296) || *(_BYTE *)(v4 + 304) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v20);
    goto LABEL_48;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v20);
  if ( (int)LowPart >= 5 )
  {
LABEL_48:
    v21.SystemState = PowerSystemSleeping3;
    goto LABEL_49;
  }
  v21.SystemState = *(SYSTEM_POWER_STATE *)(v4 + 4 * LowPart + 264);
LABEL_49:
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v23 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)v4, 2u, v21, KeyboardClassPoRequestComplete, a2, 0LL);
  if ( v23 >= 0 )
  {
    v14 = 259;
    goto LABEL_24;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  PoStartNextPowerIrp(a2);
  a2->IoStatus.Status = v23;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return 259LL;
}
