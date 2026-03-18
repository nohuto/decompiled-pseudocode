/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402C3A40
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402C0D9C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x14002DEC0 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ??$?0$00X@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x140035E60 (--$-0$00X@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor.c)
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z @ 0x14003B768 (-VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140056FA4 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1401EB208 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x140338150 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@IPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGSYNCOBJECTLOCK@@PEAVDXGSYNCOBJECTMUTEX@@3@Z @ 0x1403388C0 (-AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@I.c)
 *     ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x140342428 (--1-$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAAPEAVDXGSYNCOBJECTMUTEX@@I@Z @ 0x14035B294 (-AllocateElements@-$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAAPEAVDXGSYNCOBJECTMUTEX@@I@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x14035E118 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x140399084 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int8 *a7,
        struct _DXGKARG_PRESENT *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9,
        struct DXGCONTEXT **a10)
{
  int v11; // r15d
  int v12; // r14d
  __int64 v13; // rcx
  __int64 ContextCount; // r13
  __int64 v15; // r14
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r12d
  struct DXGCONTEXT **v19; // rcx
  int v20; // r8d
  bool v21; // cc
  __int64 PresentPlaneCount; // r13
  int v23; // r10d
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // r15
  UINT v25; // edi
  unsigned int v26; // r8d
  D3DKMT_MULTIPLANE_OVERLAY3 **v27; // rdx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rax
  unsigned int DirtyRectCount; // ecx
  int v30; // esi
  UINT *v31; // rax
  int v32; // r15d
  UINT *v33; // rsi
  UINT *v34; // r14
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v35; // rdi
  int v36; // ecx
  _QWORD *v37; // rdi
  __int64 v38; // rsi
  bool v39; // zf
  struct _DXGKARG_PRESENT *v41; // rdi
  DXGCONTEXT *v42; // r12
  unsigned __int8 v43; // r14
  int v44; // r11d
  unsigned int *v45; // r15
  unsigned int v46; // r10d
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v47; // rsi
  int v48; // r8d
  UINT v49; // edx
  D3DKMT_MULTIPLANE_OVERLAY3 *v50; // rax
  __int64 LayerIndex; // rcx
  int v52; // eax
  unsigned int v53; // edx
  __int64 v54; // r8
  unsigned int v55; // r9d
  int v56; // r9d
  UINT v57; // eax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v58; // r14
  __int64 v59; // rcx
  struct _VIDSCH_LAYER_ATTRIBUTE *v60; // rsi
  unsigned int v61; // edi
  unsigned int v62; // eax
  unsigned int v63; // eax
  __int64 v64; // rcx
  char *v65; // rsi
  int v66; // eax
  struct CRefCountedBuffer *v67; // rcx
  struct _DXGKARG_PRESENT *v68; // rdx
  UINT v69; // r15d
  struct DXGCONTEXT **v70; // r9
  char *v71; // rdx
  char *v72; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v73; // r8
  int v74; // eax
  __int64 v75; // rax
  _QWORD *v76; // rcx
  __int64 v77; // rax
  int v78; // r8d
  int v79; // eax
  char *v80; // rdx
  __int64 v81; // rcx
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v82; // r14
  __int64 v83; // rsi
  DXGCONTEXT *v84; // rcx
  unsigned __int64 v85; // rdx
  int v86; // ecx
  unsigned int v87; // ecx
  unsigned __int64 v88; // rax
  unsigned int v89; // esi
  unsigned int v90; // r14d
  D3DKMT_MULTIPLANE_OVERLAY3 *v91; // rdi
  struct _DXGKARG_PRESENT *v92; // rsi
  UINT v93; // ecx
  __int64 v94; // rax
  __int128 *v95; // r13
  UINT v96; // edi
  __int64 v97; // rsi
  struct DXGCONTEXT **v98; // r15
  char *v99; // rax
  __int16 v100; // dx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 (__fastcall *v104)(_QWORD, __int64, __int64); // rax
  int v105; // r15d
  __int64 v106; // rsi
  __int64 v107; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v110; // r14
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v112; // rdi
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *v114; // rax
  struct _KTHREAD **v115; // r13
  KIRQL CurrentIrql; // al
  __int64 v117; // r12
  struct DXGTHREAD *v118; // r14
  __int64 v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  KIRQL v124; // al
  _QWORD *v125; // rax
  struct _DXGKARG_PRESENT *v126; // rdx
  unsigned int *v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // r8
  struct DXGGLOBAL *Global; // rax
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v131; // rsi
  __int64 v132; // rdx
  struct DXGSYNCOBJECTMUTEX *Elements; // rdi
  struct DXGSYNCOBJECTMUTEX *v134; // rax
  int v135; // eax
  UINT v136; // edi
  DXGCONTEXT **v137; // rsi
  DXGCONTEXT *v138; // rdx
  __int64 v139; // rax
  int v140; // eax
  unsigned int v141; // r15d
  unsigned int i; // edi
  struct VIDMM_ALLOC **v143; // r9
  struct VIDMM_ALLOC *v144; // r9
  CAutoRefCountedBuffer *v145; // rbx
  __int64 v146; // rdi
  PLOOKASIDE_LIST_EX *v147; // r8
  UINT v149; // [rsp+54h] [rbp-ACh]
  unsigned int v151; // [rsp+5Ch] [rbp-A4h]
  unsigned int v152; // [rsp+60h] [rbp-A0h]
  int v153; // [rsp+60h] [rbp-A0h]
  unsigned int v154; // [rsp+64h] [rbp-9Ch]
  int v155; // [rsp+68h] [rbp-98h] BYREF
  struct _DXGKARG_PRESENT *v156; // [rsp+70h] [rbp-90h] BYREF
  char v157; // [rsp+78h] [rbp-88h]
  int v158; // [rsp+80h] [rbp-80h]
  UINT v159; // [rsp+84h] [rbp-7Ch]
  int v160; // [rsp+88h] [rbp-78h]
  unsigned int *v161; // [rsp+90h] [rbp-70h]
  struct DXGTHREAD *DxgThread; // [rsp+98h] [rbp-68h] BYREF
  __int64 v163; // [rsp+A0h] [rbp-60h]
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v164; // [rsp+A8h] [rbp-58h]
  __int64 v165; // [rsp+B0h] [rbp-50h] BYREF
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v166; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v167; // [rsp+C0h] [rbp-40h]
  PVOID Entry; // [rsp+C8h] [rbp-38h]
  struct DXGCONTEXT **v169; // [rsp+D0h] [rbp-30h]
  DXGCONTEXT *v170; // [rsp+D8h] [rbp-28h]
  struct CRefCountedBuffer *v171; // [rsp+E0h] [rbp-20h] BYREF
  int v172; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v173; // [rsp+F0h] [rbp-10h]
  char v174; // [rsp+F8h] [rbp-8h]
  __int128 v175; // [rsp+100h] [rbp+0h] BYREF
  __int128 v176; // [rsp+110h] [rbp+10h]
  __int128 v177; // [rsp+120h] [rbp+20h]
  __int128 v178; // [rsp+130h] [rbp+30h]
  __int128 v179; // [rsp+140h] [rbp+40h]
  __int128 v180; // [rsp+150h] [rbp+50h]
  PVOID P; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v182[128]; // [rsp+168h] [rbp+68h] BYREF
  int v183; // [rsp+1E8h] [rbp+E8h]
  _QWORD v184[9]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v185; // [rsp+238h] [rbp+138h]
  _QWORD v186[9]; // [rsp+240h] [rbp+140h] BYREF
  int v187; // [rsp+288h] [rbp+188h]
  char v188[8]; // [rsp+290h] [rbp+190h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+298h] [rbp+198h] BYREF
  _DWORD v190[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v191; // [rsp+2D8h] [rbp+1D8h]
  _BYTE v192[8]; // [rsp+2E0h] [rbp+1E0h]
  _QWORD v193[37]; // [rsp+2E8h] [rbp+1E8h]
  _QWORD v194[10]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v195; // [rsp+460h] [rbp+360h] BYREF

  v156 = a8;
  v11 = a4;
  v12 = a3;
  DxgThread = a6;
  v166 = a2;
  v170 = this;
  v167 = a10;
  if ( !a3 && !a4 && !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1637;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"cEnablingLayers || cUpdatingLayers || cDisablingLayers",
      1637LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)a5 + v11 + v12 > v166->PresentPlaneCount )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1640;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(static_cast<UINT>(cEnablingLayers)+ static_cast<UINT>(cUpdatingLayers)+ static_cast<UINT>(cDisablingLayers)) <= p"
       "Args->PresentPlaneCount",
      1640LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1641;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1641LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ContextCount = v166->ContextCount;
  v149 = ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    LODWORD(v15) = -1073741811;
    WdLogSingleEntry4(2LL, this, (unsigned int)ContextCount, 64LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1653;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x trying to broadcast to %I64d when limit is %I64d, returning 0x%I64x",
      (__int64)this,
      ContextCount,
      64LL,
      -1073741811LL,
      0LL);
    return (unsigned int)v15;
  }
  v16 = 1;
  v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v152 = *(_DWORD *)(v17 + 2944);
  v18 = *((_DWORD *)*a10 + 96);
  if ( (unsigned int)ContextCount > 1 )
  {
    v19 = v167 + 1;
    do
    {
      v20 = *((_DWORD *)*v19 + 96);
      if ( (v20 & v18) != 0 )
      {
        LODWORD(v15) = -1073741811;
        WdLogSingleEntry2(2LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 1674;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"0x%I64x failed, can't broadcast flip to multiple context on the same physical adapter returning 0x%I64x",
          (__int64)this,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v15;
      }
      v18 |= v20;
      ++v16;
      ++v19;
    }
    while ( v16 < (unsigned int)ContextCount );
  }
  v21 = *(_DWORD *)(v17 + 3004) < 2500;
  Entry = 0LL;
  if ( !v21 )
  {
    PresentPlaneCount = v166->PresentPlaneCount;
    v23 = 0;
    ppPresentPlanes = v166->ppPresentPlanes;
    v25 = 0;
    Entry = 0LL;
    v26 = 0;
    if ( (_DWORD)PresentPlaneCount )
    {
      v27 = ppPresentPlanes;
      do
      {
        pPlaneAttributes = (*v27)->pPlaneAttributes;
        DirtyRectCount = pPlaneAttributes->DirtyRectCount;
        if ( DirtyRectCount > 0xFFF )
        {
          WdLogSingleEntry1(3LL, pPlaneAttributes->DirtyRectCount);
          WdLogGlobalForLineNumber = 1408;
          v32 = -1073741811;
          goto LABEL_43;
        }
        if ( ((*v27)->InputFlags.Value & 1) != 0 && DirtyRectCount )
        {
          v23 += DirtyRectCount;
          ++v25;
        }
        ++v26;
        ++v27;
      }
      while ( v26 < (unsigned int)PresentPlaneCount );
      if ( v23 && v25 )
      {
        v30 = 16 * (v25 + v23) + 8;
        v31 = (UINT *)operator new[](16 * (v25 + v23) + 24, 0x4B677844u, 64LL);
        Entry = v31;
        if ( !v31 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1450;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate memory for present dirty rects data",
            1450LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v32 = -1073741801;
LABEL_43:
          WdLogSingleEntry1(2LL, v32);
          WdLogGlobalForLineNumber = 1690;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to read dirty rects data. Returning 0x%I64x",
            v32,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)v32;
        }
        v31[2] = v30;
        v33 = v31 + 6;
        *(_QWORD *)v31 = 0LL;
        v34 = &v31[4 * v25 + 6];
        v31[3] = 1;
        v31[4] = v25;
        do
        {
          v35 = (*ppPresentPlanes)->pPlaneAttributes;
          if ( ((*ppPresentPlanes)->InputFlags.Value & 1) != 0 && v35->DirtyRectCount )
          {
            *v33 = (*ppPresentPlanes)->LayerIndex;
            *((_QWORD *)v33 + 1) = v34;
            v33[1] = v35->DirtyRectCount;
            memmove(v34, v35->pDirtyRects, 16LL * v35->DirtyRectCount);
            v34 += 4 * v35->DirtyRectCount;
            v33 += 4;
          }
          ++ppPresentPlanes;
          --PresentPlaneCount;
        }
        while ( PresentPlaneCount );
        LOBYTE(v12) = a3;
      }
    }
    LODWORD(ContextCount) = v149;
    LOBYTE(v11) = a4;
  }
  *((_DWORD *)a9 + 35) = ContextCount;
  *((_DWORD *)a9 + 34) = v18;
  v36 = 2048;
  v37 = v194;
  if ( (unsigned int)ContextCount > 1 )
    v36 = 3072;
  v38 = 10LL;
  *(_DWORD *)a9 = *(_DWORD *)a9 & 0xFFFFFBFF | v36;
  do
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v37++);
    --v38;
  }
  while ( v38 );
  v39 = *((_DWORD *)a9 + 30) == 5;
  *((_QWORD *)a9 + 4) = Entry;
  if ( !v39 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1717;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"FlipOnVSyncSwFlipQueue == pVidSchSubmitData->FlipMode",
      1717LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v41 = v156;
  if ( v156->pDmaBuffer )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1722;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pPresentDdiArg->pDmaBuffer == NULL",
      1722LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v42 = v170;
  v43 = v11 + v12;
  v44 = (unsigned __int8)(v43 + a5);
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v170 + 2) + 16LL) + 16LL) + 3049LL) )
    v44 = v43;
  v160 = v44;
  if ( (unsigned __int8)v44 > 0xAu )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1740;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"cLayersInSchedulerArray <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      1740LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LOBYTE(v44) = v160;
  }
  v45 = (unsigned int *)((char *)a9 + 600);
  v46 = 0;
  v151 = 0;
  if ( !*((_BYTE *)a9 + 356) )
    v45 = (unsigned int *)((char *)a9 + 496);
  v47 = v166;
  v48 = 0;
  v161 = v45;
  v49 = v166->PresentPlaneCount;
  if ( v49 )
  {
    while ( 1 )
    {
      v50 = v47->ppPresentPlanes[v48];
      LayerIndex = v50->LayerIndex;
      if ( (v50->InputFlags.Value & 1) != 0 )
        break;
      if ( a7[LayerIndex] )
      {
        v52 = (*v45 | (1024 << LayerIndex)) & 0xFFC00;
        v53 = *v45 & 0xFFF003FF;
        goto LABEL_57;
      }
LABEL_58:
      v49 = v47->PresentPlaneCount;
      if ( ++v48 >= v49 )
        goto LABEL_59;
    }
    v52 = ((unsigned __int16)*v45 | (unsigned __int16)(1 << LayerIndex)) & 0x3FF;
    v53 = *v45 & 0xFFFFFC00;
LABEL_57:
    *v45 = v53 ^ v52;
    goto LABEL_58;
  }
LABEL_59:
  v54 = *v45;
  v55 = *v45;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 16LL) + 3049LL) )
    v55 = v54 | (v55 >> 10);
  v56 = v55 & 0x3FF;
  v57 = 0;
  v154 = v56;
  v159 = 0;
  if ( !v49 )
  {
LABEL_138:
    P = 0LL;
    v183 = 0;
    v90 = v152;
    v175 = 0LL;
    v176 = 0LL;
    v177 = 0LL;
    v178 = 0LL;
    v179 = 0LL;
    v180 = 0LL;
    if ( v152 >= 2 )
    {
      v95 = &v175;
      LODWORD(v175) = v47->VidPnSourceId;
      v101 = (__int64)v41;
      DWORD1(v175) = v46;
      *((_QWORD *)&v175 + 1) = v190;
    }
    else
    {
      _mm_lfence();
      v91 = *v47->ppPresentPlanes;
      if ( (v91->InputFlags.Value & 1) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2021;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pPlane->InputFlags.Enabled",
          2021LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v92 = v156;
      v156->Flags.Value &= ~0x1000u;
      v93 = v91->pPlaneAttributes->DirtyRectCount;
      v92->SubRectCnt = v93;
      if ( v93 )
        v92->pDstSubRects = v91->pPlaneAttributes->pDirtyRects;
      if ( (unsigned int)ContextCount > 1 )
      {
        v94 = PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&P, (unsigned int)ContextCount);
        v95 = (__int128 *)v94;
        if ( v94 )
        {
          v96 = 0;
          v97 = v94 + 16;
          v98 = v167;
          while ( 1 )
          {
            v15 = *((_QWORD *)DxgThread + v90 * v96);
            if ( ((*(_DWORD *)(v15 + 72) >> 12) & 0x3F) != *((_DWORD *)*v98 + 97) )
              break;
            *(_QWORD *)(v97 - 16) = *(_QWORD *)(v15 + 32);
            *(_QWORD *)(v97 - 8) = VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
                                     *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 760LL),
                                     *(const struct VIDMM_MULTI_ALLOC **)(v15 + 24),
                                     *((_BYTE *)v42 + 431) != 0,
                                     *((_DWORD *)*v98 + 97));
            if ( *((_BYTE *)a9 + 356) )
              v99 = (char *)a9
                  + 64 * (unsigned __int64)(v96 * *((_DWORD *)a9 + 151))
                  + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                  + 640;
            else
              v99 = (char *)a9 + 520;
            *(_QWORD *)v97 = *(_QWORD *)v99;
            if ( *((_BYTE *)a9 + 356) )
              v100 = *(_WORD *)((char *)a9
                              + 64 * (unsigned __int64)(v96 * *((_DWORD *)a9 + 151))
                              + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                              + 632);
            else
              v100 = (*((_DWORD *)a9 + 139) >> 17) & 0x1F;
            ++v96;
            v90 = v152;
            ++v98;
            *(_WORD *)(v97 + 8) = v100;
            v97 += 32LL;
            if ( v96 >= v149 )
            {
              v101 = (__int64)v156;
              v156->NumSrcAllocations = v149;
              goto LABEL_168;
            }
          }
          WdLogSingleEntry1(2LL, v15);
          v89 = 0;
          WdLogGlobalForLineNumber = 2048;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v15) = -1073741811;
          v163 = -1073741811LL;
          if ( P != v182 && P )
            ExFreePoolWithTag(P, 0);
          LODWORD(ContextCount) = v149;
          P = 0LL;
          v183 = 0;
          goto LABEL_249;
        }
        LODWORD(v15) = -1073741801;
        v163 = -1073741801LL;
LABEL_146:
        if ( P != v182 && P )
          ExFreePoolWithTag(P, 0);
        LODWORD(ContextCount) = v149;
        v89 = 0;
        P = 0LL;
        v183 = 0;
        goto LABEL_249;
      }
      if ( *((_BYTE *)v42 + 430) )
      {
        v39 = *((_BYTE *)v42 + 431) == 0;
        v102 = *((unsigned int *)v42 + 97);
        *(_QWORD *)&v177 = v191;
        v103 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 760LL) + 8LL);
        v104 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v103 + 224);
        LOBYTE(v103) = !v39;
        *((_QWORD *)&v177 + 1) = v104(*(_QWORD *)(*(_QWORD *)DxgThread + 24LL), v103, v102);
        v95 = &v175;
        v101 = (__int64)v92;
        *(_QWORD *)&v178 = v193[0];
        WORD4(v178) = v192[0] & 0x1F;
      }
      else
      {
        v95 = &v175;
        *((_QWORD *)&v176 + 1) = v191;
        *((_QWORD *)&v175 + 1) = 0LL;
        *(_QWORD *)&v176 = 0LL;
        v178 = 0uLL;
        *(_QWORD *)&v177 = 2 * (v192[0] & 0x1Fu);
        v101 = (__int64)v92;
        *((_QWORD *)&v177 + 1) = v193[0];
        *(_QWORD *)&v179 = 0LL;
      }
    }
LABEL_168:
    v105 = 0;
    v161 = 0LL;
    *(_QWORD *)(v101 + 32) = v95;
    v106 = *(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL);
    if ( !*(_BYTE *)(*(_QWORD *)(v106 + 16) + 3057LL) )
      v161 = (unsigned int *)*((_QWORD *)v42 + 23);
    v172 = -1;
    v173 = 0LL;
    if ( (qword_14015E4B0 & 2) != 0 )
    {
      v174 = 1;
      v172 = 5031;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v101, (__int64)&EventProfilerEnter, v54, 5031);
    }
    else
    {
      v174 = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v172, 5031);
    CurrentProcess = PsGetCurrentProcess(v107);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v110 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
    {
      Current = DXGTHREAD::GetCurrent();
      if ( Current )
      {
        v112 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
        if ( v112 )
        {
LABEL_182:
          v153 = 0;
          v115 = (struct _KTHREAD **)((char *)v112 + 152);
          if ( !v112 )
            v115 = 0LL;
          if ( v115 && v115[1] == KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1512;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
              1512LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( v112 )
          {
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v115);
            v153 = 2;
          }
          DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v106 + 16), 1);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v106 + 16) + 4804LL));
          CurrentIrql = KeGetCurrentIrql();
          v117 = CurrentIrql;
          v118 = 0LL;
          if ( CurrentIrql < 2u )
          {
            DxgThread = 0LL;
            if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0 )
            {
              v118 = DxgThread;
              if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v118 = DxgThread) != 0LL) )
                v105 = *((_DWORD *)v118 + 12);
            }
          }
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v188,
            *(struct DXGADAPTER **)(v106 + 16));
          v119 = (*(int (__fastcall **)(unsigned int *, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v106 + 16) + 744LL))(
                   v161,
                   v156);
          if ( v188[0] )
            KeUnstackDetachProcess(&ApcState);
          if ( (_BYTE)v117 != KeGetCurrentIrql() )
          {
            v124 = KeGetCurrentIrql();
            WdLogSingleEntry5(0LL, 275LL, 16LL, v106, v117, v124);
            WdLogGlobalForLineNumber = 3146;
          }
          if ( v118 )
          {
            v121 = *((int *)v118 + 12);
            if ( (_DWORD)v121 != v105 )
            {
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v118 + 12), v105, 0LL);
              WdLogGlobalForLineNumber = 73;
            }
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v106 + 16) + 4804LL));
          v125 = (_QWORD *)WdLogNewEntry5_WdTrace(v121, v120, v122, v123);
          v126 = v156;
          v127 = v161;
          v125[3] = v119;
          v125[4] = v127;
          v125[5] = v126->SubRectCnt;
          v125[6] = v126->pDmaBuffer;
          v125[7] = v126->DmaSize;
          WdLogGlobalForLineNumber = 3153;
          if ( (_DWORD)v119 )
          {
            if ( (int)v119 <= -1073741670 )
            {
              if ( (_DWORD)v119 == -1073741670
                || (_DWORD)v119 == -1073741816
                || (_DWORD)v119 == -1073741801
                || (_DWORD)v119 == -1073741795
                || (_DWORD)v119 == -1073741674 )
              {
                goto LABEL_213;
              }
LABEL_212:
              WdLogSingleEntry1(2LL, v119);
              WdLogGlobalForLineNumber = 3155;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Driver returned an invalid NTSTATUS code: 0x%I64x",
                v119,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_213;
            }
            if ( (_DWORD)v119 != -1071775743 && (_DWORD)v119 != -1071775736 && (_DWORD)v119 != -1071775232 )
              goto LABEL_212;
          }
LABEL_213:
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v106 + 16));
          if ( v153 == 2 )
          {
            v115[1] = 0LL;
            ExReleasePushLockExclusiveEx(v115, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v172);
          if ( v174 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v128, (__int64)&EventProfilerExit, v129, v172);
          v15 = (unsigned int)v119;
          if ( (int)v119 < 0 )
          {
            v42 = v170;
            LODWORD(ContextCount) = v149;
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal();
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v156, Global, 0);
            v131 = v166;
            v186[0] = 0LL;
            v187 = 0;
            v184[0] = 0LL;
            v132 = v166->PresentPlaneCount;
            v185 = 0;
            Elements = (struct DXGSYNCOBJECTMUTEX *)PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::AllocateElements(v186, v132);
            v134 = (struct DXGSYNCOBJECTMUTEX *)PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::AllocateElements(
                                                  v184,
                                                  v131->PresentPlaneCount);
            if ( !Elements || !v134 )
            {
              WdLogSingleEntry1(2LL, -1073741801LL);
              WdLogGlobalForLineNumber = 2154;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed to allocate FlipToSyncObjectMutexArray or FlipAwaySyncObjectMutexArray: Status = 0x%I64x",
                -1073741801LL,
                0LL,
                0LL,
                0LL,
                0LL);
              PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v184);
              PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v186);
              if ( v157 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
              if ( P != v182 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v183 = 0;
              goto LABEL_260;
            }
            v42 = v170;
            v135 = DXGCONTEXT::AcquireMultiPlaneOverlay3FlipFences(
                     v170,
                     v131,
                     v154,
                     a9,
                     (struct DXGSYNCOBJECTLOCK *)&v156,
                     Elements,
                     v134);
            v15 = (unsigned int)v135;
            v163 = (unsigned int)v135;
            if ( v135 < 0 )
            {
              PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v184);
              PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v186);
              if ( v157 )
              {
                v157 = 0;
                ExReleaseResourceLite((PERESOURCE)v156[3].pDstSubRects);
                KeLeaveCriticalRegion();
              }
              goto LABEL_146;
            }
            LODWORD(ContextCount) = v149;
            v136 = 0;
            if ( v149 )
            {
              v137 = v167;
              do
              {
                if ( *((struct _KTHREAD **)*v137 + 56) != KeGetCurrentThread() )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 2176;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
                    2176LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( (*((_DWORD *)v42 + 98) & 0x10) != 0 )
                  DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(*v137, 0LL, 0, 0, a9, 0LL, 0);
                v138 = *v137;
                v139 = *((_QWORD *)*v137 + 2);
                if ( (*((_DWORD *)*v137 + 98) & 0x10) != 0 )
                  v140 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 + 16) + 736LL) + 8LL)
                                                                                             + 440LL))(
                           *((_QWORD *)v138 + 36),
                           a9);
                else
                  v140 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 + 16) + 736LL) + 8LL)
                                                                                             + 432LL))(
                           *((_QWORD *)v138 + 32),
                           a9);
                v15 = (unsigned int)v140;
                if ( v140 < 0 )
                  break;
                *(_DWORD *)a9 &= ~0x800u;
                ++v136;
                ++v137;
              }
              while ( v136 < v149 );
            }
            PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v184);
            PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v186);
            if ( v157 )
            {
              v157 = 0;
              ExReleaseResourceLite((PERESOURCE)v156[3].pDstSubRects);
              KeLeaveCriticalRegion();
            }
          }
          if ( P != v182 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v183 = 0;
          v163 = v15;
          if ( (int)v15 < 0 )
          {
            v89 = 0;
            goto LABEL_249;
          }
          goto LABEL_260;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        v114 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v112 = DXGGLOBAL::SearchDxgThreadList(v114, CurrentThread);
        if ( v112 )
          goto LABEL_182;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2926;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to find DXGPROCESS",
          2926LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v112 = v110;
    goto LABEL_182;
  }
  while ( 1 )
  {
    v58 = v47->ppPresentPlanes[v57];
    v59 = 8LL * v46;
    v164 = v58;
    v60 = (struct _VIDSCH_LAYER_ATTRIBUTE *)v58->LayerIndex;
    v158 = (int)v60;
    v190[v59] = (_DWORD)v60;
    v190[v59 + 1] = v58->InputFlags.Value & 1;
    if ( (v58->InputFlags.Value & 1) == 0 && !a7[(_QWORD)v60] )
      goto LABEL_133;
    if ( (v56 & (1 << (char)v60)) != 0 )
    {
      v62 = (v56 & ((1 << (char)v60) - 1) & 0x55555555)
          + (((v56 & (unsigned int)((1 << (char)v60) - 1)) >> 1) & 0x55555555);
      v63 = (((v62 & 0x33333333) + ((v62 >> 2) & 0x33333333)) & 0xF0F0F0F)
          + ((((v62 & 0x33333333) + ((v62 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
      v61 = (v63 >> 8) + (v63 & 0xFF00FF) + (((v63 >> 8) + (v63 & 0xFF00FF)) >> 16);
    }
    else
    {
      v61 = -1;
    }
    if ( v61 >= (unsigned __int8)v44 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1815;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"FlipToIndex < cLayersInSchedulerArray",
        1815LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v61 >= 0xA )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1822;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"FlipToIndex < DXGK_MAX_MPO_PLANES_PER_SOURCE",
        1822LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v64 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 16LL);
    if ( *(int *)(v64 + 2736) >= 0x2000 || *(_BYTE *)(v64 + 3036) )
    {
      v65 = (char *)a9 + v61 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 600;
      v171 = 0LL;
      v66 = ReadPresentPrivateDriverData((struct DXGADAPTER *)v64, v58, &v171);
      v15 = v66;
      v163 = v66;
      if ( v66 < 0 )
      {
        WdLogSingleEntry1(2LL, v66);
        v89 = 0;
        WdLogGlobalForLineNumber = 1837;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to read private driver data. Returning 0x%I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_249;
      }
      v67 = v171;
      v58 = v164;
      if ( v171 )
      {
        v194[v159] = v171;
        if ( !v58->LayerIndex )
        {
          v68 = v156;
          v156->PrivateDriverDataSize = v58->DriverPrivateDataSize;
          v68->pPrivateDriverData = (char *)v67 + 16;
        }
        *((_QWORD *)v65 + 25) = v67;
      }
      LODWORD(v60) = v158;
    }
    if ( (v58->InputFlags.Value & 1) != 0 )
      break;
    if ( ((*v45 >> 10) & (1 << (char)v60) & 0x3FF) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1991;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pFlipOverlayData->ToDisableLayers & (1 << LayerIndex)",
        1991LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v56 = v154;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 1896LL) + 216LL) + 64LL)
                               + 40LL)
                   + 28LL) < 0x4002u )
    {
      v46 = v151;
    }
    else
    {
      v88 = 32LL * v151;
      *(_DWORD *)&v192[v88] &= 0xFFFFFFE0;
      v46 = v151 + 1;
      *(_QWORD *)&v192[v88 - 8] = 0LL;
      ++v151;
      v193[v88 / 8] = 0LL;
    }
LABEL_133:
    v47 = v166;
    v57 = v159 + 1;
    v159 = v57;
    if ( v57 >= v166->PresentPlaneCount )
    {
      v41 = v156;
      goto LABEL_138;
    }
    LOBYTE(v44) = v160;
  }
  v69 = 0;
  if ( !(_DWORD)ContextCount )
  {
    v46 = v151;
    v45 = v161;
    v56 = v154;
    goto LABEL_133;
  }
  v70 = v167;
  v169 = v167;
  while ( 1 )
  {
    ContextCount = *((_QWORD *)DxgThread + (unsigned int)v60 + v152 * v69);
    if ( !ContextCount )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1876;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDxgAlloc", 1876LL, 0LL, 0LL, 0LL, 0LL);
      v70 = v169;
    }
    if ( *((_BYTE *)a9 + 356) )
      v71 = (char *)a9
          + 64 * (unsigned __int64)(v61 + v69 * *((_DWORD *)a9 + 151))
          + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
          + 624;
    else
      v71 = (char *)a9 + 80 * v61 + 512;
    *(_QWORD *)v71 = *(_QWORD *)(*(_QWORD *)(ContextCount + 48) + 16LL);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 16LL) + 3057LL) )
    {
      if ( *((_BYTE *)a9 + 356) )
        v72 = (char *)a9
            + 64 * (unsigned __int64)(v61 + v69 * *((_DWORD *)a9 + 151))
            + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
            + 616;
      else
        v72 = (char *)a9 + 80 * v61 + 568;
      *(_QWORD *)v72 = *((_QWORD *)*v70 + 23);
    }
    v73 = *((_BYTE *)a9 + 356)
        ? (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                           + 64 * (unsigned __int64)(v61 + v69 * *((_DWORD *)a9 + 151))
                                           + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                                           + 648)
        : (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + 80 * v61 + 504);
    v74 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 760LL)
                                                                                                  + 8LL)
                                                                                      + 384LL))(
            *(_QWORD *)(*((_QWORD *)v42 + 2) + 792LL),
            *(_QWORD *)(ContextCount + 24),
            v73);
    v15 = v74;
    v163 = v74;
    if ( v74 < 0 )
      break;
    v75 = *((_QWORD *)v42 + 2);
    v155 = 0;
    v165 = 0LL;
    v76 = *(_QWORD **)(v75 + 16);
    v77 = v76[2];
    if ( *(int *)(v77 + 2736) >= 0x2000 || *(_BYTE *)(v77 + 3036) )
    {
      v78 = 0xFFFF;
      v165 = -1LL;
      v155 = 0xFFFF;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v76[95] + 8LL) + 192LL))(
        v76[96],
        *(_QWORD *)(*(_QWORD *)(ContextCount + 48) + 8LL),
        &v155,
        &v165,
        0LL);
      v78 = v155;
    }
    if ( *((_BYTE *)a9 + 356) )
    {
      *(_WORD *)((char *)a9
               + 64 * (unsigned __int64)(v61 + v69 * *((_DWORD *)a9 + 151))
               + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
               + 632) = v78;
    }
    else
    {
      v79 = *((_DWORD *)a9 + 20 * v61 + 139);
      *((_DWORD *)a9 + 20 * v61 + 139) = v79 ^ (v79 ^ (v78 << 17)) & 0x3E0000;
    }
    if ( *((_BYTE *)a9 + 356) )
      v80 = (char *)a9
          + 64 * (unsigned __int64)(v61 + v69 * *((_DWORD *)a9 + 151))
          + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
          + 640;
    else
      v80 = (char *)a9 + 80 * v61 + 520;
    *(_QWORD *)v80 = v165;
    v81 = *(_QWORD *)(ContextCount + 40);
    if ( v81 && (*(_DWORD *)(v81 + 4) & 8) != 0 )
      v54 = *(_QWORD *)(*(_QWORD *)(v81 + 56) + 184LL);
    else
      v54 = 0LL;
    if ( *((_BYTE *)a9 + 356) )
      *(_QWORD *)((char *)a9
                + 64 * (unsigned __int64)(v61 + v69 * *((_DWORD *)a9 + 151))
                + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                + 656) = v54;
    else
      *((_QWORD *)a9 + 10 * v61 + 72) = v54;
    if ( v69 )
    {
      v46 = v151;
    }
    else
    {
      v82 = v164;
      if ( *((_BYTE *)a9 + 356) )
        *(_DWORD *)((char *)a9 + v61 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 640) = v164->MaxImmediateFlipLine;
      if ( *((_BYTE *)a9 + 356) )
        v83 = v61 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 760LL;
      else
        v83 = 80LL * v61 + 528;
      v60 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + v83);
      if ( v82->pPlaneAttributes->SrcRect.right <= v82->pPlaneAttributes->SrcRect.left )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1966;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pPlane->pPlaneAttributes->SrcRect.right > pPlane->pPlaneAttributes->SrcRect.left",
          1966LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v84 = (DXGCONTEXT *)v82->pPlaneAttributes;
      if ( *((_DWORD *)v84 + 4) <= *((_DWORD *)v84 + 2) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1967;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pPlane->pPlaneAttributes->SrcRect.bottom > pPlane->pPlaneAttributes->SrcRect.top",
          1967LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(v84, v60, v82->pPlaneAttributes);
      LODWORD(v60) = v158;
      v85 = 32LL * v151;
      v46 = ++v151;
      v86 = *(_DWORD *)&v192[v85];
      *(_QWORD *)&v192[v85 - 8] = *(_QWORD *)(ContextCount + 32);
      v87 = v155 & 0x1F | v86 & 0xFFFFFFE0;
      v193[v85 / 8] = v165;
      *(_DWORD *)&v192[v85] = v87;
    }
    ++v69;
    LODWORD(ContextCount) = v149;
    v70 = ++v169;
    if ( v69 >= v149 )
    {
      v45 = v161;
      v56 = v154;
      goto LABEL_133;
    }
  }
  WdLogSingleEntry3(2LL, v42, ContextCount, v74);
  v89 = 0;
  WdLogGlobalForLineNumber = 1900;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x failed to reference allocation for FlipToAllocation %I64x, returning 0x%I64x",
    (__int64)v42,
    ContextCount,
    v15,
    0LL,
    0LL);
  LODWORD(ContextCount) = v149;
LABEL_249:
  v141 = (unsigned __int8)v160;
  if ( (_BYTE)v160 )
  {
    do
    {
      for ( i = 0; i < (unsigned int)ContextCount; ++i )
      {
        if ( *((_BYTE *)a9 + 356) )
          v143 = (struct VIDMM_ALLOC **)((char *)a9
                                       + 64 * (unsigned __int64)(v89 + i * *((_DWORD *)a9 + 151))
                                       + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                                       + 648);
        else
          v143 = (struct VIDMM_ALLOC **)((char *)a9 + 80 * v89 + 504);
        v144 = *v143;
        if ( v144 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 768LL),
            *((_DWORD *)a9 + 34),
            v144);
      }
      ++v89;
    }
    while ( v89 < v141 );
    LODWORD(v15) = v163;
  }
  WdLogSingleEntry2(2LL, v42, (int)v15);
  WdLogGlobalForLineNumber = 2234;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x failed to submit present for multi plane overlay, returning 0x%I64x",
    (__int64)v42,
    (int)v15,
    0LL,
    0LL,
    0LL);
LABEL_260:
  v145 = (CAutoRefCountedBuffer *)&v195;
  v146 = 10LL;
  do
  {
    v145 = (CAutoRefCountedBuffer *)((char *)v145 - 8);
    CAutoRefCountedBuffer::~CAutoRefCountedBuffer(v145);
    --v146;
  }
  while ( v146 );
  v147 = (PLOOKASIDE_LIST_EX *)Entry;
  if ( Entry && _InterlockedExchangeAdd((volatile signed __int32 *)Entry + 3, 0xFFFFFFFF) == 1 )
  {
    if ( *v147 )
      ExFreeToLookasideListEx(*v147, v147);
    else
      ExFreePoolWithTag(v147, 0);
  }
  return (unsigned int)v15;
}
