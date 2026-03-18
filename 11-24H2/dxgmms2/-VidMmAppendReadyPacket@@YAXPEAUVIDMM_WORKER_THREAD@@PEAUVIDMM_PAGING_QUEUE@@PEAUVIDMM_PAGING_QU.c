/*
 * XREFs of ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E8870
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400BA8FC (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400BCB54 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1400EC038 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 * Callees:
 *     McTemplateK0pppxqpq_EtwWriteTransfer @ 0x14003BEE8 (McTemplateK0pppxqpq_EtwWriteTransfer.c)
 *     McTemplateK0pppxqq_EtwWriteTransfer @ 0x14003C9BC (McTemplateK0pppxqq_EtwWriteTransfer.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x14008FEC0 (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400BB8F0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1400EB430 (-VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_Q.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1400F59E4 (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

void __fastcall VidMmAppendReadyPacket(
        struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3,
        unsigned __int64 *a4)
{
  bool v5; // zf
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // rax
  struct VIDMM_PAGING_QUEUE **v14; // rcx
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax

  v5 = *((_BYTE *)a3 + 24) == 0;
  *((_QWORD *)a3 + 2) = KeGetCurrentThread();
  if ( !v5 )
  {
    v9 = *((_QWORD *)a3 + 8);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 176));
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a1 + 184, 0LL);
  *((_QWORD *)a1 + 24) = KeGetCurrentThread();
  if ( *((_BYTE *)a3 + 25) )
  {
    v12 = *((_DWORD *)a2 + 28);
    *((_QWORD *)a2 + 8) += *((unsigned int *)a2 + 27);
    if ( (v12 & 4) == 0 )
      *((_DWORD *)a2 + 17) = 0;
    v13 = *((_QWORD *)a2 + 8);
    *((_QWORD *)a3 + 4) = v13;
    *a4 = v13;
  }
  v14 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 5);
  if ( *v14 != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 32) )
    __fastfail(3u);
  *(_QWORD *)a3 = (char *)a2 + 32;
  *((_QWORD *)a3 + 1) = v14;
  *v14 = a3;
  *((_QWORD *)a2 + 5) = a3;
  if ( *((_BYTE *)a3 + 24) )
  {
    if ( (byte_140081241 & 1) != 0 )
    {
      VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a3);
      McTemplateK0pppxqpq_EtwWriteTransfer(
        *((_QWORD *)a3 + 5),
        v16,
        v17,
        *((_QWORD *)VidMmDevice + 3),
        a2,
        a3,
        *((_QWORD *)a3 + 5),
        *((_DWORD *)a3 + 12),
        *((_QWORD *)a3 + 8),
        v16);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
      v18[3] = a3;
      v18[4] = *((int *)a3 + 12);
      v18[5] = *((_QWORD *)a3 + 8);
      v18[6] = *((_QWORD *)a3 + 7);
      v18[7] = *((_QWORD *)a3 + 4);
      WdLogGlobalForLineNumber = 548;
    }
  }
  else
  {
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0pppxqq_EtwWriteTransfer(
        (__int64)v14,
        v10,
        v11,
        *(_QWORD *)(*(_QWORD *)a1 + 24LL),
        a2,
        a3,
        *((_QWORD *)a3 + 5),
        *((_DWORD *)a3 + 12),
        (*((_DWORD *)a2 + 28) >> 3) & 3);
    if ( g_IsInternalReleaseOrDbg )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
      v19[3] = a3;
      v19[4] = *((int *)a3 + 12);
      v19[5] = *((unsigned __int8 *)a3 + 25);
      v19[6] = *((_QWORD *)a3 + 4);
      WdLogGlobalForLineNumber = 567;
    }
  }
  if ( !*((_DWORD *)a2 + 26) )
  {
    VidMmSetPagingQueueStatus(a1, a2, 1LL);
    if ( *((_BYTE *)a3 + 24) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v21 = WdLogNewEntry5_WdTrace(v20);
        *(_QWORD *)(v21 + 24) = a2;
        *(_QWORD *)(v21 + 32) = *((_QWORD *)a3 + 7);
        WdLogGlobalForLineNumber = 576;
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      v22 = WdLogNewEntry5_WdTrace(v20);
      *(_QWORD *)(v22 + 24) = a2;
      *(_QWORD *)(v22 + 32) = **((_QWORD **)a2 + 12);
      WdLogGlobalForLineNumber = 580;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 40937LL) & 0x10) != 0 )
  {
    if ( *((_DWORD *)a2 + 26) == 1 )
    {
      v23 = *((_DWORD *)a2 + 28);
      if ( (v23 & 1) == 0 || (v5 = (v23 & 0x18) == 24, v24 = 5520LL, v5) )
        v24 = 5440LL;
      VidMmNotifyTaskWork(
        a1,
        (struct VIDMM_WORKER_THREAD *)((char *)a1 + v24),
        (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 120),
        1u);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)a2 + 48);
    }
  }
  ++*(_DWORD *)(*((_QWORD *)a2 + 12) + 64LL);
  ++*((_DWORD *)a1 + 52);
  *((_QWORD *)a1 + 24) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a1 + 184, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_DEVICE::EnsureSchedulable(*((VIDMM_DEVICE **)a2 + 12), 1);
}
