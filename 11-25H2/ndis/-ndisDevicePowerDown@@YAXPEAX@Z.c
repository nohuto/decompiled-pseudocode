/*
 * XREFs of ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1401812C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054F10 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140055260 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x1400575D0 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1400578C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059BB0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059C40 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x14007CDE0 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAFC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x14015D720 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x140160C40 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14016BBB0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C6F0 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140170630 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140174190 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDevicePowerDown(_QWORD *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r12
  int v2; // r13d
  _IRP *v4; // r14
  _IRP *v5; // rbx
  int v6; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int LowPart; // esi
  __int64 v9; // rcx
  unsigned int v10; // eax
  KIRQL v11; // dl
  int v12; // eax
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  enum _DEVICE_POWER_STATE v17; // ebx
  __int64 v18; // rcx
  int v19; // edx
  int SetMiniportDeviceState; // esi
  __int64 v21; // rcx
  int v22; // edx
  unsigned __int8 v23; // al
  KIRQL v24; // dl
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rax
  struct _GUID *v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+38h] [rbp-D0h]
  __int64 v30; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v31[4]; // [rsp+58h] [rbp-B0h] BYREF
  int Status; // [rsp+5Ch] [rbp-ACh]
  char v33[160]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v35; // [rsp+178h] [rbp+70h] BYREF
  int v36; // [rsp+180h] [rbp+78h]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)(a1 - 678);
  v2 = 0;
  v35 = 0LL;
  v36 = 0;
  v31[0] = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      82,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (_BYTE)a1 - 48);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (*((_DWORD *)a1 - 1326) & 0x80u) != 0 )
  {
    v5 = 0LL;
    Status = 0;
    a1[4] = 0LL;
    LowPart = 4;
    goto LABEL_5;
  }
  v4 = (_IRP *)a1[4];
  v5 = v4;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  Status = v4->IoStatus.Status;
  v6 = Status;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  a1[4] = 0LL;
  if ( v6 >= 0 )
  {
LABEL_5:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x53u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v1,
        LowPart);
    NDIS_COUNT_POWER_TRANSITION(v1, LowPart);
    if ( (byte_140125101 & 8) != 0 )
    {
      LODWORD(v30) = LowPart;
      LODWORD(v29) = 1;
      LODWORD(v28) = *((_DWORD *)a1 - 342);
      McTemplateK0jqxqq_EtwWriteTransfer(
        v9,
        &DevicePowerStateChange,
        (const GUID *)(a1 - 177),
        (__int64)(a1 - 177),
        (__int64)v28,
        *(a1 - 175),
        v29,
        v30);
    }
    v31[0] = KeAcquireSpinLockRaiseToDpc(a1 - 666);
    *(a1 - 613) = KeGetCurrentThread();
    v10 = *((_DWORD *)a1 - 339) & 0xFEFFFFFF;
    *((_DWORD *)a1 - 340) = 5;
    *((_DWORD *)a1 - 339) = v10 | 8;
    if ( ndisMReferenceIfBlock(v1, 0xEu) )
    {
      v16 = *(a1 - 173);
      if ( *(_DWORD *)(v16 + 1112) != 5 )
      {
        *(_DWORD *)(v16 + 1112) = 5;
        v2 = 1;
        *(_DWORD *)(*(a1 - 173) + 1116LL) = *((_DWORD *)a1 - 339);
      }
      ndisMDereferenceIfBlock(v1, MPIFREF_POWERDOWN);
    }
    v11 = v31[0];
    *(a1 - 613) = 0LL;
    KeReleaseSpinLock(a1 - 666, v11);
    if ( v2 )
      ndisNsiSyncMiniportOperStatusNotification(v1);
    v12 = *((_DWORD *)a1 - 1326);
    *((_DWORD *)a1 - 389) = LowPart;
    if ( (v12 & 0x80u) == 0 )
      PoSetPowerState((PDEVICE_OBJECT)*(a1 - 200), DevicePowerState, (POWER_STATE)LowPart);
    v13 = Status;
    goto LABEL_15;
  }
  v13 = v6;
  if ( !ndisIsMiniportStarted(v1) || *((_DWORD *)a1 - 976) != 1 )
    goto LABEL_20;
  if ( (*((_DWORD *)a1 - 1326) & 0x80u) != 0 )
    __int2c();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x54u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v1,
      v4->IoStatus.Status);
  v17 = *((_DWORD *)a1 - 389);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = *((_DWORD *)a1 - 389);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x55u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v1,
      v29);
  }
  NDIS_COUNT_POWER_TRANSITION(v1, *((_DWORD *)a1 - 389));
  if ( (byte_140125101 & 8) != 0 )
  {
    LODWORD(v30) = *((_DWORD *)a1 - 389);
    LODWORD(v29) = 1;
    LODWORD(v28) = *((_DWORD *)a1 - 342);
    McTemplateK0jqxqq_EtwWriteTransfer(
      v18,
      &DevicePowerStateChange,
      (const GUID *)(a1 - 177),
      (__int64)(a1 - 177),
      (__int64)v28,
      *(a1 - 175),
      v29,
      v30);
  }
  if ( (*((_DWORD *)a1 - 1325) & 0x20) != 0 )
  {
    SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(v1, v17, -50265855, 1);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v30) = SetMiniportDeviceState;
      WPP_RECORDER_SF_qLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v19,
        0xEu,
        0x56u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v1,
        v17,
        v30);
    }
  }
  else
  {
    SetMiniportDeviceState = ndisPmInitializeMiniport(v1);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(a1 - 23));
  if ( SetMiniportDeviceState )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        88,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v1);
    if ( (byte_140125102 & 0x40) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v21,
        &PowerDownFailedCannotReinitialize,
        (const GUID *)(a1 - 177),
        (__int64)(a1 - 177),
        *((_DWORD *)a1 - 342),
        *(a1 - 175),
        SetMiniportDeviceState,
        1,
        0);
    if ( ndisMReferenceIfBlock(v1, 0xFu) )
    {
      v27 = *(a1 - 173);
      *(a1 - 170) = 2LL;
      if ( *(_DWORD *)(v27 + 1112) != 2 )
      {
        *(_DWORD *)(v27 + 1112) = 2;
        *(_DWORD *)(*(a1 - 173) + 1116LL) = 0;
        ndisNsiSyncMiniportOperStatusNotification(v1);
        v2 = 1;
      }
      ndisMDereferenceIfBlock(v1, MPIFREF_POWERDOWNFAIL);
    }
    ndisMiniportFatalError(v1, NdisMEventErr_FailedPowerDx);
    if ( (*((_DWORD *)a1 - 1326) & 0x80u) != 0 )
    {
      v13 = -1073741823;
    }
    else
    {
      v4->IoStatus.Status = -1073741823;
      v13 = v6;
    }
    v5 = v4;
  }
  else
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a1 - 38));
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(a1 - 47), DatapathRunning, PauseReason_LowPower) )
    {
      memset(v33, 0, sizeof(v33));
      if ( (unsigned __int8)byte_140126C63 >= 4u )
      {
        ndisGetBindLinkNameForTracing(v1, (struct NDIS_PNPTRACE_LOCALS *)v33);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v22,
            0x1Cu,
            0x57u,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            *(unsigned __int16 **)&v33[8],
            *(_QWORD *)v33);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 - 38));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 - 38), RunSynchronous, 0);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, v31);
    ndisMRestoreOpenHandlers(v1, 4u);
    v23 = ndisIfSetInterfaceState(v1, 1, v31[0]);
    v24 = v31[0];
    v2 = v23;
    *(a1 - 613) = 0LL;
    KeReleaseSpinLock(a1 - 666, v24);
    _m_prefetchw(a1 - 125);
    v25 = *((_DWORD *)a1 - 250);
    do
    {
      v26 = v25;
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)a1 - 250, v25, v25);
    }
    while ( v26 != v25 );
    if ( (v25 & 0x10) != 0 )
    {
      ndisSetDeviceInterfaceState(v1, 1u);
      _InterlockedAnd((volatile signed __int32 *)a1 - 250, 0xFFFFFFEF);
    }
    ndisNotifyDevicePowerStateChange(v1, (enum _NDIS_DEVICE_POWER_STATE)v17);
    ndisIssueNetEventSetPowerEvent(v1, v17, 1);
    v13 = v6;
    v5 = v4;
  }
LABEL_15:
  v14 = (__int64)a1;
  if ( v2 && ndisIsMiniportStarted(v1) && *((_DWORD *)a1 - 976) == 1 )
  {
    v15 = *(a1 - 173);
    LODWORD(v35) = 786816;
    HIDWORD(v35) = *(_DWORD *)(v15 + 1112);
    v36 = *(_DWORD *)(v15 + 1116);
    StatusIndication.StatusBufferSize = 12;
    StatusIndication.StatusBuffer = &v35;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = v1;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx(v1, &StatusIndication);
  }
LABEL_20:
  *((_DWORD *)a1 - 240) = 65534;
  if ( (byte_140125103 & 4) != 0 )
  {
    LODWORD(v29) = v13;
    LODWORD(v28) = *((_DWORD *)a1 - 342);
    McTemplateK0jqxd_EtwWriteTransfer(
      v14,
      &DevicePowerDownComplete,
      (const GUID *)(a1 - 177),
      (__int64)(a1 - 177),
      (__int64)v28,
      *(a1 - 175),
      v29);
  }
  if ( (*((_DWORD *)a1 - 1326) & 0x80u) == 0 )
    IofCompleteRequest(v5, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      89,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v1);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
}
