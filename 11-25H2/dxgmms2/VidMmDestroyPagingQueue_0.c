/*
 * XREFs of VidMmDestroyPagingQueue_0 @ 0x1400FE640
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1400FE628 (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003FDA0 (-RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400B3884 (-VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmDestroyPagingQueue_0(struct VIDMM_PAGING_QUEUE *a1)
{
  struct VIDMM_WORKER_THREAD ***v1; // rax
  struct VIDMM_WORKER_THREAD *v3; // rdi
  unsigned int v4; // ecx
  struct VIDMM_PAGING_QUEUE *v5; // rax
  struct VIDMM_PAGING_QUEUE **v6; // rcx
  __int64 **v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  char *v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  v1 = (struct VIDMM_WORKER_THREAD ***)*((_QWORD *)a1 + 12);
  v3 = **v1;
  if ( !v3 )
    return;
  if ( *((_QWORD *)a1 + 10) )
    VidMmFlushPagingQueue(**v1, a1);
  if ( *((_QWORD *)a1 + 6) )
    VIDMM_DEVICE::RemovePagingQueueList(*((VIDMM_DEVICE **)a1 + 12), (struct _LIST_ENTRY *)a1 + 3);
  v10 = (char *)v3 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v3 + 184, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v4 = 1;
  *((_QWORD *)v3 + 24) = KeGetCurrentThread();
  v11 = 1;
  if ( *((struct VIDMM_PAGING_QUEUE **)a1 + 4) != (struct VIDMM_PAGING_QUEUE *)((char *)a1 + 32) )
  {
LABEL_22:
    g_DxgMmsBugcheckExportIndex = v4;
    WdLogSingleEntry5(0LL, 270LL, 50LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400FE7D8LL);
  }
  if ( *((_DWORD *)a1 + 26) == 2 )
  {
    v5 = *(struct VIDMM_PAGING_QUEUE **)a1;
    if ( *(struct VIDMM_PAGING_QUEUE **)(*(_QWORD *)a1 + 8LL) != a1
      || (v6 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a1 + 1), *v6 != a1) )
    {
LABEL_18:
      __fastfail(3u);
    }
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
    goto LABEL_13;
  }
  if ( *(_QWORD *)a1 || *((_QWORD *)a1 + 1) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 49LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_22;
  }
LABEL_13:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v10);
  v7 = (__int64 **)((char *)a1 + 16);
  while ( 1 )
  {
    v8 = *v7;
    v9 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
      goto LABEL_18;
    *v7 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( v8 == (__int64 *)v7 )
      break;
    operator delete(v8);
  }
  operator delete(*((void **)a1 + 10));
  *((_QWORD *)a1 + 10) = 0LL;
}
