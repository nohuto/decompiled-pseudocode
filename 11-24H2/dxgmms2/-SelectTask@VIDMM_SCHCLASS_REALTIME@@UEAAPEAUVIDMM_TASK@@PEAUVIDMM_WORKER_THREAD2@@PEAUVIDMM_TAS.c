/*
 * XREFs of ?SelectTask@VIDMM_SCHCLASS_REALTIME@@UEAAPEAUVIDMM_TASK@@PEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400A65E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct VIDMM_TASK *__fastcall VIDMM_SCHCLASS_REALTIME::SelectTask(
        VIDMM_SCHCLASS_REALTIME *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK_CONTEXT *a3)
{
  _QWORD *v3; // rcx

  v3 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v3 == v3 )
    return 0LL;
  else
    return (struct VIDMM_TASK *)(*v3 - 8LL);
}
