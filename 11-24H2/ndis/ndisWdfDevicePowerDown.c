/*
 * XREFs of ndisWdfDevicePowerDown @ 0x1400AFC70
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400683A0 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     NdisMIndicateStatusEx @ 0x14004E030 (NdisMIndicateStatusEx.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x14008CE00 (ndisWdfMiniportUpdatePowerState.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160690 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisWdfDevicePowerDown(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  char v4; // si
  __int64 v5; // rcx
  unsigned int v6; // eax
  _NDIS_IF_BLOCK *IfBlock; // rax
  KIRQL v8; // dl
  int v9; // edx
  __int64 v10; // rcx
  _NDIS_IF_BLOCK *v11; // rcx
  struct _GUID *v12; // [rsp+20h] [rbp-89h]
  __int64 v13; // [rsp+30h] [rbp-79h]
  __int64 v15; // [rsp+38h] [rbp-71h]
  KIRQL NewIrql[16]; // [rsp+40h] [rbp-69h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-59h] BYREF
  _DWORD v18[4]; // [rsp+C0h] [rbp+17h] BYREF

  NewIrql[0] = 0;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x10u,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)a1,
      a2);
  ndisWdfMiniportUpdatePowerState(a1, a2);
  if ( (byte_14011B101 & 8) != 0 )
  {
    LODWORD(v15) = a2;
    LODWORD(v13) = 1;
    LODWORD(v12) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v5,
      (__int64)&DevicePowerStateChange,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v12,
      a1->NetLuid.Value,
      v13,
      v15);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  v6 = a1->OperStatusFlags & 0xFEFFFFFF;
  a1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
  a1->OperStatusFlags = v6 | 8;
  if ( ndisMReferenceIfBlock(a1, 0xEu) )
  {
    IfBlock = a1->IfBlock;
    if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DORMANT )
    {
      IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DORMANT;
      v4 = 1;
      a1->IfBlock->ifOperStatusFlags = a1->OperStatusFlags;
    }
    ndisMDereferenceIfBlock(a1, 0xEu);
  }
  v8 = NewIrql[0];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  if ( v4 )
  {
    ndisNsiSyncMiniportOperStatusNotification(a1);
    v11 = a1->IfBlock;
    v18[0] = 786816;
    v18[1] = v11->ifOperStatus;
    v18[2] = v11->ifOperStatusFlags;
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = v18;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807395;
    StatusIndication.StatusBufferSize = 12;
    NdisMIndicateStatusEx(a1, &StatusIndication);
  }
  a1->LastWakeReason = 65534;
  if ( (byte_14011B103 & 4) != 0 )
  {
    LODWORD(v13) = 0;
    LODWORD(v12) = a1->IfIndex;
    McTemplateK0jqxd_EtwWriteTransfer(
      v10,
      (__int64)&DevicePowerDownComplete,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v12,
      a1->NetLuid.Value,
      v13);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      14,
      17,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)a1);
  }
}
