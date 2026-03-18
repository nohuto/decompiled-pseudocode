/*
 * XREFs of QueryPendingTerminations @ 0x14009F938
 * Callers:
 *     WorkerThreadRun @ 0x14009FC84 (WorkerThreadRun.c)
 * Callees:
 *     GetPendingTerminations @ 0x14004EE2C (GetPendingTerminations.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x14008FBAC (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 */

char __fastcall QueryPendingTerminations(struct VIDMM_WORKER_THREAD2 *a1)
{
  int PendingTerminations; // eax
  unsigned int v3; // r9d
  char *v4; // rdx
  __int64 **v5; // r8
  __int64 **v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v10; // [rsp+28h] [rbp-8h]

  v10 = (__int64 **)&v9;
  v9 = (__int64)&v9;
  PendingTerminations = GetPendingTerminations((__int64 *)a1, &v9);
  v3 = PendingTerminations;
  if ( PendingTerminations > 0 )
  {
    v4 = (char *)a1 + 5944;
    v5 = (__int64 **)*((_QWORD *)a1 + 744);
    if ( *(struct VIDMM_WORKER_THREAD2 **)(*((_QWORD *)a1 + 743) + 8LL) != (struct VIDMM_WORKER_THREAD2 *)((char *)a1 + 5944)
      || *v5 != (__int64 *)v4
      || *(__int64 **)(v9 + 8) != &v9
      || *v10 != &v9
      || (*v5 = &v9,
          v6 = v10,
          *((_QWORD *)a1 + 744) = v10,
          *v6 = (__int64 *)v4,
          v7 = v9,
          v10 = v5,
          *(__int64 **)(v9 + 8) != &v9)
      || *v5 != &v9 )
    {
      __fastfail(3u);
    }
    *v5 = (__int64 *)v9;
    *(_QWORD *)(v7 + 8) = v5;
    LOBYTE(PendingTerminations) = VidMmNotifyTaskWork(
                                    a1,
                                    (struct VIDMM_WORKER_THREAD2 *)((char *)a1 + 5440),
                                    (struct VIDMM_WORKER_THREAD2 *)((char *)a1 + 5640),
                                    v3);
  }
  return PendingTerminations;
}
