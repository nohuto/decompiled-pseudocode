/*
 * XREFs of ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140061D50
 * Callers:
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x14003DEF0 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140068C70 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x140068E40 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14018BD20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14018BFF0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140040330 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140061E30 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140062000 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140084F90 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 */

void __fastcall ndisSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbp
  __int16 i; // r14
  KIRQL v8; // al
  int v9; // ecx
  KIRQL v10; // r15
  __int64 v11; // rcx
  struct _GUID *v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+30h] [rbp-38h]

  if ( (a1->Flags & 0x80u) != 0 )
  {
    ndisWdfSetBusySync();
  }
  else
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    for ( i = 0; ; ++i )
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
      v9 = *((_DWORD *)SelectiveSuspend + 126);
      v10 = v8;
      if ( (v9 & 0x14) == 0 || (v9 & 0x200) != 0 )
        break;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
      if ( !i )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v13) = a2;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xFu,
            0x24u,
            (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
            (char)a1,
            v13);
        }
        if ( (byte_140125101 & 8) != 0 )
        {
          LODWORD(v12) = a2;
          McTemplateK0qq_EtwWriteTransfer(
            v11,
            &SSResumeRequested,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF,
            (__int64)v12);
        }
      }
      ndisCancelIdleRequestSync(a1, a2, a3, 1u);
    }
    ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, a2, a3);
    ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, 0, a2, a3);
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
  }
}
