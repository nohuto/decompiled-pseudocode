/*
 * XREFs of ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140064100
 * Callers:
 *     ndisWdfDevicePowerOn @ 0x140063BC0 (ndisWdfDevicePowerOn.c)
 *     ?ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z @ 0x1400B0EE0 (-ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400CA780 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x14017E5D0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140064270 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1400642C0 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall ndisSignalD0RequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KIRQL v4; // al
  int LastD0Reason; // esi
  __int64 v6; // rcx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  ULONGLONG v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LastD0Reason = (unsigned __int16)a1->LastD0Reason;
  a1->SyncFlags &= ~2u;
  a1->LastD0Reason = NdisMEvent_Unknown;
  a1->MiniportThread = 0LL;
  a1->LastD0CompleteStatus = a2;
  KeReleaseSpinLock(&a1->Lock, v4);
  if ( (byte_140125103 & 4) != 0 )
  {
    LODWORD(v11) = a2;
    LODWORD(v10) = a1->IfIndex;
    McTemplateK0jqxd_EtwWriteTransfer(
      v6,
      &DevicePowerOnComplete,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      v10,
      a1->NetLuid.Value,
      v11);
  }
  if ( LastD0Reason == 5 )
  {
    if ( !a2 )
      ndisPowerSaveClearStop(a1, 6LL);
  }
  else if ( LastD0Reason == 6 || LastD0Reason == 7 || LastD0Reason == 20 )
  {
    ndisNicActiveRequestComplete(a1, a2);
  }
  KeSetEvent(&a1->PowerD0CompleteEvent, 0, 0);
  AoAc = a1->AoAc;
  if ( AoAc )
  {
    ++*((_DWORD *)AoAc + 272);
    v8 = KeQueryUnbiasedInterruptTime() - *((_QWORD *)AoAc + 137) + 5000;
    v9 = *((_QWORD *)AoAc + 139);
    *((_QWORD *)AoAc + 138) = v8 / 0x2710;
    if ( v9 <= v8 / 0x2710 )
      v9 = v8 / 0x2710;
    *((_QWORD *)AoAc + 140) += v8 / 0x2710;
    *((_QWORD *)AoAc + 139) = v9;
  }
}
