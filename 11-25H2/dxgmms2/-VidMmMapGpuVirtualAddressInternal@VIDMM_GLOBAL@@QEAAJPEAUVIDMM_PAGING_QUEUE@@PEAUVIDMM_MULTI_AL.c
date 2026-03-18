/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x1400EFA34
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x1400EF844 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x140037A0C (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140038D54 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400ABC80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B1374 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4C3C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400EDEF0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F22B4 (-VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVID.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_PAGING_QUEUE@@_K@Z @ 0x1400F6730 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        int a5)
{
  D3DGPU_SIZE_T *p_SizeInPages; // rsi
  int v7; // eax
  bool v9; // cf
  D3DGPU_SIZE_T SizeInPages; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 *v14; // r15
  D3DGPU_SIZE_T v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // r10
  D3DGPU_SIZE_T OffsetInPages; // rax
  D3DGPU_SIZE_T v19; // rcx
  __int64 result; // rax
  unsigned int v21; // eax
  __int64 **v22; // rax
  struct _VIDSCH_SYNC_OBJECT **v23; // rcx
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rsi
  __int64 *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct CVirtualAddressAllocator *v30; // rsi
  _QWORD *v31; // rsi
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r14
  int v35; // eax
  unsigned int v36; // edi
  char v37; // al
  struct _VIDSCH_SYNC_OBJECT *v38; // rax
  __int64 v39; // rdi
  struct VIDMM_PAGING_QUEUE **v40; // r15
  struct VIDMM_PAGING_QUEUE **NewPagingQueuePacket; // rdi
  struct VIDMM_PAGING_QUEUE *v42; // rax
  struct _VIDSCH_SYNC_OBJECT *v43; // r15
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  char v46; // r15
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  struct VIDMM_WORKER_THREAD *v50; // rcx
  struct VIDMM_MULTI_ALLOC *v51; // rcx
  VIDMM_GLOBAL *v52; // rcx
  PLARGE_INTEGER BaseAddress; // [rsp+28h] [rbp-D8h]
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // [rsp+30h] [rbp-D0h]
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+38h] [rbp-C8h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-B8h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-B0h]
  struct _VIDSCH_SYNC_OBJECT *v58; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v59; // [rsp+78h] [rbp-88h]
  struct VIDMM_PROCESS *v60; // [rsp+80h] [rbp-80h]
  unsigned int v61; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v62; // [rsp+90h] [rbp-70h]
  __int128 v63; // [rsp+A0h] [rbp-60h]
  __int128 v64; // [rsp+B0h] [rbp-50h]
  __int128 v65; // [rsp+C0h] [rbp-40h]
  __int128 v66; // [rsp+D0h] [rbp-30h]
  __int128 v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+100h] [rbp+0h] BYREF
  char v70; // [rsp+108h] [rbp+8h]
  _QWORD v71[11]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v72[18]; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v73; // [rsp+218h] [rbp+118h] BYREF
  struct VIDMM_MULTI_ALLOC *v74; // [rsp+220h] [rbp+120h]
  unsigned __int64 v75; // [rsp+228h] [rbp+128h] BYREF

  v74 = a3;
  p_SizeInPages = &a4->SizeInPages;
  v7 = (*((_DWORD *)a2 + 28) >> 5) & 0x1F;
  v9 = (_BYTE)a5 != 0;
  LOBYTE(a5) = -(char)a5;
  SizeInPages = a4->SizeInPages;
  v61 = v7;
  v13 = 0LL;
  v14 = (unsigned __int64 *)((unsigned __int64)&a4->PagingFenceValue & -(__int64)v9);
  a5 = 0;
  v62 = v14;
  v15 = SizeInPages << 12;
  v16 = 4096;
  v59 = (struct _VIDSCH_SYNC_OBJECT *)(SizeInPages << 12);
  v73 = 4096;
  if ( a3 )
  {
    v17 = ***(_QWORD ***)a3;
    if ( !SizeInPages )
    {
      v15 = *(_QWORD *)(v17 + 16);
      v59 = (struct _VIDSCH_SYNC_OBJECT *)v15;
    }
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    OffsetInPages = a4->OffsetInPages;
    v19 = *(_QWORD *)(v17 + 16) >> 12;
    if ( OffsetInPages >= v19 )
    {
      WdLogSingleEntry1(3LL, a4->OffsetInPages);
      WdLogGlobalForLineNumber = 19242;
      return 3221225485LL;
    }
    if ( v19 - OffsetInPages < v15 >> 12 && (*((_BYTE *)this + 40937) & 2) == 0 )
    {
      WdLogSingleEntry1(3LL, SizeInPages);
      WdLogGlobalForLineNumber = 19253;
      return 3221225485LL;
    }
    v21 = *(_DWORD *)(v17 + 32);
    p_SizeInPages = &a4->SizeInPages;
    a5 = 1;
    if ( v21 > 0x1000 )
      v16 = v21;
    v22 = *(__int64 ***)a3;
    v73 = v16;
    v23 = (struct _VIDSCH_SYNC_OBJECT **)v22[1];
    v60 = (struct VIDMM_PROCESS *)v23;
  }
  else
  {
    v24 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v24 )
      v23 = *(struct _VIDSCH_SYNC_OBJECT ***)(v24 + 8);
    else
      v23 = 0LL;
    v25 = (*(_BYTE *)&a4->Protection.0 & 4) == 0;
    v15 = (D3DGPU_SIZE_T)v59;
    v60 = (struct VIDMM_PROCESS *)v23;
    if ( !v25 )
      a5 = 6;
  }
  if ( !v15 )
  {
    WdLogSingleEntry1(3LL, *p_SizeInPages);
    WdLogGlobalForLineNumber = 19275;
    return 3221225485LL;
  }
  v26 = *(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
  v58 = v23[2];
  v27 = (__int64 *)*((_QWORD *)v58 + v26);
  if ( !v27
    || (v28 = *v27, !*(_DWORD *)(v28 + 40928))
    || ((v29 = *(_QWORD *)(v28 + 24),
         LODWORD(v75) = 0,
         SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v29 + 224), (union SYSMM_IOMMU_STATE *)&v75),
         (v75 & 8) == 0)
      ? ((v31 = (_QWORD *)*((_QWORD *)v58 + v26), (*((_DWORD *)v60 + 24) & 2) == 0)
       ? (v30 = (struct CVirtualAddressAllocator *)v31[23])
       : (v30 = *(struct CVirtualAddressAllocator **)(*v31 + 0x800009DD8LL)))
      : (v30 = *(struct CVirtualAddressAllocator **)(**((_QWORD **)v58 + v26) + 44504LL)),
        !v30) )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 19284;
    return result;
  }
  DriverProtection = a4->DriverProtection;
  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  MaximumAddress = a4->MaximumAddress;
  MinimumAddress = a4->MinimumAddress;
  BaseAddress = (PLARGE_INTEGER)a4->BaseAddress;
  v32 = a4->OffsetInPages << 12;
  v58 = 0LL;
  v33 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v30,
          (__int64)a3,
          v32,
          a5,
          (unsigned __int64)v59,
          (unsigned __int64)BaseAddress,
          MinimumAddress,
          MaximumAddress,
          v73,
          (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)Value,
          DriverProtection,
          v61,
          (void **)&v58,
          1);
  v34 = v33;
  if ( !v33 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 19309;
    return result;
  }
  v25 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
  a4->VirtualAddress = *(_QWORD *)(v33 + 104);
  a4->PagingFenceValue = 0LL;
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v33 + 136));
    memset(v71, 0, sizeof(v71));
    v71[9] = v58;
    v68 = 0LL;
    *((_QWORD *)&v63 + 1) = *((_QWORD *)a2 + 12);
    v71[0] = -4294967183LL;
    v71[6] = v34;
    v71[5] = v30;
    *(_OWORD *)&v71[7] = xmmword_140059C70;
    v37 = *(_DWORD *)(v34 + 72) & 0xF;
    *(_QWORD *)&v63 = 113LL;
    v64 = 0LL;
    if ( v37 == 1 )
      *(_QWORD *)&v64 = *(_QWORD *)(v34 + 64);
    v66 = xmmword_140059C70;
    v65 = *(_OWORD *)&v71[5];
    v67 = *(_OWORD *)&v71[9];
    BYTE8(v67) = 1;
    if ( !v14 || (LOBYTE(a5) = 0, !dword_1400814BC) )
      LOBYTE(a5) = 1;
    v38 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 11);
    v69 = *(_QWORD *)this + 184LL;
    v39 = v69;
    v73 = 0;
    v59 = v38;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v39, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v40 = (struct VIDMM_PAGING_QUEUE **)((char *)a2 + 16);
    *(_QWORD *)(v39 + 8) = KeGetCurrentThread();
    v75 = *((_QWORD *)a2 + 9);
    *((_QWORD *)a2 + 9) = v75 + 1;
    NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 2);
    v70 = 1;
    if ( NewPagingQueuePacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16)
      || (v42 = *NewPagingQueuePacket,
          *((struct VIDMM_PAGING_QUEUE ***)*NewPagingQueuePacket + 1) != NewPagingQueuePacket) )
    {
      __fastfail(3u);
    }
    *v40 = v42;
    *((_QWORD *)v42 + 1) = v40;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v69);
    if ( NewPagingQueuePacket == v40 )
    {
      NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
      if ( !NewPagingQueuePacket )
      {
        NewPagingQueuePacket = 0LL;
        goto LABEL_46;
      }
    }
    else
    {
      memset(NewPagingQueuePacket, 0, 0xA0uLL);
    }
    NewPagingQueuePacket[5] = (struct VIDMM_PAGING_QUEUE *)v75;
LABEL_46:
    if ( !*((_QWORD *)&v63 + 1) )
      *((_QWORD *)&v63 + 1) = *(_QWORD *)(v64 + 8);
    if ( !NewPagingQueuePacket )
    {
      v43 = v59;
      do
      {
        v75 = *((_QWORD *)a2 + 8);
        v58 = v43;
        VIDMM_GLOBAL::WaitForFences(this, &v58, &v75, 1u, 0LL, 0LL);
        NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)VidMmGetNewPagingQueuePacket(
                                                               *(struct VIDMM_WORKER_THREAD **)this,
                                                               a2);
      }
      while ( !NewPagingQueuePacket );
    }
    v44 = v63;
    v45 = v64;
    v46 = a5;
    *((_WORD *)NewPagingQueuePacket + 12) = 257;
    *((_OWORD *)NewPagingQueuePacket + 3) = v44;
    v47 = v65;
    *((_OWORD *)NewPagingQueuePacket + 4) = v45;
    v48 = v66;
    *((_OWORD *)NewPagingQueuePacket + 5) = v47;
    v49 = v67;
    *((_OWORD *)NewPagingQueuePacket + 6) = v48;
    *(_QWORD *)&v48 = v68;
    *((_OWORD *)NewPagingQueuePacket + 7) = v49;
    NewPagingQueuePacket[16] = (struct VIDMM_PAGING_QUEUE *)v48;
    if ( v46 )
      NewPagingQueuePacket[9] = (struct VIDMM_PAGING_QUEUE *)&v73;
    v50 = *(struct VIDMM_WORKER_THREAD **)this;
    v75 = 0LL;
    VidMmAppendReadyPacket(v50, a2, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPagingQueuePacket, &v75);
    if ( v46 )
    {
      v58 = v59;
      VIDMM_GLOBAL::WaitForFences(this, &v58, &v75, 1u, 0LL, 0LL);
      v14 = v62;
    }
    else
    {
      v14 = v62;
      if ( v62 )
      {
        v36 = 259;
        *v62 = v75;
        goto LABEL_56;
      }
    }
    v36 = v73;
LABEL_56:
    if ( v36 == 259 )
    {
      v51 = v74;
      if ( v74 )
      {
        if ( (*((_DWORD *)v74 + 7) & 0x20) != 0 )
        {
          *((_QWORD *)v74 + 31) = a2;
          *((_QWORD *)v51 + 34) = *v14;
        }
      }
    }
    goto LABEL_60;
  }
  memset(v72, 0, 0x58uLL);
  v35 = (*(_DWORD *)(v34 + 72) >> 4) & 0x3F;
  LODWORD(v72[0]) = 114;
  HIDWORD(v72[0]) = v35;
  v72[8] = v58;
  v72[7] = v34;
  v72[6] = v30;
  v36 = VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v72);
LABEL_60:
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
  {
    if ( v14 )
      v13 = *v14;
    VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(v52, v60, (struct VIDMM_MAPPED_VA_RANGE *)v34, a2, v13);
  }
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)v34, v30);
  return v36;
}
