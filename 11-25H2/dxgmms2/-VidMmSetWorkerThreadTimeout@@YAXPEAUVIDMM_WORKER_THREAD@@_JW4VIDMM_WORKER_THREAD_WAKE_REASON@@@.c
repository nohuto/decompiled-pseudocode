/*
 * XREFs of ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1400F6570
 * Callers:
 *     ?SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1400ED970 (-SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F1E14 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmSetWorkerThreadTimeout(__int64 a1, __int64 a2, char a3)
{
  if ( a2 > *(_QWORD *)(a1 + 128) )
  {
    *(_QWORD *)(a1 + 128) = a2;
    *(_BYTE *)(a1 + 214) = a3;
  }
}
