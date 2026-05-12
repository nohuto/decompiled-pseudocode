/*
 * XREFs of RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x140007B60 (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140008324 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     StorPortUnitPoFxD0Completion @ 0x140008588 (StorPortUnitPoFxD0Completion.c)
 *     StorUpdateCrashDumpPowerReady @ 0x14001D620 (StorUpdateCrashDumpPowerReady.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RiDisableDeviceQueueFastPath @ 0x140026CB0 (RiDisableDeviceQueueFastPath.c)
 *     RaUnitUnlockForwardIo @ 0x14002B180 (RaUnitUnlockForwardIo.c)
 *     RaUnitLockForwardIo @ 0x1400301C0 (RaUnitLockForwardIo.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuupd_EtwWriteTransfer @ 0x1400768A0 (McTemplateK0quuupd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrpComplete(char *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v5; // esi
  POWER_STATE v6; // ebx
  struct _DEVICE_OBJECT *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  char *v11; // rcx
  _IO_STACK_LOCATION *v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22; // rdx
  int *Information; // rax
  char v24; // r8
  char *p_SecurityEvaluated; // rax
  char v26; // r11
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  char Flags; // r13
  char LowPart_high; // r12
  char v31; // al
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v33; // rbx
  int v34; // edx
  int v35; // ecx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  char v37; // r15
  _ACCESS_STATE *AccessState; // r9
  unsigned __int8 v39; // r10
  char *v40; // rbx
  unsigned int v41; // r8d
  _IO_SECURITY_CONTEXT *v42; // rax
  __int64 SecurityQos_low; // rax
  unsigned __int64 DesiredAccess; // rdi
  char SecurityQos; // cl
  char v46; // [rsp+60h] [rbp-29h]
  unsigned int v47; // [rsp+64h] [rbp-25h]
  int v48; // [rsp+68h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  __int128 v50; // [rsp+88h] [rbp-1h] BYREF
  __int128 v51; // [rsp+98h] [rbp+Fh] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LOBYTE(v5) = 0;
  Irp->IoStatus.Status = 0;
  v6.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 1);
  *((POWER_STATE *)Context + 137) = v6;
  PoSetPowerState(v7, DevicePowerState, v6);
  if ( v6.SystemState == PowerSystemWorking && Context[504] < 0 )
  {
    RaidResumeUnitQueue((__int64)Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidUnitRestartQueue((__int64)Context, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *((_DWORD *)Context + 137) == 1 )
  {
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(Context) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 0x100) != 0 )
      {
        ++*((_DWORD *)Context + 838);
        if ( !_interlockedbittestandset((volatile signed __int32 *)Context + 128, 1u) )
        {
          WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
          v33 = WorkItem;
          if ( WorkItem )
          {
            RaUnitAcquireRemoveLock((__int64)Context, (__int64)WorkItem, 0);
            IoQueueWorkItemEx(v33, RaidUnitSavePowerCycleCountWorker, DelayedWorkQueue, Context);
          }
        }
        *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) &= ~0x200u;
      }
      if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(Context)
        || (v17 = *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233)),
            (v17 & 1) != 0) )
      {
        if ( Context[759] )
        {
          Context[759] = 0;
          RaUnitUnlockForwardIo(Context, 2LL);
          RaidUnitRestartQueue((__int64)Context, 0);
        }
      }
      StorPortUnitPoFxD0Completion(v15, v14, v16, Context);
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Context + 3) + 6028LL));
      v20 = *((_QWORD *)Context + 3);
      if ( (*(_BYTE *)(v20 + 110) & 0x40) != 0 )
      {
        LOBYTE(v19) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v20, 0xFFFFFFFFLL, v18, v19);
      }
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
    }
    else if ( Context[759] )
    {
      Context[759] = 0;
      RaUnitUnlockForwardIo(Context, 2LL);
      RaidUnitRestartQueue((__int64)Context, 0);
    }
    if ( *((_DWORD *)Context + 260) )
      StorUpdateCrashDumpPowerReady(*((_QWORD *)Context + 3));
  }
  else
  {
    if ( !Context[759] )
    {
      Context[759] = 1;
      RiDisableDeviceQueueFastPath(Context + 720, 0LL);
      RaUnitLockForwardIo(Context, 2LL);
    }
    if ( *((_DWORD *)Context + 260) )
      StorUpdateCrashDumpPowerReady(*((_QWORD *)Context + 3));
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(Context) )
    {
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)Context + 3) + 6028LL), 1u);
      v21 = *((_QWORD *)Context + 3);
      if ( (*(_BYTE *)(v21 + 110) & 0x40) != 0 && *(_DWORD *)(v21 + 6028) == *(_DWORD *)(v21 + 168) )
      {
        LOBYTE(v9) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v21, 0LL, v8, v9);
      }
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      52LL,
      &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
      Context,
      Irp,
      0);
  }
  if ( StorEtwLoggingEnabled )
  {
    v50 = 0LL;
    IoGetActivityIdIrp(Irp, &v50);
    if ( (byte_140171462 & 0x10) != 0 )
      McTemplateK0quuupd_EtwWriteTransfer(
        v35,
        v34,
        (unsigned int)&v50,
        *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
        Context[104],
        Context[105],
        Context[106],
        (char)Irp);
  }
  v10 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = 0;
  if ( v10 )
    goto LABEL_15;
  v51 = 0LL;
  IoGetActivityIdIrp(Irp, &v51);
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v12->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_15;
    v22 = &EventNonReadWriteRequestComplete;
    goto LABEL_37;
  }
  if ( v12->MajorFunction != 15 )
  {
    if ( v12->MajorFunction != 27 )
      goto LABEL_15;
    if ( v12->MinorFunction == 7 && !v12->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v5 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(
          (_DWORD)v11,
          (_DWORD)v12,
          (unsigned int)&v51,
          (_DWORD)Irp,
          v5,
          Irp->IoStatus.Status);
      }
      goto LABEL_15;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_15;
    v22 = &EventPnpRequestComplete;
LABEL_37:
    McTemplateK0pd_EtwWriteTransfer(v11, v22, &v51, Irp, Irp->IoStatus.Status);
    goto LABEL_15;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_15;
  SecurityContext = v12->Parameters.Create.SecurityContext;
  v37 = 0;
  AccessState = 0LL;
  v39 = 0;
  v26 = 0;
  Flags = 0;
  LowPart_high = 0;
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    SecurityQos = (char)SecurityContext[3].SecurityQos;
    AccessState = SecurityContext[1].AccessState;
    v39 = BYTE3(SecurityContext->AccessState);
    v37 = BYTE4(SecurityContext->SecurityQos);
    if ( BYTE2(SecurityContext->SecurityQos) )
      goto LABEL_15;
LABEL_102:
    LOBYTE(v11) = SecurityQos - 8;
    if ( ((unsigned __int8)v11 & 0x5D) != 0 )
      goto LABEL_15;
    if ( BYTE3(SecurityContext->SecurityQos) == 1 || !AccessState || !v39 )
      goto LABEL_59;
    v24 = 0;
    v11 = (char *)AccessState + v39;
    p_SecurityEvaluated = (char *)&AccessState->SecurityEvaluated;
    if ( (unsigned __int8)((AccessState->OperationID.LowPart & 0x7F) - 114) <= 1u )
    {
      if ( p_SecurityEvaluated > v11 )
      {
LABEL_57:
        if ( v24 )
        {
          LOBYTE(v5) = Flags;
          v31 = LowPart_high;
LABEL_60:
          McTemplateK0pduuuuup_EtwWriteTransfer(
            (_DWORD)v11,
            (_DWORD)SecurityContext,
            (unsigned int)&v51,
            (_DWORD)Irp,
            Irp->IoStatus.Status,
            BYTE3(SecurityContext->SecurityQos),
            v37,
            v26,
            v5,
            v31,
            (char)Irp);
          goto LABEL_15;
        }
LABEL_59:
        v26 = 0;
        v31 = 0;
        goto LABEL_60;
      }
      Flags = BYTE2(AccessState->OperationID.LowPart);
      v26 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
      LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
    }
    else
    {
      if ( p_SecurityEvaluated > v11 )
        goto LABEL_57;
      v26 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
      v27 = v39;
      if ( (unsigned int)HIBYTE(AccessState->OperationID.HighPart) + 8 <= v39 )
        v27 = HIBYTE(AccessState->OperationID.HighPart) + 8;
      v11 = (char *)&AccessState->Flags + 1;
      v28 = (unsigned __int64)AccessState + v27;
      if ( (unsigned __int64)&AccessState->Flags + 1 <= v28 )
        Flags = AccessState->Flags;
      if ( (unsigned __int64)&AccessState->Flags + 2 <= v28 )
        LowPart_high = *v11;
    }
    v24 = 1;
    goto LABEL_57;
  }
  v40 = 0LL;
  v46 = 0;
  if ( SecurityContext->FullCreateOptions )
    goto LABEL_15;
  LODWORD(v11) = 0;
  v48 = 0;
  v47 = (unsigned int)SecurityContext[2].AccessState;
  if ( !v47 )
    goto LABEL_99;
  v41 = (unsigned int)SecurityContext[2].AccessState;
  v42 = SecurityContext + 5;
  *(_QWORD *)&v50 = SecurityContext + 5;
  while ( 1 )
  {
    SecurityQos_low = LODWORD(v42->SecurityQos);
    if ( (unsigned int)SecurityQos_low >= 0x80 )
    {
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( (unsigned int)SecurityQos_low < (unsigned int)DesiredAccess )
        break;
    }
LABEL_92:
    LODWORD(v11) = (_DWORD)v11 + 1;
    v42 = (_IO_SECURITY_CONTEXT *)(v50 + 4);
    v48 = (int)v11;
    *(_QWORD *)&v50 = v50 + 4;
    if ( (unsigned int)v11 >= v41 )
      goto LABEL_99;
  }
  if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) != 64 )
  {
    LODWORD(v11) = *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) - 65;
    if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) == 65 )
    {
      LODWORD(v11) = SecurityQos_low + 56;
      if ( SecurityQos_low + 56 <= DesiredAccess )
      {
        v46 = 1;
        if ( *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 2) )
          v40 = (char *)&SecurityContext[1] + SecurityQos_low;
        v37 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low);
        AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + SecurityQos_low);
        v39 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 1);
      }
    }
    else if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) == 66 )
    {
      LODWORD(v11) = SecurityQos_low + 40;
      if ( SecurityQos_low + 40 <= DesiredAccess )
      {
        if ( *(_DWORD *)((char *)&SecurityContext->AccessState + SecurityQos_low + 4) )
          v40 = (char *)&SecurityContext[1].AccessState + SecurityQos_low;
        AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + SecurityQos_low);
        goto LABEL_98;
      }
    }
    goto LABEL_90;
  }
  LODWORD(v11) = SecurityQos_low + 40;
  if ( SecurityQos_low + 40 > DesiredAccess )
  {
LABEL_90:
    if ( v46 )
      goto LABEL_99;
    LODWORD(v11) = v48;
    v41 = v47;
    goto LABEL_92;
  }
  if ( *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 2) )
    v40 = (char *)&SecurityContext[1] + SecurityQos_low;
  AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + SecurityQos_low);
LABEL_98:
  v39 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 1);
  v37 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low);
LABEL_99:
  if ( v40 )
  {
    SecurityQos = *v40;
    goto LABEL_102;
  }
LABEL_15:
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
