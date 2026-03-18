/*
 * XREFs of VidMmTransitionToState @ 0x1400FFD48
 * Callers:
 *     ?VidMmFlushWorkerThread@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140098C54 (-VidMmFlushWorkerThread@@YAXPEAUVIDMM_WORKER_THREAD@@@Z.c)
 *     VidMmRequestWorkerThreadStatus @ 0x1400FF084 (VidMmRequestWorkerThreadStatus.c)
 * Callees:
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x14008FBAC (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 */

NTSTATUS __fastcall VidMmTransitionToState(__int64 *a1, char a2)
{
  __int64 v2; // rax

  v2 = *a1;
  *((_BYTE *)a1 + 213) = a2;
  if ( (*(_BYTE *)(v2 + 40937) & 0x10) != 0 )
    VidMmNotifyTaskWork(
      (struct VIDMM_WORKER_THREAD2 *)a1,
      (struct VIDMM_SCHCLASS *)(a1 + 690),
      (struct VIDMM_TASK *)(a1 + 695),
      1u);
  else
    KeSetEvent((PRKEVENT)(a1[3] + 24), 0, 0);
  return KeWaitForSingleObject((PVOID)(a1[3] + 48), Executive, 0, 0, 0LL);
}
