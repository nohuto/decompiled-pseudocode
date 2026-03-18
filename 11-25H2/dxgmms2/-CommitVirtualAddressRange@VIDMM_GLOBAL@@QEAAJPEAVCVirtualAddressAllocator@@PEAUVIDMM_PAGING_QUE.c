/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400B2918
 * Callers:
 *     AddDmaBufferToPool @ 0x1400B05D8 (AddDmaBufferToPool.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1400B445C (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA518 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400ABC80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400EDEF0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F22B4 (-VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVID.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F515C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 */

int __fastcall VIDMM_GLOBAL::CommitVirtualAddressRange(
        struct VIDMM_WORKER_THREAD **this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4,
        int a5,
        const struct _DXGK_ADL *a6,
        unsigned __int64 *a7,
        struct VIDMM_VAD_PENDING_OPERATION *a8)
{
  __int128 v12; // xmm1
  unsigned __int64 *v13; // r14
  char v14; // r15
  const struct _DXGK_ADL *v15; // rax
  struct VIDMM_PAGING_QUEUE **v16; // rdi
  struct VIDMM_PAGING_QUEUE *v17; // r13
  struct VIDMM_PAGING_QUEUE **NewPagingQueuePacket; // rbx
  struct VIDMM_PAGING_QUEUE *v19; // rax
  struct VIDMM_VAD_PENDING_OPERATION *i; // rdi
  struct VIDMM_WORKER_THREAD *v21; // rcx
  PLARGE_INTEGER v23[2]; // [rsp+38h] [rbp-B9h]
  __int128 v24; // [rsp+48h] [rbp-A9h]
  __int128 v25; // [rsp+58h] [rbp-99h]
  __int128 v26; // [rsp+78h] [rbp-79h]
  __int64 v27; // [rsp+98h] [rbp-59h] BYREF
  char v28; // [rsp+A0h] [rbp-51h]
  _QWORD v29[12]; // [rsp+A8h] [rbp-49h] BYREF

  memset(v29, 0, 0x58uLL);
  v29[0] = -4294967183LL;
  v29[6] = a4;
  v12 = *(_OWORD *)a6;
  v29[5] = a2;
  *(_OWORD *)&v29[7] = v12;
  v29[9] = a8;
  if ( (_BYTE)a5 )
  {
    a6 = 0LL;
    return VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
             (VIDMM_GLOBAL *)0x71,
             (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)&v29[5],
             &a6);
  }
  v23[0] = (PLARGE_INTEGER)113;
  v23[1] = *((PLARGE_INTEGER *)a3 + 12);
  v24 = 0LL;
  if ( (*((_DWORD *)a4 + 18) & 0xF) == 1 )
    *(_QWORD *)&v24 = *((_QWORD *)a4 + 8);
  v13 = a7;
  v25 = *(_OWORD *)&v29[5];
  v26 = *(_OWORD *)&v29[9];
  BYTE8(v26) = 1;
  if ( !a7 || (v14 = 0, !dword_1400814BC) )
    v14 = 1;
  v15 = (const struct _DXGK_ADL *)*((_QWORD *)a3 + 11);
  v27 = (__int64)*this + 184;
  a5 = 0;
  a6 = v15;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v27, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v16 = (struct VIDMM_PAGING_QUEUE **)((char *)a3 + 16);
  *(_QWORD *)(v27 + 8) = KeGetCurrentThread();
  v17 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a3 + 9);
  v28 = 1;
  *((_QWORD *)a3 + 9) = (char *)v17 + 1;
  NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a3 + 2);
  if ( NewPagingQueuePacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a3 + 16)
    || (v19 = *NewPagingQueuePacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPagingQueuePacket + 1) != NewPagingQueuePacket) )
  {
    __fastfail(3u);
  }
  *v16 = v19;
  *((_QWORD *)v19 + 1) = v16;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v27);
  if ( NewPagingQueuePacket != v16 )
  {
    memset(NewPagingQueuePacket, 0, 0xA0uLL);
    goto LABEL_13;
  }
  NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
  if ( NewPagingQueuePacket )
  {
LABEL_13:
    NewPagingQueuePacket[5] = v17;
    goto LABEL_14;
  }
  NewPagingQueuePacket = 0LL;
LABEL_14:
  if ( !v23[1] )
    v23[1] = *(PLARGE_INTEGER *)(v24 + 8);
  for ( i = a6;
        !NewPagingQueuePacket;
        NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)VidMmGetNewPagingQueuePacket(*this, a3) )
  {
    a6 = (const struct _DXGK_ADL *)*((_QWORD *)a3 + 8);
    a8 = i;
    VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &a8, (const unsigned __int64 *)&a6, 1u, 0LL, 0LL);
  }
  *((_WORD *)NewPagingQueuePacket + 12) = 257;
  *((_OWORD *)NewPagingQueuePacket + 3) = *(_OWORD *)v23;
  *((_OWORD *)NewPagingQueuePacket + 4) = v24;
  *((_OWORD *)NewPagingQueuePacket + 5) = v25;
  *((_OWORD *)NewPagingQueuePacket + 6) = v12;
  *((_OWORD *)NewPagingQueuePacket + 7) = v26;
  NewPagingQueuePacket[16] = 0LL;
  if ( v14 )
    NewPagingQueuePacket[9] = (struct VIDMM_PAGING_QUEUE *)&a5;
  v21 = *this;
  a6 = 0LL;
  VidMmAppendReadyPacket(v21, a3, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPagingQueuePacket, (unsigned __int64 *)&a6);
  if ( v14 )
  {
    a8 = i;
    VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &a8, (const unsigned __int64 *)&a6, 1u, 0LL, 0LL);
    return a5;
  }
  if ( !v13 )
    return a5;
  *v13 = (unsigned __int64)a6;
  return 259;
}
