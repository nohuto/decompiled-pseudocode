/*
 * XREFs of ?VidMmSelectReadyPacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEBUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F7868
 * Callers:
 *     ?Execute@VIDMM_TASK_PAGING_QUEUE@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x14009EEF0 (-Execute@VIDMM_TASK_PAGING_QUEUE@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_PAGING_QUEUE_PACKET *__fastcall VidMmSelectReadyPacket(
        const struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2)
{
  char *v2; // rdx
  struct VIDMM_PAGING_QUEUE_PACKET *result; // rax
  __int64 v4; // rcx

  v2 = (char *)a2 + 32;
  result = *(struct VIDMM_PAGING_QUEUE_PACKET **)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2
    || (v4 = *(_QWORD *)result, *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)result + 8LL) != result) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v2 = v4;
  *(_QWORD *)(v4 + 8) = v2;
  *(_QWORD *)result = 0LL;
  *((_QWORD *)result + 1) = 0LL;
  return result;
}
