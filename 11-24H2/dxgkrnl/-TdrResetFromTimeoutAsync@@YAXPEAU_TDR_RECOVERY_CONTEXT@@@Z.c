/*
 * XREFs of ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D0530
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x140186C5C (TdrBugcheckOnTimeout.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x14018C514 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 */

void __fastcall TdrResetFromTimeoutAsync(struct _TDR_RECOVERY_CONTEXT *a1)
{
  __int64 v2; // rax
  struct _WORK_QUEUE_ITEM *v3; // r8

  v2 = operator new(0x28uLL, 0x4B677844u, 64LL);
  if ( !v2 )
    TdrBugcheckOnTimeout(a1, -1073741801, 16);
  *(_QWORD *)(v2 + 32) = a1;
  TdrReferenceRecoveryContext(a1);
  v3->List.Flink = 0LL;
  v3->WorkerRoutine = (PWORKER_THREAD_ROUTINE)TdrResetFromTimeoutWorkItem;
  v3->Parameter = v3;
  ExQueueWorkItem(v3, CriticalWorkQueue);
}
