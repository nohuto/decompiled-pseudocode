/*
 * XREFs of ?VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F987C
 * Callers:
 *     ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F93F8 (-CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400F94D8 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0pppq_EtwWriteTransfer @ 0x140043A58 (McTemplateK0pppq_EtwWriteTransfer.c)
 *     ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F9954 (-InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 */

__int64 __fastcall VidMmInitializePagingQueue(struct VIDMM_PAGING_QUEUE *a1)
{
  struct _KEVENT *v2; // rax
  unsigned int v3; // edi
  struct VIDMM_PAGING_QUEUE *v4; // rax
  struct VIDMM_PAGING_QUEUE **v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // [rsp+30h] [rbp-18h]

  v2 = (struct _KEVENT *)operator new(24LL, 0x38346956u, 64LL);
  *((_QWORD *)a1 + 10) = v2;
  if ( !v2 )
    return 3221225495LL;
  KeInitializeEvent(v2, SynchronizationEvent, 0);
  v3 = 0;
  while ( v3 < 2 )
  {
    v4 = (struct VIDMM_PAGING_QUEUE *)operator new(160LL, 0x38346956u, 256LL);
    if ( !v4 )
      return 3221225495LL;
    v5 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a1 + 3);
    if ( *v5 != (struct VIDMM_PAGING_QUEUE *)((char *)a1 + 16) )
      __fastfail(3u);
    *(_QWORD *)v4 = (char *)a1 + 16;
    ++v3;
    *((_QWORD *)v4 + 1) = v5;
    *v5 = v4;
    *((_QWORD *)a1 + 3) = v4;
  }
  VIDMM_DEVICE::InsertPagingQueueList(*((VIDMM_DEVICE **)a1 + 12), a1);
  if ( (byte_140081241 & 1) != 0 )
  {
    v9 = *((_DWORD *)a1 + 28);
    McTemplateK0pppq_EtwWriteTransfer(
      *((_QWORD *)a1 + 12),
      v6,
      v7,
      *(_QWORD *)(**((_QWORD **)a1 + 12) + 24LL),
      *((_QWORD *)a1 + 12),
      a1,
      v9);
  }
  return 0LL;
}
