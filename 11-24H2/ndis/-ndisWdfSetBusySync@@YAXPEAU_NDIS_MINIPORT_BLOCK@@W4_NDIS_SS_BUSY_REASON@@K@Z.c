/*
 * XREFs of ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086A20
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140077AB0 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x14007A6B0 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140080060 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1400869F0 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140038080 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140038860 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140052D10 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 */

void __fastcall ndisWdfSetBusySync(__int64 a1, unsigned int a2, int a3)
{
  char v3; // bp
  __int64 v4; // rbx
  KIRQL v8; // r15
  __int64 v9; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 4448);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("(MINIPORT_TEST_FLAG(Miniport, 0x00000080))");
  v8 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 4448));
  if ( (*(_DWORD *)(v4 + 512)
     || *(_DWORD *)(v4 + 516)
     || *(_DWORD *)(v4 + 528)
     || *(_DWORD *)(v4 + 532)
     || *(_DWORD *)(v4 + 520)
     || *(_DWORD *)(v4 + 524)
     || *(_DWORD *)(v4 + 576)
     || *(_DWORD *)(v4 + 508))
    && KeReadStateEvent((PRKEVENT)(v4 + 272)) )
  {
    ndisIncrementSyncIdleCountersLocked(v4, a2, a3);
    ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v4, 0, a2, a3);
    KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
  }
  else
  {
    if ( !*(_DWORD *)(v4 + 512)
      && !*(_DWORD *)(v4 + 516)
      && !*(_DWORD *)(v4 + 528)
      && !*(_DWORD *)(v4 + 532)
      && !*(_DWORD *)(v4 + 520)
      && !*(_DWORD *)(v4 + 524)
      && !*(_DWORD *)(v4 + 576)
      && !*(_DWORD *)(v4 + 508) )
    {
      v3 = 1;
      KeClearEvent((PRKEVENT)(v4 + 272));
    }
    ndisIncrementSyncIdleCountersLocked(v4, a2, a3);
    KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x26u,
        (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
        a1,
        a2);
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(Timeout) = a2;
      McTemplateK0qq_EtwWriteTransfer(
        v9,
        (__int64)">(",
        a1 + 4008,
        (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF,
        (__int64)Timeout);
    }
    if ( v3 )
      ndisWdfAcquirePowerReferenceHelper((struct _NDIS_MINIPORT_BLOCK *)a1, 1, 0);
    else
      KeWaitForSingleObject((PVOID)(v4 + 272), Executive, 0, 0, 0LL);
  }
}
