/*
 * XREFs of ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140085080
 * Callers:
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140084F90 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisIdleCancelWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400C9FE0 (-ndisIdleCancelWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
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
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x1Au,
        (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
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
