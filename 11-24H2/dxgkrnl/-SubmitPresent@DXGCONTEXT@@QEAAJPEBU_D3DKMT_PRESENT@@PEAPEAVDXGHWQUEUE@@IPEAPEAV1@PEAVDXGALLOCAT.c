/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F5CF8
 * Callers:
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401EA67C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402F4884 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x140374788 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x14002D620 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x14002DEC0 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ?VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14003641C (-VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004CEB0 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140056FA4 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x140189868 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1401EB208 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1403243B0 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034A950 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x14034EF30 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x14035EFA0 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403D3668 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1403F8340 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
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
  const wchar_t *v46; // r9
  unsigned int v47; // eax
  struct DXGALLOCATION *v48; // rdi
  struct DXGALLOCATION *v49; // rbx
  unsigned int v50; // r10d
  __int64 v51; // r12
  D3DKMT_HANDLE *v52; // r12
  DXGALLOCATIONREFERENCE *v53; // rax
  struct VIDMM_DMA_BUFFER *v54; // rax
  struct DXGCONTEXT **v55; // r14
  struct DXGCONTEXT *v56; // r8
  struct DXGALLOCATION *v57; // rbx
  unsigned int *v58; // r8
  DXGALLOCATIONREFERENCE *v59; // rax
  struct DXGCONTEXT *v60; // r8
  struct DXGALLOCATION *v61; // rbx
  __int64 v62; // rcx
  DXGCONTEXT *v63; // rax
  struct DXGHWQUEUE *v64; // r8
  struct DXGCONTEXT **v65; // r15
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
  DXGCONTEXT **v99; // rdi
  struct VIDMM_ALLOC **v100; // r9
  struct VIDMM_DMA_BUFFER *v101; // [rsp+50h] [rbp-348h]
  char v102; // [rsp+58h] [rbp-340h]
  int v103; // [rsp+5Ch] [rbp-33Ch]
  unsigned int v104; // [rsp+60h] [rbp-338h]
  int v105; // [rsp+68h] [rbp-330h] BYREF
  struct DXGCONTEXT **v106; // [rsp+70h] [rbp-328h]
  unsigned int v107; // [rsp+78h] [rbp-320h]
  unsigned int v108; // [rsp+7Ch] [rbp-31Ch]
  struct _D3DKMT_PRESENT *v109; // [rsp+80h] [rbp-318h]
  struct _DXGKARG_PRESENT *v110; // [rsp+88h] [rbp-310h]
  struct DXGALLOCATION *v111; // [rsp+90h] [rbp-308h] BYREF
  struct DXGALLOCATION *v112; // [rsp+98h] [rbp-300h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-2F8h]
  unsigned int v114; // [rsp+A8h] [rbp-2F0h]
  __int64 v115; // [rsp+B0h] [rbp-2E8h] BYREF
  __int64 v116; // [rsp+B8h] [rbp-2E0h]
  struct CRefCountedBuffer *v117; // [rsp+C0h] [rbp-2D8h] BYREF
  int v118; // [rsp+C8h] [rbp-2D0h]
  unsigned int v119; // [rsp+CCh] [rbp-2CCh]
  _QWORD v120[2]; // [rsp+D0h] [rbp-2C8h] BYREF
  struct VIDMM_DMA_BUFFER *v121; // [rsp+E0h] [rbp-2B8h]
  unsigned __int64 v122; // [rsp+E8h] [rbp-2B0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+F0h] [rbp-2A8h] BYREF
  struct DXGHWQUEUE **v124; // [rsp+F8h] [rbp-2A0h]
  struct COREDEVICEACCESS *v125; // [rsp+100h] [rbp-298h]
  struct _EX_RUNDOWN_REF *v126; // [rsp+108h] [rbp-290h] BYREF
  struct _EX_RUNDOWN_REF *v127; // [rsp+110h] [rbp-288h] BYREF
  struct _D3DKMT_PRESENT_RGNS *v128; // [rsp+118h] [rbp-280h]
  struct _EX_RUNDOWN_REF *v129; // [rsp+120h] [rbp-278h] BYREF
  struct _EX_RUNDOWN_REF *v130[3]; // [rsp+128h] [rbp-270h] BYREF
  PVOID P; // [rsp+140h] [rbp-258h]
  _BYTE v132[64]; // [rsp+148h] [rbp-250h] BYREF
  unsigned int v133; // [rsp+188h] [rbp-210h]
  __int64 v134; // [rsp+190h] [rbp-208h]
  struct DXGALLOCATION *v135; // [rsp+198h] [rbp-200h]
  __int64 v136; // [rsp+1A0h] [rbp-1F8h]
  struct DXGALLOCATION *v137; // [rsp+1A8h] [rbp-1F0h]
  _QWORD v138[12]; // [rsp+1B0h] [rbp-1E8h] BYREF
  _BYTE v139[320]; // [rsp+210h] [rbp-188h] BYREF

  v107 = a4;
  v124 = a3;
  v109 = a2;
  v110 = a9;
  v130[1] = (struct _EX_RUNDOWN_REF *)this;
  v106 = a5;
  v114 = a7;
  v108 = a8;
  v128 = a10;
  v101 = a11;
  v121 = a11;
  v125 = a14;
  v103 = 0;
  v15 = *((_QWORD *)this + 2);
  v116 = *(_QWORD *)(v15 + 40);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  v113 = v16;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8031;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8031LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = 0LL;
  v112 = 0LL;
  v18 = 0LL;
  v111 = 0LL;
  if ( v114 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v116, (DXGALLOCATIONREFERENCE *)&v126, v114);
    v17 = *AllocationSafe;
    v112 = *AllocationSafe;
    *AllocationSafe = 0LL;
    if ( v126 )
      ExReleaseRundownProtection(v126 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
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
  if ( v108 )
  {
    v21 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v116, (DXGALLOCATIONREFERENCE *)&v127, v108);
    v18 = *v21;
    v111 = *v21;
    *v21 = 0LL;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v127);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
    || ((v22 = *(_QWORD *)(v116 + 88)) == 0
      ? (v23 = 0)
      : (v23 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v22 + 240))(0LL, 0LL, 0LL) != 0),
        v23) )
  {
    *((_DWORD *)a12 + 29) = 0;
  }
  v117 = 0LL;
  v120[0] = 0LL;
  v24 = v109;
  if ( v109 )
  {
    v25 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            v109->PrivateDriverDataSize,
            v109->pPrivateDriverData,
            &v117);
    v26 = v25;
    v103 = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry1(2LL, v25);
      WdLogGlobalForLineNumber = 8065;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to read private driver data. Returning 0x%I64x",
        v26,
        0LL,
        0LL,
        0LL,
        0LL);
      v120[1] = 7LL;
      DxgCreateLiveDumpWithWdLogs2(403LL, 2080LL, *((int *)this + 36), v109->PrivateDriverDataSize, 0LL, 7LL);
LABEL_176:
      v54 = v101;
LABEL_177:
      if ( v54 )
        VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v101);
      CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)v120);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v111);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v112);
      return (unsigned int)v26;
    }
    v16 = v113;
    v24 = v109;
  }
  v120[0] = v117;
  v102 = 0;
  v27 = *(_DWORD *)(v16 + 2736);
  if ( (v27 >= 0x2000 || *(_BYTE *)(v16 + 3036)) && *(_DWORD *)(v16 + 2280) >= 0x5007u && v24 )
  {
    v102 = 1;
    v28 = v117;
    if ( v117 )
    {
      PrivateDriverDataSize = v24->PrivateDriverDataSize;
      v30 = v110;
      v110->PrivateDriverDataSize = PrivateDriverDataSize;
      v30->pPrivateDriverData = (char *)v28 + 16;
    }
    *((_QWORD *)a12 + 100) = v117;
    goto LABEL_30;
  }
  if ( v27 < 0x2000 && !*(_BYTE *)(v16 + 3036) )
  {
LABEL_30:
    v31 = v107;
    goto LABEL_31;
  }
  v31 = v107;
  if ( v107 )
  {
    LODWORD(v26) = -1073741811;
    goto LABEL_176;
  }
LABEL_31:
  v32 = v31 + 1;
  LODWORD(v113) = v31 + 1;
  v33 = v106;
  v34 = *((_DWORD *)*v106 + 96);
  v35 = 0;
  if ( v31 )
  {
    while ( 1 )
    {
      v36 = *((_DWORD *)v33[++v35] + 96);
      if ( (v36 & v34) != 0 )
        break;
      v34 |= v36;
      v33 = v106;
      if ( v35 >= v31 )
        goto LABEL_34;
    }
    LODWORD(v26) = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8142;
    v46 = L"0x%I64x failed, can't broadcast flip to multiple context on the same physical adapter returning 0x%I64x";
    goto LABEL_52;
  }
LABEL_34:
  *((_DWORD *)a12 + 34) = v34;
  v37 = v128;
  if ( v128 )
  {
    v38 = *((_QWORD *)this + 2);
    v39 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL);
    if ( (*(_DWORD *)(v39 + 444) & 0x10) != 0 && v39 == *(_QWORD *)(v38 + 1896) )
    {
      v40 = v128->MoveRectCount + v128->DirtyRectCount;
      if ( v40 <= 0x14 )
      {
        v41 = v110;
        v110->SubRectCnt = v40;
        v41->pDstSubRects = (const RECT *)v139;
        v42 = (RECT *)v139;
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
      if ( v124 )
        v70 = *v124;
      else
        v70 = 0LL;
      LODWORD(v26) = DXGCONTEXT::SubmitPresentWithDmaBuffer(this, v109, v70, v17, v18, v110, a11, a12, v125);
      v54 = 0LL;
      v101 = 0LL;
      goto LABEL_177;
    }
    if ( !v102 )
    {
      LODWORD(v26) = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 8589;
      v46 = L"0x%I64x Broadcast present only supported on the Software Flip Queue, returning 0x%I64x";
LABEL_52:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v46, (__int64)this, -1073741811LL, 0LL, 0LL, 0LL);
      goto LABEL_176;
    }
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)this + 2));
    if ( !BroadcastPresentSyncObject )
    {
      LODWORD(v26) = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 8430;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create present sync object. Returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_176;
    }
    v122 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 1944LL));
    *(_DWORD *)a12 |= 0xC00u;
    v47 = 0;
    LODWORD(v26) = v103;
    v48 = v112;
    v49 = v111;
    while ( 1 )
    {
      v104 = v47;
      v50 = v113;
      if ( v47 >= (unsigned int)v113 )
        break;
      if ( v47 )
      {
        LODWORD(v51) = 0;
        v118 = 0;
        v119 = 0;
        if ( v114 )
        {
          v52 = &v109->BroadcastSrcAllocation[v47 - 1];
          if ( v52 + 1 < v52 || (unsigned __int64)(v52 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v51 = *v52;
          v118 = v51;
          v53 = DXGPROCESS::GetAllocationSafe(v116, (DXGALLOCATIONREFERENCE *)&v129, v51);
          DXGALLOCATIONREFERENCE::MoveAssign(&v112, v53);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v129);
          v48 = v112;
          if ( !v112 )
          {
            LODWORD(v26) = -1073741811;
            WdLogSingleEntry2(2LL, (unsigned int)v51, -1073741811LL);
            WdLogGlobalForLineNumber = 8455;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
              v51,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v54 = v101;
            goto LABEL_177;
          }
          v55 = v106;
          v56 = v106[v104];
          v134 = *((_QWORD *)v56 + 2);
          v135 = v112;
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v112 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v134 + 16) + 16LL) )
          {
            _mm_lfence();
            LODWORD(v26) = -1073741811;
            v57 = v112;
            WdLogSingleEntry3(2LL, *((_QWORD *)v56 + 2), v112, -1073741811LL);
            WdLogGlobalForLineNumber = 8464;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              *((_QWORD *)v106[v104] + 2),
              (__int64)v57,
              -1073741811LL,
              0LL,
              0LL);
            v54 = v101;
            goto LABEL_177;
          }
          v47 = v104;
        }
        else
        {
          v55 = v106;
        }
        if ( v108 )
        {
          v58 = &v109->BroadcastDstAllocation[v47 - 1];
          if ( v58 + 1 < v58 || (unsigned __int64)(v58 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v119 = *v58;
          v59 = DXGPROCESS::GetAllocationSafe(v116, (DXGALLOCATIONREFERENCE *)v130, v119);
          DXGALLOCATIONREFERENCE::MoveAssign(&v111, v59);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v130);
          v49 = v111;
          if ( !v111 )
          {
            LODWORD(v26) = -1073741811;
            WdLogSingleEntry2(2LL, (unsigned int)v51, -1073741811LL);
            WdLogGlobalForLineNumber = 8477;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
              (unsigned int)v51,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v54 = v101;
            goto LABEL_177;
          }
          v60 = v55[v104];
          v136 = *((_QWORD *)v60 + 2);
          v137 = v111;
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v111 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v136 + 16) + 16LL) )
          {
            _mm_lfence();
            LODWORD(v26) = -1073741811;
            v61 = v111;
            WdLogSingleEntry3(2LL, *((_QWORD *)v60 + 2), v111, -1073741811LL);
            WdLogGlobalForLineNumber = 8486;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              *((_QWORD *)v106[v104] + 2),
              (__int64)v61,
              -1073741811LL,
              0LL,
              0LL);
            v54 = v101;
            goto LABEL_177;
          }
        }
        v47 = v104;
      }
      v62 = v47;
      v63 = v106[v47];
      if ( v124 )
        v64 = v124[v62];
      else
        v64 = 0LL;
      LODWORD(v26) = DXGCONTEXT::SubmitPresentWithDmaBuffer(v63, v109, v64, v48, v49, v110, v101, a12, v125);
      if ( (int)v26 < 0 )
      {
        LODWORD(v26) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 8515;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to submit DMA present buffer. Returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_176;
      }
      v101 = 0LL;
      v121 = 0LL;
      *(_DWORD *)a12 &= ~0x800u;
      v47 = v104 + 1;
    }
    v65 = v106;
    if ( (*((_DWORD *)*v106 + 98) & 0x10) != 0 )
      goto LABEL_176;
    Pool2 = 0LL;
    P = 0LL;
    v133 = 0;
    v67 = v107;
    if ( v107 <= 8 )
    {
      Pool2 = (struct _VIDSCH_CONTEXT **)v132;
      P = v132;
      if ( !v107 )
      {
LABEL_88:
        v133 = v107;
LABEL_89:
        if ( Pool2 )
        {
          v68 = 1;
          v69 = v106 + 1;
          do
          {
            if ( (*((_DWORD *)*v69 + 98) & 0x10) != 0 )
            {
              WdLogSingleEntry1(2LL, *v69);
              WdLogGlobalForLineNumber = 8555;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"DXGCONTEXT 0x%p broadcast present mixes hardware scheduled and non-hardware scheduled contexts.",
                (__int64)v65[v68],
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v26) = -1073741811;
              goto LABEL_96;
            }
            Pool2[v68++ - 1] = (struct _VIDSCH_CONTEXT *)*((_QWORD *)*v69++ + 32);
          }
          while ( v68 < v50 );
          LODWORD(v26) = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
                           *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                           0,
                           0LL,
                           v67,
                           Pool2,
                           1u,
                           &BroadcastPresentSyncObject,
                           0,
                           &v122,
                           0);
          if ( (int)v26 >= 0 )
            LODWORD(v26) = VIDSCH_EXPORT::VidSchWaitForSingleSyncObject(
                             *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                             *((struct _VIDSCH_CONTEXT **)this + 32),
                             BroadcastPresentSyncObject,
                             v122);
LABEL_96:
          if ( P != v132 && P )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
          LODWORD(v26) = -1073741801;
        }
        goto LABEL_176;
      }
      memset(v132, 0, 8LL * v107);
      Pool2 = (struct _VIDSCH_CONTEXT **)P;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v107 < 8 )
        goto LABEL_89;
      Pool2 = (struct _VIDSCH_CONTEXT **)ExAllocatePool2(256LL, 8LL * v107, 1265072196LL);
      P = Pool2;
    }
    v50 = v107 + 1;
    goto LABEL_88;
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 0x2000;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pFlipToDxgAllocation", 0x2000LL, 0LL, 0LL, 0LL, 0LL);
  }
  v71 = v110;
  if ( v110->pDmaBuffer )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8193;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pPresentDdiArg->pDmaBuffer == NULL",
      8193LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v71 = v110;
  }
  if ( !v31 || !v102 )
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
      goto LABEL_176;
    v105 = 0;
    v115 = 0LL;
    v77 = *(_QWORD **)(*((_QWORD *)this + 2) + 16LL);
    v78 = v77[2];
    if ( *(int *)(v78 + 2736) >= 0x2000 || *(_BYTE *)(v78 + 3036) )
    {
      v79 = 0xFFFF;
      v105 = 0xFFFF;
      v115 = -1LL;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v77[95] + 8LL) + 192LL))(
        v77[96],
        *(_QWORD *)(*((_QWORD *)a6 + 6) + 8LL),
        &v105,
        &v115,
        0LL);
      v79 = v105;
    }
    if ( *((_BYTE *)a12 + 356) )
      *(_WORD *)((char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8) + 632) = v79;
    else
      *((_DWORD *)a12 + 139) ^= (*((_DWORD *)a12 + 139) ^ (v79 << 17)) & 0x3E0000;
    if ( *((_BYTE *)a12 + 356) )
      v80 = (char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8) + 640;
    else
      v80 = (char *)a12 + 520;
    *(_QWORD *)v80 = v115;
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
    v88 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL);
    v89 = *((unsigned int *)a12 + 29);
    v108 = v89;
    if ( (unsigned int)v89 >= *(_DWORD *)(v88 + 96) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5851;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"VidPnSourceId < m_NumVidPnSources",
        5851LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v89 = v108;
      v81 = a6;
    }
    v90 = *(_QWORD *)(v88 + 128);
    *(_WORD *)v85 = 0;
    *((_WORD *)v85 + 1) = *(_WORD *)(4024 * v89 + v90 + 992);
    *((_WORD *)v85 + 2) = 0;
    *((_WORD *)v85 + 3) = *(_WORD *)(4024 * v89 + v90 + 996);
    v91 = *(_QWORD *)v85;
    *((_QWORD *)v85 + 1) = *(_QWORD *)v85;
    *((_QWORD *)v85 + 2) = v91;
    if ( a13 == D3DDDIFMT_A16B16G16R16F || (v92 = 0, a13 == D3DDDIFMT_A32B32G32R32F) )
      v92 = 1;
    *((_DWORD *)v85 + 6) = v92;
    *((_DWORD *)v85 + 7) &= 0xFFFFFFE7;
    *((_DWORD *)v85 + 8) = 0;
    memset(&v138[9], 0, 24);
    v93 = *((_QWORD *)v81 + 4);
    if ( *((_BYTE *)this + 430) )
    {
      memset(v138, 0, sizeof(v138));
      v138[4] = v93;
      v94 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL);
      v95 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v94 + 224);
      LOBYTE(v94) = *((_BYTE *)this + 431) != 0;
      v138[5] = v95(*((_QWORD *)v17 + 3), v94, *((unsigned int *)this + 97));
      v138[6] = v115;
      LOWORD(v138[7]) = v105;
    }
    else
    {
      memset(v138, 0, 0x48uLL);
      v138[3] = v93;
      LODWORD(v138[4]) = v138[4] & 0xFFFFFFC0 | (2 * (v105 & 0x1F));
      v138[5] = v115;
    }
    v96 = v110;
    v110->pAllocationList = (DXGK_ALLOCATIONLIST *)v138;
    v97 = 0LL;
    if ( (v96->Flags.Value & 1) != 0
      || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3057LL) )
    {
      v97 = (void *)*((_QWORD *)this + 23);
    }
    LODWORD(v26) = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v97, v96);
    if ( (int)v26 >= 0 )
    {
      v98 = 0;
      if ( !(_DWORD)v113 )
        goto LABEL_176;
      v99 = v106;
      while ( 1 )
      {
        if ( *((struct _KTHREAD **)*v99 + 56) != KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 8375;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
            8375LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
          DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(*v99, 0LL, 0, 0, a12, 0LL, 0);
        LODWORD(v26) = DXGCONTEXT::SubmitCommandToImplicitQueue(*v99, a12);
        if ( (int)v26 < 0 )
          break;
        *(_DWORD *)a12 &= ~0x800u;
        ++v98;
        ++v99;
        if ( v98 >= (unsigned int)v113 )
          goto LABEL_176;
      }
    }
    if ( *((_BYTE *)a12 + 356) )
      v100 = (struct VIDMM_ALLOC **)((char *)a12
                                   + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8)
                                   + 648);
    else
      v100 = (struct VIDMM_ALLOC **)((char *)a12 + 504);
    VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
      *((_DWORD *)a12 + 34),
      *v100);
    goto LABEL_176;
  }
  v72 = DXGCONTEXT::SubmitPresentLda(this, v109, v31, v106, a6, v71, a12, a13);
  if ( a11 )
    VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), a11);
  CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)v120);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v111);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v112);
  return v72;
}
