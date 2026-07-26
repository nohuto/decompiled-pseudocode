/*
 * XREFs of ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140069880
 * Callers:
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140069790 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086C40 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisIdleCancelWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400C2DB0 (-ndisIdleCancelWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140038080 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisCancelIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v7; // di
  int v8; // eax

  SelectiveSuspend = a1->SelectiveSuspend;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v8 = *((_DWORD *)SelectiveSuspend + 126);
  if ( (v8 & 4) != 0 && (v8 & 0x80u) == 0 )
  {
    *((_DWORD *)SelectiveSuspend + 126) = v8 | 0x80;
    if ( a2 )
      ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, 1, a2, a3);
    *((_QWORD *)SelectiveSuspend + 82) = MEMORY[0xFFFFF78000000014];
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
    ndisWaitForKernelObject((char *)SelectiveSuspend + 224);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x1Au,
        (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
        (char)a1,
        a2);
    ndisLogMiniportEvent(a1, NdisMEvent_SSCancelIdle);
    a1->DriverHandle->CancelIdleNotificationHandler(a1->MiniportAdapterContext);
    return 1;
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
    return 0;
  }
}
