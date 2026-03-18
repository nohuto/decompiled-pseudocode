/*
 * XREFs of IsIdle @ 0x1400BBAD8
 * Callers:
 *     ?VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400BB864 (-VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

char __fastcall IsIdle(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // bl
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v2 = a1 + 184;
  v7 = a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 104);
  v8 = 1;
  if ( !v5 || v5 == 2 && *(_QWORD *)(a2 + 32) == a2 + 32 )
    v4 = 1;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v7);
  return v4;
}
