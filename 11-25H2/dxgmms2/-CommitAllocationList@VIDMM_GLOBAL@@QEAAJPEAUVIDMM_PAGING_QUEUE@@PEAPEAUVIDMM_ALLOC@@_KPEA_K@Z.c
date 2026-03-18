/*
 * XREFs of ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1400F0E30
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B1014 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140018FD8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1400366A0 (VidSchIsMonitoredFenceSignaled.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x140037A0C (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037BC4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400ABC80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400EDEF0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F22B4 (-VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVID.c)
 *     ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1400F5D70 (-RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitAllocationList(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC **a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  struct VIDMM_ALLOC **v5; // r13
  unsigned int v6; // ebx
  struct VIDMM_ALLOC **v7; // r15
  struct VIDMM_PAGING_QUEUE *v8; // r14
  unsigned __int64 *v10; // r12
  struct VIDMM_ALLOC *v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  struct _VIDSCH_SYNC_OBJECT *v17; // rax
  __int64 v18; // r13
  struct VIDMM_PAGING_QUEUE_PACKET **v19; // r14
  struct VIDMM_PAGING_QUEUE_PACKET *NewPagingQueuePacket; // rbx
  struct VIDMM_PAGING_QUEUE_PACKET *v21; // rax
  struct _VIDSCH_SYNC_OBJECT *v22; // r13
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 SystemTime; // rax
  VIDMM_GLOBAL *v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v32; // [rsp+30h] [rbp-91h] BYREF
  struct VIDMM_ALLOC **v33; // [rsp+38h] [rbp-89h]
  struct _VIDSCH_SYNC_OBJECT *v34; // [rsp+40h] [rbp-81h]
  unsigned __int64 v35; // [rsp+48h] [rbp-79h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v36; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-69h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v38; // [rsp+60h] [rbp-61h] BYREF
  __int64 v39; // [rsp+68h] [rbp-59h] BYREF
  char v40; // [rsp+70h] [rbp-51h]
  _OWORD v41[9]; // [rsp+80h] [rbp-41h] BYREF
  bool v43; // [rsp+130h] [rbp+6Fh]
  unsigned int v44; // [rsp+138h] [rbp+77h] BYREF

  v5 = &a3[a4];
  v6 = 0;
  v33 = v5;
  v7 = a3;
  v8 = a2;
  if ( a3 != v5 )
  {
    v10 = a5;
    while ( 1 )
    {
      v11 = *v7;
      if ( *((int *)*v7 + 41) > 0
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
LABEL_30:
      if ( (byte_140081241 & 0x20) != 0 )
        McTemplateK0pq_EtwWriteTransfer();
      ++v7;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
      {
        if ( v10 )
          v30 = *v10;
        else
          v30 = 0LL;
        VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(v29, v8, v11, v6 == 259, v30);
      }
      if ( v7 == v5 )
        return v6;
    }
    memset(v41, 0, 0x58uLL);
    v16 = *(_QWORD *)this;
    v17 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v8 + 11);
    v43 = dword_1400814BC == 0;
    LODWORD(v41[0]) = 206;
    v16 += 184LL;
    *(_QWORD *)&v41[1] = v11;
    v39 = v16;
    *(_QWORD *)&v41[2] = 0LL;
    v44 = 0;
    v34 = v17;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
    v18 = *((_QWORD *)v8 + 9);
    v40 = 1;
    *((_QWORD *)v8 + 9) = v18 + 1;
    v19 = (struct VIDMM_PAGING_QUEUE_PACKET **)((char *)v8 + 16);
    NewPagingQueuePacket = *v19;
    if ( *((struct VIDMM_PAGING_QUEUE_PACKET ***)*v19 + 1) != v19
      || (v21 = *(struct VIDMM_PAGING_QUEUE_PACKET **)NewPagingQueuePacket,
          *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)NewPagingQueuePacket + 8LL) != NewPagingQueuePacket) )
    {
      __fastfail(3u);
    }
    *v19 = v21;
    *((_QWORD *)v21 + 1) = v19;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v39);
    if ( NewPagingQueuePacket == (struct VIDMM_PAGING_QUEUE_PACKET *)v19 )
    {
      NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE_PACKET *)operator new(160LL, 0x38346956u, 256LL);
      if ( !NewPagingQueuePacket )
      {
LABEL_17:
        if ( !*((_QWORD *)&v41[0] + 1) )
          *((_QWORD *)&v41[0] + 1) = *((_QWORD *)v11 + 1);
        v8 = a2;
        if ( !NewPagingQueuePacket )
        {
          v22 = v34;
          do
          {
            v35 = *((_QWORD *)a2 + 8);
            v36 = v22;
            VIDMM_GLOBAL::WaitForFences(this, &v36, &v35, 1u, 0LL, 0LL);
            NewPagingQueuePacket = VidMmGetNewPagingQueuePacket(*(struct VIDMM_WORKER_THREAD **)this, a2);
          }
          while ( !NewPagingQueuePacket );
        }
        v23 = v41[0];
        v24 = v41[1];
        *((_WORD *)NewPagingQueuePacket + 12) = 257;
        *((_OWORD *)NewPagingQueuePacket + 3) = v23;
        v25 = v41[2];
        *((_OWORD *)NewPagingQueuePacket + 4) = v24;
        v26 = v41[3];
        *((_OWORD *)NewPagingQueuePacket + 5) = v25;
        v27 = v41[4];
        *((_OWORD *)NewPagingQueuePacket + 6) = v26;
        *(_QWORD *)&v26 = *(_QWORD *)&v41[5];
        *((_OWORD *)NewPagingQueuePacket + 7) = v27;
        *((_QWORD *)NewPagingQueuePacket + 16) = v26;
        if ( v43 )
          *((_QWORD *)NewPagingQueuePacket + 9) = &v44;
        SystemTime = VidMmiQuerySystemTime();
        v32 = 0LL;
        *((_QWORD *)NewPagingQueuePacket + 17) = SystemTime;
        VidMmAppendReadyPacket(*(struct VIDMM_WORKER_THREAD **)this, a2, NewPagingQueuePacket, &v32);
        if ( v43 )
        {
          v38 = v34;
          v37 = v32;
          VIDMM_GLOBAL::WaitForFences(this, &v38, &v37, 1u, 0LL, 0LL);
        }
        else if ( v10 )
        {
          v6 = 259;
          *v10 = v32;
          goto LABEL_27;
        }
        v6 = v44;
LABEL_27:
        v5 = v33;
        if ( (*((_DWORD *)v11 + 7) & 0x20) != 0 && v6 == 259 )
        {
          *((_QWORD *)v11 + 30) = a2;
          *((_QWORD *)v11 + 33) = *v10;
        }
        goto LABEL_30;
      }
    }
    else
    {
      memset(NewPagingQueuePacket, 0, 0xA0uLL);
    }
    *((_QWORD *)NewPagingQueuePacket + 5) = v18;
    goto LABEL_17;
  }
  return v6;
}
