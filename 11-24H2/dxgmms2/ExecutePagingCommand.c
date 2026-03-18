/*
 * XREFs of ExecutePagingCommand @ 0x1400A0AE0
 * Callers:
 *     ?Execute@VIDMM_TASK_DEVICE_RESUME@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400A0650 (-Execute@VIDMM_TASK_DEVICE_RESUME@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z.c)
 *     ?Execute@VIDMM_TASK_PAGING_QUEUE@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400A0770 (-Execute@VIDMM_TASK_PAGING_QUEUE@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z.c)
 * Callees:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D5D58 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400E0A5C (-VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PA.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 */

void __fastcall ExecutePagingCommand(VIDMM_GLOBAL **a1, VIDMM_DEVICE *a2, struct _VIDSCH_SYNC_OBJECT **a3, __int64 a4)
{
  struct _VIDMM_DEFERRED_COMMAND *v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  unsigned __int64 v10; // r9
  char v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rcx
  char v14; // al
  struct VIDMM_ALLOC *v15[2]; // [rsp+40h] [rbp-18h] BYREF

  while ( 1 )
  {
    *(_OWORD *)v15 = 0LL;
    if ( a3 )
      break;
    if ( (int)VIDMM_DEVICE::Resume(a2, 1, (bool *)&v15[1], v15) >= 0 )
      return;
    v14 = (char)v15[1];
LABEL_15:
    if ( !v14 )
      return;
    LOBYTE(v13) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v13) )
      __debugbreak();
  }
  v8 = (struct _VIDMM_DEFERRED_COMMAND *)(a4 + 48);
  v9 = *a1;
  v10 = *(_QWORD *)(a4 + 32);
  v11 = *(_BYTE *)(a4 + 25);
  if ( *(_BYTE *)(a4 + 24) )
    v12 = VIDMM_GLOBAL::ProcessDeferredCommand(v9, v8, (bool *)&v15[1], v11, v10, a3[11], 0, v15);
  else
    v12 = VIDMM_GLOBAL::ProcessSystemCommand(v9, v8, v11, v10, a3[11]);
  v13 = v12;
  if ( v12 != -1071775232 )
  {
    if ( (v14 = (char)v15[1], !*(_BYTE *)(a4 + 24)) || LOBYTE(v15[1]) && !*(_BYTE *)(a4 + 128) || !*(_QWORD *)(a4 + 72) )
    {
      if ( (int)v13 < 0 )
        goto LABEL_15;
    }
  }
  VidMmReclaimPagingQueuePacket(
    (struct VIDMM_WORKER_THREAD *)a1,
    (struct VIDMM_PAGING_QUEUE *)a3,
    (struct VIDMM_PAGING_QUEUE_PACKET *)a4);
}
