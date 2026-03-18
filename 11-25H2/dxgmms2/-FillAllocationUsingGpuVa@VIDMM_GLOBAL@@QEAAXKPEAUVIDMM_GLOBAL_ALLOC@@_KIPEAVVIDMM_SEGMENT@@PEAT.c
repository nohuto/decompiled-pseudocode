/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD424
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD1DC (-FillAllocationInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_L.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140037174 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x140037A0C (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140038280 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1400417A8 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400A9270 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1400BBF84 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BC060 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400BC5E0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BD134 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400BEDDC (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400BEE28 (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAUVIDMM_.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        SIZE_T a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v9; // r12
  SIZE_T v10; // r15
  __int64 v11; // rcx
  unsigned __int64 QuadPart; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned int v17; // eax
  SIZE_T v18; // rdx
  unsigned __int64 v19; // rcx
  SIZE_T v20; // rsi
  unsigned int v21; // eax
  unsigned __int16 v22; // ax
  __int64 v23; // r8
  __int64 v24; // r11
  int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  LARGE_INTEGER *v33; // r15
  int v34; // eax
  struct VIDMM_GLOBAL_ALLOC *v35; // r8
  __int64 v36; // rax
  D3DGPU_VIRTUAL_ADDRESS v37; // rcx
  VIDMM_GLOBAL *v38; // rcx
  LARGE_INTEGER *v39; // rdx
  __int64 v40; // rcx
  LARGE_INTEGER **v41; // rax
  __int64 v42; // rsi
  HANDLE CurrentProcessId; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // [rsp+40h] [rbp-C0h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  LONGLONG v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  unsigned int v52; // [rsp+88h] [rbp-78h]
  unsigned int v53; // [rsp+8Ch] [rbp-74h]
  unsigned int v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  SIZE_T v56; // [rsp+A8h] [rbp-58h]
  LONGLONG v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v59; // [rsp+D0h] [rbp-30h] BYREF
  SIZE_T v60; // [rsp+D8h] [rbp-28h]
  char *v61; // [rsp+E0h] [rbp-20h]
  _DWORD v62[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v63; // [rsp+F0h] [rbp-10h]
  struct _DXGKARG_BUILDPAGINGBUFFER v64; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v65[2]; // [rsp+240h] [rbp+140h] BYREF
  LONGLONG v66; // [rsp+248h] [rbp+148h]

  v9 = a2;
  v56 = a4;
  v10 = a4;
  memset(&v64, 0, sizeof(v64));
  QuadPart = a7->QuadPart;
  v57 = a7->QuadPart;
  v50 = a7->QuadPart;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = a3;
    WdLogGlobalForLineNumber = 14489;
    v14 = WdLogNewEntry5_WdTrace(v13);
    *(_QWORD *)(v14 + 24) = v10;
    *(_QWORD *)(v14 + 32) = 0LL;
    WdLogGlobalForLineNumber = 14491;
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
    v16[4] = SHIDWORD(v50);
    v16[5] = (unsigned int)QuadPart;
    v16[3] = a6;
    WdLogGlobalForLineNumber = 14493;
  }
  v17 = *((_DWORD *)this + 10246);
  v54 = v17;
  v49 = 0LL;
  if ( !v10 )
    return;
  v60 = *((unsigned int *)this + 10246);
  v61 = (char *)this + 40384;
  v18 = v17;
  while ( 2 )
  {
    if ( v10 <= v18 )
      v17 = v10;
    v19 = QuadPart >> 12;
    v20 = v17;
    v21 = v17 >> 12;
    v52 = v21;
    v51 = v20;
    while ( 1 )
    {
      v63 = v19;
      v62[1] = 1;
      v62[0] = v21;
      v22 = VIDMM_SEGMENT::DriverId(a6);
      v53 = v22;
      LODWORD(v47) = 1;
      v25 = *(_DWORD *)(*(_QWORD *)a3 + 32LL);
      if ( !v22 )
        goto LABEL_15;
      v26 = *(_QWORD *)(v23 + *(_QWORD *)(*((_QWORD *)this + 5050) + 40232LL));
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 1648) + 8LL * ((unsigned int)v22 - 1)) + 416LL) == 0x10000 )
      {
        v27 = v49;
        if ( *(_DWORD *)(*(_QWORD *)(v26 + 480) + 12LL)
          && !((unsigned __int16)v49 | (unsigned __int16)v20)
          && v25
          && !(_WORD)v25 )
        {
          v28 = *((_QWORD *)this + 5050);
          LODWORD(v47) = 2;
          v29 = *(_QWORD *)(v28 + 40960);
          v30 = *(_QWORD *)(v28 + 40968);
          goto LABEL_17;
        }
      }
      else
      {
LABEL_15:
        v27 = v49;
      }
      v31 = *((_QWORD *)this + 5050);
      v29 = *(_QWORD *)(v31 + 40944);
      v30 = *(_QWORD *)(v31 + 40952);
LABEL_17:
      v55 = *((_QWORD *)this + v24 + 5052);
      v32 = CVirtualAddressAllocator::MapVirtualAddressRange(
              v55,
              a3,
              v27,
              3LL,
              v20,
              0LL,
              v29,
              v30,
              v25,
              1LL,
              0LL,
              v9,
              0LL,
              0,
              v47);
      v33 = (LARGE_INTEGER *)v32;
      if ( v32 )
        break;
      WdLogSingleEntry3(4LL, v55, v20, a3);
      WdLogGlobalForLineNumber = 9222;
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v9);
      v21 = v52;
      v19 = QuadPart >> 12;
    }
    *(_DWORD *)(v32 + 72) |= 0x2000u;
    *(_QWORD *)(v32 + 48) = 0LL;
    v58 = 0LL;
    v34 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            v55,
            v32,
            (unsigned int)v9,
            v53,
            0LL,
            v62,
            0,
            &v58,
            0LL,
            v47,
            0LL);
    if ( v34 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 75LL, v61, v33, v34);
      WdLogGlobalForLineNumber = 195;
      JUMPOUT(0x1400BD97DLL);
    }
    if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition(this, v9) )
      CVirtualAddressAllocator::FlushGpuVaTlb(
        *((CVirtualAddressAllocator **)this + v9 + 5052),
        v9,
        v33[13].QuadPart,
        v33[14].QuadPart);
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v9, v35, &v64);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v9, a3, &v64);
      v36 = *((_QWORD *)a3 + 47);
      v64.Operation = DXGK_OPERATION_VIRTUAL_FILL;
      v37 = *(_QWORD *)(v36 + 48);
      v64.Transfer.Source.SegmentId = 0;
      v64.UpdateContextAllocation.ContextAllocation = v37;
      v64.Transfer.TransferSize = v20;
      v64.Transfer.Source.SegmentAddress = v33[13];
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
        VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(v38, &v64, v9, a3);
      v48 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v64);
      if ( (byte_140081241 & 0x10) != 0 )
      {
        v42 = *((_QWORD *)this + v9 + 143);
        CurrentProcessId = PsGetCurrentProcessId();
        LODWORD(v46) = 0;
        McTemplateK0pppxxq_EtwWriteTransfer(v51, v44, v45, CurrentProcessId, a3, v42, 0LL, v51, v46);
        v20 = v51;
      }
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7112), v20, 0);
      v66 = v57;
      v65[1] = 0;
      v59 = 0LL;
      v65[0] = (unsigned __int16)(*((_WORD *)a6 + 20) + 1);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v9, a3, &v64, v48, 0, &v59, v65);
    }
    while ( v48 < 0 );
    v39 = v33 + 4;
    v40 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v9) + 504LL;
    v41 = *(LARGE_INTEGER ***)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v9) + 512LL);
    if ( *v41 != (LARGE_INTEGER *)v40 )
      __fastfail(3u);
    v49 += v20;
    QuadPart = v20 + v57;
    v39->QuadPart = v40;
    v33[5].QuadPart = (LONGLONG)v41;
    *v41 = v39;
    *(_QWORD *)(v40 + 8) = v39;
    v33[6] = *(LARGE_INTEGER *)((char *)a3 + 88);
    v10 = v56 - v20;
    v57 += v20;
    v56 = v10;
    if ( v10 )
    {
      v17 = v54;
      v18 = v60;
      continue;
    }
    break;
  }
}
