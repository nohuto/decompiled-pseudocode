/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C
 * Callers:
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401E544C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034D5A0 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1403886A4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x14002CF20 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x14002D750 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ?VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14003642C (-VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004D530 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140057794 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x140186DE0 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x14032C7C4 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x140330F00 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140357D98 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x14035B064 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x14037DF88 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403DA558 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1403FE340 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE **a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION *a6,
        unsigned int a7,
        unsigned int a8,
        struct _DXGKARG_PRESENT *a9,
        struct _D3DKMT_PRESENT_RGNS *a10,
        struct VIDMM_DMA_BUFFER *a11,
        struct VIDSCH_SUBMIT_DATA_BASE *a12,
        enum _D3DDDIFORMAT a13,
        struct COREDEVICEACCESS *a14)
{
  __int64 v15; // rax
  __int64 v16; // r14
  struct DXGALLOCATION *v17; // rdi
  struct DXGALLOCATION *v18; // rbx
  struct DXGALLOCATION **AllocationSafe; // rax
  struct DXGTHREAD *Current; // rax
  struct DXGALLOCATION **v21; // rax
  __int64 v22; // rax
  bool v23; // cl
  struct _D3DKMT_PRESENT *v24; // rdx
  int v25; // eax
  __int64 v26; // r14
  int v27; // eax
  struct CRefCountedBuffer *v28; // rcx
  UINT PrivateDriverDataSize; // eax
  struct _DXGKARG_PRESENT *v30; // rdx
  unsigned int v31; // r14d
  unsigned int v32; // r10d
  struct DXGCONTEXT **v33; // rcx
  int v34; // edx
  unsigned int v35; // r8d
  int v36; // eax
  struct _D3DKMT_PRESENT_RGNS *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rdx
  UINT v40; // eax
  struct _DXGKARG_PRESENT *v41; // rcx
  RECT *v42; // rcx
  unsigned int MoveRectCount; // edx
  RECT *p_DestRect; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  const wchar_t *v47; // r9
  unsigned int v48; // eax
  struct DXGALLOCATION *v49; // rdi
  struct DXGALLOCATION *v50; // rbx
  unsigned int v51; // r10d
  __int64 v52; // r12
  struct _D3DKMT_PRESENT *v53; // r14
  D3DKMT_HANDLE *v54; // r12
  struct _EX_RUNDOWN_REF **v55; // rax
  struct VIDMM_DMA_BUFFER *v56; // rax
  struct DXGCONTEXT *v57; // r8
  struct DXGALLOCATION *v58; // rbx
  unsigned int *v59; // r8
  struct _EX_RUNDOWN_REF **v60; // rax
  struct DXGCONTEXT *v61; // r8
  struct DXGALLOCATION *v62; // rbx
  __int64 v63; // rcx
  DXGCONTEXT *v64; // rax
  struct DXGHWQUEUE *v65; // r8
  struct _VIDSCH_CONTEXT **Pool2; // r8
  unsigned int v67; // edi
  unsigned int v68; // ebx
  struct DXGCONTEXT **v69; // rdx
  struct DXGHWQUEUE *v70; // r8
  struct _DXGKARG_PRESENT *v71; // rcx
  unsigned int v72; // ebx
  int v74; // ecx
  char *v75; // rcx
  char *v76; // r8
  _QWORD *v77; // rcx
  __int64 v78; // rax
  int v79; // ecx
  char *v80; // rcx
  struct DXGALLOCATION *v81; // r8
  __int64 v82; // rcx
  bool v83; // al
  __int64 v84; // rcx
  char *v85; // rbx
  char *v86; // rcx
  char *v87; // rcx
  __int64 v88; // r14
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 (__fastcall *v95)(_QWORD, __int64, _QWORD); // rax
  struct _DXGKARG_PRESENT *v96; // r8
  void *v97; // rdx
  unsigned int v98; // ebx
  struct DXGCONTEXT **v99; // rdi
  struct DXGCONTEXT *v100; // rdi
  struct VIDMM_ALLOC **v101; // r9
  struct VIDMM_DMA_BUFFER *v102; // [rsp+50h] [rbp-348h]
  char v103; // [rsp+58h] [rbp-340h]
  int v104; // [rsp+5Ch] [rbp-33Ch]
  unsigned int v105; // [rsp+60h] [rbp-338h]
  struct DXGCONTEXT **v106; // [rsp+68h] [rbp-330h]
  int v107; // [rsp+70h] [rbp-328h] BYREF
  unsigned int v108; // [rsp+74h] [rbp-324h]
  unsigned int v109; // [rsp+78h] [rbp-320h]
  struct _D3DKMT_PRESENT *v110; // [rsp+80h] [rbp-318h]
  struct _DXGKARG_PRESENT *v111; // [rsp+88h] [rbp-310h]
  struct DXGALLOCATION *v112; // [rsp+90h] [rbp-308h] BYREF
  struct DXGALLOCATION *v113; // [rsp+98h] [rbp-300h] BYREF
  __int64 v114; // [rsp+A0h] [rbp-2F8h]
  unsigned int v115; // [rsp+A8h] [rbp-2F0h]
  __int64 v116; // [rsp+B0h] [rbp-2E8h] BYREF
  __int64 v117; // [rsp+B8h] [rbp-2E0h]
  struct CRefCountedBuffer *v118; // [rsp+C0h] [rbp-2D8h] BYREF
  int v119; // [rsp+C8h] [rbp-2D0h]
  unsigned int v120; // [rsp+CCh] [rbp-2CCh]
  _QWORD v121[2]; // [rsp+D0h] [rbp-2C8h] BYREF
  struct VIDMM_DMA_BUFFER *v122; // [rsp+E0h] [rbp-2B8h]
  unsigned __int64 v123; // [rsp+E8h] [rbp-2B0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+F0h] [rbp-2A8h] BYREF
  struct DXGHWQUEUE **v125; // [rsp+F8h] [rbp-2A0h]
  struct COREDEVICEACCESS *v126; // [rsp+100h] [rbp-298h]
  struct _EX_RUNDOWN_REF *v127; // [rsp+108h] [rbp-290h] BYREF
  struct _EX_RUNDOWN_REF *v128; // [rsp+110h] [rbp-288h] BYREF
  struct _D3DKMT_PRESENT_RGNS *v129; // [rsp+118h] [rbp-280h]
  struct _EX_RUNDOWN_REF *v130; // [rsp+120h] [rbp-278h] BYREF
  struct _EX_RUNDOWN_REF *v131[3]; // [rsp+128h] [rbp-270h] BYREF
  PVOID P; // [rsp+140h] [rbp-258h]
  _BYTE v133[64]; // [rsp+148h] [rbp-250h] BYREF
  unsigned int v134; // [rsp+188h] [rbp-210h]
  __int64 v135; // [rsp+190h] [rbp-208h]
  struct DXGALLOCATION *v136; // [rsp+198h] [rbp-200h]
  __int64 v137; // [rsp+1A0h] [rbp-1F8h]
  struct DXGALLOCATION *v138; // [rsp+1A8h] [rbp-1F0h]
  _QWORD v139[12]; // [rsp+1B0h] [rbp-1E8h] BYREF
  _BYTE v140[320]; // [rsp+210h] [rbp-188h] BYREF

  v108 = a4;
  v125 = a3;
  v110 = a2;
  v111 = a9;
  v131[1] = (struct _EX_RUNDOWN_REF *)this;
  v106 = a5;
  v115 = a7;
  v109 = a8;
  v129 = a10;
  v102 = a11;
  v122 = a11;
  v126 = a14;
  v104 = 0;
  v15 = *((_QWORD *)this + 2);
  v117 = *(_QWORD *)(v15 + 40);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  v114 = v16;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7996;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7996LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = 0LL;
  v113 = 0LL;
  v18 = 0LL;
  v112 = 0LL;
  if ( v115 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v117, (DXGALLOCATIONREFERENCE *)&v127, v115);
    v17 = *AllocationSafe;
    v113 = *AllocationSafe;
    *AllocationSafe = 0LL;
    if ( v127 )
      ExReleaseRundownProtection(v127 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
    {
      Current = DXGTHREAD::GetCurrent();
      if ( Current )
      {
        if ( *((_DWORD *)Current + 12) )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)Current + 12), 0LL, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
    }
  }
  if ( v109 )
  {
    v21 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v117, (DXGALLOCATIONREFERENCE *)&v128, v109);
    v18 = *v21;
    v112 = *v21;
    *v21 = 0LL;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v128);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
    || ((v22 = *(_QWORD *)(v117 + 88)) == 0
      ? (v23 = 0)
      : (v23 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v22 + 240))(0LL, 0LL, 0LL) != 0),
        v23) )
  {
    *((_DWORD *)a12 + 29) = 0;
  }
  v118 = 0LL;
  v121[0] = 0LL;
  v24 = v110;
  if ( v110 )
  {
    v25 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            v110->PrivateDriverDataSize,
            v110->pPrivateDriverData,
            &v118);
    v26 = v25;
    v104 = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry1(2LL, v25);
      WdLogGlobalForLineNumber = 8030;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to read private driver data. Returning 0x%I64x",
        v26,
        0LL,
        0LL,
        0LL,
        0LL);
      v121[1] = 7LL;
      DxgCreateLiveDumpWithWdLogs2(403LL, 2080LL, *((int *)this + 36), v110->PrivateDriverDataSize, 0LL, 7LL);
      goto LABEL_178;
    }
    v16 = v114;
    v24 = v110;
  }
  v121[0] = v118;
  v103 = 0;
  v27 = *(_DWORD *)(v16 + 2736);
  if ( (v27 >= 0x2000 || *(_BYTE *)(v16 + 3036)) && *(_DWORD *)(v16 + 2280) >= 0x5007u && v24 )
  {
    v103 = 1;
    v28 = v118;
    if ( v118 )
    {
      PrivateDriverDataSize = v24->PrivateDriverDataSize;
      v30 = v111;
      v111->PrivateDriverDataSize = PrivateDriverDataSize;
      v30->pPrivateDriverData = (char *)v28 + 16;
    }
    *((_QWORD *)a12 + 100) = v118;
    goto LABEL_30;
  }
  if ( v27 < 0x2000 && !*(_BYTE *)(v16 + 3036) )
  {
LABEL_30:
    v31 = v108;
    goto LABEL_31;
  }
  v31 = v108;
  if ( v108 )
  {
    LODWORD(v26) = -1073741811;
    goto LABEL_178;
  }
LABEL_31:
  v32 = v31 + 1;
  LODWORD(v114) = v31 + 1;
  v33 = a5;
  v34 = *((_DWORD *)*a5 + 96);
  v35 = 0;
  if ( v31 )
  {
    while ( 1 )
    {
      v36 = *((_DWORD *)v33[++v35] + 96);
      if ( (v36 & v34) != 0 )
        break;
      v34 |= v36;
      v33 = a5;
      if ( v35 >= v31 )
        goto LABEL_34;
    }
    LODWORD(v26) = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8107;
    v47 = L"0x%I64x failed, can't broadcast flip to multiple context on the same physical adapter returning 0x%I64x";
    goto LABEL_52;
  }
LABEL_34:
  *((_DWORD *)a12 + 34) = v34;
  v37 = v129;
  if ( v129 )
  {
    v38 = *((_QWORD *)this + 2);
    v39 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL);
    if ( (*(_DWORD *)(v39 + 444) & 0x10) != 0 && v39 == *(_QWORD *)(v38 + 1880) )
    {
      v40 = v129->MoveRectCount + v129->DirtyRectCount;
      if ( v40 <= 0x14 )
      {
        v41 = v111;
        v111->SubRectCnt = v40;
        v41->pDstSubRects = (const RECT *)v140;
        v42 = (RECT *)v140;
        MoveRectCount = v37->MoveRectCount;
        if ( MoveRectCount )
        {
          p_DestRect = &v37->pMoveRects->DestRect;
          v45 = MoveRectCount;
          do
          {
            *v42 = *p_DestRect;
            p_DestRect = (RECT *)((char *)p_DestRect + 24);
            ++v42;
            --v45;
          }
          while ( v45 );
        }
        memmove(v42, v37->pDirtyRects, 16LL * v37->DirtyRectCount);
        v32 = v31 + 1;
      }
    }
  }
  if ( ((*((_DWORD *)a12 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    if ( v32 <= 1 )
    {
      if ( v125 )
        v70 = *v125;
      else
        v70 = 0LL;
      LODWORD(v26) = DXGCONTEXT::SubmitPresentWithDmaBuffer(this, v110, v70, v17, v18, v111, a11, a12, v126);
      v56 = 0LL;
      v102 = 0LL;
      goto LABEL_179;
    }
    if ( !v103 )
    {
      LODWORD(v26) = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 8550;
      v47 = L"0x%I64x Broadcast present only supported on the Software Flip Queue, returning 0x%I64x";
LABEL_52:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v47, (__int64)this, -1073741811LL, 0LL, 0LL, 0LL);
      goto LABEL_178;
    }
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)this + 2));
    if ( !BroadcastPresentSyncObject )
    {
      LODWORD(v26) = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 8391;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create present sync object. Returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_178;
    }
    v123 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 1928LL));
    *(_DWORD *)a12 |= 0xC00u;
    v48 = 0;
    LODWORD(v26) = v104;
    v49 = v113;
    v50 = v112;
    while ( 1 )
    {
      v105 = v48;
      v51 = v114;
      if ( v48 >= (unsigned int)v114 )
        break;
      if ( v48 )
      {
        LODWORD(v52) = 0;
        v119 = 0;
        v120 = 0;
        v53 = v110;
        if ( v115 )
        {
          v54 = &v110->BroadcastSrcAllocation[v48 - 1];
          if ( v54 + 1 < v54 || (unsigned __int64)(v54 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v52 = *v54;
          v119 = v52;
          v55 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(v117, (DXGALLOCATIONREFERENCE *)&v130, v52);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v113, v55);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v130);
          v49 = v113;
          if ( !v113 )
          {
            LODWORD(v26) = -1073741811;
            WdLogSingleEntry2(2LL, (unsigned int)v52, -1073741811LL);
            WdLogGlobalForLineNumber = 8416;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
              v52,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v56 = v102;
            goto LABEL_179;
          }
          v57 = a5[v105];
          v135 = *((_QWORD *)v57 + 2);
          v136 = v113;
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v113 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v135 + 16) + 16LL) )
          {
            _mm_lfence();
            LODWORD(v26) = -1073741811;
            v58 = v113;
            WdLogSingleEntry3(2LL, *((_QWORD *)v57 + 2), v113, -1073741811LL);
            WdLogGlobalForLineNumber = 8425;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              *((_QWORD *)a5[v105] + 2),
              (__int64)v58,
              -1073741811LL,
              0LL,
              0LL);
            v56 = v102;
            goto LABEL_179;
          }
          v48 = v105;
        }
        if ( v109 )
        {
          v59 = &v53->BroadcastDstAllocation[v48 - 1];
          if ( v59 + 1 < v59 || (unsigned __int64)(v59 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v120 = *v59;
          v60 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(v117, (DXGALLOCATIONREFERENCE *)v131, v120);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v112, v60);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v131);
          v50 = v112;
          if ( !v112 )
          {
            LODWORD(v26) = -1073741811;
            WdLogSingleEntry2(2LL, (unsigned int)v52, -1073741811LL);
            WdLogGlobalForLineNumber = 8438;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
              (unsigned int)v52,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v56 = v102;
            goto LABEL_179;
          }
          v61 = a5[v105];
          v137 = *((_QWORD *)v61 + 2);
          v138 = v112;
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v112 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v137 + 16) + 16LL) )
          {
            _mm_lfence();
            LODWORD(v26) = -1073741811;
            v62 = v112;
            WdLogSingleEntry3(2LL, *((_QWORD *)v61 + 2), v112, -1073741811LL);
            WdLogGlobalForLineNumber = 8447;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              *((_QWORD *)a5[v105] + 2),
              (__int64)v62,
              -1073741811LL,
              0LL,
              0LL);
            v56 = v102;
            goto LABEL_179;
          }
        }
        v48 = v105;
      }
      v63 = v48;
      v64 = a5[v48];
      if ( v125 )
        v65 = v125[v63];
      else
        v65 = 0LL;
      LODWORD(v26) = DXGCONTEXT::SubmitPresentWithDmaBuffer(v64, v110, v65, v49, v50, v111, v102, a12, v126);
      if ( (int)v26 < 0 )
      {
        LODWORD(v26) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 8476;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to submit DMA present buffer. Returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_178;
      }
      v102 = 0LL;
      v122 = 0LL;
      *(_DWORD *)a12 &= ~0x800u;
      v48 = v105 + 1;
    }
    if ( (*((_DWORD *)*a5 + 98) & 0x10) != 0 )
      goto LABEL_178;
    Pool2 = 0LL;
    P = 0LL;
    v134 = 0;
    v67 = v108;
    if ( v108 <= 8 )
    {
      Pool2 = (struct _VIDSCH_CONTEXT **)v133;
      P = v133;
      if ( !v108 )
      {
LABEL_87:
        v134 = v108;
LABEL_88:
        if ( Pool2 )
        {
          v68 = 1;
          v69 = a5 + 1;
          do
          {
            if ( (*((_DWORD *)*v69 + 98) & 0x10) != 0 )
            {
              WdLogSingleEntry1(2LL, *v69);
              WdLogGlobalForLineNumber = 8516;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"DXGCONTEXT 0x%p broadcast present mixes hardware scheduled and non-hardware scheduled contexts.",
                (__int64)a5[v68],
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v26) = -1073741811;
              goto LABEL_95;
            }
            Pool2[v68++ - 1] = (struct _VIDSCH_CONTEXT *)*((_QWORD *)*v69++ + 32);
          }
          while ( v68 < v51 );
          LODWORD(v26) = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
                           *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                           0,
                           0LL,
                           v67,
                           Pool2,
                           1u,
                           &BroadcastPresentSyncObject,
                           0,
                           &v123,
                           0);
          if ( (int)v26 >= 0 )
            LODWORD(v26) = VIDSCH_EXPORT::VidSchWaitForSingleSyncObject(
                             *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                             *((struct _VIDSCH_CONTEXT **)this + 32),
                             BroadcastPresentSyncObject,
                             v123);
LABEL_95:
          if ( P != v133 && P )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
          LODWORD(v26) = -1073741801;
        }
        goto LABEL_178;
      }
      memset(v133, 0, 8LL * v108);
      Pool2 = (struct _VIDSCH_CONTEXT **)P;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v108 < 8 )
        goto LABEL_88;
      Pool2 = (struct _VIDSCH_CONTEXT **)ExAllocatePool2(256LL, 8LL * v108, 1265072196LL, v46);
      P = Pool2;
    }
    v51 = v108 + 1;
    goto LABEL_87;
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8157;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pFlipToDxgAllocation", 8157LL, 0LL, 0LL, 0LL, 0LL);
  }
  v71 = v111;
  if ( v111->pDmaBuffer )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8158;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pPresentDdiArg->pDmaBuffer == NULL",
      8158LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v71 = v111;
  }
  if ( !v31 || !v103 )
  {
    v74 = 2048;
    if ( v31 + 1 > 1 )
      v74 = 3072;
    *(_DWORD *)a12 = *(_DWORD *)a12 & 0xFFFFFBFF | v74;
    *((_DWORD *)a12 + 35) = v31 + 1;
    v75 = (char *)a12 + 600;
    if ( !*((_BYTE *)a12 + 356) )
      v75 = (char *)a12 + 496;
    *(_DWORD *)v75 = *(_DWORD *)v75 & 0xFFFFFC00 | 1;
    if ( *((_BYTE *)a12 + 356) )
      v76 = (char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8) + 648;
    else
      v76 = (char *)a12 + 504;
    LODWORD(v26) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 384LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 792LL),
                     *((_QWORD *)a6 + 3),
                     v76);
    if ( (int)v26 < 0 )
      goto LABEL_178;
    v107 = 0;
    v116 = 0LL;
    v77 = *(_QWORD **)(*((_QWORD *)this + 2) + 16LL);
    v78 = v77[2];
    if ( *(int *)(v78 + 2736) >= 0x2000 || *(_BYTE *)(v78 + 3036) )
    {
      v79 = 0xFFFF;
      v107 = 0xFFFF;
      v116 = -1LL;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v77[95] + 8LL) + 192LL))(
        v77[96],
        *(_QWORD *)(*((_QWORD *)a6 + 6) + 8LL),
        &v107,
        &v116,
        0LL);
      v79 = v107;
    }
    if ( *((_BYTE *)a12 + 356) )
      *(_WORD *)((char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8) + 632) = v79;
    else
      *((_DWORD *)a12 + 139) ^= (*((_DWORD *)a12 + 139) ^ (v79 << 17)) & 0x3E0000;
    if ( *((_BYTE *)a12 + 356) )
      v80 = (char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8) + 640;
    else
      v80 = (char *)a12 + 520;
    *(_QWORD *)v80 = v116;
    v81 = a6;
    v82 = *((_QWORD *)a6 + 5);
    if ( v82 )
      v83 = (*(_DWORD *)(v82 + 4) & 8) != 0;
    else
      v83 = 0;
    if ( v83 )
      v84 = *(_QWORD *)(*(_QWORD *)(v82 + 56) + 184LL);
    else
      v84 = 0LL;
    if ( *((_BYTE *)a12 + 356) )
      *(_QWORD *)((char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8) + 656) = v84;
    else
      *((_QWORD *)a12 + 72) = v84;
    v85 = (char *)a12 + 760;
    if ( *((_BYTE *)a12 + 356) )
    {
      v86 = (char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8) + 624;
    }
    else
    {
      v85 = (char *)a12 + 528;
      v86 = (char *)a12 + 512;
    }
    *(_QWORD *)v86 = *(_QWORD *)(*((_QWORD *)a6 + 6) + 16LL);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3057LL) )
    {
      if ( *((_BYTE *)a12 + 356) )
        v87 = (char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8) + 616;
      else
        v87 = (char *)a12 + 568;
      *(_QWORD *)v87 = *((_QWORD *)this + 23);
    }
    if ( *((_BYTE *)a12 + 356) )
      *((_DWORD *)a12 + 160) = -1;
    v88 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL);
    v89 = *((unsigned int *)a12 + 29);
    v109 = v89;
    if ( (unsigned int)v89 >= *(_DWORD *)(v88 + 96) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5828;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"VidPnSourceId < m_NumVidPnSources",
        5828LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v89 = v109;
      v81 = a6;
    }
    v90 = *(_QWORD *)(v88 + 128);
    *(_WORD *)v85 = 0;
    *((_WORD *)v85 + 1) = *(_WORD *)(3984 * v89 + v90 + 992);
    *((_WORD *)v85 + 2) = 0;
    *((_WORD *)v85 + 3) = *(_WORD *)(3984 * v89 + v90 + 996);
    v91 = *(_QWORD *)v85;
    *((_QWORD *)v85 + 1) = *(_QWORD *)v85;
    *((_QWORD *)v85 + 2) = v91;
    if ( a13 == D3DDDIFMT_A16B16G16R16F || (v92 = 0, a13 == D3DDDIFMT_A32B32G32R32F) )
      v92 = 1;
    *((_DWORD *)v85 + 6) = v92;
    *((_DWORD *)v85 + 7) &= 0xFFFFFFE7;
    *((_DWORD *)v85 + 8) = 0;
    memset(&v139[9], 0, 24);
    v93 = *((_QWORD *)v81 + 4);
    if ( *((_BYTE *)this + 430) )
    {
      memset(v139, 0, sizeof(v139));
      v139[4] = v93;
      v94 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL);
      v95 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v94 + 224);
      LOBYTE(v94) = *((_BYTE *)this + 431) != 0;
      v139[5] = v95(*((_QWORD *)v17 + 3), v94, *((unsigned int *)this + 97));
      v139[6] = v116;
      LOWORD(v139[7]) = v107;
    }
    else
    {
      memset(v139, 0, 0x48uLL);
      v139[3] = v93;
      LODWORD(v139[4]) = v139[4] & 0xFFFFFFC0 | (2 * (v107 & 0x1F));
      v139[5] = v116;
    }
    v96 = v111;
    v111->pAllocationList = (DXGK_ALLOCATIONLIST *)v139;
    v97 = 0LL;
    if ( (v96->Flags.Value & 1) != 0
      || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3057LL) )
    {
      v97 = (void *)*((_QWORD *)this + 23);
    }
    LODWORD(v26) = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v97, v96);
    if ( (int)v26 < 0 )
    {
LABEL_174:
      if ( *((_BYTE *)a12 + 356) )
        v101 = (struct VIDMM_ALLOC **)((char *)a12
                                     + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8)
                                     + 648);
      else
        v101 = (struct VIDMM_ALLOC **)((char *)a12 + 504);
      VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
        *((_DWORD *)a12 + 34),
        *v101);
      goto LABEL_178;
    }
    v98 = 0;
    if ( !(_DWORD)v114 )
    {
LABEL_178:
      v56 = v102;
LABEL_179:
      if ( v56 )
        VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v102);
      CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)v121);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v112);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v113);
      return (unsigned int)v26;
    }
    v99 = a5;
    while ( 1 )
    {
      v100 = *v99;
      if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
        break;
      if ( *((struct _KTHREAD **)v100 + 56) != KeGetCurrentThread() )
        goto LABEL_168;
LABEL_169:
      if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
        DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(*v106, 0LL, 0, 0LL, a12, 0);
      LODWORD(v26) = DXGCONTEXT::SubmitCommandToImplicitQueue(*v106, a12);
      if ( (int)v26 < 0 )
        goto LABEL_174;
      *(_DWORD *)a12 &= ~0x800u;
      ++v98;
      v99 = ++v106;
      if ( v98 >= (unsigned int)v114 )
        goto LABEL_178;
    }
    if ( *((struct _KTHREAD **)v100 + 56) == KeGetCurrentThread() )
      goto LABEL_169;
LABEL_168:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8340;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
      8340LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_169;
  }
  v72 = DXGCONTEXT::SubmitPresentLda(this, v110, v31, a5, a6, v71, a12, a13);
  if ( a11 )
    VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), a11);
  CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)v121);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v112);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v113);
  return v72;
}
