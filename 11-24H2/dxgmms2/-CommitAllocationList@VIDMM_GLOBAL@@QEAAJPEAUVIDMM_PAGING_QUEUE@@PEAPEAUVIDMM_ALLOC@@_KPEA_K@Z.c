/*
 * XREFs of ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1400EC038
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B93C8 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x140035150 (VidSchIsMonitoredFenceSignaled.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400365BC (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400B4060 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E8870 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400ED474 (-VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVID.c)
 *     ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1400F1150 (-RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitAllocationList(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC **a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  struct VIDMM_ALLOC **v5; // r15
  unsigned int v6; // ebx
  struct VIDMM_ALLOC **v7; // r14
  unsigned __int64 *v10; // r12
  struct VIDMM_ALLOC *v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  struct _VIDSCH_SYNC_OBJECT *v17; // rax
  struct VIDMM_PAGING_QUEUE_PACKET *v18; // r15
  struct VIDMM_PAGING_QUEUE_PACKET *NewPagingQueuePacket; // rbx
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  char v23; // r15
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  struct VIDMM_WORKER_THREAD *v27; // rcx
  VIDMM_GLOBAL *v28; // rcx
  unsigned __int64 v29; // rax
  struct VIDMM_ALLOC **v31; // [rsp+30h] [rbp-91h]
  struct _VIDSCH_SYNC_OBJECT *v32; // [rsp+38h] [rbp-89h]
  __int64 v33; // [rsp+40h] [rbp-81h]
  unsigned __int64 v34; // [rsp+48h] [rbp-79h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v35; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-69h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v37; // [rsp+60h] [rbp-61h] BYREF
  __int64 v38; // [rsp+68h] [rbp-59h] BYREF
  char v39; // [rsp+70h] [rbp-51h]
  _OWORD v40[9]; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v41; // [rsp+130h] [rbp+6Fh] BYREF
  unsigned int v42; // [rsp+138h] [rbp+77h] BYREF

  v5 = &a3[a4];
  v6 = 0;
  v31 = v5;
  v7 = a3;
  if ( a3 != v5 )
  {
    v10 = a5;
    while ( 1 )
    {
      v11 = *v7;
      if ( *((int *)*v7 + 45) > 0
        || (*((_DWORD *)v11 + 7) & 3) != 2
        || *((_DWORD *)this + 2) == 206 && *((struct VIDMM_ALLOC **)this + 871) == v11 )
      {
        break;
      }
      v12 = **(_QWORD **)v11;
      v13 = *(_QWORD *)(v12 + 80);
      v14 = *(_DWORD *)(v12 + 24) & 0x3F;
      v15 = *((_QWORD *)this + v14 + 676);
      if ( (v15 <= v13 || v15 - v13 < 0x7FFFFFFF) && !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v14 + 740), v13) )
        break;
LABEL_29:
      if ( (byte_140081241 & 0x20) != 0 )
        McTemplateK0pq_EtwWriteTransfer();
      ++v7;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
      {
        if ( v10 )
          v29 = *v10;
        else
          v29 = 0LL;
        VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(v28, a2, v11, v6 == 259, v29);
      }
      if ( v7 == v5 )
        return v6;
    }
    memset(v40, 0, 0x58uLL);
    v16 = *(_QWORD *)this;
    *(_QWORD *)&v40[2] = 0LL;
    LOBYTE(v41) = dword_1400814DC == 0;
    v42 = 0;
    v17 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 11);
    v16 += 184LL;
    v38 = v16;
    LODWORD(v40[0]) = 206;
    *(_QWORD *)&v40[1] = v11;
    v32 = v17;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    v18 = (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16);
    *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
    v33 = *((_QWORD *)a2 + 9);
    *((_QWORD *)a2 + 9) = v33 + 1;
    NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)a2 + 2);
    v39 = 1;
    if ( *((struct VIDMM_PAGING_QUEUE **)NewPagingQueuePacket + 1) != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16)
      || (v20 = *(_QWORD *)NewPagingQueuePacket,
          *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)NewPagingQueuePacket + 8LL) != NewPagingQueuePacket) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v18 = v20;
    *(_QWORD *)(v20 + 8) = v18;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v38);
    if ( NewPagingQueuePacket == v18 )
    {
      NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE_PACKET *)operator new(160LL, 0x38346956u, 256LL);
      if ( !NewPagingQueuePacket )
      {
LABEL_17:
        if ( !*((_QWORD *)&v40[0] + 1) )
          *((_QWORD *)&v40[0] + 1) = *((_QWORD *)v11 + 1);
        for ( ;
              !NewPagingQueuePacket;
              NewPagingQueuePacket = VidMmGetNewPagingQueuePacket(*(struct VIDMM_WORKER_THREAD **)this, a2) )
        {
          v34 = *((_QWORD *)a2 + 8);
          v35 = v32;
          VIDMM_GLOBAL::WaitForFences(this, &v35, &v34, 1u, 0LL, 0LL);
        }
        v21 = v40[0];
        v22 = v40[1];
        v23 = v41;
        *((_WORD *)NewPagingQueuePacket + 12) = 257;
        *((_OWORD *)NewPagingQueuePacket + 3) = v21;
        v24 = v40[2];
        *((_OWORD *)NewPagingQueuePacket + 4) = v22;
        v25 = v40[3];
        *((_OWORD *)NewPagingQueuePacket + 5) = v24;
        v26 = v40[4];
        *((_OWORD *)NewPagingQueuePacket + 6) = v25;
        *(_QWORD *)&v25 = *(_QWORD *)&v40[5];
        *((_OWORD *)NewPagingQueuePacket + 7) = v26;
        *((_QWORD *)NewPagingQueuePacket + 16) = v25;
        if ( v23 )
          *((_QWORD *)NewPagingQueuePacket + 9) = &v42;
        *((_QWORD *)NewPagingQueuePacket + 17) = VidMmiQuerySystemTime();
        v27 = *(struct VIDMM_WORKER_THREAD **)this;
        v41 = 0LL;
        VidMmAppendReadyPacket(v27, a2, NewPagingQueuePacket, &v41);
        if ( v23 )
        {
          v37 = v32;
          v36 = v41;
          VIDMM_GLOBAL::WaitForFences(this, &v37, &v36, 1u, 0LL, 0LL);
        }
        else if ( v10 )
        {
          v6 = 259;
          *v10 = v41;
          goto LABEL_26;
        }
        v6 = v42;
LABEL_26:
        v5 = v31;
        if ( (*((_DWORD *)v11 + 7) & 0x20) != 0 && v6 == 259 )
        {
          *((_QWORD *)v11 + 32) = a2;
          *((_QWORD *)v11 + 35) = *v10;
        }
        goto LABEL_29;
      }
    }
    else
    {
      memset(NewPagingQueuePacket, 0, 0xA0uLL);
    }
    *((_QWORD *)NewPagingQueuePacket + 5) = v33;
    goto LABEL_17;
  }
  return v6;
}
