/*
 * XREFs of ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CB2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x14018490C (TdrBugcheckOnTimeout.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x14018A2C4 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 */

void __fastcall TdrResetFromTimeoutAsync(struct _TDR_RECOVERY_CONTEXT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  struct _WORK_QUEUE_ITEM *v6; // r8

  v5 = operator new(0x28uLL, 0x4B677844u, 64LL, a4);
  if ( !v5 )
    TdrBugcheckOnTimeout(a1, -1073741801, 16);
  *(_QWORD *)(v5 + 32) = a1;
  TdrReferenceRecoveryContext(a1);
  v6->List.Flink = 0LL;
  v6->WorkerRoutine = (PWORKER_THREAD_ROUTINE)TdrResetFromTimeoutWorkItem;
  v6->Parameter = v6;
  ExQueueWorkItem(v6, CriticalWorkQueue);
}
