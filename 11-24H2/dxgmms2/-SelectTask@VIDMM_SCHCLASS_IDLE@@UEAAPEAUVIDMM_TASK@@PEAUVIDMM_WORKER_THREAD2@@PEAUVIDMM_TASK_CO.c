/*
 * XREFs of ?SelectTask@VIDMM_SCHCLASS_IDLE@@UEAAPEAUVIDMM_TASK@@PEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400A6580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct VIDMM_TASK *__fastcall VIDMM_SCHCLASS_IDLE::SelectTask(
        VIDMM_SCHCLASS_IDLE *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK_CONTEXT *a3)
{
  return (struct VIDMM_WORKER_THREAD2 *)((char *)a2 + 5720);
}
