/*
 * XREFs of ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
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
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1400397E0 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisMIndicateStatusEx @ 0x14004E030 (NdisMIndicateStatusEx.c)
 *     NdisSetEvent @ 0x140050210 (NdisSetEvent.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400521B0 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140052500 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140052670 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400618B0 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140065D90 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400678A0 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14008CA60 (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A8AF4 (-ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E34 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401543D0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14015EC60 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160690 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x140161570 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401648B0 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14016B4A0 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140175810 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDevicePowerOn(_QWORD *a1, __int16 a2)
{
  char *v2; // rbx
  char v3; // si
  char v4; // r13
  unsigned int *v6; // r14
  __int16 v7; // dx
  unsigned int *v8; // rcx
  _IRP *v9; // r15
  enum _DEVICE_POWER_STATE DeviceState; // r12d
  __int16 v11; // dx
  __int64 v12; // rcx
  _DEVICE_OBJECT *v13; // rcx
  POWER_STATE v14; // r8d
  __int16 v15; // dx
  int v16; // edi
  int v17; // edx
  KIRQL v18; // al
  KIRQL v19; // di
  int v20; // edx
  int SetMiniportDeviceState; // r14d
  KIRQL v22; // al
  KIRQL v23; // di
  KSPIN_LOCK *v24; // rsi
  KIRQL v25; // di
  __int64 v26; // rax
  KIRQL v27; // di
  int v28; // edx
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  __int64 v31; // rcx
  KIRQL v32; // al
  KIRQL v33; // di
  __int64 v34; // rcx
  char No; // al
  KIRQL v36; // si
  unsigned int v37; // eax
  __int16 v38; // dx
  int v39; // eax
  int v40; // edx
  __int64 v41; // rcx
  int v42; // eax
  struct _GUID *v43; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+30h] [rbp-D0h]
  __int64 v45; // [rsp+38h] [rbp-C8h]
  char v46; // [rsp+50h] [rbp-B0h]
  char v47; // [rsp+51h] [rbp-AFh]
  int Status; // [rsp+54h] [rbp-ACh]
  int v49; // [rsp+58h] [rbp-A8h]
  BOOL v50; // [rsp+5Ch] [rbp-A4h] BYREF
  char v51[160]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+100h] [rbp+0h] BYREF
  __int64 v53; // [rsp+170h] [rbp+70h] BYREF
  int v54; // [rsp+178h] [rbp+78h]
  __int128 v55; // [rsp+180h] [rbp+80h] BYREF
  __int128 v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+1A0h] [rbp+A0h]

  v2 = (char *)(a1 - 673);
  v46 = 0;
  v3 = 0;
  v50 = 0;
  v53 = 0LL;
  v4 = 0;
  v54 = 0;
  v57 = 0LL;
  v47 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v49 = 0;
  v55 = 0LL;
  v56 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      67,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v2);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v6 = (unsigned int *)(v2 + 120);
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)v2 + 30) & 0x80u) != 0LL )
  {
    v9 = 0LL;
    Status = 0;
    DeviceState = PowerDeviceD0;
  }
  else
  {
    v9 = (_IRP *)a1[4];
    DeviceState = v9->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.DeviceState;
    Status = v9->IoStatus.Status;
  }
  a1[4] = 0LL;
  if ( *((_DWORD *)v2 + 380) != 1 )
  {
    mem::ReadNoFence<unsigned long,void>(v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        14,
        68,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v2);
    }
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v44) = 65537;
      LODWORD(v43) = *((_DWORD *)v2 + 1014);
      McTemplateK0jqxd_EtwWriteTransfer(
        v12,
        (__int64)&PowerOnMiniportNotStarted,
        (__int64)(v2 + 4008),
        (__int64)(v2 + 4008),
        (__int64)v43,
        *((_QWORD *)v2 + 503),
        v44);
    }
    v13 = (_DEVICE_OBJECT *)*((_QWORD *)v2 + 478);
    v14.SystemState = (_SYSTEM_POWER_STATE)v9->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *((POWER_STATE *)v2 + 967) = v14;
    PoSetPowerState(v13, DevicePowerState, v14);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v2 + 5240));
    ndisScheduleD0CompleteSignalWorkItem((struct _NDIS_MINIPORT_BLOCK *)v2, 0);
    IofCompleteRequest(v9, 0);
LABEL_115:
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v2, 0xCu);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    return;
  }
  if ( (*((_DWORD *)v2 + 31) & 0x10) == 0 )
  {
    v16 = Status;
    if ( Status < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x47u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)v2,
          Status);
      goto LABEL_78;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        72,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v2);
    }
    if ( *((_DWORD *)v2 + 967) == 1 )
    {
      mem::ReadNoFence<unsigned long,void>((unsigned int *)v2 + 30);
      if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) && *((_DWORD *)v2 + 380) == 1 )
      {
        NdisSetEvent((PNDIS_EVENT)(v2 + 3728));
        v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
        *((_QWORD *)v2 + 65) = KeGetCurrentThread();
        v33 = v32;
        ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v2, 4u);
        *((_QWORD *)v2 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v33);
        v16 = Status;
        v3 = 1;
      }
      goto LABEL_78;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        73,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v2);
    }
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v44) = 65538;
      LODWORD(v43) = *((_DWORD *)v2 + 1014);
      McTemplateK0jqxd_EtwWriteTransfer(
        (__int64)v8,
        (__int64)&MiniportPoweringUp,
        (__int64)(v2 + 4008),
        (__int64)(v2 + 4008),
        (__int64)v43,
        *((_QWORD *)v2 + 503),
        v44);
    }
    v17 = *((_DWORD *)v2 + 31);
    if ( (v17 & 0x20) != 0 )
    {
      if ( (ndisAoAcCapable || ndisAoAcTest)
        && ((unsigned __int8)v2[32] > 6u || v2[32] == 6 && (unsigned __int8)v2[33] >= 0x1Eu) )
      {
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
        *((_QWORD *)v2 + 65) = KeGetCurrentThread();
        v19 = v18;
        ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v2, 4u);
        *((_QWORD *)v2 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v19);
        v4 = 1;
      }
      SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(
                                 (struct _NDIS_MINIPORT_BLOCK *)v2,
                                 DeviceState,
                                 -50265855,
                                 1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v20,
          0xEu,
          0x4Au,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)v2,
          DeviceState,
          SetMiniportDeviceState);
      if ( SetMiniportDeviceState )
      {
        if ( v4 )
        {
          v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
          *((_QWORD *)v2 + 65) = KeGetCurrentThread();
          v23 = v22;
          ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v2, 4u);
          *((_QWORD *)v2 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v23);
          v4 = 0;
        }
      }
      else
      {
        *((_DWORD *)v2 + 967) = DeviceState;
      }
      v24 = (KSPIN_LOCK *)(v2 + 96);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
      *((_QWORD *)v2 + 65) = KeGetCurrentThread();
      ndisSetWakeUpTimer((struct _NDIS_MINIPORT_BLOCK *)v2);
      *((_QWORD *)v2 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v25);
      v16 = Status;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)v2 + 470) + 26LL) & 1) != 0 || (v17 & 0x4000) == 0 )
      {
        v24 = (KSPIN_LOCK *)(v2 + 96);
        goto LABEL_58;
      }
      SetMiniportDeviceState = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v2);
      v24 = (KSPIN_LOCK *)(v2 + 96);
    }
    if ( SetMiniportDeviceState )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v44) = SetMiniportDeviceState;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x4Cu,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)v2,
          v44);
      }
      v6 = (unsigned int *)(v2 + 120);
      if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)v2 + 30) & 0x80u) != 0LL )
      {
        v16 = -1073741823;
        Status = -1073741823;
      }
      else
      {
        v9->IoStatus.Status = -1073741823;
      }
      *((_QWORD *)v2 + 508) = 2LL;
      if ( ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v2, 0xCu) )
      {
        v26 = *((_QWORD *)v2 + 505);
        if ( *(_DWORD *)(v26 + 1112) != 2 )
        {
          *(_DWORD *)(v26 + 1112) = 2;
          *(_DWORD *)(*((_QWORD *)v2 + 505) + 1116LL) = 0;
          ndisNsiSyncMiniportOperStatusNotification((struct _NDIS_MINIPORT_BLOCK *)v2);
          v49 = 1;
        }
        ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v2, 0xCu);
        v4 = 0;
        v3 = 0;
        goto LABEL_78;
      }
      goto LABEL_74;
    }
    v6 = (unsigned int *)(v2 + 120);
LABEL_58:
    v47 = 1;
    if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) )
    {
      NdisSetEvent((PNDIS_EVENT)(v2 + 3728));
      v27 = KeAcquireSpinLockRaiseToDpc(v24);
      *((_QWORD *)v2 + 65) = KeGetCurrentThread();
      if ( !v4 )
        ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v2, 4u);
      v49 = (unsigned __int8)ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v2, 1, v27);
      *((_QWORD *)v2 + 65) = 0LL;
      KeReleaseSpinLock(v24, v27);
      _m_prefetchw(v2 + 4424);
      v29 = *((_DWORD *)v2 + 1106);
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange((volatile signed __int32 *)v2 + 1106, v29, v29);
      }
      while ( v30 != v29 );
      if ( (v29 & 0x10) != 0 )
      {
        ndisSetDeviceInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v2, 1u);
        _InterlockedAnd((volatile signed __int32 *)v2 + 1106, 0xFFFFFFEF);
      }
      v46 = 1;
      v50 = (_BYTE)ndisAcOnLine == 1;
      ndisNotifyMiniports((struct _NDIS_MINIPORT_BLOCK *)v2, v28, &v50);
      if ( (unsigned __int8)v2[32] < 6u )
        ndisQueryMediaStatus((struct _NDIS_MINIPORT_BLOCK *)v2);
    }
    *((_DWORD *)v2 + 967) = DeviceState;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v44) = DeviceState;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x4Bu,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v2,
        v44);
    }
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v2, DeviceState);
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v45) = DeviceState;
      LODWORD(v44) = 1;
      LODWORD(v43) = *((_DWORD *)v2 + 1014);
      McTemplateK0jqxqq_EtwWriteTransfer(
        v31,
        (__int64)&DevicePowerStateChange,
        (__int64)(v2 + 4008),
        (__int64)(v2 + 4008),
        (__int64)v43,
        *((_QWORD *)v2 + 503),
        v44,
        v45);
    }
    if ( (mem::ReadNoFence<unsigned long,void>(v6) & 0x80u) == 0LL )
      PoSetPowerState(*((PDEVICE_OBJECT *)v2 + 478), DevicePowerState, (POWER_STATE)DeviceState);
    v16 = Status;
LABEL_74:
    v4 = v46;
    v3 = v46;
LABEL_78:
    if ( (mem::ReadNoFence<unsigned long,void>(v6) & 0x80u) == 0LL )
    {
      v16 = v9->IoStatus.Status;
      Status = v16;
      IofCompleteRequest(v9, 0);
    }
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v44) = v16;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x4Du,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)v2,
          v44);
      }
      if ( (byte_14011B103 & 2) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v34,
          &DevicePowerOnFailed,
          (const GUID *)(v2 + 4008),
          (__int64)(v2 + 4008),
          *((_DWORD *)v2 + 1014),
          *((_QWORD *)v2 + 503),
          v16,
          1,
          0);
      ndisMiniportFatalError((struct _NDIS_MINIPORT_BLOCK *)v2, NdisMEventErr_FailedPowerD0);
    }
    if ( *((int *)v2 + 468) < 0 )
      ndisReturnQueuedLowPowerNbls((struct _NDIS_MINIPORT_BLOCK *)v2, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v2 + 5240));
    if ( v3 )
    {
      No = mem::ReadNoFence<unsigned long,void>(v6);
      ndisIssueNetEventSetPowerEvent((struct _NDIS_MINIPORT_BLOCK *)v2, DeviceState, (No & 0x80) == 0);
      ndisNotifyDevicePowerStateChange((struct _NDIS_MINIPORT_BLOCK *)v2, (enum _NDIS_DEVICE_POWER_STATE)DeviceState);
      if ( (*((_DWORD *)v2 + 31) & 0x10000000) != 0 && (mem::ReadNoFence<unsigned long,void>(v6) & 0x20000000) != 0 )
      {
        v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
        for ( *((_QWORD *)v2 + 65) = KeGetCurrentThread(); v2[89]; *((_QWORD *)v2 + 65) = KeGetCurrentThread() )
        {
          *((_QWORD *)v2 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v36);
          KeStallExecutionProcessor(1u);
          v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
        }
        v2[89] = 1;
        *((_QWORD *)v2 + 233) = KeGetCurrentThread();
        *((_QWORD *)v2 + 65) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v2 + 12);
        _InterlockedAnd((volatile signed __int32 *)v6, 0xDFFFFFFF);
        v37 = *((_DWORD *)v2 + 87);
        StatusIndication.Flags |= 8u;
        *((_QWORD *)&v55 + 1) = v37;
        v56 = *(_OWORD *)(v2 + 2760);
        v57 = *(_QWORD *)(v2 + 812);
        StatusIndication.StatusBufferSize = 40;
        StatusIndication.StatusBuffer = &v55;
        *(_QWORD *)&v55 = 0x100280180LL;
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.SourceHandle = v2;
        StatusIndication.StatusCode = 1073807383;
        NdisMIndicateStatusEx(v2, &StatusIndication);
        v2[89] = 0;
        *((_QWORD *)v2 + 233) = 0LL;
        if ( v36 != 2 )
          KeLowerIrql(v36);
        v16 = Status;
      }
      if ( (mem::ReadNoFence<unsigned long,void>(v6) & 0x20000000) == 0 && v4 )
        ndisSetMediaDisconnectTimer((struct _NDIS_MINIPORT_BLOCK *)v2);
    }
    ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v2, v16);
    ndisMSetMiniportReadyForBinding((struct _NDIS_MINIPORT_BLOCK *)v2, 1, Reason_MiniportLowPower, RunAsynchronous);
    if ( v47 )
    {
      v39 = *((_DWORD *)v2 + 671);
      if ( (v39 & 0x100) != 0 )
      {
        *((_DWORD *)v2 + 671) = v39 & 0xFFFFFEFF;
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5120));
        if ( Ndis::BindState::SetPause((Ndis::BindState *)(v2 + 5048), DatapathRunning, PauseReason_LowPower) )
        {
          memset(v51, 0, sizeof(v51));
          if ( (unsigned __int8)byte_14011CBA3 >= 4u )
          {
            ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v2, (struct NDIS_PNPTRACE_LOCALS *)v51);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v40,
                0x1Cu,
                0x4Eu,
                (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
                *(unsigned __int16 **)&v51[8],
                *(_QWORD *)v51);
          }
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5120));
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v2 + 5120), RunSynchronous, 1);
      }
    }
    if ( (!ndisAoAcCapable && !ndisAoAcTest || v49)
      && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2)
      && *((_DWORD *)v2 + 380) == 1
      && ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v2, 0xDu) )
    {
      v41 = *((_QWORD *)v2 + 505);
      LODWORD(v53) = 786816;
      HIDWORD(v53) = *(_DWORD *)(v41 + 1112);
      v42 = *(_DWORD *)(v41 + 1116);
      memset(&StatusIndication.Guid, 0, 52);
      v54 = v42;
      *((_DWORD *)&StatusIndication.Header + 1) = 0;
      StatusIndication.StatusBufferSize = 12;
      memset(&StatusIndication.PortNumber, 0, 32);
      StatusIndication.StatusBuffer = &v53;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = v2;
      StatusIndication.StatusCode = 1073807395;
      NdisMIndicateStatusEx(v2, &StatusIndication);
      ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v2, 0xDu);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v38) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v38,
        14,
        79,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v2);
    }
    goto LABEL_115;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      69,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v2);
  }
  if ( (byte_14011B101 & 8) != 0 )
  {
    LODWORD(v44) = 65537;
    LODWORD(v43) = *((_DWORD *)v2 + 1014);
    McTemplateK0jqxd_EtwWriteTransfer(
      (__int64)v8,
      (__int64)&PowerOnMiniportRemoved,
      (__int64)(v2 + 4008),
      (__int64)(v2 + 4008),
      (__int64)v43,
      *((_QWORD *)v2 + 503),
      v44);
  }
  IofCompleteRequest(v9, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v2 + 5240));
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v2, 0);
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v2, 0xCu);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      14,
      70,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v2);
  }
}
