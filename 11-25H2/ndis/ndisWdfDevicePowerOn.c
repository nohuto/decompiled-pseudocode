/*
 * XREFs of ndisWdfDevicePowerOn @ 0x140063BC0
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400837D0 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054F10 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140055260 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059BB0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059C40 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140064100 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x140098730 (ndisWdfMiniportUpdatePowerState.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAFC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x14015D720 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x140160C40 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14016BBB0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140170630 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x14017F110 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 */

void __fastcall ndisWdfDevicePowerOn(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // al
  KIRQL v3; // dl
  char v4; // si
  enum _NDIS_DEVICE_PNP_EVENT v5; // edx
  unsigned int v6; // r9d
  unsigned int InterlockedFlags; // eax
  unsigned int v8; // ett
  __int64 v9; // rcx
  KIRQL v10; // dl
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  KIRQL v12; // cl
  unsigned int FilterPnPFlags; // eax
  int v14; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int ifOperStatusFlags; // eax
  struct _GUID *v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v20[4]; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v21[3]; // [rsp+44h] [rbp-BCh] BYREF
  char v22[160]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v24[4]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v25[4]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 MiniportXmitLinkSpeed; // [rsp+180h] [rbp+80h]
  unsigned __int64 MiniportRcvLinkSpeed; // [rsp+188h] [rbp+88h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions; // [rsp+190h] [rbp+90h]
  unsigned int MiniportAutoNegotiationFlags; // [rsp+194h] [rbp+94h]

  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      13,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)a1);
  if ( (byte_140125101 & 8) != 0 )
  {
    LODWORD(v18) = 65539;
    LODWORD(v17) = a1->IfIndex;
    McTemplateK0jqxd_EtwWriteTransfer(
      (__int64)a1,
      &MiniportPoweringUp,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v17,
      a1->NetLuid.Value,
      v18);
  }
  ndisWdfMiniportUpdatePowerState(a1, 1LL);
  KeSetEvent(&a1->OpenReadyEvent.Event, 0, 0);
  v20[0] = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  ndisMRestoreOpenHandlers(a1, 4u);
  v2 = ndisIfSetInterfaceState(a1, 1, v20[0]);
  v3 = v20[0];
  v4 = v2;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v3);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v8 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v8 != InterlockedFlags );
  if ( (InterlockedFlags & 0x10) != 0 )
  {
    ndisSetDeviceInterfaceState(a1, 1u);
    _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, 0xFFFFFFEF);
  }
  v21[0] = (_BYTE)ndisAcOnLine == 1;
  ndisNotifyMiniports(a1, v5, v21, v6);
  if ( (byte_140125101 & 8) != 0 )
  {
    LODWORD(v19) = 1;
    LODWORD(v18) = 1;
    LODWORD(v17) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v9,
      &DevicePowerStateChange,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v17,
      a1->NetLuid.Value,
      v18,
      v19);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner);
  ndisIssueNetEventSetPowerEvent(a1, PowerDeviceD0, 0);
  ndisNotifyDevicePowerStateChange(a1, NdisDeviceStateD0);
  if ( (a1->PnPFlags & 0x10000000) != 0 && (a1->Flags & 0x20000000) != 0 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, v20);
    while ( a1->LockAcquired )
    {
      v10 = v20[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v10);
      KeStallExecutionProcessor(1u);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, v20);
    }
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    MiniportMediaDuplexState = a1->MiniportMediaDuplexState;
    a1->Flags &= ~0x20000000u;
    StatusIndication.Flags |= 8u;
    v25[2] = MiniportMediaDuplexState;
    MiniportXmitLinkSpeed = a1->MiniportXmitLinkSpeed;
    MiniportRcvLinkSpeed = a1->MiniportRcvLinkSpeed;
    MiniportPauseFunctions = a1->MiniportPauseFunctions;
    MiniportAutoNegotiationFlags = a1->MiniportAutoNegotiationFlags;
    StatusIndication.StatusBufferSize = 40;
    StatusIndication.StatusBuffer = v25;
    v25[3] = 0;
    v25[0] = 2621824;
    v25[1] = 1;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807383;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    v12 = v20[0];
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    if ( v12 != 2 )
      KeLowerIrql(v12);
  }
  ndisSignalD0RequestComplete(a1, 0);
  FilterPnPFlags = a1->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x100) != 0 )
  {
    a1->FilterPnPFlags = FilterPnPFlags & 0xFFFFFEFF;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
    {
      memset(v22, 0, sizeof(v22));
      if ( (unsigned __int8)byte_140126C63 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v22);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v14,
            28,
            14,
            (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
            *(__int64 *)&v22[8],
            v22[0]);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 1);
  }
  if ( !ndisAoAcTest && !ndisAoAcCapable || v4 )
  {
    if ( ndisMReferenceIfBlock(a1, 0xDu) )
    {
      IfBlock = a1->IfBlock;
      v24[0] = 786816;
      v24[1] = IfBlock->ifOperStatus;
      ifOperStatusFlags = IfBlock->ifOperStatusFlags;
      memset(&StatusIndication.Guid, 0, 52);
      v24[2] = ifOperStatusFlags;
      *((_DWORD *)&StatusIndication.Header + 1) = 0;
      StatusIndication.StatusBufferSize = 12;
      memset(&StatusIndication.PortNumber, 0, 32);
      StatusIndication.StatusBuffer = v24;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = a1;
      StatusIndication.StatusCode = 1073807395;
      NdisMIndicateStatusEx(a1, &StatusIndication);
      ndisMDereferenceIfBlock(a1, MPIFREF_DEVPOWERUP);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      15,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)a1);
}
