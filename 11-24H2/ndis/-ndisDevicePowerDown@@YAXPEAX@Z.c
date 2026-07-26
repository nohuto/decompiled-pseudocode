/*
 * XREFs of ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140180650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140033A10 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140034E10 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x140035510 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisMIndicateStatusEx @ 0x14004E030 (NdisMIndicateStatusEx.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400521B0 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400618B0 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E34 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401543D0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14015EC60 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160690 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x140161570 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401648B0 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14016B4A0 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDevicePowerDown(_QWORD *a1)
{
  int v1; // ebx
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  unsigned int *p_Flags; // r12
  _IRP *v5; // r15
  _IRP *v6; // r14
  int Status; // r12d
  int LowPart; // esi
  __int64 v9; // rcx
  unsigned int *v10; // r13
  enum _DEVICE_POWER_STATE CurrentDevicePowerState; // ebx
  __int64 v12; // rcx
  int SetMiniportDeviceState; // eax
  int v14; // edx
  int v15; // esi
  __int64 v16; // rcx
  int v17; // edx
  KIRQL v18; // al
  unsigned __int8 v19; // si
  signed __int32 InterlockedFlags; // eax
  signed __int32 v21; // ett
  int v22; // r15d
  _NDIS_IF_BLOCK *v23; // rax
  __int64 v24; // rcx
  KIRQL v25; // al
  KIRQL v26; // r13
  unsigned int v27; // ecx
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NDIS_IF_BLOCK *v29; // rcx
  struct _GUID *v30; // [rsp+28h] [rbp-E0h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  int v33; // [rsp+58h] [rbp-B0h]
  int v34; // [rsp+58h] [rbp-B0h]
  char v35[160]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v37; // [rsp+178h] [rbp+70h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+180h] [rbp+78h]

  v1 = 0;
  v37 = 0LL;
  v2 = (struct _NDIS_MINIPORT_BLOCK *)(a1 - 678);
  ifOperStatusFlags = 0;
  v33 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      82,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (_BYTE)a1 - 48);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  p_Flags = &v2->Flags;
  if ( (mem::ReadNoFence<unsigned long,void>(&v2->Flags) & 0x80u) != 0LL )
  {
    v6 = 0LL;
    a1[4] = 0LL;
    LowPart = 4;
LABEL_42:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x53u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v2,
        LowPart);
    NDIS_COUNT_POWER_TRANSITION(v2, LowPart);
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v32) = LowPart;
      LODWORD(v31) = 1;
      LODWORD(v30) = v2->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v24,
        (__int64)&DevicePowerStateChange,
        (__int64)&v2->InterfaceGuid,
        (__int64)&v2->InterfaceGuid,
        (__int64)v30,
        v2->NetLuid.Value,
        v31,
        v32);
    }
    v25 = KeAcquireSpinLockRaiseToDpc(&v2->Lock);
    v2->MiniportThread = KeGetCurrentThread();
    v26 = v25;
    v27 = v2->OperStatusFlags & 0xFEFFFFFF;
    v2->OperStatus = NET_IF_OPER_STATUS_DORMANT;
    v2->OperStatusFlags = v27 | 8;
    if ( ndisMReferenceIfBlock(v2, 0xEu) )
    {
      IfBlock = v2->IfBlock;
      if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DORMANT )
      {
        IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DORMANT;
        v33 = 1;
        v2->IfBlock->ifOperStatusFlags = v2->OperStatusFlags;
      }
      ndisMDereferenceIfBlock(v2, 0xEu);
    }
    v2->MiniportThread = 0LL;
    KeReleaseSpinLock(&v2->Lock, v26);
    v22 = v33;
    if ( v33 )
      ndisNsiSyncMiniportOperStatusNotification(v2);
    v2->CurrentDevicePowerState = LowPart;
    if ( (mem::ReadNoFence<unsigned long,void>(p_Flags) & 0x80u) == 0LL )
      PoSetPowerState(v2->DeviceObject, DevicePowerState, (POWER_STATE)LowPart);
    v10 = &v2->Flags;
    goto LABEL_55;
  }
  v5 = (_IRP *)a1[4];
  v6 = v5;
  Status = v5->IoStatus.Status;
  LowPart = v5->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  a1[4] = 0LL;
  v1 = Status;
  if ( Status >= 0 )
  {
    p_Flags = &v2->Flags;
    goto LABEL_42;
  }
  v10 = &v2->Flags;
  if ( !ndisIsMiniportStarted(v2) || v2->PnPDeviceState != NdisPnPDeviceStarted )
    goto LABEL_59;
  if ( (mem::ReadNoFence<unsigned long,void>(&v2->Flags) & 0x80u) != 0LL )
    NT_ASSERT("0");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x54u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v2,
      v5->IoStatus.Status);
  CurrentDevicePowerState = v2->CurrentDevicePowerState;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v31) = v2->CurrentDevicePowerState;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x55u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v2,
      v31);
  }
  NDIS_COUNT_POWER_TRANSITION(v2, v2->CurrentDevicePowerState);
  if ( (byte_14011B101 & 8) != 0 )
  {
    LODWORD(v32) = v2->CurrentDevicePowerState;
    LODWORD(v31) = 1;
    LODWORD(v30) = v2->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v12,
      (__int64)&DevicePowerStateChange,
      (__int64)&v2->InterfaceGuid,
      (__int64)&v2->InterfaceGuid,
      (__int64)v30,
      v2->NetLuid.Value,
      v31,
      v32);
  }
  if ( (v2->PnPFlags & 0x20) != 0 )
  {
    SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(v2, CurrentDevicePowerState, -50265855, 1);
    v15 = SetMiniportDeviceState;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v32) = SetMiniportDeviceState;
      WPP_RECORDER_SF_qLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        0xEu,
        0x56u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v2,
        CurrentDevicePowerState,
        v32);
    }
  }
  else
  {
    v15 = ndisPmInitializeMiniport(v2);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&v2->MiniportOwner);
  if ( v15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        88,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v2);
    if ( (byte_14011B102 & 0x40) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v16,
        &PowerDownFailedCannotReinitialize,
        &v2->InterfaceGuid,
        (__int64)&v2->InterfaceGuid,
        v2->IfIndex,
        v2->NetLuid.Value,
        v15,
        1,
        0);
    if ( ndisMReferenceIfBlock(v2, 0xFu) )
    {
      v23 = v2->IfBlock;
      *(_QWORD *)&v2->OperStatus = 2LL;
      if ( v23->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
      {
        v23->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
        v2->IfBlock->ifOperStatusFlags = 0;
        ndisNsiSyncMiniportOperStatusNotification(v2);
        v33 = 1;
      }
      ndisMDereferenceIfBlock(v2, 0xFu);
    }
    ndisMiniportFatalError(v2, NdisMEventErr_FailedPowerDx);
    if ( (mem::ReadNoFence<unsigned long,void>(&v2->Flags) & 0x80u) != 0LL )
    {
      v6 = v5;
      v1 = -1073741823;
      v22 = v33;
    }
    else
    {
      v5->IoStatus.Status = -1073741823;
      v6 = v5;
      v22 = v33;
      v1 = Status;
    }
  }
  else
  {
    Ndis::BindEngine::BeginPolicyUpdates(&v2->BindEngine);
    if ( Ndis::BindState::SetPause(&v2->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
    {
      memset(v35, 0, sizeof(v35));
      if ( (unsigned __int8)byte_14011CBA3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(v2, (struct NDIS_PNPTRACE_LOCALS *)v35);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            0x1Cu,
            0x57u,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            *(unsigned __int16 **)&v35[8],
            *(_QWORD *)v35);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&v2->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&v2->BindEngine, RunSynchronous, 0);
    v18 = KeAcquireSpinLockRaiseToDpc(&v2->Lock);
    v2->MiniportThread = KeGetCurrentThread();
    v19 = v18;
    ndisMRestoreOpenHandlers(v2, 4u);
    v34 = (unsigned __int8)ndisIfSetInterfaceState(v2, 1, v19);
    v2->MiniportThread = 0LL;
    KeReleaseSpinLock(&v2->Lock, v19);
    _m_prefetchw(&v2->InterlockedFlags);
    InterlockedFlags = v2->InterlockedFlags;
    do
    {
      v21 = InterlockedFlags;
      InterlockedFlags = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&v2->InterlockedFlags,
                           InterlockedFlags,
                           InterlockedFlags);
    }
    while ( v21 != InterlockedFlags );
    if ( (InterlockedFlags & 0x10) != 0 )
    {
      ndisSetDeviceInterfaceState(v2, 1u);
      _InterlockedAnd((volatile signed __int32 *)&v2->InterlockedFlags, 0xFFFFFFEF);
    }
    ndisNotifyDevicePowerStateChange(v2, (enum _NDIS_DEVICE_POWER_STATE)CurrentDevicePowerState);
    ndisIssueNetEventSetPowerEvent(v2, CurrentDevicePowerState, 1);
    v6 = v5;
    v1 = Status;
    v22 = v34;
  }
LABEL_55:
  v9 = (__int64)v2;
  if ( v22 && ndisIsMiniportStarted(v2) && v2->PnPDeviceState == NdisPnPDeviceStarted )
  {
    v29 = v2->IfBlock;
    LODWORD(v37) = 786816;
    HIDWORD(v37) = v29->ifOperStatus;
    ifOperStatusFlags = v29->ifOperStatusFlags;
    StatusIndication.StatusBufferSize = 12;
    StatusIndication.StatusBuffer = &v37;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = v2;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx(v2, &StatusIndication);
  }
LABEL_59:
  v2->LastWakeReason = 65534;
  if ( (byte_14011B103 & 4) != 0 )
  {
    LODWORD(v31) = v1;
    LODWORD(v30) = v2->IfIndex;
    McTemplateK0jqxd_EtwWriteTransfer(
      v9,
      (__int64)&DevicePowerDownComplete,
      (__int64)&v2->InterfaceGuid,
      (__int64)&v2->InterfaceGuid,
      (__int64)v30,
      v2->NetLuid.Value,
      v31);
  }
  if ( (mem::ReadNoFence<unsigned long,void>(v10) & 0x80u) == 0LL )
    IofCompleteRequest(v6, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      89,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v2);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
}
