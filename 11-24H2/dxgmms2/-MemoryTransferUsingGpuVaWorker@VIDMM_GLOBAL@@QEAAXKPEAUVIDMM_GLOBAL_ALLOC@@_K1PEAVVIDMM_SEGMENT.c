/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x14010F48C
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5F04 (-MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_L.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x14010F22C (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140035D1C (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400365BC (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140036BD8 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x140038290 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1400401A8 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400AD738 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1400AF1E8 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400AF2C0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400AF840 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400B0394 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400B03F8 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E6660 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400F7C78 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400F7E8C (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1400FF770 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FFBA0 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVID.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x140103AE4 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        void **a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        unsigned __int64 a10,
        struct _MDL *a11,
        unsigned __int64 a12,
        struct _DXGK_TRANSFERFLAGS a13,
        unsigned __int64 a14)
{
  VIDMM_SEGMENT *v14; // r10
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  bool v21; // r15
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r11
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  struct VIDMM_SEGMENT *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  struct _MDL *v33; // r10
  unsigned int v34; // r14d
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  _BYTE *v40; // r13
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // r10
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // r8
  struct VIDMM_GLOBAL_ALLOC *v50; // r8
  unsigned __int64 v51; // rbx
  struct VIDMM_SEGMENT *v52; // r13
  struct VIDMM_SEGMENT *v53; // rsi
  LARGE_INTEGER *v54; // r15
  ADAPTER_RENDER *v55; // rcx
  unsigned int v56; // edx
  __int64 v57; // r10
  CVirtualAddressAllocator *v58; // rbx
  unsigned int VirtualAddressOfPageTable; // eax
  VIDMM_GLOBAL *v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  int v63; // r14d
  __int64 v64; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  struct VIDMM_MAPPED_VA_RANGE *v68; // r9
  __int64 *v69; // rdx
  __int64 v70; // rcx
  __int64 **v71; // rax
  struct VIDMM_MAPPED_VA_RANGE *v72; // r8
  __int64 *v73; // rdx
  __int64 v74; // rcx
  __int64 **v75; // rax
  unsigned __int64 v76; // r11
  unsigned int v77; // edx
  __int64 v78; // r9
  unsigned __int8 *v79; // [rsp+40h] [rbp-C0h]
  bool v80; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v81; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v82[6]; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int64 v83; // [rsp+58h] [rbp-A8h]
  unsigned int v84; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v85; // [rsp+68h] [rbp-98h]
  unsigned __int64 v86; // [rsp+70h] [rbp-90h]
  __int64 v87; // [rsp+78h] [rbp-88h]
  unsigned __int64 v88; // [rsp+80h] [rbp-80h]
  struct VIDMM_MAPPED_VA_RANGE *v89; // [rsp+88h] [rbp-78h]
  unsigned int v90; // [rsp+90h] [rbp-70h]
  unsigned int v91; // [rsp+94h] [rbp-6Ch]
  __int64 v92; // [rsp+98h] [rbp-68h]
  unsigned __int64 v93; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v94; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v95; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v96; // [rsp+B8h] [rbp-48h]
  struct VIDMM_MAPPED_VA_RANGE *v97; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v98; // [rsp+C8h] [rbp-38h]
  struct VIDMM_SEGMENT *v99; // [rsp+D0h] [rbp-30h]
  struct VIDMM_SEGMENT *v100; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v101; // [rsp+E0h] [rbp-20h]
  __int128 v102; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v103; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v104; // [rsp+108h] [rbp+8h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v105; // [rsp+110h] [rbp+10h] BYREF
  int v106; // [rsp+250h] [rbp+150h] BYREF
  int v107; // [rsp+254h] [rbp+154h]
  __int64 v108; // [rsp+258h] [rbp+158h]
  unsigned __int64 v109; // [rsp+260h] [rbp+160h]

  v14 = a9;
  v17 = a7;
  v84 = a2;
  v18 = *((unsigned int *)this + 10246);
  v98 = a14;
  v87 = a4;
  v99 = a6;
  v100 = a9;
  if ( a6 == a9 )
  {
    if ( a7 == a10 )
      return;
    v19 = a7 - a10;
    v20 = (unsigned int)v18;
    if ( a10 >= a7 )
      v19 = a10 - a7;
    v21 = a10 < a7;
    if ( v19 <= v18 )
      v20 = v19;
    if ( a10 >= a7 )
    {
      v22 = a12;
      v23 = a4 + a5;
      v85 = a4 + a12;
      goto LABEL_11;
    }
  }
  else
  {
    v20 = v18;
    v21 = 1;
  }
  v22 = a12;
  v23 = a5;
  v85 = a12;
LABEL_11:
  v24 = v23 + a10;
  v88 = v23 + a10;
  v25 = v23 + a7;
  v83 = v23 + a7;
  if ( a6 )
    v90 = VIDMM_SEGMENT::DriverId(a6);
  else
    v90 = 0;
  if ( v14 )
  {
    v26 = VIDMM_SEGMENT::DriverId(v14);
    v24 = v26;
    v91 = v26;
  }
  else
  {
    v91 = 0;
  }
  v82[0] = 0;
  v81 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = a3;
    WdLogGlobalForLineNumber = 13955;
    v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v27);
    v28[3] = v87;
    v28[4] = a5;
    v28[5] = v22;
    WdLogGlobalForLineNumber = 13957;
    v29 = (_QWORD *)WdLogNewEntry5_WdTrace(a5);
    v30 = v99;
    v29[3] = v99;
    v29[4] = a7;
    v29[5] = a8;
    WdLogGlobalForLineNumber = 13959;
    v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v30);
    v31[3] = v100;
    v31[5] = a11;
    v31[4] = a10;
    WdLogGlobalForLineNumber = 13961;
    a4 = v87;
    v32 = a5;
    v33 = a8;
    v25 = v83;
  }
  else
  {
    v32 = a5;
    v33 = a8;
  }
  if ( a4 )
  {
    v34 = v84;
    do
    {
      v35 = v88;
      v36 = (unsigned int)v20;
      v37 = v85;
      v38 = v25;
      if ( a4 <= v20 )
        v36 = (unsigned int)a4;
      v101 = v36;
      v86 = v36;
      if ( !v21 )
      {
        v38 = v25 - v36;
        v35 = v88 - v36;
        v37 = v85 - v36;
      }
      v96 = v35;
      v39 = v38 - v17;
      v92 = v38;
      v40 = *a3;
      v94 = v39;
      while ( 1 )
      {
        v102 = 0LL;
        if ( v33 )
        {
          v41 = v40[168]
              ? SysMmGetLogicalAddress(*(void *const *)(*((_QWORD *)v40 + 18) + 528LL))
              : VidMmiGetLogicalAddress(a3[46], v32);
          VidMmiInitializeAdlForPfnArray(
            (struct _DXGK_ADL *)&v102,
            (const unsigned __int64 *)&a8[1],
            a8->ByteCount >> 12,
            v41);
          v42 = v37;
        }
        else
        {
          v43 = *((_DWORD *)*a3 + 4) >> 12;
          *((_QWORD *)&v102 + 1) = v38 >> 12;
          v42 = 0LL;
          *(_QWORD *)&v102 = v43 | 0x100000000LL;
        }
        v97 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40384),
                v34,
                v86,
                (struct VIDMM_GLOBAL_ALLOC *)a3,
                v94,
                v90,
                v42,
                (const struct _DXGK_ADL *)&v102,
                v82,
                v98);
        if ( v97 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v34, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v34);
        v38 = v92;
        v32 = a5;
        v33 = a8;
      }
      while ( 1 )
      {
        v103 = 0LL;
        if ( a11 )
        {
          v44 = v40[168]
              ? SysMmGetLogicalAddress(*(void *const *)(*((_QWORD *)v40 + 18) + 528LL))
              : VidMmiGetLogicalAddress(a3[46], a5);
          VidMmiInitializeAdlForPfnArray(
            (struct _DXGK_ADL *)&v103,
            (const unsigned __int64 *)&a11[1],
            a11->ByteCount >> 12,
            v44);
          v45 = v37;
        }
        else
        {
          v46 = *((_DWORD *)*a3 + 4) >> 12;
          *((_QWORD *)&v103 + 1) = v96 >> 12;
          v45 = 0LL;
          *(_QWORD *)&v103 = v46 | 0x100000000LL;
        }
        v89 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40384),
                v34,
                v86,
                (struct VIDMM_GLOBAL_ALLOC *)a3,
                v94,
                v91,
                v45,
                (const struct _DXGK_ADL *)&v103,
                &v81,
                v98);
        if ( v89 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v34, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v34);
      }
      v80 = v21;
      v93 = v20;
      if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition(this, v34) )
      {
        v48 = *((_QWORD *)v97 + 14);
        v49 = *((_QWORD *)v97 + 13);
        if ( v48 <= *(_QWORD *)(v47 + 112) )
          v48 = *(_QWORD *)(v47 + 112);
        if ( v49 >= *(_QWORD *)(v47 + 104) )
          v49 = *(_QWORD *)(v47 + 104);
        CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v34 + 5052), v34, v49, v48);
      }
      memset(&v105, 0, sizeof(v105));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v34, v50, &v105);
      if ( a8 )
      {
        v105.Transfer.Destination.SegmentAddress.LowPart = 1;
      }
      else
      {
        v105.Transfer.Destination.SegmentAddress.LowPart = 0;
        if ( !a11 )
          v105.Transfer.Destination.SegmentAddress.LowPart = 2;
      }
      v51 = (unsigned int)v101;
      v52 = v99;
      v53 = v100;
      v54 = (LARGE_INTEGER *)v89;
      v95 = (unsigned int)v101;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v34, (struct VIDMM_GLOBAL_ALLOC *)a3, &v105);
        v105.UpdateContextAllocation.ContextAllocation = *((_QWORD *)a3[49] + 6);
        v55 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v105.Fill.FillSize = v94;
        v105.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v105.Transfer.TransferSize = v51;
        v105.MapApertureSegment.OffsetInPages = *((_QWORD *)v97 + 13);
        v105.Transfer.Source.SegmentAddress = v54[13];
        if ( (*((_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(v55, v34) + 5) & 1) != 0 )
        {
          v58 = (CVirtualAddressAllocator *)*((_QWORD *)this + v34 + 5052);
          v105.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                         v58,
                                                                         v56,
                                                                         *(_QWORD *)(v57 + 104),
                                                                         v82[0]);
          VirtualAddressOfPageTable = CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                        v58,
                                        v34,
                                        v54[13].QuadPart,
                                        v81);
          v51 = v95;
          v105.TransferVirtual.DestinationPageTable = VirtualAddressOfPageTable;
          v105.Transfer.Destination.SegmentAddress.HighPart = v105.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v82[0] & 1 | (2 * (v81 & 1));
        }
        if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(v60, &v105, (struct VIDMM_GLOBAL_ALLOC *)a3);
        v61 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v105);
        v62 = *((_QWORD *)this + 870);
        LODWORD(v86) = v61;
        if ( v62 && (!v53 || (*((_DWORD *)v53 + 26) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v62 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
            v51);
        _InterlockedAdd64((volatile signed __int64 *)this + 978, v51);
        if ( (byte_140081241 & 0x10) != 0 )
        {
          if ( !v52 || (v63 = 2, (*((_DWORD *)v52 + 26) & 0x1001) != 0) )
            v63 = 1;
          v64 = *((_QWORD *)this + v84 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          LODWORD(v79) = v63;
          McTemplateK0pppxxq_EtwWriteTransfer(v92, v66, v67, CurrentProcessId, a3, v64, v92, v95, v79);
          v51 = v95;
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7112), v95, v63);
          v34 = v84;
        }
        if ( v52 )
          v106 = (unsigned __int16)(*((_WORD *)v52 + 20) + 1);
        else
          v106 = 0;
        v108 = v92;
        if ( v53 )
          v107 = (unsigned __int16)(*((_WORD *)v53 + 20) + 1);
        else
          v107 = 0;
        v109 = v96;
        v104 = 0LL;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          v34,
          (struct VIDMM_GLOBAL_ALLOC *)a3,
          &v105,
          v86,
          0,
          &v104,
          &v106);
      }
      while ( (v86 & 0x80000000) != 0LL );
      v68 = v97;
      v20 = v93;
      v21 = v80;
      v17 = a7;
      v69 = (__int64 *)((char *)v97 + 32);
      v70 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v34) + 504LL;
      v71 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v34) + 512LL);
      if ( *v71 != (__int64 *)v70 )
        goto LABEL_81;
      v72 = v89;
      *v69 = v70;
      v69[1] = (__int64)v71;
      *v71 = v69;
      *(_QWORD *)(v70 + 8) = v69;
      v73 = (__int64 *)((char *)v72 + 32);
      v74 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v34) + 504LL;
      v75 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v34) + 512LL);
      if ( *v75 != (__int64 *)v74 )
LABEL_81:
        __fastfail(3u);
      v76 = v83;
      *((_QWORD *)v72 + 5) = v75;
      *v73 = v74;
      *v75 = v73;
      *(_QWORD *)(v74 + 8) = v73;
      v77 = v101;
      *((_QWORD *)v68 + 6) = a3[11];
      v78 = v87;
      *((_QWORD *)v72 + 6) = a3[11];
      a4 = v78 - v77;
      v87 = a4;
      if ( v80 )
      {
        v88 += v77;
        v25 = v77 + v76;
        v85 += v77;
      }
      else
      {
        v88 -= v77;
        v25 = v76 - v77;
        v85 -= v77;
      }
      v32 = a5;
      v33 = a8;
      v83 = v25;
    }
    while ( a4 );
  }
}
