/*
 * XREFs of ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F89A4
 * Callers:
 *     ?VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F88CC (-VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140034220 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledDeviceUsageNoInline @ 0x14004D480 (Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1400EB430 (-VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_Q.c)
 */

void __fastcall VIDMM_DEVICE::InsertPagingQueueList(__int64 ***this, struct VIDMM_PAGING_QUEUE *a2)
{
  char *v4; // rbx
  char *v5; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  struct DXGPUSHLOCKFAST *v7; // rdx
  char **v8; // rax
  char **v9; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (char *)a2 + 48;
  v5 = (char *)(this + 12);
  IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledDeviceUsageNoInline();
  v7 = (struct DXGPUSHLOCKFAST *)(this + 14);
  if ( IsEnabledDeviceUsageNoInline )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11, v7, 1);
    v8 = (char **)*((_QWORD *)v5 + 1);
    if ( *v8 == v5 )
    {
      *(_QWORD *)v4 = v5;
      *((_QWORD *)v4 + 1) = v8;
      *v8 = v4;
      *((_QWORD *)v5 + 1) = v4;
      if ( *((_BYTE *)this + 57) )
      {
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
          (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v10,
          (struct DXGPUSHLOCKFAST *)(**this + 23),
          1);
        VidMmSetPagingQueueStatus(**this, (__int64 *)a2, 2);
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v10);
      }
      goto LABEL_9;
    }
LABEL_6:
    __fastfail(3u);
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11, v7, 1);
  v9 = (char **)*((_QWORD *)v5 + 1);
  if ( *v9 != v5 )
    goto LABEL_6;
  *(_QWORD *)v4 = v5;
  *((_QWORD *)v4 + 1) = v9;
  *v9 = v4;
  *((_QWORD *)v5 + 1) = v4;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11);
  if ( !*((_BYTE *)this + 57) )
    return;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11,
    (struct DXGPUSHLOCKFAST *)(**this + 23),
    1);
  VidMmSetPagingQueueStatus(**this, (__int64 *)a2, 2);
LABEL_9:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11);
}
