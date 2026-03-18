/*
 * XREFs of ?SelectTask@VIDMM_SCHCLASS_TIMER@@UEAAPEAUVIDMM_TASK@@PEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400A6600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct VIDMM_TASK *__fastcall VIDMM_SCHCLASS_TIMER::SelectTask(
        VIDMM_SCHCLASS_TIMER *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK_CONTEXT *a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  struct VIDMM_TASK *result; // rax

  v3 = (_QWORD *)*((_QWORD *)this + 3);
  if ( !v3 )
    return 0LL;
  do
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
  }
  while ( v3 );
  result = (struct VIDMM_TASK *)(v4 - 1);
  if ( v4[7] > *((_QWORD *)a2 + 673) )
    return 0LL;
  return result;
}
