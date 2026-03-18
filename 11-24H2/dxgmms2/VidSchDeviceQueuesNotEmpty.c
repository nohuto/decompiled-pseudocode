/*
 * XREFs of VidSchDeviceQueuesNotEmpty @ 0x140040F4C
 * Callers:
 *     ?Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400A0830 (-Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400D59A8 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400D6A1C (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchDeviceQueuesNotEmpty(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 1836) || *(_DWORD *)(a1 + 1832) )
    return 1;
  return v1;
}
