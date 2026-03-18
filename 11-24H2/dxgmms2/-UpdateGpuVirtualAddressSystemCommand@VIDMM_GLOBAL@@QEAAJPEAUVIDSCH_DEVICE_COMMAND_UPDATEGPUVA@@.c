/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140112AB8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000FC30 (VidSchSignalSyncObjectsFromGpu.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x14001CEC4 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140031EF0 (VidSchSubmitSignalToHwQueue.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140035D1C (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400365BC (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140039D28 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     VidSchGetPagingContext @ 0x1400433C4 (VidSchGetPagingContext.c)
 *     Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledDeviceUsageNoInline @ 0x14004C504 (Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledDeviceUsageNoI.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x14008F4EC (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B970C (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1400E4148 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1400E4FBC (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400F25E8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400F7C78 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F7E30 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // rax
  int v6; // r14d
  unsigned __int8 v7; // bl
  struct _KTHREAD **v8; // r13
  struct _KTHREAD **v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  int v11; // esi
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rdx
  char v14; // r12
  unsigned __int64 v15; // r12
  VIDMM_GLOBAL *v16; // rcx
  unsigned __int64 v17; // r10
  VIDMM_GLOBAL *v18; // r11
  unsigned int v19; // eax
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v20; // r14
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  struct _DXGK_ADL *v22; // rdx
  VIDMM_GLOBAL *v23; // rcx
  unsigned __int64 v24; // r10
  _QWORD *v25; // r14
  VIDMM_MAPPED_VA_RANGE *v26; // rbx
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **v27; // rax
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **v28; // rcx
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *v29; // rdx
  int v30; // eax
  VIDMM_GLOBAL *v31; // rcx
  char *v32; // rbx
  unsigned __int64 *v33; // r8
  __int64 v34; // r14
  unsigned __int64 v35; // rcx
  struct VIDMM_GLOBAL_ALLOC *v36; // rsi
  __int64 v37; // rdx
  VIDMM_SEGMENT *v38; // rcx
  int v39; // r9d
  unsigned __int64 v40; // r10
  struct _MDL *FullMDL; // rbx
  unsigned __int64 LogicalAddress; // rax
  char v43; // r8
  int v44; // eax
  bool v45; // zf
  struct VIDMM_MAPPED_VA_RANGE *v46; // rdx
  int v47; // eax
  int v48; // eax
  unsigned __int64 *v49; // rax
  unsigned __int64 v50; // rcx
  int v51; // eax
  unsigned __int64 **v52; // rbx
  unsigned __int64 *v53; // rcx
  unsigned __int64 *v54; // rax
  __int64 v55; // rbx
  VIDMM_GLOBAL *v56; // rcx
  struct VIDMM_ALLOC *v57; // r8
  struct VIDMM_GLOBAL_ALLOC *v58; // r10
  unsigned __int64 v59; // r11
  int v60; // r9d
  VIDMM_SEGMENT *v61; // rcx
  char v62; // al
  __int64 v63; // rdx
  __int64 v64; // rax
  struct _MDL *v65; // rbx
  unsigned __int64 v66; // rax
  unsigned int v67; // ecx
  char *v68; // r14
  struct VIDMM_MAPPED_VA_RANGE *v69; // rdx
  int v70; // eax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // rax
  int v77; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  int v79; // ecx
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rcx
  int v83; // eax
  unsigned int v84; // ebx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v86; // [rsp+20h] [rbp-E0h]
  char v87; // [rsp+60h] [rbp-A0h] BYREF
  char v88[3]; // [rsp+61h] [rbp-9Fh] BYREF
  int v89; // [rsp+64h] [rbp-9Ch]
  unsigned int v90; // [rsp+68h] [rbp-98h]
  int v91; // [rsp+6Ch] [rbp-94h]
  unsigned int v92; // [rsp+70h] [rbp-90h]
  struct VIDMM_PROCESS *v93; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v94; // [rsp+80h] [rbp-80h]
  struct VIDMM_GLOBAL_ALLOC *v95; // [rsp+88h] [rbp-78h]
  struct VIDMM_ALLOC *v96; // [rsp+90h] [rbp-70h]
  D3DGPU_SIZE_T AllocationOffsetInBytes; // [rsp+98h] [rbp-68h]
  __int128 v98; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v99; // [rsp+B0h] [rbp-50h] BYREF
  int v100; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v101; // [rsp+C8h] [rbp-38h]
  char v102; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v103; // [rsp+D8h] [rbp-28h]
  _QWORD *v104; // [rsp+E0h] [rbp-20h]
  char *v105; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v106; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v107; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v108; // [rsp+100h] [rbp+0h] BYREF
  __int64 PagingContext; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v110[96]; // [rsp+110h] [rbp+10h] BYREF
  char v112; // [rsp+188h] [rbp+88h] BYREF
  struct VIDMM_ALLOC **v113; // [rsp+190h] [rbp+90h]
  char v114; // [rsp+198h] [rbp+98h] BYREF

  v113 = a3;
  v3 = -1LL;
  v100 = -1;
  v101 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v102 = 1;
    v100 = 8011;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v102 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v5 = *((_QWORD *)a2 + 11);
  v6 = 0;
  v90 = 0;
  v7 = 0;
  v8 = *(struct _KTHREAD ***)v5;
  v9 = (struct _KTHREAD **)(*(_QWORD *)v5 + 56LL);
  v93 = *(struct VIDMM_PROCESS **)(*(_QWORD *)(v5 + 16) + 8LL);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v110, v9);
  v11 = -1073741823;
  if ( !*((_QWORD *)a2 + 14) )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 24058;
    v6 = -1073741823;
    v7 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v10, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 24068;
      v6 = -1073741823;
      v7 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v110);
  v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v13 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 200), 0, 0) )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledDeviceUsageNoInline();
    v79 = v7;
    if ( IsEnabledDeviceUsageNoInline )
      v79 = 1;
    v89 = v79;
    v14 = v79;
    goto LABEL_130;
  }
  v11 = v6;
  v14 = v7;
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
        v16,
        0,
        v8[12],
        *(struct _VIDSCH_CONTEXT **)a2,
        *((_DWORD *)a2 + 5),
        *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
        *((_QWORD *)a2 + 10));
      v18 = this;
      LODWORD(v17) = 0;
    }
    v19 = *((_DWORD *)a2 + 9);
    v90 = v19;
    LOBYTE(v89) = v7;
    if ( v19 >= *((_DWORD *)a2 + 5) )
    {
      v14 = v89;
      goto LABEL_130;
    }
    LOBYTE(v89) = v7;
    while ( 1 )
    {
      v20 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v19 << 6));
      OperationType = v20->OperationType;
      if ( v20->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        break;
      }
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
        {
          if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v18) )
          {
            VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v31, v93, *(struct _VIDSCH_CONTEXT **)a2, 0LL, v20);
            v17 = 0LL;
          }
          v32 = (char *)a2 + 48;
          if ( *(char **)v32 == v32 )
          {
            v11 = CVirtualAddressAllocator::BuildVaRangeList(
                    v8,
                    *((struct VIDMM_VAD **)a2 + 15),
                    *((struct VIDMM_VAD **)a2 + 14),
                    *((_DWORD *)a2 + 4),
                    (struct _LIST_ENTRY *)a2 + 3,
                    v20->Map.BaseAddress,
                    v20->Map.BaseAddress + v20->Map.SizeInBytes,
                    v20->Unmap.Protection.Value);
            v17 = 0LL;
          }
          if ( v11 >= 0 )
          {
            while ( 1 )
            {
              v33 = *(unsigned __int64 **)v32;
              v94 = v33;
              if ( v33 == (unsigned __int64 *)v32 || v11 < 0 )
                break;
              v34 = (__int64)(v33 - 1);
              v35 = v33[7];
              if ( v35 )
              {
                v36 = **(struct VIDMM_GLOBAL_ALLOC ***)v35;
                v37 = *(_QWORD *)v36;
                if ( (*(_DWORD *)(v35 + 28) & 3) != 2 )
                  goto LABEL_73;
                v38 = *(VIDMM_SEGMENT **)(v37 + 64);
                v98 = 0LL;
                if ( (*((_DWORD *)v38 + 26) & 0x1001) != 0 )
                {
                  FullMDL = VidMmGetFullMDL(v36, 0LL);
                  LogicalAddress = SysMmGetLogicalAddress(*((void *const *)v36 + 46));
                  VidMmiInitializeAdlForPfnArray(
                    (struct _DXGK_ADL *)&v98,
                    (const unsigned __int64 *)&FullMDL[1],
                    FullMDL->ByteCount >> 12,
                    LogicalAddress);
                  v40 = 0LL;
                  v32 = (char *)a2 + 48;
                  v39 = 0;
                }
                else
                {
                  LODWORD(v98) = *(_DWORD *)(v37 + 16) >> 12;
                  *((_QWORD *)&v98 + 1) = *(_QWORD *)(v37 + 72) >> 12;
                  DWORD1(v98) = 1;
                  v39 = VIDMM_SEGMENT::DriverId(v38);
                }
                v43 = *((_DWORD *)v36 + 6) & 0x3F;
                v86 = *(struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION **)(v34 + 80);
                v87 = v40;
                v44 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        (__int64)v8,
                        v34,
                        v43,
                        v39,
                        (unsigned __int64)v86,
                        (struct _DXGK_ADL *)&v98,
                        2,
                        v113,
                        &v87,
                        v40,
                        v40);
                v17 = 0LL;
                v11 = v44;
                if ( v44 < 0 )
                {
                  WdLogSingleEntry2(3LL, *(_QWORD *)(v34 + 104), *(_QWORD *)(v34 + 112));
                  v17 = 0LL;
                  WdLogGlobalForLineNumber = 24366;
                }
                if ( v87 )
                {
                  if ( v3 >= *(_QWORD *)(v34 + 104) )
                    v3 = *(_QWORD *)(v34 + 104);
                  if ( v15 <= *(_QWORD *)(v34 + 112) )
                    v15 = *(_QWORD *)(v34 + 112);
                }
              }
              else
              {
                v45 = (*(_BYTE *)(v34 + 96) & 8) == 0;
                v46 = (struct VIDMM_MAPPED_VA_RANGE *)(v33 - 1);
                v114 = v17;
                if ( v45 )
                {
                  v48 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                          (__int64)v8,
                          (__int64)v46,
                          0,
                          -2,
                          v17,
                          (struct _DXGK_ADL *)&unk_14005AAC8,
                          2,
                          v113,
                          &v114,
                          v17,
                          v17);
                  v17 = 0LL;
                  v11 = v48;
                  if ( v48 < 0 )
                  {
                    WdLogSingleEntry2(3LL, *(_QWORD *)(v34 + 104), *(_QWORD *)(v34 + 112));
                    v17 = 0LL;
                    WdLogGlobalForLineNumber = 24401;
                  }
                  if ( !v114 )
                    goto LABEL_71;
                }
                else
                {
                  v47 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                          (CVirtualAddressAllocator *)v8,
                          v46,
                          v113,
                          0);
                  v17 = 0LL;
                  v11 = v47;
                  if ( v47 < 0 )
                  {
                    WdLogSingleEntry2(3LL, *(_QWORD *)(v34 + 104), *(_QWORD *)(v34 + 112));
                    v17 = 0LL;
                    WdLogGlobalForLineNumber = 24384;
                  }
                  v114 = 1;
                }
                if ( v3 >= *(_QWORD *)(v34 + 104) )
                  v3 = *(_QWORD *)(v34 + 104);
                if ( v15 <= *(_QWORD *)(v34 + 112) )
                  v15 = *(_QWORD *)(v34 + 112);
              }
LABEL_71:
              if ( v11 < 0 )
                continue;
              v33 = v94;
LABEL_73:
              v49 = *(unsigned __int64 **)v32;
              if ( *(char **)(*(_QWORD *)v32 + 8LL) != v32 )
                goto LABEL_119;
              v50 = *v49;
              if ( *(unsigned __int64 **)(*v49 + 8) != v49 )
                goto LABEL_119;
              *(_QWORD *)v32 = v50;
              *(_QWORD *)(v50 + 8) = v32;
              *v33 = v17;
              v33[1] = v17;
              v51 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                      v8,
                      *((struct VIDMM_VAD **)a2 + 14),
                      *((_DWORD *)a2 + 4),
                      (struct VIDMM_MAPPED_VA_RANGE *)v34);
              v17 = 0LL;
              v11 = v51;
              if ( v51 < 0 )
              {
                WdLogSingleEntry2(3LL, *(_QWORD *)(v34 + 104), *(_QWORD *)(v34 + 112));
                WdLogGlobalForLineNumber = 24418;
                VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((VIDMM_MAPPED_VA_RANGE *)v34, v8);
                v17 = 0LL;
              }
            }
          }
          if ( v11 != -1073741267 )
          {
            v52 = (unsigned __int64 **)((char *)a2 + 48);
            while ( 1 )
            {
              v53 = *v52;
              if ( *v52 == (unsigned __int64 *)v52 )
                break;
              if ( (unsigned __int64 **)v53[1] != v52 )
                goto LABEL_119;
              v54 = (unsigned __int64 *)*v53;
              if ( *(unsigned __int64 **)(*v53 + 8) != v53 )
                goto LABEL_119;
              *v52 = v54;
              v54[1] = (unsigned __int64)v52;
              *v53 = v17;
              v53[1] = v17;
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((VIDMM_MAPPED_VA_RANGE *)(v53 - 1), v8);
              v17 = 0LL;
            }
          }
        }
LABEL_113:
        if ( v11 < 0 )
          goto LABEL_121;
        goto LABEL_114;
      }
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v18) )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v23, v93, *(struct _VIDSCH_CONTEXT **)a2, 0LL, v20);
        v24 = 0LL;
        v22 = (struct _DXGK_ADL *)&unk_14005AAC8;
      }
      v25 = (_QWORD *)*((_QWORD *)a2 + 12);
      v112 = v24;
      v26 = (VIDMM_MAPPED_VA_RANGE *)(v25 - 1);
      if ( (v25[11] & 8) != 0 )
      {
        v11 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                (CVirtualAddressAllocator *)v8,
                (struct VIDMM_MAPPED_VA_RANGE *)(v25 - 1),
                v113,
                0);
        if ( v11 < 0 )
        {
          WdLogSingleEntry2(3LL, *((_QWORD *)v26 + 13), *((_QWORD *)v26 + 14));
          WdLogGlobalForLineNumber = 24251;
        }
        v112 = 1;
      }
      else
      {
        v11 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (__int64)v8,
                (__int64)(v25 - 1),
                0,
                -2,
                v24,
                v22,
                2,
                v113,
                &v112,
                v24,
                v24);
        if ( v11 < 0 )
        {
          WdLogSingleEntry2(3LL, *((_QWORD *)v26 + 13), *((_QWORD *)v26 + 14));
          WdLogGlobalForLineNumber = 24267;
        }
        if ( !v112 )
          goto LABEL_34;
      }
      if ( v3 >= *((_QWORD *)v26 + 13) )
        v3 = *((_QWORD *)v26 + 13);
      if ( v15 <= *((_QWORD *)v26 + 14) )
        v15 = *((_QWORD *)v26 + 14);
LABEL_34:
      if ( v11 < 0 )
      {
        if ( !(unsigned int)Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledDeviceUsageNoInline() )
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((VIDMM_MAPPED_VA_RANGE *)(v25 - 1), v8);
LABEL_121:
        if ( v3 < v15 )
          CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v8, *((_DWORD *)a2 + 4), v3, v15);
        v14 = v89;
        goto LABEL_124;
      }
      v27 = (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)((char *)a2 + 96);
      v28 = (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)*((_QWORD *)a2 + 12);
      if ( v28[1] != (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *)((char *)a2 + 96)
        || (v29 = *v28, *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA ***)*v28 + 1) != v28) )
      {
LABEL_119:
        __fastfail(3u);
      }
      *v27 = v29;
      *((_QWORD *)v29 + 1) = v27;
      *v25 = 0LL;
      v25[1] = 0LL;
      v30 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
              v8,
              *((struct VIDMM_VAD **)a2 + 14),
              *((_DWORD *)a2 + 4),
              (struct VIDMM_MAPPED_VA_RANGE *)(v25 - 1));
      LODWORD(v17) = 0;
      v11 = v30;
      if ( v30 < 0 )
      {
        WdLogSingleEntry1(3LL, v8);
        WdLogGlobalForLineNumber = 24292;
LABEL_39:
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v26, v8);
        goto LABEL_121;
      }
LABEL_114:
      v19 = v90 + 1;
      *((_DWORD *)a2 + 10) = v17;
      v90 = v19;
      if ( v19 >= *((_DWORD *)a2 + 5) )
        goto LABEL_121;
      v18 = this;
    }
    v96 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a2 + 8) + 8LL * v20->Map.hAllocation);
    v95 = **(struct VIDMM_GLOBAL_ALLOC ***)v96;
    v55 = *(_QWORD *)v95;
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v18) )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v56, v93, *(struct _VIDSCH_CONTEXT **)a2, v57, v20);
      v57 = v96;
      v58 = v95;
    }
    v59 = 0LL;
    v60 = 0;
    AllocationOffsetInBytes = 0LL;
    v99 = 0LL;
    v61 = *(VIDMM_SEGMENT **)(v55 + 64);
    v62 = *((_DWORD *)v57 + 7) & 3;
    v91 = 0;
    if ( v62 == 2 )
    {
      v45 = (*((_DWORD *)v61 + 26) & 0x1001) == 0;
      AllocationOffsetInBytes = v20->Map.AllocationOffsetInBytes;
      if ( !v45 )
      {
        v65 = VidMmGetFullMDL(v58, 0LL);
        v66 = SysMmGetLogicalAddress(*((void *const *)v95 + 46));
        VidMmiInitializeAdlForPfnArray(
          (struct _DXGK_ADL *)&v99,
          (const unsigned __int64 *)&v65[1],
          v65->ByteCount >> 12,
          v66);
        v57 = v96;
        LODWORD(v17) = 0;
        v59 = AllocationOffsetInBytes;
        v60 = 0;
        v91 = 0;
LABEL_89:
        if ( (*((_BYTE *)this + 40937) & 2) != 0 )
          v64 = 1LL;
        else
          v64 = v20->Map.SizeInBytes / v20->Map.AllocationSizeInBytes;
        v67 = *((_DWORD *)a2 + 10);
        v94 = (unsigned __int64 *)v64;
        v92 = v67;
        if ( v67 < (unsigned int)v64 )
        {
          v68 = (char *)a2 + 96;
          while ( 1 )
          {
            v104 = *(_QWORD **)v68;
            v103 = v15;
            v26 = (VIDMM_MAPPED_VA_RANGE *)(v104 - 1);
            v69 = (struct VIDMM_MAPPED_VA_RANGE *)(v104 - 1);
            if ( (*((_DWORD *)v57 + 7) & 3) == 2 )
            {
              v88[0] = 0;
              v11 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      (__int64)v8,
                      (__int64)v69,
                      *((_DWORD *)v95 + 6) & 0x3F,
                      v60,
                      v59,
                      (struct _DXGK_ADL *)&v99,
                      2,
                      v113,
                      v88,
                      0,
                      0LL);
              if ( v88[0] )
              {
                if ( v3 >= *((_QWORD *)v26 + 13) )
                  v3 = *((_QWORD *)v26 + 13);
                if ( v15 <= *((_QWORD *)v26 + 14) )
                  v15 = *((_QWORD *)v26 + 14);
              }
              if ( v11 < 0 )
              {
                WdLogSingleEntry2(3LL, *((_QWORD *)v26 + 13), *((_QWORD *)v26 + 14));
                WdLogGlobalForLineNumber = 24209;
                goto LABEL_121;
              }
            }
            else
            {
              v70 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v69, v113, 0);
              v71 = *((_QWORD *)v26 + 13);
              v11 = v70;
              v72 = *((_QWORD *)v26 + 14);
              v73 = v71;
              v15 = v72;
              if ( v3 < v71 )
                v73 = v3;
              v3 = v73;
              if ( v103 > v72 )
                v15 = v103;
              if ( v11 < 0 )
              {
                WdLogSingleEntry2(3LL, v71, v72);
                WdLogGlobalForLineNumber = 24182;
                goto LABEL_121;
              }
            }
            v74 = *(_QWORD **)v68;
            if ( *(char **)(*(_QWORD *)v68 + 8LL) != v68 )
              goto LABEL_119;
            v75 = *v74;
            if ( *(_QWORD **)(*v74 + 8LL) != v74 )
              goto LABEL_119;
            v76 = v104;
            *(_QWORD *)v68 = v75;
            *(_QWORD *)(v75 + 8) = v68;
            *v76 = 0LL;
            v76[1] = 0LL;
            v77 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                    v8,
                    *((struct VIDMM_VAD **)a2 + 14),
                    *((_DWORD *)a2 + 4),
                    v26);
            LODWORD(v17) = 0;
            v11 = v77;
            if ( v77 < 0 )
            {
              WdLogSingleEntry1(3LL, v8);
              WdLogGlobalForLineNumber = 24222;
              goto LABEL_39;
            }
            v57 = v96;
            v60 = v91;
            v59 = AllocationOffsetInBytes;
            if ( ++v92 >= (unsigned int)v94 )
              goto LABEL_114;
          }
        }
        goto LABEL_113;
      }
      v63 = *(_QWORD *)(v55 + 72) >> 12;
      LODWORD(v99) = *(_DWORD *)(v55 + 16) >> 12;
      *((_QWORD *)&v99 + 1) = v63;
      DWORD1(v99) = 1;
      v60 = VIDMM_SEGMENT::DriverId(v61);
      v91 = v60;
    }
    LODWORD(v17) = 0;
    goto LABEL_89;
  }
LABEL_124:
  if ( v11 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v90;
    goto LABEL_138;
  }
LABEL_130:
  if ( *((_QWORD *)a2 + 9) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
    v80 = *((unsigned int *)a2 + 4);
    v81 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    v106 = *(_QWORD *)(*(_QWORD *)(v81 + 336) + 8 * v80);
    if ( v106 )
    {
      v105 = (char *)*((_QWORD *)a2 + 9);
      v93 = (struct VIDMM_PROCESS *)*((_QWORD *)a2 + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&v106, 1u, &v105, 0x80000000, (unsigned __int64 *)&v93) < 0 )
      {
        WdLogSingleEntry0(1LL);
        v83 = 24503;
LABEL_136:
        WdLogGlobalForLineNumber = v83;
        DxgkLogInternalTriageEvent(v82, 0x40000LL);
      }
    }
    else
    {
      PagingContext = VidSchGetPagingContext(v81, v80);
      v108 = *((_QWORD *)a2 + 9);
      v107 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(0, 0LL, 1, &PagingContext, 1u, (__int64)&v108, 0x80000000, &v107, 0) < 0 )
      {
        WdLogSingleEntry0(1LL);
        v83 = 24531;
        goto LABEL_136;
      }
    }
  }
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
LABEL_138:
  v84 = 0;
  if ( !v14 )
    v84 = v11;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v100);
  if ( v102 && (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  return v84;
}
