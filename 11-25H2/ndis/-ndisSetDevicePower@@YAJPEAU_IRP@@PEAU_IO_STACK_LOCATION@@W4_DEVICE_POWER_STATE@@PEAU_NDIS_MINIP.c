/*
 * XREFs of ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056330
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055C40 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400549A0 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140056200 (WPP_RECORDER_SF_LqZ.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057240 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x1400575D0 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1400578C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057AE0 (-ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x14015E040 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x140160C40 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140170630 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140173E80 (-ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140174610 (-ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185920 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisSetDevicePower(
        PIRP Irp,
        struct _IO_STACK_LOCATION *a2,
        __int64 a3,
        struct _NDIS_MINIPORT_BLOCK *a4)
{
  enum _DEVICE_POWER_STATE v5; // edi
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
  struct _GUID *v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+30h] [rbp-38h]

  v5 = (int)a3;
  v6 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      a3,
      0x64u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a3,
      (char)a4,
      &a4->pAdapterInstanceName->Length);
  if ( (byte_140125101 & 8) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD))McTemplateK0jqxqq_EtwWriteTransfer)(
      Irp,
      &MiniportPowerDeviceState,
      &a4->InterfaceGuid,
      &a4->InterfaceGuid,
      a4->IfIndex,
      (_NET_LUID_LH)a4->NetLuid.Value,
      1,
      v5);
  if ( v5 != PowerDeviceD3 )
  {
    if ( v5 == PowerDeviceD0 )
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
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
    if ( (unsigned int)(v5 - 2) >= 2 )
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
    ndisPrepForLowPower(a4, (enum _NDIS_DEVICE_POWER_STATE)v5);
  }
  if ( (a4->PnPFlags & 0x20) == 0 )
  {
    if ( (a4->DriverHandle->Flags & 1) == 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
      if ( (byte_140125103 & 4) != 0 )
      {
        LODWORD(v26) = 65537;
        LODWORD(v25) = a4->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v10,
          &PowerHaltMiniport,
          &a4->InterfaceGuid,
          (__int64)&a4->InterfaceGuid,
          (__int64)v25,
          a4->NetLuid.Value,
          v26);
      }
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
  SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a4, v5, 0xFD010101, 1u);
  v13 = SetMiniportDeviceState;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      14,
      102,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a4,
      v5,
      SetMiniportDeviceState);
  if ( !v13 )
  {
LABEL_18:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
  if ( (byte_140125103 & 0x40) != 0 )
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
