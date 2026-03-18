/*
 * XREFs of VidSchTerminateHwQueue @ 0x14001EF70
 * Callers:
 *     VidSchCreateHwQueue @ 0x1400224D0 (VidSchCreateHwQueue.c)
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 * Callees:
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001F3F4 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x140020A74 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidSchFlushHwQueue @ 0x140102CB0 (VidSchFlushHwQueue.c)
 */

void __fastcall VidSchTerminateHwQueue(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rdi
  bool v3; // dl

  v1 = *((_QWORD *)a1 + 5);
  VidSchFlushHwQueue();
  if ( (*(_DWORD *)(v1 + 56) & 1) != 0 && *((_QWORD *)a1 + 14) )
  {
    ((void (__fastcall *)(_QWORD))DxgCoreInterface[28])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 24LL) + 8LL));
    *((_QWORD *)a1 + 14) = 0LL;
  }
  VidSchiRemoveHwQueueFromSyncPoints(a1);
  VidSchiDecrementHwQueueReference(a1, v3);
}
