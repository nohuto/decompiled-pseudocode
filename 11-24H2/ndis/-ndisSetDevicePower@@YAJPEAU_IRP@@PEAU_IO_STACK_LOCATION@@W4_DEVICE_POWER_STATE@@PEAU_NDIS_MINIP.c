/*
 * XREFs of ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140036540
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140049290 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400353F0 (-ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x140035510 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400357B0 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140054980 (WPP_RECORDER_SF_LqZ.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140081000 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401543D0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x140163FC0 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401648B0 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140167DA0 (-ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C530 (-ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181C30 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisSetDevicePower(
        PIRP Irp,
        struct _IO_STACK_LOCATION *a2,
        enum _NDIS_DEVICE_POWER_STATE a3,
        struct _NDIS_MINIPORT_BLOCK *a4)
{
  struct _IO_STACK_LOCATION *v6; // rbp
  struct _NDIS_SELECTIVE_SUSPEND *v8; // r14
  int v9; // edx
  __int64 v10; // rcx
  int SetMiniportDeviceState; // eax
  int v12; // ecx
  int v13; // ebp
  _IO_STACK_LOCATION *v14; // rax
  _IO_STACK_LOCATION *v15; // rax
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v19; // rax
  KIRQL v20; // al
  struct _IO_STACK_LOCATION *v21; // rdx
  KIRQL v22; // al
  unsigned int InterlockedFlags; // eax
  unsigned int v24; // ett
  char v25[8]; // [rsp+38h] [rbp-30h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      100,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a3,
      (char)a4,
      (__int64)a4->pAdapterInstanceName);
  if ( (byte_14011B101 & 8) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD))McTemplateK0jqxqq_EtwWriteTransfer)(
      Irp,
      &MiniportPowerDeviceState,
      &a4->InterfaceGuid,
      &a4->InterfaceGuid,
      a4->IfIndex,
      (_NET_LUID_LH)a4->NetLuid.Value,
      1,
      a3);
  if ( a3 != NdisDeviceStateD3 )
  {
    if ( a3 == NdisDeviceStateD0 )
    {
      if ( a4->AoAc )
        *((_QWORD *)a4->AoAc + 137) = KeQueryUnbiasedInterruptTime();
      _m_prefetchw(&a4->InterlockedFlags);
      if ( (_InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFFD) & 2) != 0 )
      {
        SelectiveSuspend = a4->SelectiveSuspend;
        if ( SelectiveSuspend )
        {
          v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4->SelectiveSuspend);
          if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x120) == 0x20 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v20);
            return ndisSetPowerResume(Irp, v21, a4);
          }
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v20);
        }
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
        *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
        CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
        CurrentStackLocation[-1].Control = 0;
        v19 = Irp->Tail.Overlay.CurrentStackLocation;
        v19[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerOnComplete;
        v19[-1].Context = a4;
        v19[-1].Control = -32;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)a2,
            14,
            101,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a4);
        }
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        IofCallDriver(a4->NextDeviceObject, Irp);
        return 259;
      }
LABEL_25:
      _InterlockedOr((volatile signed __int32 *)&a4->InterlockedFlags, 8u);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Status = 0;
      return IofCallDriver(a4->NextDeviceObject, Irp);
    }
    if ( (unsigned int)(a3 - 2) >= 2 )
    {
      Irp->IoStatus.Status = -1073741811;
      IofCompleteRequest(Irp, 0);
      return -1073741811;
    }
  }
  _m_prefetchw(&a4->InterlockedFlags);
  if ( (_InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFFB) & 4) == 0 )
    goto LABEL_25;
  v8 = a4->SelectiveSuspend;
  if ( v8 )
  {
    v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4->SelectiveSuspend);
    if ( (*((_DWORD *)v8 + 126) & 0x108) == 8 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v8, v22);
      return ndisSetPowerSuspend(Irp, v6, a4);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v8, v22);
  }
  if ( !ndisIsMiniportStarted(a4) || a4->PnPDeviceState != NdisPnPDeviceStarted )
    goto LABEL_18;
  if ( (a4->PnPFlags & 0x800) == 0 )
  {
    KeClearEvent(&a4->OpenReadyEvent.Event);
    ndisPrepForLowPower(a4, a3);
  }
  if ( (a4->PnPFlags & 0x20) == 0 )
  {
    if ( (a4->DriverHandle->Flags & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          14,
          104,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a4);
      }
      if ( (byte_14011B103 & 4) != 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD))McTemplateK0jqxd_EtwWriteTransfer)(
          v10,
          &PowerHaltMiniport,
          &a4->InterfaceGuid,
          &a4->InterfaceGuid,
          a4->IfIndex,
          (_NET_LUID_LH)a4->NetLuid.Value,
          65537);
      if ( (a4->PnPFlags & 0x100) == 0 )
      {
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a4->MiniportOwner);
        ndisPmHaltMiniport(a4);
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&a4->MiniportOwner, 1LL);
      }
    }
    goto LABEL_18;
  }
  ndisCancelWakeUpDpcTimer(a4);
  ndisWaitForResetCompletion(a4);
  if ( (a4->PnPFlags & 0x800) != 0 )
  {
    ndisSetDeviceInterfaceState(a4, 0);
    _InterlockedOr((volatile signed __int32 *)&a4->InterlockedFlags, 0x10u);
  }
  SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a4, (enum _DEVICE_POWER_STATE)a3, -50265855, 1);
  v13 = SetMiniportDeviceState;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v25 = SetMiniportDeviceState;
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xEu,
      0x66u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a4,
      a3,
      *(_QWORD *)v25);
  }
  if ( !v13 )
  {
LABEL_18:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        14,
        105,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a4);
    }
    v14 = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
    *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v14->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&v14[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v14->Parameters.ReadWriteConfig.Length;
    v14[-1].FileObject = v14->FileObject;
    v14[-1].Control = 0;
    v15 = Irp->Tail.Overlay.CurrentStackLocation;
    v15[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerDownComplete;
    v15[-1].Context = a4;
    v15[-1].Control = -32;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IofCallDriver(a4->NextDeviceObject, Irp);
    return 259;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      14,
      103,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a4);
  }
  if ( (byte_14011B103 & 0x40) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      v12,
      (unsigned int)&PowerDownFailed,
      (_DWORD)a4 + 4008,
      (_DWORD)a4 + 4008,
      a4->IfIndex,
      a4->NetLuid.Value,
      v13,
      1,
      0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a4->MiniportOwner);
  _m_prefetchw(&a4->InterlockedFlags);
  InterlockedFlags = a4->InterlockedFlags;
  do
  {
    v24 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a4->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v24 != InterlockedFlags );
  if ( (InterlockedFlags & 0x10) != 0 )
  {
    ndisSetDeviceInterfaceState(a4, 1u);
    _InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFEF);
  }
  Irp->IoStatus.Status = v13;
  IofCompleteRequest(Irp, 0);
  return v13;
}
