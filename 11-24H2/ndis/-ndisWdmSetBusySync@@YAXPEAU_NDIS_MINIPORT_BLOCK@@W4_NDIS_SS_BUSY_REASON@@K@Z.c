/*
 * XREFs of ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086C40
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140077AB0 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x14007A6B0 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140080060 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1400869F0 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140038080 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140038860 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140052D10 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140069880 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1401523D0 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x1401528A0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140153320 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWdmSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, int a3)
{
  __int64 SelectiveSuspend; // rbp
  __int16 v4; // r14
  KIRQL v8; // al
  int v9; // ecx
  KIRQL v10; // bl
  __int64 v11; // rcx
  struct _NDIS_SELECTIVE_SUSPEND *v12; // rdi
  struct NDISWATCHDOG__ *ArmedWatchdog; // rbx
  KIRQL v14; // dl
  struct _GUID *v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-38h]

  SelectiveSuspend = (__int64)a1->SelectiveSuspend;
  v4 = 0;
  if ( (a1->Flags & 0x80u) != 0 )
    NT_ASSERT("(!(MINIPORT_TEST_FLAG(Miniport, 0x00000080)))");
  while ( 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    v9 = *(_DWORD *)(SelectiveSuspend + 504);
    v10 = v8;
    if ( (v9 & 0x14) == 0 || (v9 & 0x200) != 0 )
      break;
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
    if ( !v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = a2;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xFu,
          0x25u,
          (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
          (char)a1,
          v16);
      }
      if ( (byte_14011B101 & 8) != 0 )
      {
        LODWORD(v15) = a2;
        McTemplateK0qq_EtwWriteTransfer(
          v11,
          (__int64)">(",
          (__int64)&a1->InterfaceGuid,
          (a1->NetLuid.Value >> 24) & 0xFFFFFF,
          (__int64)v15);
      }
    }
    v12 = a1->SelectiveSuspend;
    ArmedWatchdog = ndisAllocateArmedWatchdog(a1, 0x26u, a1->DriverHandle->CancelIdleNotificationHandler, 0x2710u, 0LL);
    ndisCancelIdleRequest(a1, a2, a3);
    ndisWaitForEventThenDisarmWatchdog(ArmedWatchdog, (struct _KEVENT *)((char *)v12 + 200));
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
    if ( (*((_DWORD *)v12 + 126) & 0x410) == 0x10 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v12, v14);
      ndisWaitForKernelObject((char *)v12 + 248);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v12, v14);
    }
    if ( ArmedWatchdog != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(ArmedWatchdog);
    ++v4;
  }
  ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, a2, a3);
  ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)SelectiveSuspend, 0, a2, a3);
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
}
