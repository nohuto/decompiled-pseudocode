/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1403F8340
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F5CF8 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x140034510 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x14003A21C (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MUL.c)
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z @ 0x14003B768 (-VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004EF94 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140056FA4 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1401EB208 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1403243B0 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x14035EFA0 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x140399084 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        struct _EX_RUNDOWN_REF *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        struct _EX_RUNDOWN_REF *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7,
        enum _D3DDDIFORMAT a8)
{
  DXGPROCESS *v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // r15d
  PVOID v12; // r8
  struct _EX_RUNDOWN_REF *Pool2; // r12
  char *v14; // rcx
  unsigned int v15; // edi
  struct _EX_RUNDOWN_REF *v16; // r14
  struct DXGCONTEXT *Count; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  const wchar_t *v20; // r9
  int v21; // edi
  unsigned int *v22; // r15
  __int64 v23; // r15
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  signed __int64 v25; // r12
  __int64 v26; // rsi
  ULONG_PTR v28; // rdx
  struct VIDMM_ALLOC **v29; // r15
  __int64 v30; // r10
  unsigned int v31; // r8d
  unsigned int v32; // edi
  union _LARGE_INTEGER *v33; // rdx
  __int64 v34; // rcx
  bool v35; // al
  __int64 v36; // r8
  char *v37; // rdx
  __int64 v38; // r15
  char *v39; // rdx
  __int64 v40; // r15
  __int64 AllocationGpuVirtualAddress; // rax
  DXGK_ALLOCATIONLIST *v42; // rcx
  struct _DXGKARG_PRESENT *v43; // r15
  char *v44; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v46; // rax
  int v47; // eax
  PVOID Ptr; // rdx
  unsigned int v49; // r15d
  DXGCONTEXT **v50; // r14
  unsigned int v51; // [rsp+50h] [rbp-198h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+60h] [rbp-188h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-180h] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-17Ch]
  unsigned int v56; // [rsp+70h] [rbp-178h]
  unsigned int v57; // [rsp+74h] [rbp-174h]
  DXGK_ALLOCATIONLIST *v58; // [rsp+78h] [rbp-170h]
  union _LARGE_INTEGER v59; // [rsp+80h] [rbp-168h] BYREF
  int v60; // [rsp+88h] [rbp-160h]
  __int64 v61; // [rsp+90h] [rbp-158h]
  struct DXGALLOCATION *v62; // [rsp+98h] [rbp-150h]
  const struct _D3DKMT_PRESENT *v63; // [rsp+A0h] [rbp-148h]
  DXGPROCESS *v64; // [rsp+A8h] [rbp-140h]
  struct _EX_RUNDOWN_REF *v65[4]; // [rsp+B0h] [rbp-138h] BYREF
  struct _DXGKARG_PRESENT *v66; // [rsp+D0h] [rbp-118h]
  PVOID P; // [rsp+D8h] [rbp-110h]
  _BYTE v68[32]; // [rsp+E0h] [rbp-108h] BYREF
  int v69; // [rsp+100h] [rbp-E8h]
  PVOID v70; // [rsp+110h] [rbp-D8h] BYREF
  char v71; // [rsp+118h] [rbp-D0h] BYREF
  int v72; // [rsp+198h] [rbp-50h]

  v63 = a2;
  v65[2] = this;
  v65[3] = a4;
  v62 = a5;
  v66 = a6;
  v9 = *(DXGPROCESS **)(this[2].Count + 40);
  v64 = v9;
  v10 = (unsigned int)(a3 + 1);
  v57 = a3 + 1;
  v11 = 0;
  v51 = 0;
  v70 = 0LL;
  v72 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements((__int64 *)&v70, a3 + 1);
  v12 = v70;
  v58 = (DXGK_ALLOCATIONLIST *)v70;
  Pool2 = 0LL;
  P = 0LL;
  v69 = 0;
  if ( (unsigned int)v10 <= 4 )
  {
    Pool2 = (struct _EX_RUNDOWN_REF *)v68;
    P = v68;
    if ( !(_DWORD)v10 )
    {
LABEL_7:
      v69 = v10;
      goto LABEL_8;
    }
    memset(v68, 0, 8LL * (unsigned int)v10);
    Pool2 = (struct _EX_RUNDOWN_REF *)P;
LABEL_6:
    v12 = v58;
    goto LABEL_7;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 >= 8 )
  {
    Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(256LL, 8 * v10, 1265072196LL);
    P = Pool2;
    goto LABEL_6;
  }
LABEL_8:
  v65[1] = Pool2;
  if ( v12 && Pool2 )
  {
    if ( *(_QWORD *)(this[2].Count + 1896) != *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL)
      || DXGPROCESS::IsRemoteConnection(v9) )
    {
      *((_DWORD *)a7 + 29) = 0;
    }
    *(_DWORD *)a7 |= 0xC00u;
    *((_DWORD *)a7 + 35) = v10;
    v14 = (char *)a7 + 600;
    if ( !*((_BYTE *)a7 + 356) )
      v14 = (char *)a7 + 496;
    *(_DWORD *)v14 = *(_DWORD *)v14 & 0xFFFFFC00 | 1;
    v15 = 0;
    while ( 1 )
    {
      v55 = v15;
      if ( v15 >= (unsigned int)v10 )
        break;
      v61 = v15;
      v16 = a4;
      Count = (struct DXGCONTEXT *)a4[v15].Count;
      v18 = *((_DWORD *)Count + 97);
      v56 = v18;
      v53 = 0LL;
      if ( !*((_BYTE *)Count + 430) )
      {
        WdLogSingleEntry0(2LL);
        v19 = 8722LL;
        v20 = L"WDDMv2 LDA present must be on contexts, which support GpuVa";
LABEL_19:
        WdLogGlobalForLineNumber = v19;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v20, v19, 0LL, 0LL, 0LL, 0LL);
        v21 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53);
        goto LABEL_31;
      }
      if ( v15 )
      {
        if ( v18 <= *(_DWORD *)(a4[v15 - 1].Count + 388) )
        {
          WdLogSingleEntry0(2LL);
          v19 = 8738LL;
          v20 = L"WDDMv2 LDA present contexts must be submitted in the order if increasing physical adapter index";
          goto LABEL_19;
        }
        v60 = 0;
        v22 = &v63->BroadcastSrcAllocation[v15 - 1];
        if ( v22 + 1 < v22 || (unsigned __int64)(v22 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v23 = *v22;
        v60 = v23;
        AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v64,
                                                      (DXGALLOCATIONREFERENCE *)v65,
                                                      v23);
        DXGALLOCATIONREFERENCE::MoveAssign(&v53, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v65);
        v10 = (__int64)v53;
        if ( !v53 )
        {
          v21 = -1073741811;
          WdLogSingleEntry2(2LL, v23, -1073741811LL);
          WdLogGlobalForLineNumber = 8759;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid allocation handle in Present 0x%I64x. Returning 0x%I64x",
            v23,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_29;
        }
        v28 = this[2].Count;
        if ( *(_QWORD *)(*(_QWORD *)(v53[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) )
        {
          v21 = -1073741811;
          WdLogSingleEntry3(2LL, v28, v53, -1073741811LL);
          WdLogGlobalForLineNumber = 8768;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            this[2].Count,
            v10,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_29;
        }
        v18 = v56;
      }
      else
      {
        v10 = (__int64)v62;
      }
      if ( ((*(_DWORD *)(v10 + 72) >> 12) & 0x3F) != v18 )
      {
        WdLogSingleEntry1(2LL, v10);
        WdLogGlobalForLineNumber = 8776;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
        v21 = -1073741811;
LABEL_29:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53);
LABEL_30:
        v16 = a4;
LABEL_31:
        v11 = v51;
        goto LABEL_32;
      }
      if ( *((_BYTE *)a7 + 356) )
        v29 = (struct VIDMM_ALLOC **)((char *)a7
                                    + 64 * (unsigned __int64)(v15 * *((_DWORD *)a7 + 151))
                                    + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                                    + 648);
      else
        v29 = (struct VIDMM_ALLOC **)((char *)a7 + 504);
      v21 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
              *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 760LL),
              *(struct VIDMM_DEVICE **)(this[2].Count + 792),
              *(struct VIDMM_MULTI_ALLOC **)(v10 + 24),
              v29);
      if ( v21 < 0 )
        goto LABEL_29;
      Pool2[v51++].Count = (ULONG_PTR)*v29;
      v54 = 0;
      v59.QuadPart = 0LL;
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
      {
        v31 = 0xFFFF;
        v54 = 0xFFFF;
        v59.QuadPart = -1LL;
      }
      else
      {
        VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
          *(VIDMM_EXPORT **)(v30 + 760),
          *(struct VIDMM_GLOBAL **)(v30 + 768),
          *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v10 + 48) + 8LL),
          &v54,
          &v59,
          0LL);
        v31 = v54;
      }
      v32 = v55;
      if ( *((_BYTE *)a7 + 356) )
        *(_WORD *)((char *)a7
                 + 64 * (unsigned __int64)(v55 * *((_DWORD *)a7 + 151))
                 + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                 + 632) = v31;
      else
        *((_DWORD *)a7 + 139) ^= (*((_DWORD *)a7 + 139) ^ (v31 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a7 + 356) )
        v33 = (union _LARGE_INTEGER *)((char *)a7
                                     + 64 * (unsigned __int64)(v32 * *((_DWORD *)a7 + 151))
                                     + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                                     + 640);
      else
        v33 = (union _LARGE_INTEGER *)((char *)a7 + 520);
      *v33 = v59;
      v34 = *(_QWORD *)(v10 + 40);
      if ( v34 )
        v35 = (*(_DWORD *)(v34 + 4) & 8) != 0;
      else
        v35 = 0;
      if ( v35 )
        v36 = *(_QWORD *)(*(_QWORD *)(v34 + 56) + 184LL);
      else
        v36 = 0LL;
      if ( *((_BYTE *)a7 + 356) )
        *(_QWORD *)((char *)a7
                  + 64 * (unsigned __int64)(v32 * *((_DWORD *)a7 + 151))
                  + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                  + 656) = v36;
      else
        *((_QWORD *)a7 + 72) = v36;
      if ( *((_BYTE *)a7 + 356) )
        v37 = (char *)a7
            + 64 * (unsigned __int64)(v32 * *((_DWORD *)a7 + 151))
            + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
            + 624;
      else
        v37 = (char *)a7 + 512;
      *(_QWORD *)v37 = *(_QWORD *)(*(_QWORD *)(v10 + 48) + 16LL);
      v38 = v61;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 3057LL) )
      {
        if ( *((_BYTE *)a7 + 356) )
          v39 = (char *)a7
              + 64 * (unsigned __int64)(v32 * *((_DWORD *)a7 + 151))
              + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
              + 616;
        else
          v39 = (char *)a7 + 568;
        *(_QWORD *)v39 = *(_QWORD *)(a4[v61].Count + 184);
      }
      if ( *((_BYTE *)a7 + 356) )
        *((_DWORD *)a7 + 160) = -1;
      v40 = 32 * v38;
      *(HANDLE *)((char *)&v58->hDeviceSpecificAllocation + v40) = *(HANDLE *)(v10 + 32);
      AllocationGpuVirtualAddress = VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
                                      *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 760LL),
                                      *(const struct VIDMM_MULTI_ALLOC **)(v10 + 24),
                                      HIBYTE(this[53].Ptr) != 0,
                                      v56);
      v42 = v58;
      *(_QWORD *)((char *)&v58->8 + v40) = AllocationGpuVirtualAddress;
      *(union _LARGE_INTEGER *)((char *)&v42->PhysicalAddress + v40) = v59;
      *(_WORD *)((char *)&v42[1].hDeviceSpecificAllocation + v40) = v54;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53);
      v15 = v32 + 1;
      LODWORD(v10) = v57;
    }
    v43 = v66;
    v66->NumSrcAllocations = v10;
    v43->pAllocationList = v58;
    v44 = (char *)a7 + 760;
    if ( !*((_BYTE *)a7 + 356) )
      v44 = (char *)a7 + 528;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                        *(ADAPTER_DISPLAY **)(*(_QWORD *)(this[2].Count + 1896) + 3120LL),
                        *((_DWORD *)a7 + 29));
    *(_WORD *)v44 = 0;
    *(_DWORD *)(v44 + 2) = *(unsigned __int16 *)DisplayModeInfo;
    *((_WORD *)v44 + 3) = *((_WORD *)DisplayModeInfo + 2);
    v46 = *(_QWORD *)v44;
    *((_QWORD *)v44 + 1) = *(_QWORD *)v44;
    *((_QWORD *)v44 + 2) = v46;
    if ( a8 == D3DDDIFMT_A16B16G16R16F || (v47 = 0, a8 == D3DDDIFMT_A32B32G32R32F) )
      v47 = 1;
    *((_DWORD *)v44 + 6) = v47;
    *((_DWORD *)v44 + 7) &= 0xFFFFFFE7;
    *((_DWORD *)v44 + 8) = 0;
    Ptr = 0LL;
    if ( (v43->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 3057LL) )
      Ptr = this[23].Ptr;
    v21 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(this[2].Count + 16), Ptr, v43);
    if ( v21 >= 0 )
    {
      v49 = 0;
      if ( (_DWORD)v10 )
      {
        v50 = (DXGCONTEXT **)a4;
        do
        {
          if ( *((struct _KTHREAD **)*v50 + 56) != KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 8926;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
              8926LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (this[49].Count & 0x10) != 0 )
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(*v50, 0LL, 0, 0, a7, 0LL, 0);
          v21 = DXGCONTEXT::SubmitCommandToImplicitQueue(*v50, a7);
          if ( v21 < 0 )
            break;
          *(_DWORD *)a7 &= ~0x800u;
          ++v49;
          ++v50;
        }
        while ( v49 < v57 );
      }
      goto LABEL_30;
    }
    v11 = v51;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 8682;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocated ReferencedAllocationArray",
      8682LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v21 = -1073741801;
  }
  v16 = a4;
LABEL_32:
  if ( v21 < 0 && v11 )
  {
    v25 = (char *)Pool2 - (char *)v16;
    v26 = v11;
    do
    {
      VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 760LL),
        *(struct VIDMM_GLOBAL **)(*(_QWORD *)(this[2].Count + 16) + 768LL),
        1 << *(_DWORD *)(v16->Count + 388),
        *(struct VIDMM_ALLOC **)((char *)&v16->Count + v25));
      ++v16;
      --v26;
    }
    while ( v26 );
  }
  if ( P != v68 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v69 = 0;
  if ( v70 != &v71 && v70 )
    ExFreePoolWithTag(v70, 0);
  return (unsigned int)v21;
}
