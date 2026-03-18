/*
 * XREFs of ?EnqueueTask@VIDMM_SCHCLASS_IDLE@@UEAAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400A6310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SCHCLASS_IDLE::EnqueueTask(
        VIDMM_SCHCLASS_IDLE *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK *a3)
{
  if ( g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
}
