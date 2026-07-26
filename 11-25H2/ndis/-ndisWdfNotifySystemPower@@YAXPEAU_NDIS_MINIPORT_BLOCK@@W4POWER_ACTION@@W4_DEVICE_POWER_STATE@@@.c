/*
 * XREFs of ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400817B0
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1400836C0 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054A90 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848F0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1400B0D88 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_DqZ @ 0x1400B7E50 (WPP_RECORDER_SF_DqZ.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14015EC20 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifySystemPower(__int64 a1, int a2, enum _NDIS_DEVICE_POWER_STATE a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  int v6; // ebp
  __int64 v7; // rdx
  struct _GUID *v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]

  v5 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("((((Miniport)->Flags & (0x00000080)) != 0))");
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
  if ( !a2 )
    goto LABEL_17;
  if ( a3 == NdisDeviceStateD0 )
  {
    v6 = 1;
    if ( byte_140125103 < 0 )
    {
      LODWORD(v9) = 65537;
      LODWORD(v8) = v5->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        a1,
        &PowerWakeUpDevice,
        &v5->InterfaceGuid,
        (__int64)&v5->InterfaceGuid,
        (__int64)v8,
        v5->NetLuid.Value,
        v9);
    }
    v5->PnPFlags &= ~0x800u;
    a1 = MEMORY[0xFFFFF78000000014] - v5->LastSystemSleepTime.QuadPart;
    v7 = a1 / 10000;
    v5->TotalSystemSleepTimeMs += a1 / 10000;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        19,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        (char)v5);
    }
    goto LABEL_26;
  }
  if ( (unsigned int)(a2 - 4) <= 2 )
  {
    v6 = 6;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = a2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x15u,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        (char)v5,
        v9);
    }
    if ( (byte_140125103 & 4) != 0 )
    {
      LODWORD(v10) = 6;
      LODWORD(v9) = 6;
      LODWORD(v8) = v5->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        a1,
        &MiniportPowerSystemState,
        &v5->InterfaceGuid,
        (__int64)&v5->InterfaceGuid,
        (__int64)v8,
        v5->NetLuid.Value,
        v9,
        v10);
    }
    ndisSendSystemPowerStateIndication(v5, PowerSystemShutdown);
  }
  else
  {
LABEL_17:
    if ( a2 == 3 )
    {
      v6 = 5;
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_26;
      v6 = 4;
    }
    if ( v5->SelectiveSuspend )
      ndisSelectiveSuspendStop(v5, 6LL);
    v5->PnPFlags |= 0x800u;
    v5->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = a3;
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x14u,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        (char)v5,
        a2,
        v10);
    }
    KeClearEvent(&v5->OpenReadyEvent.Event);
    ndisCancelInitModeTimeoutTimer(v5, 1u);
    ndisPrepForLowPowerCommon(v5, a3);
  }
LABEL_26:
  if ( (byte_140125103 & 4) != 0 )
  {
    LODWORD(v10) = a3;
    LODWORD(v9) = v6;
    LODWORD(v8) = v5->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      a1,
      &MiniportPowerStates,
      &v5->InterfaceGuid,
      (__int64)&v5->InterfaceGuid,
      (__int64)v8,
      v5->NetLuid.Value,
      v9,
      v10);
  }
}
