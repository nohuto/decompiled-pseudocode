/*
 * XREFs of ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F8448
 * Callers:
 *     VidMmCreatePagingQueue @ 0x140042210 (VidMmCreatePagingQueue.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x14001D214 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1400F878C (--0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F88CC (-VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::CreatePagingQueue(
        VIDMM_DEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct VIDMM_PAGING_QUEUE **a4)
{
  __int64 v7; // rax
  struct VIDMM_PAGING_QUEUE *v8; // rax
  __int64 v9; // rcx
  int v11; // edi

  v7 = operator new(200LL, 0x38346956u, 256LL);
  if ( !v7 )
  {
    *a4 = 0LL;
    goto LABEL_3;
  }
  v8 = (struct VIDMM_PAGING_QUEUE *)VIDMM_PAGING_QUEUE::VIDMM_PAGING_QUEUE(v7, this, a2, 0LL);
  *a4 = v8;
  if ( !v8 )
  {
LABEL_3:
    _InterlockedIncrement(&dword_1400817E0);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 607;
    DxgkLogInternalTriageEvent(v9, 262145LL);
    return 3221225495LL;
  }
  v11 = VidMmInitializePagingQueue(v8);
  if ( v11 < 0 )
  {
    if ( *a4 )
      VIDMM_PAGING_QUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v11;
}
