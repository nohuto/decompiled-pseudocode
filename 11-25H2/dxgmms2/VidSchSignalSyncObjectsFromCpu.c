/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x14002B6D0
 * Callers:
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140050D30 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1400F3440 (VidSchSignalPagingFences.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(
        unsigned int a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        char *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rcx
  __int64 v13; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  _QWORD v17[4]; // [rsp+78h] [rbp+27h] BYREF
  __int16 v18; // [rsp+98h] [rbp+47h]

  if ( (*(_BYTE *)&a3.0 & 4) == a3.0 )
  {
    v8 = *((_QWORD *)*a2 + 1);
    v18 = 0;
    v17[0] = v8 + 1984;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v17);
    v9 = *((_QWORD *)*a2 + 1);
    v14[1] = v14;
    v13 = v9;
    v14[0] = v14;
    v15 = 0;
    v16 = 1;
    v10 = VidSchiSignalSyncObjectsFromCpu((struct HwQueueStagingList *)&v13, a1, a2, a3, a4, 0LL);
    if ( !v15 )
    {
      if ( v16 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v13, 0LL);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v17);
    return v10;
  }
  else
  {
    WdLogSingleEntry2(1LL, a3.Value, -1073741811LL);
    WdLogGlobalForLineNumber = 11493;
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 3221225485LL;
  }
}
