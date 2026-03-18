/*
 * XREFs of ?DequeueTask@VIDMM_SCHCLASS_TIMER@@UEAAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400A63F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SCHCLASS_TIMER::DequeueTask(
        VIDMM_SCHCLASS_TIMER *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK *a3)
{
  RtlAvlRemoveNode((char *)this + 24, (char *)a3 + 8);
}
