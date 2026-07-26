/*
 * XREFs of ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140082890
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x140068290 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140038080 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038B60 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003A730 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x14004A750 (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140051D30 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140069790 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x14008F740 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1400A8C18 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_DqZ @ 0x1400AFEC0 (WPP_RECORDER_SF_DqZ.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C3328 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140152420 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWdfNotifySystemPower(__int64 a1, int a2, enum _NDIS_DEVICE_POWER_STATE a3)
{
  enum _NDIS_DEVICE_POWER_STATE v3; // edi
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  int v6; // esi
  __int64 v7; // rdx
  int v8; // ebp
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  char v10; // r12
  int v11; // r13d
  KIRQL v12; // r15
  KIRQL v13; // dl
  int v14; // eax
  char v15; // r12
  KSPIN_LOCK *v16; // rcx
  char v17; // r12
  int v18; // r13d
  __int64 v19; // rdx
  int v20; // eax
  KIRQL v21; // al
  struct _GUID *v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  char v25; // [rsp+88h] [rbp+10h]
  char v26; // [rsp+88h] [rbp+10h]

  v3 = a3;
  v4 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("(MINIPORT_TEST_FLAG(Miniport, 0x00000080))");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      9,
      18,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      a2,
      a1,
      *(_QWORD *)(a1 + 3856));
  v6 = 0;
  if ( a2 )
  {
    if ( v3 == NdisDeviceStateD0 )
    {
      v6 = 1;
      if ( byte_14011B103 < 0 )
      {
        LODWORD(v23) = 65537;
        LODWORD(v22) = v4->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          a1,
          (__int64)&PowerWakeUpDevice,
          (__int64)&v4->InterfaceGuid,
          (__int64)&v4->InterfaceGuid,
          (__int64)v22,
          v4->NetLuid.Value,
          v23);
      }
      v4->PnPFlags &= ~0x800u;
      a1 = MEMORY[0xFFFFF78000000014] - v4->LastSystemSleepTime.QuadPart;
      v7 = a1 / 10000;
      v4->TotalSystemSleepTimeMs += a1 / 10000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          14,
          19,
          (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
          (char)v4);
      }
      goto LABEL_78;
    }
    if ( (unsigned int)(a2 - 4) <= 2 )
    {
      v6 = 6;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = a2;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x15u,
          (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
          (char)v4,
          v23);
      }
      if ( (byte_14011B103 & 4) != 0 )
      {
        LODWORD(v24) = 6;
        LODWORD(v23) = 6;
        LODWORD(v22) = v4->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          a1,
          (__int64)&MiniportPowerSystemState,
          (__int64)&v4->InterfaceGuid,
          (__int64)&v4->InterfaceGuid,
          (__int64)v22,
          v4->NetLuid.Value,
          v23,
          v24);
      }
      ndisSendSystemPowerStateIndication(v4, PowerSystemShutdown);
      goto LABEL_78;
    }
  }
  if ( a2 == 3 )
  {
    v8 = 5;
  }
  else
  {
    if ( a2 != 2 )
      goto LABEL_78;
    v8 = 4;
  }
  if ( (unsigned int)Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v4->SelectiveSuspend )
    {
      if ( (v4->Flags & 0x80u) == 0 )
      {
        SelectiveSuspend = v4->SelectiveSuspend;
        v17 = 0;
        v18 = v4->Flags & 0x80;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        v26 = !ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v18 != 0);
        if ( v18
          && !*((_DWORD *)SelectiveSuspend + 128)
          && !*((_DWORD *)SelectiveSuspend + 129)
          && !*((_DWORD *)SelectiveSuspend + 132)
          && !*((_DWORD *)SelectiveSuspend + 133)
          && !*((_DWORD *)SelectiveSuspend + 130)
          && !*((_DWORD *)SelectiveSuspend + 131)
          && !*((_DWORD *)SelectiveSuspend + 144)
          && !*((_DWORD *)SelectiveSuspend + 127) )
        {
          v17 = 1;
          KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = 6;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xFu,
            0x22u,
            (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
            (char)v4,
            v23);
        }
        *((_DWORD *)SelectiveSuspend + 127) |= 0x20u;
        ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v26, 6u, 0);
        if ( v18 )
        {
          if ( v17 || !KeReadStateEvent((PRKEVENT)((char *)SelectiveSuspend + 272)) )
          {
LABEL_62:
            KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v12);
            ndisWdfAcquirePowerReferenceHelper(v4, 0, 0);
            ndisWdfSelectiveSuspendResumeOperations((struct _NDIS_FILTER_BLOCK *)v4, v19, 1);
            goto LABEL_74;
          }
        }
        else
        {
          v20 = *((_DWORD *)SelectiveSuspend + 126);
          if ( (v20 & 1) != 0 )
          {
            KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
            *((_DWORD *)SelectiveSuspend + 126) &= ~1u;
            v15 = 1;
            v20 = *((_DWORD *)SelectiveSuspend + 126);
          }
          else
          {
            v15 = 0;
          }
          if ( (v20 & 0x200) == 0 )
          {
            v13 = v12;
            v16 = (KSPIN_LOCK *)SelectiveSuspend;
            goto LABEL_69;
          }
        }
        v13 = v12;
        goto LABEL_72;
      }
      ndisSelectiveSuspendStopWdf(v4, 6LL);
    }
LABEL_74:
    v6 = v8;
    goto LABEL_75;
  }
  SelectiveSuspend = v4->SelectiveSuspend;
  v6 = v8;
  if ( SelectiveSuspend )
  {
    v10 = 0;
    v11 = v4->Flags & 0x80;
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    v25 = !ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v11 != 0);
    if ( v11
      && !*((_DWORD *)SelectiveSuspend + 128)
      && !*((_DWORD *)SelectiveSuspend + 129)
      && !*((_DWORD *)SelectiveSuspend + 132)
      && !*((_DWORD *)SelectiveSuspend + 133)
      && !*((_DWORD *)SelectiveSuspend + 130)
      && !*((_DWORD *)SelectiveSuspend + 131)
      && !*((_DWORD *)SelectiveSuspend + 144)
      && !*((_DWORD *)SelectiveSuspend + 127) )
    {
      v10 = 1;
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = 6;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x22u,
        (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
        (char)v4,
        v23);
    }
    *((_DWORD *)SelectiveSuspend + 127) |= 0x20u;
    ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v25, 6u, 0);
    if ( v11 )
    {
      if ( !v10 && KeReadStateEvent((PRKEVENT)((char *)SelectiveSuspend + 272)) )
      {
        v13 = v12;
LABEL_72:
        v16 = (KSPIN_LOCK *)SelectiveSuspend;
LABEL_73:
        KeReleaseSpinLock(v16, v13);
        goto LABEL_74;
      }
      goto LABEL_62;
    }
    v14 = *((_DWORD *)SelectiveSuspend + 126);
    if ( (v14 & 1) != 0 )
    {
      KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
      *((_DWORD *)SelectiveSuspend + 126) &= ~1u;
      v15 = 1;
      v14 = *((_DWORD *)SelectiveSuspend + 126);
    }
    else
    {
      v15 = 0;
    }
    v13 = v12;
    v16 = (KSPIN_LOCK *)SelectiveSuspend;
    if ( (v14 & 0x200) != 0 )
      goto LABEL_73;
LABEL_69:
    KeReleaseSpinLock(v16, v13);
    ndisCancelWaitWake(v4);
    if ( v15 )
    {
      KeFlushQueuedDpcs();
      ndisWaitForKernelObject((char *)SelectiveSuspend + 152);
    }
    ndisCancelIdleRequestSync(v4, 6, 0, 1);
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    *((_DWORD *)SelectiveSuspend + 126) |= 0x200u;
    v13 = v21;
    goto LABEL_72;
  }
LABEL_75:
  v4->PnPFlags |= 0x800u;
  v4->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
  v3 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = a3;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x14u,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)v4,
      a2,
      v24);
  }
  KeClearEvent(&v4->OpenReadyEvent.Event);
  ndisCancelInitModeTimeoutTimer(v4, 1u);
  ndisPrepForLowPowerCommon(v4, a3);
LABEL_78:
  if ( (byte_14011B103 & 4) != 0 )
  {
    LODWORD(v24) = v3;
    LODWORD(v23) = v6;
    LODWORD(v22) = v4->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      a1,
      (__int64)&MiniportPowerStates,
      (__int64)&v4->InterfaceGuid,
      (__int64)&v4->InterfaceGuid,
      (__int64)v22,
      v4->NetLuid.Value,
      v23,
      v24);
  }
}
