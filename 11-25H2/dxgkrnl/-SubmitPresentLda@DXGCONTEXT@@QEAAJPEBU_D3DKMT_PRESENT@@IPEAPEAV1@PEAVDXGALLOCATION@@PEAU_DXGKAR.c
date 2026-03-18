/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1403FE340
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1400345DC (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x14003BC5C (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MUL.c)
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z @ 0x14003BDA8 (-VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F5A4 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140057794 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x14032C7C4 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x140330F00 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x14037DF88 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1403A1AC4 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        struct _EX_RUNDOWN_REF *this,
        const struct _D3DKMT_PRESENT *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7,
        enum _D3DDDIFORMAT a8)
{
  DXGPROCESS *v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // r9
  PVOID v13; // r8
  struct _EX_RUNDOWN_REF *Pool2; // r12
  char *v15; // rcx
  unsigned int v16; // edi
  struct _EX_RUNDOWN_REF *v17; // r14
  struct DXGCONTEXT *Count; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  const wchar_t *v21; // r9
  int v22; // edi
  unsigned int *v23; // r15
  __int64 v24; // r15
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  signed __int64 v26; // r12
  __int64 v27; // rsi
  ULONG_PTR v29; // rdx
  struct VIDMM_ALLOC **v30; // r15
  __int64 v31; // r10
  unsigned int v32; // r8d
  unsigned int v33; // edi
  union _LARGE_INTEGER *v34; // rdx
  __int64 v35; // rcx
  bool v36; // al
  __int64 v37; // r8
  char *v38; // rdx
  __int64 v39; // r15
  char *v40; // rdx
  __int64 v41; // r15
  __int64 AllocationGpuVirtualAddress; // rax
  DXGK_ALLOCATIONLIST *v43; // rcx
  struct _DXGKARG_PRESENT *v44; // r15
  char *v45; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v47; // rax
  int v48; // eax
  PVOID Ptr; // rdx
  unsigned int v50; // r15d
  struct DXGCONTEXT **v51; // r14
  DXGCONTEXT *v52; // rdi
  unsigned int v53; // [rsp+50h] [rbp-198h]
  struct _EX_RUNDOWN_REF *v55; // [rsp+60h] [rbp-188h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-180h] BYREF
  unsigned int v57; // [rsp+6Ch] [rbp-17Ch]
  unsigned int v58; // [rsp+70h] [rbp-178h]
  unsigned int v59; // [rsp+74h] [rbp-174h]
  DXGK_ALLOCATIONLIST *v60; // [rsp+78h] [rbp-170h]
  union _LARGE_INTEGER v61; // [rsp+80h] [rbp-168h] BYREF
  int v62; // [rsp+88h] [rbp-160h]
  __int64 v63; // [rsp+90h] [rbp-158h]
  struct DXGALLOCATION *v64; // [rsp+98h] [rbp-150h]
  const struct _D3DKMT_PRESENT *v65; // [rsp+A0h] [rbp-148h]
  DXGPROCESS *v66; // [rsp+A8h] [rbp-140h]
  struct _EX_RUNDOWN_REF *v67[4]; // [rsp+B0h] [rbp-138h] BYREF
  struct _DXGKARG_PRESENT *v68; // [rsp+D0h] [rbp-118h]
  PVOID P; // [rsp+D8h] [rbp-110h]
  _BYTE v70[32]; // [rsp+E0h] [rbp-108h] BYREF
  int v71; // [rsp+100h] [rbp-E8h]
  PVOID v72; // [rsp+110h] [rbp-D8h] BYREF
  char v73; // [rsp+118h] [rbp-D0h] BYREF
  int v74; // [rsp+198h] [rbp-50h]

  v65 = a2;
  v67[2] = this;
  v67[3] = a4;
  v64 = a5;
  v68 = a6;
  v9 = *(DXGPROCESS **)(this[2].Count + 40);
  v66 = v9;
  v10 = (unsigned int)(a3 + 1);
  v59 = a3 + 1;
  v11 = 0;
  v53 = 0;
  v72 = 0LL;
  v74 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements((__int64 *)&v72, a3 + 1, a3, (__int64)a4);
  v13 = v72;
  v60 = (DXGK_ALLOCATIONLIST *)v72;
  Pool2 = 0LL;
  P = 0LL;
  v71 = 0;
  if ( (unsigned int)v10 <= 4 )
  {
    Pool2 = (struct _EX_RUNDOWN_REF *)v70;
    P = v70;
    if ( !(_DWORD)v10 )
    {
LABEL_7:
      v71 = v10;
      goto LABEL_8;
    }
    memset(v70, 0, 8LL * (unsigned int)v10);
    Pool2 = (struct _EX_RUNDOWN_REF *)P;
LABEL_6:
    v13 = v60;
    goto LABEL_7;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 >= 8 )
  {
    Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(256LL, 8 * v10, 1265072196LL, v12);
    P = Pool2;
    goto LABEL_6;
  }
LABEL_8:
  v67[1] = Pool2;
  if ( !v13 || !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 8643;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocated ReferencedAllocationArray",
      8643LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v22 = -1073741801;
    goto LABEL_104;
  }
  if ( *(_QWORD *)(this[2].Count + 1880) != *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL)
    || DXGPROCESS::IsRemoteConnection(v9) )
  {
    *((_DWORD *)a7 + 29) = 0;
  }
  *(_DWORD *)a7 |= 0xC00u;
  *((_DWORD *)a7 + 35) = v10;
  v15 = (char *)a7 + 600;
  if ( !*((_BYTE *)a7 + 356) )
    v15 = (char *)a7 + 496;
  *(_DWORD *)v15 = *(_DWORD *)v15 & 0xFFFFFC00 | 1;
  v16 = 0;
  while ( 1 )
  {
    v57 = v16;
    if ( v16 >= (unsigned int)v10 )
    {
      v44 = v68;
      v68->NumSrcAllocations = v10;
      v44->pAllocationList = v60;
      v45 = (char *)a7 + 760;
      if ( !*((_BYTE *)a7 + 356) )
        v45 = (char *)a7 + 528;
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                          *(ADAPTER_DISPLAY **)(*(_QWORD *)(this[2].Count + 1880) + 3120LL),
                          *((_DWORD *)a7 + 29));
      *(_WORD *)v45 = 0;
      *(_DWORD *)(v45 + 2) = *(unsigned __int16 *)DisplayModeInfo;
      *((_WORD *)v45 + 3) = *((_WORD *)DisplayModeInfo + 2);
      v47 = *(_QWORD *)v45;
      *((_QWORD *)v45 + 1) = *(_QWORD *)v45;
      *((_QWORD *)v45 + 2) = v47;
      if ( a8 == D3DDDIFMT_A16B16G16R16F || (v48 = 0, a8 == D3DDDIFMT_A32B32G32R32F) )
        v48 = 1;
      *((_DWORD *)v45 + 6) = v48;
      *((_DWORD *)v45 + 7) &= 0xFFFFFFE7;
      *((_DWORD *)v45 + 8) = 0;
      Ptr = 0LL;
      if ( (v44->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 3057LL) )
        Ptr = this[23].Ptr;
      v22 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(this[2].Count + 16), Ptr, v44);
      if ( v22 >= 0 )
      {
        v50 = 0;
        if ( !(_DWORD)v10 )
          goto LABEL_30;
        v51 = (struct DXGCONTEXT **)a4;
        while ( 1 )
        {
          v52 = *v51;
          if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
            break;
          if ( *((struct _KTHREAD **)v52 + 56) != KeGetCurrentThread() )
            goto LABEL_96;
LABEL_97:
          if ( (this[49].Count & 0x10) != 0 )
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(*v51, 0LL, 0, 0LL, a7, 0);
          v22 = DXGCONTEXT::SubmitCommandToImplicitQueue(*v51, a7);
          if ( v22 >= 0 )
          {
            *(_DWORD *)a7 &= ~0x800u;
            ++v50;
            ++v51;
            if ( v50 < v59 )
              continue;
          }
          goto LABEL_30;
        }
        if ( *((struct _KTHREAD **)v52 + 56) == KeGetCurrentThread() )
          goto LABEL_97;
LABEL_96:
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8887;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
          8887LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_97;
      }
      v11 = v53;
LABEL_104:
      v17 = a4;
      goto LABEL_32;
    }
    v63 = v16;
    v17 = a4;
    Count = (struct DXGCONTEXT *)a4[v16].Count;
    v19 = *((_DWORD *)Count + 97);
    v58 = v19;
    v55 = 0LL;
    if ( !*((_BYTE *)Count + 430) )
    {
      WdLogSingleEntry0(2LL);
      v20 = 8683LL;
      v21 = L"WDDMv2 LDA present must be on contexts, which support GpuVa";
LABEL_19:
      WdLogGlobalForLineNumber = v20;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v21, v20, 0LL, 0LL, 0LL, 0LL);
      v22 = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v55);
      goto LABEL_31;
    }
    if ( v16 )
    {
      if ( v19 <= *(_DWORD *)(a4[v16 - 1].Count + 388) )
      {
        WdLogSingleEntry0(2LL);
        v20 = 8699LL;
        v21 = L"WDDMv2 LDA present contexts must be submitted in the order if increasing physical adapter index";
        goto LABEL_19;
      }
      v62 = 0;
      v23 = &v65->BroadcastSrcAllocation[v16 - 1];
      if ( v23 + 1 < v23 || (unsigned __int64)(v23 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v24 = *v23;
      v62 = v24;
      AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v66,
                                                    (DXGALLOCATIONREFERENCE *)v67,
                                                    v24);
      DXGALLOCATIONREFERENCE::MoveAssign(&v55, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v67);
      v10 = (__int64)v55;
      if ( !v55 )
      {
        v22 = -1073741811;
        WdLogSingleEntry2(2LL, v24, -1073741811LL);
        WdLogGlobalForLineNumber = 8720;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid allocation handle in Present 0x%I64x. Returning 0x%I64x",
          v24,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_29;
      }
      v29 = this[2].Count;
      if ( *(_QWORD *)(*(_QWORD *)(v55[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) )
      {
        v22 = -1073741811;
        WdLogSingleEntry3(2LL, v29, v55, -1073741811LL);
        WdLogGlobalForLineNumber = 8729;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          this[2].Count,
          v10,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_29;
      }
      v19 = v58;
    }
    else
    {
      v10 = (__int64)v64;
    }
    if ( ((*(_DWORD *)(v10 + 72) >> 12) & 0x3F) != v19 )
      break;
    if ( *((_BYTE *)a7 + 356) )
      v30 = (struct VIDMM_ALLOC **)((char *)a7
                                  + 64 * (unsigned __int64)(v16 * *((_DWORD *)a7 + 151))
                                  + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                                  + 648);
    else
      v30 = (struct VIDMM_ALLOC **)((char *)a7 + 504);
    v22 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 760LL),
            *(struct VIDMM_DEVICE **)(this[2].Count + 792),
            *(struct VIDMM_MULTI_ALLOC **)(v10 + 24),
            v30);
    if ( v22 < 0 )
      goto LABEL_29;
    Pool2[v53++].Count = (ULONG_PTR)*v30;
    v56 = 0;
    v61.QuadPart = 0LL;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
    {
      v32 = 0xFFFF;
      v56 = 0xFFFF;
      v61.QuadPart = -1LL;
    }
    else
    {
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        *(VIDMM_EXPORT **)(v31 + 760),
        *(struct VIDMM_GLOBAL **)(v31 + 768),
        *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v10 + 48) + 8LL),
        &v56,
        &v61,
        0LL);
      v32 = v56;
    }
    v33 = v57;
    if ( *((_BYTE *)a7 + 356) )
      *(_WORD *)((char *)a7
               + 64 * (unsigned __int64)(v57 * *((_DWORD *)a7 + 151))
               + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
               + 632) = v32;
    else
      *((_DWORD *)a7 + 139) ^= (*((_DWORD *)a7 + 139) ^ (v32 << 17)) & 0x3E0000;
    if ( *((_BYTE *)a7 + 356) )
      v34 = (union _LARGE_INTEGER *)((char *)a7
                                   + 64 * (unsigned __int64)(v33 * *((_DWORD *)a7 + 151))
                                   + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                                   + 640);
    else
      v34 = (union _LARGE_INTEGER *)((char *)a7 + 520);
    *v34 = v61;
    v35 = *(_QWORD *)(v10 + 40);
    if ( v35 )
      v36 = (*(_DWORD *)(v35 + 4) & 8) != 0;
    else
      v36 = 0;
    if ( v36 )
      v37 = *(_QWORD *)(*(_QWORD *)(v35 + 56) + 184LL);
    else
      v37 = 0LL;
    if ( *((_BYTE *)a7 + 356) )
      *(_QWORD *)((char *)a7
                + 64 * (unsigned __int64)(v33 * *((_DWORD *)a7 + 151))
                + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                + 656) = v37;
    else
      *((_QWORD *)a7 + 72) = v37;
    if ( *((_BYTE *)a7 + 356) )
      v38 = (char *)a7
          + 64 * (unsigned __int64)(v33 * *((_DWORD *)a7 + 151))
          + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
          + 624;
    else
      v38 = (char *)a7 + 512;
    *(_QWORD *)v38 = *(_QWORD *)(*(_QWORD *)(v10 + 48) + 16LL);
    v39 = v63;
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 3057LL) )
    {
      if ( *((_BYTE *)a7 + 356) )
        v40 = (char *)a7
            + 64 * (unsigned __int64)(v33 * *((_DWORD *)a7 + 151))
            + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
            + 616;
      else
        v40 = (char *)a7 + 568;
      *(_QWORD *)v40 = *(_QWORD *)(a4[v63].Count + 184);
    }
    if ( *((_BYTE *)a7 + 356) )
      *((_DWORD *)a7 + 160) = -1;
    v41 = 32 * v39;
    *(HANDLE *)((char *)&v60->hDeviceSpecificAllocation + v41) = *(HANDLE *)(v10 + 32);
    AllocationGpuVirtualAddress = VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
                                    *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 760LL),
                                    *(const struct VIDMM_MULTI_ALLOC **)(v10 + 24),
                                    HIBYTE(this[53].Ptr) != 0,
                                    v58);
    v43 = v60;
    *(_QWORD *)((char *)&v60->8 + v41) = AllocationGpuVirtualAddress;
    *(union _LARGE_INTEGER *)((char *)&v43->PhysicalAddress + v41) = v61;
    *(_WORD *)((char *)&v43[1].hDeviceSpecificAllocation + v41) = v56;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v55);
    v16 = v33 + 1;
    LODWORD(v10) = v59;
  }
  WdLogSingleEntry1(2LL, v10);
  WdLogGlobalForLineNumber = 8737;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
    v10,
    0LL,
    0LL,
    0LL,
    0LL);
  v22 = -1073741811;
LABEL_29:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v55);
LABEL_30:
  v17 = a4;
LABEL_31:
  v11 = v53;
LABEL_32:
  if ( v22 < 0 && v11 )
  {
    v26 = (char *)Pool2 - (char *)v17;
    v27 = v11;
    do
    {
      VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 760LL),
        *(struct VIDMM_GLOBAL **)(*(_QWORD *)(this[2].Count + 16) + 768LL),
        1 << *(_DWORD *)(v17->Count + 388),
        *(struct VIDMM_ALLOC **)((char *)&v17->Count + v26));
      ++v17;
      --v27;
    }
    while ( v27 );
  }
  if ( P != v70 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v71 = 0;
  if ( v72 != &v73 && v72 )
    ExFreePoolWithTag(v72, 0);
  return (unsigned int)v22;
}
