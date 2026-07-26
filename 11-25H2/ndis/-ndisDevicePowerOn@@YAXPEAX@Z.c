/*
 * XREFs of ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x14017E5D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003D0B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054F10 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140055260 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x1400575D0 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1400578C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059BB0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059C40 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140064100 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     NdisSetEvent @ 0x14006AA90 (NdisSetEvent.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x14007CDE0 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081E60 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140083280 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140098210 (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B0C64 (-ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAFC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x14015D720 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x14015D7E0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x140160C40 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14016BBB0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C6F0 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140170630 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140174190 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x14017F110 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDevicePowerOn(_QWORD *a1, __int16 a2)
{
  char *v2; // rbx
  int Status; // r14d
  char v4; // r13
  char v5; // si
  __int16 v7; // dx
  __int64 v8; // rcx
  _IRP *v9; // r15
  enum _DEVICE_POWER_STATE DeviceState; // r12d
  int v11; // edx
  int v12; // edx
  int SetMiniportDeviceState; // edi
  KSPIN_LOCK *v14; // rsi
  KIRQL v15; // dl
  __int16 v16; // dx
  int v17; // eax
  unsigned __int8 v18; // al
  KIRQL v19; // dl
  enum _NDIS_DEVICE_PNP_EVENT v20; // edx
  unsigned int v21; // r9d
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  KIRQL v27; // dl
  _DEVICE_OBJECT *v28; // rcx
  POWER_STATE v29; // r8d
  KIRQL v30; // dl
  __int16 v31; // dx
  KIRQL v32; // dl
  KIRQL v33; // dl
  unsigned int v34; // eax
  KIRQL v35; // cl
  int v36; // edx
  struct _GUID *v37; // [rsp+20h] [rbp-E0h]
  __int64 v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v40; // [rsp+50h] [rbp-B0h] BYREF
  char v41; // [rsp+51h] [rbp-AFh]
  char v42; // [rsp+52h] [rbp-AEh]
  int v43; // [rsp+54h] [rbp-ACh]
  BOOL v44; // [rsp+58h] [rbp-A8h] BYREF
  char v45[160]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+100h] [rbp+0h] BYREF
  __int64 v47; // [rsp+170h] [rbp+70h] BYREF
  int v48; // [rsp+178h] [rbp+78h]
  __int128 v49; // [rsp+180h] [rbp+80h] BYREF
  __int128 v50; // [rsp+190h] [rbp+90h]
  __int64 v51; // [rsp+1A0h] [rbp+A0h]

  v2 = (char *)(a1 - 673);
  Status = 0;
  v4 = 0;
  v44 = 0;
  v40 = 0;
  v5 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v43 = 0;
  v47 = 0LL;
  v48 = 0;
  v51 = 0LL;
  v42 = 0;
  v41 = 0;
  v49 = 0LL;
  v50 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
  if ( (*((_DWORD *)v2 + 30) & 0x80u) != 0 )
  {
    v9 = 0LL;
    DeviceState = PowerDeviceD0;
  }
  else
  {
    v9 = (_IRP *)a1[4];
    Status = v9->IoStatus.Status;
    DeviceState = v9->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.DeviceState;
  }
  a1[4] = 0LL;
  if ( *((_DWORD *)v2 + 380) != 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        68,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v2);
    }
    if ( (byte_140125101 & 8) != 0 )
    {
      LODWORD(v38) = 65537;
      LODWORD(v37) = *((_DWORD *)v2 + 1014);
      McTemplateK0jqxd_EtwWriteTransfer(
        v8,
        &PowerOnMiniportNotStarted,
        (const GUID *)(v2 + 4008),
        (__int64)(v2 + 4008),
        (__int64)v37,
        *((_QWORD *)v2 + 503),
        v38);
    }
    v28 = (_DEVICE_OBJECT *)*((_QWORD *)v2 + 478);
    v29.SystemState = (_SYSTEM_POWER_STATE)v9->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *((POWER_STATE *)v2 + 967) = v29;
    PoSetPowerState(v28, DevicePowerState, v29);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v2 + 5240));
    ndisScheduleD0CompleteSignalWorkItem((struct _NDIS_MINIPORT_BLOCK *)v2, 0);
    IofCompleteRequest(v9, 0);
    goto LABEL_43;
  }
  if ( (*((_DWORD *)v2 + 31) & 0x10) == 0 )
  {
    if ( Status < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x47u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)v2,
          Status);
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
      if ( *((_DWORD *)v2 + 967) != 1 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
        if ( (byte_140125101 & 8) != 0 )
        {
          LODWORD(v38) = 65538;
          LODWORD(v37) = *((_DWORD *)v2 + 1014);
          McTemplateK0jqxd_EtwWriteTransfer(
            v8,
            &MiniportPoweringUp,
            (const GUID *)(v2 + 4008),
            (__int64)(v2 + 4008),
            (__int64)v37,
            *((_QWORD *)v2 + 503),
            v38);
        }
        v11 = *((_DWORD *)v2 + 31);
        if ( (v11 & 0x20) != 0 )
        {
          if ( (ndisAoAcCapable || ndisAoAcTest)
            && ((unsigned __int8)v2[32] > 6u || v2[32] == 6 && (unsigned __int8)v2[33] >= 0x1Eu) )
          {
            v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
            *((_QWORD *)v2 + 65) = KeGetCurrentThread();
            ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v2, 4u);
            v27 = v40;
            *((_QWORD *)v2 + 65) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v27);
            v5 = 1;
            v41 = 1;
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(
                                     (struct _NDIS_MINIPORT_BLOCK *)v2,
                                     DeviceState,
                                     -50265855,
                                     1);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v12,
              0xEu,
              0x4Au,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              (char)v2,
              DeviceState,
              SetMiniportDeviceState);
          if ( SetMiniportDeviceState )
          {
            if ( v5 )
            {
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v2, &v40);
              ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v2, 4u);
              v30 = v40;
              *((_QWORD *)v2 + 65) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v30);
              v41 = 0;
            }
          }
          else
          {
            *((_DWORD *)v2 + 967) = DeviceState;
          }
          v14 = (KSPIN_LOCK *)(v2 + 96);
          v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
          *((_QWORD *)v2 + 65) = KeGetCurrentThread();
          ndisSetWakeUpTimer((struct _NDIS_MINIPORT_BLOCK *)v2);
          v15 = v40;
          *((_QWORD *)v2 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v15);
        }
        else
        {
          if ( (*(_BYTE *)(*((_QWORD *)v2 + 470) + 26LL) & 1) != 0 || (v11 & 0x4000) == 0 )
          {
            v14 = (KSPIN_LOCK *)(v2 + 96);
            goto LABEL_24;
          }
          SetMiniportDeviceState = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v2);
          v14 = (KSPIN_LOCK *)(v2 + 96);
        }
        if ( SetMiniportDeviceState )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v38) = SetMiniportDeviceState;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x4Cu,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              (char)v2,
              v38);
          }
          if ( (*((_DWORD *)v2 + 30) & 0x80u) != 0 )
            Status = -1073741823;
          else
            v9->IoStatus.Status = -1073741823;
          *((_QWORD *)v2 + 508) = 2LL;
          if ( ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v2, 0xCu) )
          {
            v26 = *((_QWORD *)v2 + 505);
            if ( *(_DWORD *)(v26 + 1112) != 2 )
            {
              *(_DWORD *)(v26 + 1112) = 2;
              *(_DWORD *)(*((_QWORD *)v2 + 505) + 1116LL) = 0;
              ndisNsiSyncMiniportOperStatusNotification((struct _NDIS_MINIPORT_BLOCK *)v2);
              v43 = 1;
            }
            ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v2, MPIFREF_DEVPOWERUPFAIL);
          }
          goto LABEL_31;
        }
LABEL_24:
        v42 = 1;
        if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) )
        {
          NdisSetEvent((PNDIS_EVENT)(v2 + 3728));
          v40 = KeAcquireSpinLockRaiseToDpc(v14);
          *((_QWORD *)v2 + 65) = KeGetCurrentThread();
          if ( !v41 )
            ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v2, 4u);
          v18 = ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v2, 1, v40);
          v19 = v40;
          v43 = v18;
          *((_QWORD *)v2 + 65) = 0LL;
          KeReleaseSpinLock(v14, v19);
          _m_prefetchw(v2 + 4424);
          v22 = *((_DWORD *)v2 + 1106);
          do
          {
            v23 = v22;
            v22 = _InterlockedCompareExchange((volatile signed __int32 *)v2 + 1106, v22, v22);
          }
          while ( v23 != v22 );
          if ( (v22 & 0x10) != 0 )
          {
            ndisSetDeviceInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v2, 1u);
            _InterlockedAnd((volatile signed __int32 *)v2 + 1106, 0xFFFFFFEF);
          }
          v4 = 1;
          v44 = (_BYTE)ndisAcOnLine == 1;
          ndisNotifyMiniports((struct _NDIS_MINIPORT_BLOCK *)v2, v20, &v44, v21);
          if ( (unsigned __int8)v2[32] < 6u )
            ndisQueryMediaStatus((struct _NDIS_MINIPORT_BLOCK *)v2);
        }
        *((_DWORD *)v2 + 967) = DeviceState;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v38) = DeviceState;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x4Bu,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)v2,
            v38);
        }
        NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v2, DeviceState);
        if ( (byte_140125101 & 8) != 0 )
        {
          LODWORD(v39) = DeviceState;
          LODWORD(v38) = 1;
          LODWORD(v37) = *((_DWORD *)v2 + 1014);
          McTemplateK0jqxqq_EtwWriteTransfer(
            v8,
            &DevicePowerStateChange,
            (const GUID *)(v2 + 4008),
            (__int64)(v2 + 4008),
            (__int64)v37,
            *((_QWORD *)v2 + 503),
            v38,
            v39);
        }
        if ( (*((_DWORD *)v2 + 30) & 0x80u) == 0 )
          PoSetPowerState(*((PDEVICE_OBJECT *)v2 + 478), DevicePowerState, (POWER_STATE)DeviceState);
LABEL_31:
        v5 = v4;
        goto LABEL_32;
      }
      if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) && *((_DWORD *)v2 + 380) == 1 )
      {
        NdisSetEvent((PNDIS_EVENT)(v2 + 3728));
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v2, &v40);
        ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v2, 4u);
        v32 = v40;
        *((_QWORD *)v2 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v32);
        v5 = 1;
      }
    }
LABEL_32:
    if ( (*((_DWORD *)v2 + 30) & 0x80u) == 0 )
    {
      Status = v9->IoStatus.Status;
      IofCompleteRequest(v9, 0);
    }
    if ( Status < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v38) = Status;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x4Du,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)v2,
          v38);
      }
      if ( (byte_140125103 & 2) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v8,
          &DevicePowerOnFailed,
          (const GUID *)(v2 + 4008),
          (__int64)(v2 + 4008),
          *((_DWORD *)v2 + 1014),
          *((_QWORD *)v2 + 503),
          Status,
          1,
          0);
      ndisMiniportFatalError((struct _NDIS_MINIPORT_BLOCK *)v2, NdisMEventErr_FailedPowerD0);
    }
    if ( *((int *)v2 + 468) < 0 )
      ndisReturnQueuedLowPowerNbls((struct _NDIS_MINIPORT_BLOCK *)v2, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v2 + 5240));
    if ( !v5 )
      goto LABEL_38;
    ndisIssueNetEventSetPowerEvent((struct _NDIS_MINIPORT_BLOCK *)v2, DeviceState, (*((_DWORD *)v2 + 30) & 0x80) == 0);
    ndisNotifyDevicePowerStateChange((struct _NDIS_MINIPORT_BLOCK *)v2, (enum _NDIS_DEVICE_POWER_STATE)DeviceState);
    if ( (*((_DWORD *)v2 + 31) & 0x10000000) != 0 )
    {
      if ( (*((_DWORD *)v2 + 30) & 0x20000000) == 0 )
        goto LABEL_65;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v2, &v40);
      while ( v2[89] )
      {
        v33 = v40;
        *((_QWORD *)v2 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v33);
        KeStallExecutionProcessor(1u);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v2, &v40);
      }
      v2[89] = 1;
      *((_QWORD *)v2 + 233) = KeGetCurrentThread();
      *((_QWORD *)v2 + 65) = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v2 + 12);
      v34 = *((_DWORD *)v2 + 87);
      *((_DWORD *)v2 + 30) &= ~0x20000000u;
      StatusIndication.Flags |= 8u;
      *((_QWORD *)&v49 + 1) = v34;
      v50 = *(_OWORD *)(v2 + 2760);
      v51 = *(_QWORD *)(v2 + 812);
      StatusIndication.StatusBufferSize = 40;
      StatusIndication.StatusBuffer = &v49;
      *(_QWORD *)&v49 = 0x100280180LL;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = v2;
      StatusIndication.StatusCode = 1073807383;
      NdisMIndicateStatusEx(v2, &StatusIndication);
      v35 = v40;
      v2[89] = 0;
      *((_QWORD *)v2 + 233) = 0LL;
      if ( v35 != 2 )
        KeLowerIrql(v35);
    }
    if ( (*((_DWORD *)v2 + 30) & 0x20000000) != 0 )
    {
LABEL_38:
      ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v2, Status);
      ndisMSetMiniportReadyForBinding((struct _NDIS_MINIPORT_BLOCK *)v2, 1, Reason_MiniportLowPower, RunAsynchronous);
      if ( v42 )
      {
        v17 = *((_DWORD *)v2 + 671);
        if ( (v17 & 0x100) != 0 )
        {
          *((_DWORD *)v2 + 671) = v17 & 0xFFFFFEFF;
          Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5120));
          if ( Ndis::BindState::SetPause((Ndis::BindState *)(v2 + 5048), DatapathRunning, PauseReason_LowPower) )
          {
            memset(v45, 0, sizeof(v45));
            if ( (unsigned __int8)byte_140126C63 >= 4u )
            {
              ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v2, (struct NDIS_PNPTRACE_LOCALS *)v45);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v36,
                  0x1Cu,
                  0x4Eu,
                  (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
                  *(unsigned __int16 **)&v45[8],
                  *(_QWORD *)v45);
            }
          }
          Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5120));
          Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v2 + 5120), RunSynchronous, 1);
        }
      }
      if ( (!ndisAoAcCapable && !ndisAoAcTest || v43)
        && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2)
        && *((_DWORD *)v2 + 380) == 1
        && ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v2, 0xDu) )
      {
        v24 = *((_QWORD *)v2 + 505);
        LODWORD(v47) = 786816;
        HIDWORD(v47) = *(_DWORD *)(v24 + 1112);
        v25 = *(_DWORD *)(v24 + 1116);
        memset(&StatusIndication.Guid, 0, 52);
        v48 = v25;
        *((_DWORD *)&StatusIndication.Header + 1) = 0;
        StatusIndication.StatusBufferSize = 12;
        memset(&StatusIndication.PortNumber, 0, 32);
        StatusIndication.StatusBuffer = &v47;
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.SourceHandle = v2;
        StatusIndication.StatusCode = 1073807395;
        NdisMIndicateStatusEx(v2, &StatusIndication);
        ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v2, MPIFREF_DEVPOWERUP);
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v16,
          14,
          79,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)v2);
      }
LABEL_43:
      ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v2, 0xCu);
      ndisDereferencePackage((PVOID *)&ndisPkgs);
      return;
    }
LABEL_65:
    if ( v4 )
      ndisSetMediaDisconnectTimer((struct _NDIS_MINIPORT_BLOCK *)v2);
    goto LABEL_38;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
  if ( (byte_140125101 & 8) != 0 )
  {
    LODWORD(v38) = 65537;
    LODWORD(v37) = *((_DWORD *)v2 + 1014);
    McTemplateK0jqxd_EtwWriteTransfer(
      v8,
      &PowerOnMiniportRemoved,
      (const GUID *)(v2 + 4008),
      (__int64)(v2 + 4008),
      (__int64)v37,
      *((_QWORD *)v2 + 503),
      v38);
  }
  IofCompleteRequest(v9, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v2 + 5240));
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v2, 0);
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v2, 0xCu);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v31,
      14,
      70,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)v2);
  }
}
