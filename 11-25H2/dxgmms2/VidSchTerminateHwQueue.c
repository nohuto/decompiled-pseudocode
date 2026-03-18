/*
 * XREFs of VidSchTerminateHwQueue @ 0x14002AE50
 * Callers:
 *     VidSchCreateHwQueue @ 0x140031B80 (VidSchCreateHwQueue.c)
 *     VidSchTerminateAdapter @ 0x1400FBC90 (VidSchTerminateAdapter.c)
 * Callees:
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x14002A688 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14002B2D4 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     VidSchFlushHwQueue @ 0x140103DC0 (VidSchFlushHwQueue.c)
 */

void __fastcall VidSchTerminateHwQueue(struct VIDSCH_HW_QUEUE *P)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)P + 5);
  VidSchFlushHwQueue();
  if ( (*(_DWORD *)(v1 + 56) & 1) != 0 && *((_QWORD *)P + 14) )
  {
    ((void (__fastcall *)(_QWORD))DxgCoreInterface[28])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 24LL) + 8LL));
    *((_QWORD *)P + 14) = 0LL;
  }
  VidSchiRemoveHwQueueFromSyncPoints(P);
  VidSchiDecrementHwQueueReference((char *)P);
}
