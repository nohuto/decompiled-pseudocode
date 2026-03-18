/*
 * XREFs of ?Execute@VIDMM_TASK_PROCESS_TERMINATIONS@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400A0930
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 *     ShouldPreemptTask @ 0x1400A0C48 (ShouldPreemptTask.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 */

__int64 __fastcall VIDMM_TASK_PROCESS_TERMINATIONS::Execute(
        VIDMM_TASK_PROCESS_TERMINATIONS *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK_CONTEXT *a3)
{
  _QWORD **v4; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  VIDMM_GLOBAL *v8; // rcx
  _QWORD v10[15]; // [rsp+40h] [rbp-78h] BYREF
  bool v11; // [rsp+C8h] [rbp+10h] BYREF
  struct VIDMM_ALLOC *v12; // [rsp+D8h] [rbp+20h] BYREF

  v4 = (_QWORD **)((char *)a2 + 5944);
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v6[1] != v4 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v4 = v7;
    v7[1] = v4;
    _InterlockedDecrement((volatile signed __int32 *)a2 + 1428);
    memset(v10, 0, 0x58uLL);
    v8 = *(VIDMM_GLOBAL **)a2;
    v12 = 0LL;
    v10[2] = v6 - 27;
    LODWORD(v10[0]) = 200;
    v11 = 0;
    VIDMM_GLOBAL::ProcessDeferredCommand(v8, (struct _VIDMM_DEFERRED_COMMAND *)v10, &v11, 0, 0LL, 0LL, 0, &v12);
    if ( (unsigned __int8)ShouldPreemptTask(a2, a3) )
      return 3221226029LL;
  }
  return 0LL;
}
