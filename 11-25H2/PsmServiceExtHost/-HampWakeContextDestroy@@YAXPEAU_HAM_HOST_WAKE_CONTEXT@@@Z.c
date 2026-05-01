/*
 * XREFs of ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180041244
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015290 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180067060 (-HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x180041614 (CemRcObjectCleanup.c)
 */

void __fastcall HampWakeContextDestroy(struct _HAM_HOST_WAKE_CONTEXT *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  if ( *((_QWORD *)a1 + 15) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 12) )
    TpReleaseWork();
  v2 = *((_QWORD *)a1 + 13);
  if ( v2 )
    TpReleaseTimer(v2);
  v3 = (void *)*((_QWORD *)a1 + 14);
  if ( v3 )
    NtClose(v3);
  CemRcObjectCleanup(a1);
  HampFreeHeap(a1);
}
