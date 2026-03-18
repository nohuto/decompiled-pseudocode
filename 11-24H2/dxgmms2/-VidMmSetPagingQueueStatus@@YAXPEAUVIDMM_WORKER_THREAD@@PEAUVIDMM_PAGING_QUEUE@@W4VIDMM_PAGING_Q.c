/*
 * XREFs of ?VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1400EB430
 * Callers:
 *     ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400E0A5C (-VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PA.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E8870 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F89A4 (-InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?VidMmResumePagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1401002C4 (-VidMmResumePagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?VidMmSuspendPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x140100660 (-VidMmSuspendPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall VidMmSetPagingQueueStatus(__int64 *a1, __int64 *a2, int a3)
{
  __int64 **v3; // rax
  int *v4; // rsi
  __int64 *v5; // rdi
  __int64 *v8; // rax
  __int64 **v9; // rcx
  struct _KEVENT *v10; // rcx
  __int64 **v11; // rax
  __int64 **v12; // rcx
  __int64 ***v13; // r8
  int v14; // eax
  __int64 **v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // r14
  __int64 *v18; // rax
  __int64 **v19; // rcx

  LODWORD(v3) = *(_DWORD *)&g_IsInternalReleaseOrDbg;
  v4 = (int *)(a2 + 13);
  v5 = (__int64 *)a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v3 = (__int64 **)WdLogNewEntry5_WdTrace(a1);
    v3[3] = a2;
    v3[4] = (__int64 *)*v4;
    v3[5] = v5;
    WdLogGlobalForLineNumber = 691;
  }
  if ( (_DWORD)v5 == 1 )
  {
    if ( (*(_BYTE *)(*a1 + 40937) & 0x10) == 0 )
    {
      if ( *v4 == 2 )
      {
        v11 = (__int64 **)*a2;
        if ( *(__int64 **)(*a2 + 8) != a2 )
          goto LABEL_21;
        v12 = (__int64 **)a2[1];
        if ( *v12 != a2 )
          goto LABEL_21;
        *v12 = (__int64 *)v11;
        v13 = (__int64 ***)(a2 + 1);
        v11[1] = (__int64 *)v12;
        if ( v12 != v11 )
          v13 = (__int64 ***)(a2 + 1);
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      else
      {
        v13 = (__int64 ***)(a2 + 1);
      }
      v14 = *((_DWORD *)a2 + 28);
      if ( (v14 & 1) != 0 )
      {
        if ( (v14 & 0x18) == 0x18 )
          v16 = a1 + 4;
        else
          v16 = a1 + 8;
        v15 = (__int64 **)v16[1];
        if ( *v15 != v16 )
          goto LABEL_21;
      }
      else if ( (v14 & 2) != 0 )
      {
        v15 = (__int64 **)a1[7];
        v16 = a1 + 6;
        if ( *v15 != a1 + 6 )
          goto LABEL_21;
      }
      else
      {
        v15 = (__int64 **)a1[5];
        v16 = a1 + 4;
        if ( *v15 != a1 + 4 )
          goto LABEL_21;
      }
      *a2 = (__int64)v16;
      *v13 = v15;
      *v15 = a2;
      v16[1] = (__int64)a2;
    }
    *((_DWORD *)a2 + 26) = 1;
    v10 = (struct _KEVENT *)a1[3];
    goto LABEL_9;
  }
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 2 )
      return (int)v3;
    v3 = (__int64 **)*a1;
    if ( (*(_BYTE *)(*a1 + 40937) & 0x10) == 0 )
    {
      if ( *v4 == 1 )
      {
        v18 = (__int64 *)*a2;
        if ( *(__int64 **)(*a2 + 8) != a2 )
          goto LABEL_21;
        v19 = (__int64 **)a2[1];
        if ( *v19 != a2 )
          goto LABEL_21;
        *v19 = v18;
        v18[1] = (__int64)v19;
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      v3 = (__int64 **)a1[11];
      v17 = a1 + 10;
      if ( *v3 != v17 )
        goto LABEL_21;
      *a2 = (__int64)v17;
      v4 = (int *)(a2 + 13);
      a2[1] = (__int64)v3;
      *v3 = a2;
      v17[1] = (__int64)a2;
    }
    *v4 = 2;
  }
  else
  {
    *v4 = 0;
    v3 = (__int64 **)*a1;
    if ( (*(_BYTE *)(*a1 + 40937) & 0x10) == 0 )
    {
      v8 = (__int64 *)*a2;
      if ( *(__int64 **)(*a2 + 8) == a2 )
      {
        v9 = (__int64 **)a2[1];
        if ( *v9 == a2 )
        {
          *v9 = v8;
          v8[1] = (__int64)v9;
          *a2 = 0LL;
          a2[1] = 0LL;
          v10 = (struct _KEVENT *)a2[10];
LABEL_9:
          LODWORD(v3) = KeSetEvent(v10, 0, 0);
          return (int)v3;
        }
      }
LABEL_21:
      __fastfail(3u);
    }
  }
  return (int)v3;
}
