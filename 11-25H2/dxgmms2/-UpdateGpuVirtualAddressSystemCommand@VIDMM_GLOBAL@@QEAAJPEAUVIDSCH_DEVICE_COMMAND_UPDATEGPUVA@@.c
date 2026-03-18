/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400BF1DC
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14001B090 (VidSchSignalSyncObjectsFromGpu.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x140028324 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140030520 (VidSchSubmitSignalToHwQueue.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140037174 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x140037A0C (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1400382D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038934 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003C090 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003C2C8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     VidSchGetPagingContext @ 0x140044764 (VidSchGetPagingContext.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x14008F4EC (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B1374 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400B723C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1400BFE10 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400BFF30 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BFF5C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1400BFFB8 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400D00E0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbx
  VIDMM_GLOBAL *v6; // r12
  __int64 v7; // rax
  int v8; // esi
  __int64 v9; // r14
  struct _KTHREAD **v10; // r13
  struct _KTHREAD **v11; // rdx
  VIDMM_GLOBAL *v12; // rcx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rdx
  VIDMM_GLOBAL *v15; // rcx
  unsigned __int64 v16; // r10
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v17; // r14
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  void **v19; // r12
  void *v20; // rbx
  VIDMM_GLOBAL *v21; // rcx
  void ****v22; // r8
  int v23; // ecx
  char v24; // al
  unsigned __int64 v25; // r9
  VIDMM_SEGMENT *v26; // rcx
  struct _MDL *v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r12d
  char *v31; // r14
  struct VIDMM_MAPPED_VA_RANGE *v32; // rbx
  struct VIDMM_MAPPED_VA_RANGE *v33; // rdx
  unsigned __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  int v38; // eax
  struct _DXGK_ADL *v39; // rdx
  VIDMM_GLOBAL *v40; // rcx
  unsigned __int64 v41; // r10
  volatile signed __int32 *v42; // r14
  volatile signed __int32 *v43; // rbx
  unsigned __int64 v44; // r12
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **v45; // rax
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **v46; // rcx
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  unsigned int v51; // ebx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  VIDMM_GLOBAL *v55; // rcx
  char *v56; // r12
  unsigned __int64 *v57; // r8
  __int64 v58; // r14
  unsigned __int64 v59; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v60; // rdx
  int v61; // eax
  bool v62; // zf
  struct VIDMM_GLOBAL_ALLOC *v63; // rsi
  __int64 v64; // rdx
  VIDMM_SEGMENT *v65; // rcx
  struct _MDL *FullMDL; // rbx
  unsigned __int64 LogicalAddress; // rax
  unsigned __int64 v68; // r10
  int v69; // r9d
  char v70; // r8
  int v71; // eax
  unsigned __int64 *v72; // rax
  unsigned __int64 v73; // rcx
  int v74; // eax
  int v75; // eax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned __int64 **v78; // rbx
  unsigned __int64 *v79; // rcx
  unsigned __int64 *v80; // rax
  __int64 v81; // rdx
  int v82; // eax
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // eax
  struct _LIST_ENTRY *v89; // [rsp+20h] [rbp-E0h]
  char v90; // [rsp+60h] [rbp-A0h]
  char v91; // [rsp+61h] [rbp-9Fh] BYREF
  char v92[2]; // [rsp+62h] [rbp-9Eh] BYREF
  int v93; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v94; // [rsp+68h] [rbp-98h]
  int v95; // [rsp+70h] [rbp-90h]
  struct VIDMM_PROCESS *v96; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v97; // [rsp+80h] [rbp-80h]
  void ****v98; // [rsp+88h] [rbp-78h]
  unsigned __int64 AllocationOffsetInBytes; // [rsp+90h] [rbp-70h]
  __int128 v100; // [rsp+98h] [rbp-68h] BYREF
  __int128 v101; // [rsp+A8h] [rbp-58h] BYREF
  int v102; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-40h]
  char v104; // [rsp+C8h] [rbp-38h]
  void **v105; // [rsp+D0h] [rbp-30h]
  _QWORD *v106; // [rsp+D8h] [rbp-28h]
  char *v107; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v108; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v109; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v110; // [rsp+F8h] [rbp-8h] BYREF
  __int64 PagingContext; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v112[88]; // [rsp+108h] [rbp+8h] BYREF
  char v114; // [rsp+178h] [rbp+78h] BYREF
  struct VIDMM_ALLOC **v115; // [rsp+180h] [rbp+80h]
  char v116; // [rsp+188h] [rbp+88h] BYREF

  v115 = a3;
  v3 = -1LL;
  v4 = 0LL;
  v6 = this;
  v102 = -1;
  v103 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v104 = 1;
    v102 = 8011;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v104 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v7 = *((_QWORD *)a2 + 11);
  v8 = 0;
  v90 = 0;
  LODWORD(v9) = 0;
  v10 = *(struct _KTHREAD ***)v7;
  v11 = (struct _KTHREAD **)(*(_QWORD *)v7 + 56LL);
  v96 = *(struct VIDMM_PROCESS **)(*(_QWORD *)(v7 + 16) + 8LL);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v112, v11);
  if ( !*((_QWORD *)a2 + 14) )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 23674;
    v8 = -1073741823;
    v90 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 23684;
      v8 = -1073741823;
      v90 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v13, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v112);
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v14 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 200), 0, 0) )
  {
    v8 = -1073741823;
    goto LABEL_61;
  }
  if ( v8 < 0 )
    goto LABEL_60;
  v94 = 0LL;
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v6) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      v15,
      0,
      v10[12],
      *(struct _VIDSCH_CONTEXT **)a2,
      *((_DWORD *)a2 + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
      *((_QWORD *)a2 + 10));
    LODWORD(v16) = 0;
  }
  v9 = *((unsigned int *)a2 + 9);
  while ( 1 )
  {
    v93 = v9;
    if ( (unsigned int)v9 >= *((_DWORD *)a2 + 5) )
    {
      v44 = v94;
      goto LABEL_57;
    }
    v17 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + (v9 << 6));
    OperationType = v17->OperationType;
    if ( v17->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      break;
    }
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
    {
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
        goto LABEL_39;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v6) )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v55, v96, *(struct _VIDSCH_CONTEXT **)a2, 0LL, v17);
        v16 = 0LL;
      }
      v56 = (char *)a2 + 48;
      if ( *(char **)v56 == v56 )
      {
        v8 = CVirtualAddressAllocator::BuildVaRangeList(
               v10,
               *((struct VIDMM_VAD **)a2 + 15),
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               (struct _LIST_ENTRY *)a2 + 3,
               v17->Map.BaseAddress,
               v17->Map.BaseAddress + v17->Map.SizeInBytes,
               v17->Unmap.Protection.Value);
        v16 = 0LL;
      }
      if ( v8 < 0 )
      {
LABEL_38:
        if ( v8 != -1073741267 )
        {
          v78 = (unsigned __int64 **)((char *)a2 + 48);
          while ( 1 )
          {
            v79 = *v78;
            if ( *v78 == (unsigned __int64 *)v78 )
              break;
            if ( (unsigned __int64 **)v79[1] != v78 )
              goto LABEL_75;
            v80 = (unsigned __int64 *)*v79;
            if ( *(unsigned __int64 **)(*v79 + 8) != v79 )
              goto LABEL_75;
            *v78 = v80;
            v80[1] = (unsigned __int64)v78;
            *v79 = v16;
            v79[1] = v16;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
              (volatile signed __int32 *)v79 - 2,
              (struct CVirtualAddressAllocator *)v10);
            v16 = 0LL;
          }
        }
LABEL_39:
        if ( v8 < 0 )
          goto LABEL_72;
        goto LABEL_40;
      }
      while ( 2 )
      {
        while ( 2 )
        {
          v57 = *(unsigned __int64 **)v56;
          v97 = v57;
          if ( v57 == (unsigned __int64 *)v56 || v8 < 0 )
            goto LABEL_38;
          v58 = (__int64)(v57 - 1);
          v59 = v57[7];
          if ( v59 )
          {
            v63 = **(struct VIDMM_GLOBAL_ALLOC ***)v59;
            v64 = *(_QWORD *)v63;
            if ( (*(_DWORD *)(v59 + 28) & 3) == 2 )
            {
              v65 = *(VIDMM_SEGMENT **)(v64 + 64);
              v100 = 0LL;
              if ( (*((_DWORD *)v65 + 26) & 0x1001) != 0 )
              {
                FullMDL = VidMmGetFullMDL(v63, 0LL);
                LogicalAddress = SysMmGetLogicalAddress(*((void *const *)v63 + 44));
                VidMmiInitializeAdlForPfnArray(
                  (struct _DXGK_ADL *)&v100,
                  (const unsigned __int64 *)&FullMDL[1],
                  FullMDL->ByteCount >> 12,
                  LogicalAddress);
                v4 = v94;
                v68 = 0LL;
                v69 = 0;
              }
              else
              {
                LODWORD(v100) = *(_DWORD *)(v64 + 16) >> 12;
                *((_QWORD *)&v100 + 1) = *(_QWORD *)(v64 + 72) >> 12;
                DWORD1(v100) = 1;
                v69 = VIDMM_SEGMENT::DriverId(v65);
              }
              v70 = *((_DWORD *)v63 + 6) & 0x3F;
              v89 = *(struct _LIST_ENTRY **)(v58 + 80);
              v91 = v68;
              v71 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      (__int64)v10,
                      v58,
                      v70,
                      v69,
                      (unsigned __int64)v89,
                      (struct _DXGK_ADL *)&v100,
                      2,
                      v115,
                      &v91,
                      v68,
                      v68);
              v16 = 0LL;
              v8 = v71;
              if ( v71 < 0 )
              {
                WdLogSingleEntry2(3LL, *(_QWORD *)(v58 + 104), *(_QWORD *)(v58 + 112));
                v16 = 0LL;
                WdLogGlobalForLineNumber = 23974;
              }
              v62 = v91 == 0;
LABEL_106:
              if ( !v62 )
                goto LABEL_116;
              goto LABEL_107;
            }
          }
          else
          {
            v62 = (*(_BYTE *)(v58 + 96) & 8) == 0;
            v60 = (struct VIDMM_MAPPED_VA_RANGE *)(v57 - 1);
            v116 = v16;
            if ( v62 )
            {
              v61 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      (__int64)v10,
                      (__int64)v60,
                      0,
                      -2,
                      v16,
                      (struct _DXGK_ADL *)&xmmword_140059C70,
                      2,
                      v115,
                      &v116,
                      v16,
                      v16);
              v16 = 0LL;
              v8 = v61;
              if ( v61 < 0 )
              {
                WdLogSingleEntry2(3LL, *(_QWORD *)(v58 + 104), *(_QWORD *)(v58 + 112));
                v16 = 0LL;
                WdLogGlobalForLineNumber = 24009;
              }
              v62 = v116 == 0;
              goto LABEL_106;
            }
            v75 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v10, v60, v115, 0);
            v16 = 0LL;
            v8 = v75;
            if ( v75 < 0 )
            {
              WdLogSingleEntry2(3LL, *(_QWORD *)(v58 + 104), *(_QWORD *)(v58 + 112));
              v16 = 0LL;
              WdLogGlobalForLineNumber = 23992;
            }
            v116 = 1;
LABEL_116:
            v76 = *(_QWORD *)(v58 + 104);
            if ( v3 < v76 )
              v76 = v3;
            v3 = v76;
            v77 = *(_QWORD *)(v58 + 112);
            if ( v4 <= v77 )
            {
              v94 = *(_QWORD *)(v58 + 112);
              v4 = v77;
            }
LABEL_107:
            if ( v8 < 0 )
              continue;
            v57 = v97;
          }
          break;
        }
        v72 = *(unsigned __int64 **)v56;
        if ( *(char **)(*(_QWORD *)v56 + 8LL) != v56 )
          goto LABEL_75;
        v73 = *v72;
        if ( *(unsigned __int64 **)(*v72 + 8) != v72 )
          goto LABEL_75;
        *(_QWORD *)v56 = v73;
        *(_QWORD *)(v73 + 8) = v56;
        *v57 = v16;
        v57[1] = v16;
        v74 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                v10,
                *((struct VIDMM_VAD **)a2 + 14),
                *((_DWORD *)a2 + 4),
                (struct VIDMM_MAPPED_VA_RANGE *)v58);
        v16 = 0LL;
        v8 = v74;
        if ( v74 < 0 )
        {
          WdLogSingleEntry2(3LL, *(_QWORD *)(v58 + 104), *(_QWORD *)(v58 + 112));
          WdLogGlobalForLineNumber = 24026;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
            (volatile signed __int32 *)v58,
            (struct CVirtualAddressAllocator *)v10);
          v16 = 0LL;
        }
        continue;
      }
    }
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v6) )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v40, v96, *(struct _VIDSCH_CONTEXT **)a2, 0LL, v17);
      v41 = 0LL;
      v39 = (struct _DXGK_ADL *)&xmmword_140059C70;
    }
    v42 = (volatile signed __int32 *)*((_QWORD *)a2 + 12);
    v114 = v41;
    v43 = v42 - 2;
    if ( (v42[22] & 8) != 0 )
    {
      v8 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
             (CVirtualAddressAllocator *)v10,
             (struct VIDMM_MAPPED_VA_RANGE *)(v42 - 2),
             v115,
             0);
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(3LL, *((_QWORD *)v43 + 13), *((_QWORD *)v43 + 14));
        WdLogGlobalForLineNumber = 23862;
      }
      v114 = 1;
    }
    else
    {
      v8 = CVirtualAddressAllocator::CommitVirtualAddressRange(
             (__int64)v10,
             (__int64)(v42 - 2),
             0,
             -2,
             v41,
             v39,
             2,
             v115,
             &v114,
             v41,
             v41);
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(3LL, *((_QWORD *)v43 + 13), *((_QWORD *)v43 + 14));
        WdLogGlobalForLineNumber = 23878;
      }
      if ( !v114 )
      {
        v44 = v94;
        goto LABEL_50;
      }
    }
    v53 = *((_QWORD *)v43 + 13);
    v44 = v94;
    if ( v3 < v53 )
      v53 = v3;
    v3 = v53;
    v54 = *((_QWORD *)v43 + 14);
    if ( v94 <= v54 )
    {
      v94 = *((_QWORD *)v43 + 14);
      v44 = v54;
    }
LABEL_50:
    if ( v8 < 0 )
      goto LABEL_55;
    v45 = (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)((char *)a2 + 96);
    v46 = (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)*((_QWORD *)a2 + 12);
    if ( v46[1] != (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *)((char *)a2 + 96)
      || (v47 = *v46, *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA ***)*v46 + 1) != v46) )
    {
LABEL_75:
      __fastfail(3u);
    }
    *v45 = v47;
    *((_QWORD *)v47 + 1) = v45;
    *(_QWORD *)v42 = 0LL;
    *((_QWORD *)v42 + 1) = 0LL;
    v48 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
            v10,
            *((struct VIDMM_VAD **)a2 + 14),
            *((_DWORD *)a2 + 4),
            (struct VIDMM_MAPPED_VA_RANGE *)(v42 - 2));
    LODWORD(v16) = 0;
    v8 = v48;
    if ( v48 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
      WdLogGlobalForLineNumber = 23900;
LABEL_55:
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v42 - 2, (struct CVirtualAddressAllocator *)v10);
      goto LABEL_73;
    }
LABEL_40:
    v4 = v94;
    v9 = (unsigned int)(v93 + 1);
    v6 = this;
    *((_DWORD *)a2 + 10) = v16;
  }
  v98 = *(void *****)(*((_QWORD *)a2 + 8) + 8LL * v17->Map.hAllocation);
  v19 = **v98;
  v105 = v19;
  v20 = *v19;
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      v21,
      v96,
      *(struct _VIDSCH_CONTEXT **)a2,
      (struct VIDMM_ALLOC *)v22,
      v17);
    v22 = v98;
    v16 = 0LL;
  }
  AllocationOffsetInBytes = v16;
  v101 = 0LL;
  v23 = v16;
  v24 = *((_DWORD *)v22 + 7) & 3;
  v95 = v16;
  v25 = v16;
  if ( v24 == 2 )
  {
    v26 = (VIDMM_SEGMENT *)*((_QWORD *)v20 + 8);
    AllocationOffsetInBytes = v17->Map.AllocationOffsetInBytes;
    if ( (*((_DWORD *)v26 + 26) & 0x1001) != 0 )
    {
      v27 = VidMmGetFullMDL((struct VIDMM_GLOBAL_ALLOC *)v19, 0LL);
      v28 = SysMmGetLogicalAddress(v19[44]);
      VidMmiInitializeAdlForPfnArray(
        (struct _DXGK_ADL *)&v101,
        (const unsigned __int64 *)&v27[1],
        v27->ByteCount >> 12,
        v28);
      v22 = v98;
      v16 = 0LL;
      v25 = AllocationOffsetInBytes;
      v23 = 0;
    }
    else
    {
      v81 = *((_QWORD *)v20 + 9) >> 12;
      LODWORD(v101) = *((_DWORD *)v20 + 4) >> 12;
      *((_QWORD *)&v101 + 1) = v81;
      DWORD1(v101) = 1;
      v23 = VIDMM_SEGMENT::DriverId(v26);
    }
    v95 = v23;
  }
  if ( (*((_BYTE *)this + 40937) & 2) != 0 )
    v29 = 1LL;
  else
    v29 = v17->Map.SizeInBytes / v17->Map.AllocationSizeInBytes;
  v30 = *((_DWORD *)a2 + 10);
  v97 = (unsigned __int64 *)v29;
  while ( 1 )
  {
    if ( v30 >= (unsigned int)v29 )
      goto LABEL_39;
    v31 = (char *)a2 + 96;
    v106 = (_QWORD *)*((_QWORD *)a2 + 12);
    v32 = (struct VIDMM_MAPPED_VA_RANGE *)(v106 - 1);
    v33 = (struct VIDMM_MAPPED_VA_RANGE *)(v106 - 1);
    if ( (*((_DWORD *)v22 + 7) & 3) != 2 )
      break;
    v92[0] = v16;
    v8 = CVirtualAddressAllocator::CommitVirtualAddressRange(
           (__int64)v10,
           (__int64)v33,
           (_DWORD)v105[3] & 0x3F,
           v23,
           v25,
           (struct _DXGK_ADL *)&v101,
           2,
           v115,
           v92,
           v16,
           v16);
    if ( v92[0] )
    {
      v34 = *((_QWORD *)v32 + 13);
      if ( v3 < v34 )
        v34 = v3;
      v3 = v34;
      if ( v94 <= *((_QWORD *)v32 + 14) )
        v94 = *((_QWORD *)v32 + 14);
    }
    if ( v8 < 0 )
    {
      WdLogSingleEntry2(3LL, *((_QWORD *)v32 + 13), *((_QWORD *)v32 + 14));
      WdLogGlobalForLineNumber = 23820;
      goto LABEL_72;
    }
LABEL_33:
    v35 = *(__int64 **)v31;
    if ( *(char **)(*(_QWORD *)v31 + 8LL) != v31 )
      goto LABEL_75;
    v36 = *v35;
    if ( *(__int64 **)(*v35 + 8) != v35 )
      goto LABEL_75;
    v37 = v106;
    *(_QWORD *)v31 = v36;
    *(_QWORD *)(v36 + 8) = v31;
    *v37 = 0LL;
    v37[1] = 0LL;
    v38 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
            v10,
            *((struct VIDMM_VAD **)a2 + 14),
            *((_DWORD *)a2 + 4),
            v32);
    v16 = 0LL;
    v8 = v38;
    if ( v38 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
      WdLogGlobalForLineNumber = 23833;
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
        (volatile signed __int32 *)v32,
        (struct CVirtualAddressAllocator *)v10);
      goto LABEL_72;
    }
    v22 = v98;
    ++v30;
    LODWORD(v29) = (_DWORD)v97;
    v23 = v95;
    v25 = AllocationOffsetInBytes;
  }
  v82 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v10, v33, v115, 0);
  v83 = *((_QWORD *)v32 + 13);
  v8 = v82;
  v84 = *((_QWORD *)v32 + 14);
  v85 = v83;
  if ( v3 < v83 )
    v85 = v3;
  v3 = v85;
  v86 = *((_QWORD *)v32 + 14);
  if ( v94 > v84 )
    v86 = v94;
  v94 = v86;
  if ( v8 >= 0 )
    goto LABEL_33;
  WdLogSingleEntry2(3LL, v83, v84);
  WdLogGlobalForLineNumber = 23793;
LABEL_72:
  v44 = v94;
LABEL_73:
  LODWORD(v9) = v93;
LABEL_57:
  if ( v3 < v44 )
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v10, *((_DWORD *)a2 + 4), v3, v44);
  v6 = this;
LABEL_60:
  if ( v8 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v9;
  }
  else
  {
LABEL_61:
    if ( !*((_QWORD *)a2 + 9) )
      goto LABEL_64;
    VIDMM_GLOBAL::FlushPagingBufferInternal(v6, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
    v49 = *((unsigned int *)a2 + 4);
    v50 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 744LL);
    v108 = *(_QWORD *)(*(_QWORD *)(v50 + 336) + 8 * v49);
    if ( v108 )
    {
      v107 = (char *)*((_QWORD *)a2 + 9);
      v96 = (struct VIDMM_PROCESS *)*((_QWORD *)a2 + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&v108, 1u, &v107, 0x80000000, (unsigned __int64 *)&v96) < 0 )
      {
        WdLogSingleEntry0(1LL);
        v88 = 24111;
        goto LABEL_137;
      }
    }
    else
    {
      PagingContext = VidSchGetPagingContext(v50, v49);
      v110 = *((_QWORD *)a2 + 9);
      v109 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(0, 0LL, 1, &PagingContext, 1u, (__int64)&v110, 0x80000000, &v109, 0) >= 0 )
        goto LABEL_64;
      WdLogSingleEntry0(1LL);
      v88 = 24139;
LABEL_137:
      WdLogGlobalForLineNumber = v88;
      DxgkLogInternalTriageEvent(v87, 0x40000LL);
    }
LABEL_64:
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
  }
  v51 = 0;
  if ( !v90 )
    v51 = v8;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v102);
  if ( v104 && (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  return v51;
}
