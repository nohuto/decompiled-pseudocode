/*
 * XREFs of VidMmFlushEvictQueue @ 0x1400DC9C0
 * Callers:
 *     VidMmFlushDeferredEvictions @ 0x1400DEEE0 (VidMmFlushDeferredEvictions.c)
 * Callees:
 *     ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400DC894 (-VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PA.c)
 *     VidMmSelectEvictPacket @ 0x1400DCAD4 (VidMmSelectEvictPacket.c)
 *     VidMmSubmitPacket @ 0x1400DCB90 (VidMmSubmitPacket.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidMmFlushEvictQueue(struct VIDMM_WORKER_THREAD *a1, struct VIDMM_PAGING_QUEUE *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // [rsp+50h] [rbp+18h] BYREF
  struct VIDMM_ALLOC *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
    WdLogGlobalForLineNumber = 1074;
  }
  while ( 1 )
  {
    result = VidMmSelectEvictPacket(a1, a2);
    v5 = result;
    if ( !result )
      break;
    v11 = 0LL;
    v10 = 0;
    v6 = VidMmSubmitPacket((_DWORD)a1, (_DWORD)a2, result, 0, &v10, &v11);
    if ( v6 < 0 || v10 )
    {
      if ( *(_BYTE *)(v5 + 24) )
        v7 = *(_QWORD *)(v5 + 72) == 0LL;
      else
        v7 = *(_QWORD *)(v5 + 80) == 0LL;
      v8 = *(int *)(v5 + 48);
      if ( v7 )
      {
        v9 = *(_QWORD *)a1;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 76LL, v6, v9, v8);
        WdLogGlobalForLineNumber = 195;
        JUMPOUT(0x1400DCACDLL);
      }
    }
    VidMmReclaimPagingQueuePacket(a1, a2, (struct VIDMM_PAGING_QUEUE_PACKET *)v5);
  }
  return result;
}
