/*
 * XREFs of ?VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400B3884
 * Callers:
 *     VidMmFlushPagingQueue @ 0x140044350 (VidMmFlushPagingQueue.c)
 *     FlushDevicePagingQueue @ 0x1400B3864 (FlushDevicePagingQueue.c)
 *     VidMmDestroyPagingQueue_0 @ 0x1400FE640 (VidMmDestroyPagingQueue_0.c)
 *     ?VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z @ 0x140110B70 (-VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z.c)
 * Callees:
 *     ?VidMmWaitForTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x14009F4E0 (-VidMmWaitForTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400B3910 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     IsIdle @ 0x1400B3B14 (IsIdle.c)
 */

void __fastcall VidMmFlushPagingQueue(struct VIDMM_WORKER_THREAD *a1, struct VIDMM_PAGING_QUEUE *a2)
{
  VIDMM_DEVICE *v4; // rcx
  struct VIDMM_WORKER_THREAD *v5; // rcx

  if ( a1 )
  {
    v4 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 12);
    if ( v4 )
    {
      VIDMM_DEVICE::EnsureSchedulable(v4, 0);
      v5 = a1;
      if ( (*(_BYTE *)(*(_QWORD *)a1 + 40937LL) & 0x10) != 0 )
      {
        VidMmWaitForTask(a1, (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 120));
      }
      else
      {
        while ( !(unsigned __int8)IsIdle(v5, a2) )
        {
          KeWaitForSingleObject(*((PVOID *)a2 + 10), Executive, 0, 0, 0LL);
          v5 = a1;
        }
      }
    }
  }
}
