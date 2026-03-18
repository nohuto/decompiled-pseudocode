/*
 * XREFs of ?VidMmRewindPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x140104290
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

void __fastcall VidMmRewindPagingQueuePacket(
        struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3)
{
  char *v3; // rbx
  char *v6; // rdi
  __int64 v7; // rax
  char *v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v3 = (char *)a1 + 184;
  v8 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v6 = (char *)a2 + 32;
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v9 = 1;
  v7 = *(_QWORD *)v6;
  if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
    __fastfail(3u);
  *(_QWORD *)a3 = v7;
  *((_QWORD *)a3 + 1) = v6;
  *(_QWORD *)(v7 + 8) = a3;
  *(_QWORD *)v6 = a3;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v8);
}
