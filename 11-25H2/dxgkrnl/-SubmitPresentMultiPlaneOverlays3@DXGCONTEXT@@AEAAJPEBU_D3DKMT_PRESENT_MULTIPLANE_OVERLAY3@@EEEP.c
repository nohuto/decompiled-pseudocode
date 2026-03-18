/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402B61C0
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402B351C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x14002D750 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ??$?0$00X@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x140035ED0 (--$-0$00X@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor.c)
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z @ 0x14003BDA8 (-VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140057794 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x14032C7C4 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x14034A670 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@IPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGSYNCOBJECTLOCK@@PEAVDXGSYNCOBJECTMUTEX@@3@Z @ 0x14034ADF8 (-AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@I.c)
 *     ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x140351008 (--1-$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAAPEAVDXGSYNCOBJECTMUTEX@@I@Z @ 0x14036DDDC (-AllocateElements@-$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAAPEAVDXGSYNCOBJECTMUTEX@@I@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x14037A554 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1403A1AC4 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
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
  __int64 *v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // ecx
  int v31; // esi
  UINT *v32; // rax
  int v33; // r15d
  UINT *v34; // rsi
  UINT *v35; // r14
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdi
  int v37; // ecx
  _QWORD *v38; // rdi
  __int64 v39; // rsi
  bool v40; // zf
  struct _DXGKARG_PRESENT *v42; // rdi
  DXGCONTEXT *v43; // r12
  unsigned __int8 v44; // r14
  int v45; // r11d
  unsigned int *v46; // r15
  unsigned int v47; // r10d
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v48; // rsi
  int v49; // r8d
  UINT v50; // edx
  D3DKMT_MULTIPLANE_OVERLAY3 *v51; // rax
  __int64 LayerIndex; // rcx
  int v53; // eax
  unsigned int v54; // edx
  __int64 v55; // r8
  unsigned int v56; // r9d
  int v57; // r9d
  UINT v58; // eax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v59; // r14
  __int64 v60; // rcx
  struct _VIDSCH_LAYER_ATTRIBUTE *v61; // rsi
  unsigned int v62; // edi
  unsigned int v63; // eax
  unsigned int v64; // eax
  __int64 v65; // rcx
  char *v66; // rsi
  int v67; // eax
  struct CRefCountedBuffer *v68; // rcx
  struct _DXGKARG_PRESENT *v69; // rdx
  UINT v70; // r15d
  struct DXGCONTEXT **v71; // r9
  char *v72; // rdx
  char *v73; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v74; // r8
  int v75; // eax
  __int64 v76; // rax
  _QWORD *v77; // rcx
  __int64 v78; // rax
  int v79; // r8d
  int v80; // eax
  char *v81; // rdx
  __int64 v82; // rcx
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v83; // r14
  __int64 v84; // rsi
  DXGCONTEXT *v85; // rcx
  int v86; // ecx
  unsigned __int64 v87; // rdx
  unsigned int v88; // ecx
  unsigned __int64 v89; // rax
  unsigned int v90; // esi
  unsigned int v91; // r14d
  D3DKMT_MULTIPLANE_OVERLAY3 *v92; // rdi
  struct _DXGKARG_PRESENT *v93; // rsi
  UINT DirtyRectCount; // ecx
  __int64 v95; // rax
  __int128 *v96; // r13
  UINT v97; // edi
  __int64 v98; // rsi
  struct DXGCONTEXT **v99; // r15
  char *v100; // rax
  __int16 v101; // dx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rdx
  __int64 (__fastcall *v105)(_QWORD, __int64, __int64); // rax
  int v106; // r15d
  __int64 v107; // rsi
  __int64 v108; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v111; // r14
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v113; // rdi
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *v115; // rax
  struct _KTHREAD **v116; // r13
  KIRQL CurrentIrql; // al
  __int64 v118; // r12
  struct DXGTHREAD *v119; // r14
  __int64 v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  KIRQL v125; // al
  _QWORD *v126; // rax
  struct _DXGKARG_PRESENT *v127; // rdx
  unsigned int *v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // r8
  struct DXGGLOBAL *Global; // rax
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v132; // rsi
  __int64 v133; // rdx
  struct DXGSYNCOBJECTMUTEX *Elements; // rdi
  struct DXGSYNCOBJECTMUTEX *v135; // rax
  int v136; // eax
  UINT v137; // esi
  DXGCONTEXT **v138; // r15
  DXGCONTEXT *v139; // rdi
  DXGCONTEXT *v140; // rdx
  __int64 v141; // rax
  int v142; // eax
  unsigned int v143; // r15d
  unsigned int i; // edi
  struct VIDMM_ALLOC **v145; // r9
  struct VIDMM_ALLOC *v146; // r9
  CAutoRefCountedBuffer *v147; // rbx
  __int64 v148; // rdi
  PLOOKASIDE_LIST_EX *v149; // r8
  UINT v151; // [rsp+54h] [rbp-ACh]
  unsigned int v153; // [rsp+5Ch] [rbp-A4h]
  unsigned int v154; // [rsp+60h] [rbp-A0h]
  int v155; // [rsp+60h] [rbp-A0h]
  unsigned int v156; // [rsp+64h] [rbp-9Ch]
  int v157; // [rsp+68h] [rbp-98h] BYREF
  struct _DXGKARG_PRESENT *v158; // [rsp+70h] [rbp-90h] BYREF
  char v159; // [rsp+78h] [rbp-88h]
  int v160; // [rsp+80h] [rbp-80h]
  UINT v161; // [rsp+84h] [rbp-7Ch]
  int v162; // [rsp+88h] [rbp-78h]
  unsigned int *v163; // [rsp+90h] [rbp-70h]
  struct DXGTHREAD *DxgThread; // [rsp+98h] [rbp-68h] BYREF
  __int64 v165; // [rsp+A0h] [rbp-60h]
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v166; // [rsp+A8h] [rbp-58h]
  __int64 v167; // [rsp+B0h] [rbp-50h] BYREF
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v168; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v169; // [rsp+C0h] [rbp-40h]
  PVOID Entry; // [rsp+C8h] [rbp-38h]
  struct DXGCONTEXT **v171; // [rsp+D0h] [rbp-30h]
  DXGCONTEXT *v172; // [rsp+D8h] [rbp-28h]
  struct CRefCountedBuffer *v173; // [rsp+E0h] [rbp-20h] BYREF
  int v174; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v175; // [rsp+F0h] [rbp-10h]
  char v176; // [rsp+F8h] [rbp-8h]
  __int128 v177; // [rsp+100h] [rbp+0h] BYREF
  __int128 v178; // [rsp+110h] [rbp+10h]
  __int128 v179; // [rsp+120h] [rbp+20h]
  __int128 v180; // [rsp+130h] [rbp+30h]
  __int128 v181; // [rsp+140h] [rbp+40h]
  __int128 v182; // [rsp+150h] [rbp+50h]
  PVOID P; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v184[128]; // [rsp+168h] [rbp+68h] BYREF
  int v185; // [rsp+1E8h] [rbp+E8h]
  _QWORD v186[9]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v187; // [rsp+238h] [rbp+138h]
  _QWORD v188[9]; // [rsp+240h] [rbp+140h] BYREF
  int v189; // [rsp+288h] [rbp+188h]
  char v190[8]; // [rsp+290h] [rbp+190h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+298h] [rbp+198h] BYREF
  _DWORD v192[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v193; // [rsp+2D8h] [rbp+1D8h]
  _BYTE v194[8]; // [rsp+2E0h] [rbp+1E0h]
  _QWORD v195[37]; // [rsp+2E8h] [rbp+1E8h]
  _QWORD v196[10]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v197; // [rsp+460h] [rbp+360h] BYREF

  v158 = a8;
  v11 = a4;
  v12 = a3;
  DxgThread = a6;
  v168 = a2;
  v172 = this;
  v169 = a10;
  if ( !a3 && !a4 && !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1635;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"cEnablingLayers || cUpdatingLayers || cDisablingLayers",
      1635LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)a5 + v11 + v12 > v168->PresentPlaneCount )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1638;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(static_cast<UINT>(cEnablingLayers)+ static_cast<UINT>(cUpdatingLayers)+ static_cast<UINT>(cDisablingLayers)) <= p"
       "Args->PresentPlaneCount",
      1638LL,
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
    WdLogGlobalForLineNumber = 1639;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1639LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ContextCount = v168->ContextCount;
  v151 = ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    LODWORD(v15) = -1073741811;
    WdLogSingleEntry4(2LL, this, (unsigned int)ContextCount, 64LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1651;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
  v154 = *(_DWORD *)(v17 + 2944);
  v18 = *((_DWORD *)*a10 + 96);
  if ( (unsigned int)ContextCount > 1 )
  {
    v19 = v169 + 1;
    do
    {
      v20 = *((_DWORD *)*v19 + 96);
      if ( (v20 & v18) != 0 )
      {
        LODWORD(v15) = -1073741811;
        WdLogSingleEntry2(2LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 1672;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
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
    PresentPlaneCount = v168->PresentPlaneCount;
    v23 = 0;
    ppPresentPlanes = v168->ppPresentPlanes;
    v25 = 0;
    Entry = 0LL;
    v26 = 0;
    if ( (_DWORD)PresentPlaneCount )
    {
      v27 = (__int64 *)ppPresentPlanes;
      do
      {
        v28 = *v27;
        v29 = *(_QWORD *)(*v27 + 48);
        v30 = *(_DWORD *)(v29 + 60);
        if ( v30 > 0xFFF )
        {
          WdLogSingleEntry1(3LL, *(unsigned int *)(v29 + 60));
          WdLogGlobalForLineNumber = 1406;
          v33 = -1073741811;
          goto LABEL_43;
        }
        if ( (*(_DWORD *)(v28 + 4) & 1) != 0 && v30 )
        {
          v23 += v30;
          ++v25;
        }
        ++v26;
        ++v27;
      }
      while ( v26 < (unsigned int)PresentPlaneCount );
      if ( v23 && v25 )
      {
        v31 = 16 * (v25 + v23) + 8;
        v32 = (UINT *)operator new[](16 * (v25 + v23) + 24, 0x4B677844u, 64LL, v28);
        Entry = v32;
        if ( !v32 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1448;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Failed to allocate memory for present dirty rects data",
            1448LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v33 = -1073741801;
LABEL_43:
          WdLogSingleEntry1(2LL, v33);
          WdLogGlobalForLineNumber = 1688;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to read dirty rects data. Returning 0x%I64x",
            v33,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)v33;
        }
        v32[2] = v31;
        v34 = v32 + 6;
        *(_QWORD *)v32 = 0LL;
        v35 = &v32[4 * v25 + 6];
        v32[3] = 1;
        v32[4] = v25;
        do
        {
          pPlaneAttributes = (*ppPresentPlanes)->pPlaneAttributes;
          if ( ((*ppPresentPlanes)->InputFlags.Value & 1) != 0 && pPlaneAttributes->DirtyRectCount )
          {
            *v34 = (*ppPresentPlanes)->LayerIndex;
            *((_QWORD *)v34 + 1) = v35;
            v34[1] = pPlaneAttributes->DirtyRectCount;
            memmove(v35, pPlaneAttributes->pDirtyRects, 16LL * pPlaneAttributes->DirtyRectCount);
            v35 += 4 * pPlaneAttributes->DirtyRectCount;
            v34 += 4;
          }
          ++ppPresentPlanes;
          --PresentPlaneCount;
        }
        while ( PresentPlaneCount );
        LOBYTE(v12) = a3;
      }
    }
    LODWORD(ContextCount) = v151;
    LOBYTE(v11) = a4;
  }
  *((_DWORD *)a9 + 35) = ContextCount;
  *((_DWORD *)a9 + 34) = v18;
  v37 = 2048;
  v38 = v196;
  if ( (unsigned int)ContextCount > 1 )
    v37 = 3072;
  v39 = 10LL;
  *(_DWORD *)a9 = *(_DWORD *)a9 & 0xFFFFFBFF | v37;
  do
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v38++);
    --v39;
  }
  while ( v39 );
  v40 = *((_DWORD *)a9 + 30) == 5;
  *((_QWORD *)a9 + 4) = Entry;
  if ( !v40 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1715;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"FlipOnVSyncSwFlipQueue == pVidSchSubmitData->FlipMode",
      1715LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v42 = v158;
  if ( v158->pDmaBuffer )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1720;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pPresentDdiArg->pDmaBuffer == NULL",
      1720LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v43 = v172;
  v44 = v11 + v12;
  v45 = (unsigned __int8)(v44 + a5);
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v172 + 2) + 16LL) + 16LL) + 3049LL) )
    v45 = v44;
  v162 = v45;
  if ( (unsigned __int8)v45 > 0xAu )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1738;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"cLayersInSchedulerArray <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      1738LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LOBYTE(v45) = v162;
  }
  v46 = (unsigned int *)((char *)a9 + 600);
  v47 = 0;
  v153 = 0;
  if ( !*((_BYTE *)a9 + 356) )
    v46 = (unsigned int *)((char *)a9 + 496);
  v48 = v168;
  v49 = 0;
  v163 = v46;
  v50 = v168->PresentPlaneCount;
  if ( v50 )
  {
    while ( 1 )
    {
      v51 = v48->ppPresentPlanes[v49];
      LayerIndex = v51->LayerIndex;
      if ( (v51->InputFlags.Value & 1) != 0 )
        break;
      if ( a7[LayerIndex] )
      {
        v53 = (*v46 | (1024 << LayerIndex)) & 0xFFC00;
        v54 = *v46 & 0xFFF003FF;
        goto LABEL_57;
      }
LABEL_58:
      v50 = v48->PresentPlaneCount;
      if ( ++v49 >= v50 )
        goto LABEL_59;
    }
    v53 = ((unsigned __int16)*v46 | (unsigned __int16)(1 << LayerIndex)) & 0x3FF;
    v54 = *v46 & 0xFFFFFC00;
LABEL_57:
    *v46 = v54 ^ v53;
    goto LABEL_58;
  }
LABEL_59:
  v55 = *v46;
  v56 = *v46;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 16LL) + 3049LL) )
    v56 = v55 | (v56 >> 10);
  v57 = v56 & 0x3FF;
  v58 = 0;
  v156 = v57;
  v161 = 0;
  if ( !v50 )
  {
LABEL_138:
    P = 0LL;
    v185 = 0;
    v91 = v154;
    v177 = 0LL;
    v178 = 0LL;
    v179 = 0LL;
    v180 = 0LL;
    v181 = 0LL;
    v182 = 0LL;
    if ( v154 >= 2 )
    {
      v96 = &v177;
      LODWORD(v177) = v48->VidPnSourceId;
      v102 = (__int64)v42;
      DWORD1(v177) = v47;
      *((_QWORD *)&v177 + 1) = v192;
    }
    else
    {
      _mm_lfence();
      v92 = *v48->ppPresentPlanes;
      if ( (v92->InputFlags.Value & 1) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2019;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pPlane->InputFlags.Enabled", 2019LL, 0LL, 0LL, 0LL, 0LL);
      }
      v93 = v158;
      v158->Flags.Value &= ~0x1000u;
      DirtyRectCount = v92->pPlaneAttributes->DirtyRectCount;
      v93->SubRectCnt = DirtyRectCount;
      if ( DirtyRectCount )
        v93->pDstSubRects = v92->pPlaneAttributes->pDirtyRects;
      if ( (unsigned int)ContextCount > 1 )
      {
        v95 = PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&P, (unsigned int)ContextCount);
        v96 = (__int128 *)v95;
        if ( v95 )
        {
          v97 = 0;
          v98 = v95 + 16;
          v99 = v169;
          while ( 1 )
          {
            v15 = *((_QWORD *)DxgThread + v91 * v97);
            if ( ((*(_DWORD *)(v15 + 72) >> 12) & 0x3F) != *((_DWORD *)*v99 + 97) )
              break;
            *(_QWORD *)(v98 - 16) = *(_QWORD *)(v15 + 32);
            *(_QWORD *)(v98 - 8) = VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
                                     *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 760LL),
                                     *(const struct VIDMM_MULTI_ALLOC **)(v15 + 24),
                                     *((_BYTE *)v43 + 431) != 0,
                                     *((_DWORD *)*v99 + 97));
            if ( *((_BYTE *)a9 + 356) )
              v100 = (char *)a9
                   + 64 * (unsigned __int64)(v97 * *((_DWORD *)a9 + 151))
                   + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                   + 640;
            else
              v100 = (char *)a9 + 520;
            *(_QWORD *)v98 = *(_QWORD *)v100;
            if ( *((_BYTE *)a9 + 356) )
              v101 = *(_WORD *)((char *)a9
                              + 64 * (unsigned __int64)(v97 * *((_DWORD *)a9 + 151))
                              + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                              + 632);
            else
              v101 = (*((_DWORD *)a9 + 139) >> 17) & 0x1F;
            ++v97;
            v91 = v154;
            ++v99;
            *(_WORD *)(v98 + 8) = v101;
            v98 += 32LL;
            if ( v97 >= v151 )
            {
              v102 = (__int64)v158;
              v158->NumSrcAllocations = v151;
              goto LABEL_168;
            }
          }
          WdLogSingleEntry1(2LL, v15);
          v90 = 0;
          WdLogGlobalForLineNumber = 2046;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v15) = -1073741811;
          v165 = -1073741811LL;
          if ( P != v184 && P )
            ExFreePoolWithTag(P, 0);
          LODWORD(ContextCount) = v151;
          P = 0LL;
          v185 = 0;
          goto LABEL_251;
        }
        LODWORD(v15) = -1073741801;
        v165 = -1073741801LL;
LABEL_146:
        if ( P != v184 && P )
          ExFreePoolWithTag(P, 0);
        LODWORD(ContextCount) = v151;
        v90 = 0;
        P = 0LL;
        v185 = 0;
        goto LABEL_251;
      }
      if ( *((_BYTE *)v43 + 430) )
      {
        v40 = *((_BYTE *)v43 + 431) == 0;
        v103 = *((unsigned int *)v43 + 97);
        *(_QWORD *)&v179 = v193;
        v104 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 760LL) + 8LL);
        v105 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v104 + 224);
        LOBYTE(v104) = !v40;
        *((_QWORD *)&v179 + 1) = v105(*(_QWORD *)(*(_QWORD *)DxgThread + 24LL), v104, v103);
        v96 = &v177;
        v102 = (__int64)v93;
        *(_QWORD *)&v180 = v195[0];
        WORD4(v180) = v194[0] & 0x1F;
      }
      else
      {
        v96 = &v177;
        *((_QWORD *)&v178 + 1) = v193;
        *((_QWORD *)&v177 + 1) = 0LL;
        *(_QWORD *)&v178 = 0LL;
        v180 = 0uLL;
        *(_QWORD *)&v179 = 2 * (v194[0] & 0x1Fu);
        v102 = (__int64)v93;
        *((_QWORD *)&v179 + 1) = v195[0];
        *(_QWORD *)&v181 = 0LL;
      }
    }
LABEL_168:
    v106 = 0;
    v163 = 0LL;
    *(_QWORD *)(v102 + 32) = v96;
    v107 = *(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL);
    if ( !*(_BYTE *)(*(_QWORD *)(v107 + 16) + 3057LL) )
      v163 = (unsigned int *)*((_QWORD *)v43 + 23);
    v174 = -1;
    v175 = 0LL;
    if ( (qword_14015B4C0 & 2) != 0 )
    {
      v176 = 1;
      v174 = 5031;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v102, (__int64)&EventProfilerEnter, v55, 5031);
    }
    else
    {
      v176 = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v174, 5031);
    CurrentProcess = PsGetCurrentProcess(v108);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v111 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
    {
      Current = DXGTHREAD::GetCurrent();
      if ( Current )
      {
        v113 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
        if ( v113 )
        {
LABEL_182:
          v155 = 0;
          v116 = (struct _KTHREAD **)((char *)v113 + 152);
          if ( !v113 )
            v116 = 0LL;
          if ( v116 )
          {
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            if ( v116[1] == KeGetCurrentThread() )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1575;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
                1575LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          if ( v113 )
          {
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v116);
            v155 = 2;
          }
          DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v107 + 16), 1);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v107 + 16) + 4804LL));
          CurrentIrql = KeGetCurrentIrql();
          v118 = CurrentIrql;
          v119 = 0LL;
          if ( CurrentIrql < 2u )
          {
            DxgThread = 0LL;
            if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0 )
            {
              v119 = DxgThread;
              if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v119 = DxgThread) != 0LL) )
                v106 = *((_DWORD *)v119 + 12);
            }
          }
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v190,
            *(struct DXGADAPTER **)(v107 + 16));
          v120 = (*(int (__fastcall **)(unsigned int *, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v107 + 16) + 744LL))(
                   v163,
                   v158);
          if ( v190[0] )
            KeUnstackDetachProcess(&ApcState);
          if ( (_BYTE)v118 != KeGetCurrentIrql() )
          {
            v125 = KeGetCurrentIrql();
            WdLogSingleEntry5(0LL, 275LL, 16LL, v107, v118, v125);
            WdLogGlobalForLineNumber = 3146;
          }
          if ( v119 )
          {
            v122 = *((int *)v119 + 12);
            if ( (_DWORD)v122 != v106 )
            {
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v119 + 12), v106, 0LL);
              WdLogGlobalForLineNumber = 73;
            }
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v107 + 16) + 4804LL));
          v126 = (_QWORD *)WdLogNewEntry5_WdTrace(v122, v121, v123, v124);
          v127 = v158;
          v128 = v163;
          v126[3] = v120;
          v126[4] = v128;
          v126[5] = v127->SubRectCnt;
          v126[6] = v127->pDmaBuffer;
          v126[7] = v127->DmaSize;
          WdLogGlobalForLineNumber = 3153;
          if ( (_DWORD)v120 )
          {
            if ( (int)v120 <= -1073741670 )
            {
              if ( (_DWORD)v120 == -1073741670
                || (_DWORD)v120 == -1073741816
                || (_DWORD)v120 == -1073741801
                || (_DWORD)v120 == -1073741795
                || (_DWORD)v120 == -1073741674 )
              {
                goto LABEL_213;
              }
LABEL_212:
              WdLogSingleEntry1(2LL, v120);
              WdLogGlobalForLineNumber = 3155;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Driver returned an invalid NTSTATUS code: 0x%I64x",
                v120,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_213;
            }
            if ( (_DWORD)v120 != -1071775743 && (_DWORD)v120 != -1071775736 && (_DWORD)v120 != -1071775232 )
              goto LABEL_212;
          }
LABEL_213:
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v107 + 16));
          if ( v155 == 2 )
          {
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            v116[1] = 0LL;
            ExReleasePushLockExclusiveEx(v116, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
          if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v129, (__int64)&EventProfilerExit, v130, v174);
          v15 = (unsigned int)v120;
          if ( (int)v120 < 0 )
          {
            v43 = v172;
            LODWORD(ContextCount) = v151;
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal();
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v158, Global, 0);
            v132 = v168;
            v188[0] = 0LL;
            v189 = 0;
            v186[0] = 0LL;
            v133 = v168->PresentPlaneCount;
            v187 = 0;
            Elements = (struct DXGSYNCOBJECTMUTEX *)PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::AllocateElements(v188, v133);
            v135 = (struct DXGSYNCOBJECTMUTEX *)PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::AllocateElements(
                                                  v186,
                                                  v132->PresentPlaneCount);
            if ( !Elements || !v135 )
            {
              WdLogSingleEntry1(2LL, -1073741801LL);
              WdLogGlobalForLineNumber = 2152;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Failed to allocate FlipToSyncObjectMutexArray or FlipAwaySyncObjectMutexArray: Status = 0x%I64x",
                -1073741801LL,
                0LL,
                0LL,
                0LL,
                0LL);
              PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v186);
              PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v188);
              if ( v159 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v158);
              if ( P != v184 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v185 = 0;
              goto LABEL_262;
            }
            v43 = v172;
            v136 = DXGCONTEXT::AcquireMultiPlaneOverlay3FlipFences(
                     v172,
                     v132,
                     v156,
                     a9,
                     (struct DXGSYNCOBJECTLOCK *)&v158,
                     Elements,
                     v135);
            v15 = (unsigned int)v136;
            v165 = (unsigned int)v136;
            if ( v136 < 0 )
            {
              PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v186);
              PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v188);
              if ( v159 )
              {
                v159 = 0;
                ExReleaseResourceLite((PERESOURCE)v158[3].pDstSubRects);
                KeLeaveCriticalRegion();
              }
              goto LABEL_146;
            }
            LODWORD(ContextCount) = v151;
            v137 = 0;
            if ( v151 )
            {
              v138 = v169;
              while ( 1 )
              {
                v139 = *v138;
                if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
                  break;
                if ( *((struct _KTHREAD **)v139 + 56) != KeGetCurrentThread() )
                  goto LABEL_230;
LABEL_231:
                if ( (*((_DWORD *)v43 + 98) & 0x10) != 0 )
                  DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(*v138, 0LL, 0, 0, a9, 0);
                v140 = *v138;
                v141 = *((_QWORD *)*v138 + 2);
                if ( (*((_DWORD *)*v138 + 98) & 0x10) != 0 )
                  v142 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v141 + 16) + 736LL) + 8LL)
                                                                                             + 440LL))(
                           *((_QWORD *)v140 + 36),
                           a9);
                else
                  v142 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v141 + 16) + 736LL) + 8LL)
                                                                                             + 432LL))(
                           *((_QWORD *)v140 + 32),
                           a9);
                v15 = (unsigned int)v142;
                if ( v142 >= 0 )
                {
                  *(_DWORD *)a9 &= ~0x800u;
                  ++v137;
                  ++v138;
                  if ( v137 < v151 )
                    continue;
                }
                goto LABEL_238;
              }
              if ( *((struct _KTHREAD **)v139 + 56) == KeGetCurrentThread() )
                goto LABEL_231;
LABEL_230:
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2174;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
                2174LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_231;
            }
LABEL_238:
            PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v186);
            PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(v188);
            if ( v159 )
            {
              v159 = 0;
              ExReleaseResourceLite((PERESOURCE)v158[3].pDstSubRects);
              KeLeaveCriticalRegion();
            }
          }
          if ( P != v184 && P )
            ExFreePoolWithTag(P, 0);
          v90 = 0;
          P = 0LL;
          v185 = 0;
          v165 = v15;
          if ( (int)v15 < 0 )
            goto LABEL_251;
          goto LABEL_262;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        v115 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v113 = DXGGLOBAL::SearchDxgThreadList(v115, CurrentThread);
        if ( v113 )
          goto LABEL_182;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2925;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v113 = v111;
    goto LABEL_182;
  }
  while ( 1 )
  {
    v59 = v48->ppPresentPlanes[v58];
    v60 = 8LL * v47;
    v166 = v59;
    v61 = (struct _VIDSCH_LAYER_ATTRIBUTE *)v59->LayerIndex;
    v160 = (int)v61;
    v192[v60] = (_DWORD)v61;
    v192[v60 + 1] = v59->InputFlags.Value & 1;
    if ( (v59->InputFlags.Value & 1) == 0 && !a7[(_QWORD)v61] )
      goto LABEL_133;
    if ( (v57 & (1 << (char)v61)) != 0 )
    {
      v63 = (v57 & ((1 << (char)v61) - 1) & 0x55555555)
          + (((v57 & (unsigned int)((1 << (char)v61) - 1)) >> 1) & 0x55555555);
      v64 = (((v63 & 0x33333333) + ((v63 >> 2) & 0x33333333)) & 0xF0F0F0F)
          + ((((v63 & 0x33333333) + ((v63 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
      v62 = (v64 >> 8) + (v64 & 0xFF00FF) + (((v64 >> 8) + (v64 & 0xFF00FF)) >> 16);
    }
    else
    {
      v62 = -1;
    }
    if ( v62 >= (unsigned __int8)v45 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1813;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"FlipToIndex < cLayersInSchedulerArray",
        1813LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v62 >= 0xA )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1820;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"FlipToIndex < DXGK_MAX_MPO_PLANES_PER_SOURCE",
        1820LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v65 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 16LL);
    if ( *(int *)(v65 + 2736) >= 0x2000 || *(_BYTE *)(v65 + 3036) )
    {
      v66 = (char *)a9 + v62 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 600;
      v173 = 0LL;
      v67 = ReadPresentPrivateDriverData((struct DXGADAPTER *)v65, v59, &v173);
      v15 = v67;
      v165 = v67;
      if ( v67 < 0 )
      {
        WdLogSingleEntry1(2LL, v67);
        v90 = 0;
        WdLogGlobalForLineNumber = 1835;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to read private driver data. Returning 0x%I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_251;
      }
      v68 = v173;
      v59 = v166;
      if ( v173 )
      {
        v196[v161] = v173;
        if ( !v59->LayerIndex )
        {
          v69 = v158;
          v158->PrivateDriverDataSize = v59->DriverPrivateDataSize;
          v69->pPrivateDriverData = (char *)v68 + 16;
        }
        *((_QWORD *)v66 + 25) = v68;
      }
      LODWORD(v61) = v160;
    }
    if ( (v59->InputFlags.Value & 1) != 0 )
      break;
    if ( ((*v46 >> 10) & (1 << (char)v61) & 0x3FF) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1989;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pFlipOverlayData->ToDisableLayers & (1 << LayerIndex)",
        1989LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v57 = v156;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 1880LL) + 216LL) + 64LL)
                               + 40LL)
                   + 28LL) < 0x4002u )
    {
      v47 = v153;
    }
    else
    {
      v89 = 32LL * v153;
      *(_DWORD *)&v194[v89] &= 0xFFFFFFE0;
      v47 = v153 + 1;
      *(_QWORD *)&v194[v89 - 8] = 0LL;
      ++v153;
      v195[v89 / 8] = 0LL;
    }
LABEL_133:
    v48 = v168;
    v58 = v161 + 1;
    v161 = v58;
    if ( v58 >= v168->PresentPlaneCount )
    {
      v42 = v158;
      goto LABEL_138;
    }
    LOBYTE(v45) = v162;
  }
  v70 = 0;
  if ( !(_DWORD)ContextCount )
  {
    v47 = v153;
    v46 = v163;
    v57 = v156;
    goto LABEL_133;
  }
  v71 = v169;
  v171 = v169;
  while ( 1 )
  {
    ContextCount = *((_QWORD *)DxgThread + (unsigned int)v61 + v154 * v70);
    if ( !ContextCount )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1874;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDxgAlloc", 1874LL, 0LL, 0LL, 0LL, 0LL);
      v71 = v171;
    }
    if ( *((_BYTE *)a9 + 356) )
      v72 = (char *)a9
          + 64 * (unsigned __int64)(v62 + v70 * *((_DWORD *)a9 + 151))
          + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
          + 624;
    else
      v72 = (char *)a9 + 80 * v62 + 512;
    *(_QWORD *)v72 = *(_QWORD *)(*(_QWORD *)(ContextCount + 48) + 16LL);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 16LL) + 3057LL) )
    {
      if ( *((_BYTE *)a9 + 356) )
        v73 = (char *)a9
            + 64 * (unsigned __int64)(v62 + v70 * *((_DWORD *)a9 + 151))
            + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
            + 616;
      else
        v73 = (char *)a9 + 80 * v62 + 568;
      *(_QWORD *)v73 = *((_QWORD *)*v71 + 23);
    }
    v74 = *((_BYTE *)a9 + 356)
        ? (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                           + 64 * (unsigned __int64)(v62 + v70 * *((_DWORD *)a9 + 151))
                                           + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                                           + 648)
        : (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + 80 * v62 + 504);
    v75 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 760LL)
                                                                                                  + 8LL)
                                                                                      + 384LL))(
            *(_QWORD *)(*((_QWORD *)v43 + 2) + 792LL),
            *(_QWORD *)(ContextCount + 24),
            v74);
    v15 = v75;
    v165 = v75;
    if ( v75 < 0 )
      break;
    v76 = *((_QWORD *)v43 + 2);
    v157 = 0;
    v167 = 0LL;
    v77 = *(_QWORD **)(v76 + 16);
    v78 = v77[2];
    if ( *(int *)(v78 + 2736) >= 0x2000 || *(_BYTE *)(v78 + 3036) )
    {
      v79 = 0xFFFF;
      v167 = -1LL;
      v157 = 0xFFFF;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v77[95] + 8LL) + 192LL))(
        v77[96],
        *(_QWORD *)(*(_QWORD *)(ContextCount + 48) + 8LL),
        &v157,
        &v167,
        0LL);
      v79 = v157;
    }
    if ( *((_BYTE *)a9 + 356) )
    {
      *(_WORD *)((char *)a9
               + 64 * (unsigned __int64)(v62 + v70 * *((_DWORD *)a9 + 151))
               + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
               + 632) = v79;
    }
    else
    {
      v80 = *((_DWORD *)a9 + 20 * v62 + 139);
      *((_DWORD *)a9 + 20 * v62 + 139) = v80 ^ (v80 ^ (v79 << 17)) & 0x3E0000;
    }
    if ( *((_BYTE *)a9 + 356) )
      v81 = (char *)a9
          + 64 * (unsigned __int64)(v62 + v70 * *((_DWORD *)a9 + 151))
          + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
          + 640;
    else
      v81 = (char *)a9 + 80 * v62 + 520;
    *(_QWORD *)v81 = v167;
    v82 = *(_QWORD *)(ContextCount + 40);
    if ( v82 && (*(_DWORD *)(v82 + 4) & 8) != 0 )
      v55 = *(_QWORD *)(*(_QWORD *)(v82 + 56) + 184LL);
    else
      v55 = 0LL;
    if ( *((_BYTE *)a9 + 356) )
      *(_QWORD *)((char *)a9
                + 64 * (unsigned __int64)(v62 + v70 * *((_DWORD *)a9 + 151))
                + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                + 656) = v55;
    else
      *((_QWORD *)a9 + 10 * v62 + 72) = v55;
    if ( v70 )
    {
      v47 = v153;
    }
    else
    {
      v83 = v166;
      if ( *((_BYTE *)a9 + 356) )
        *(_DWORD *)((char *)a9 + v62 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 640) = v166->MaxImmediateFlipLine;
      if ( *((_BYTE *)a9 + 356) )
        v84 = v62 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 760LL;
      else
        v84 = 80LL * v62 + 528;
      v61 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + v84);
      if ( v83->pPlaneAttributes->SrcRect.right <= v83->pPlaneAttributes->SrcRect.left )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1964;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pPlane->pPlaneAttributes->SrcRect.right > pPlane->pPlaneAttributes->SrcRect.left",
          1964LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v85 = (DXGCONTEXT *)v83->pPlaneAttributes;
      if ( *((_DWORD *)v85 + 4) <= *((_DWORD *)v85 + 2) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1965;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pPlane->pPlaneAttributes->SrcRect.bottom > pPlane->pPlaneAttributes->SrcRect.top",
          1965LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(v85, v61, v83->pPlaneAttributes);
      LODWORD(v61) = v160;
      v86 = v157 & 0x1F;
      v87 = 32LL * v153;
      v47 = ++v153;
      *(_QWORD *)&v194[v87 - 8] = *(_QWORD *)(ContextCount + 32);
      v88 = *(_DWORD *)&v194[v87] & 0xFFFFFFE0 | v86;
      v195[v87 / 8] = v167;
      *(_DWORD *)&v194[v87] = v88;
    }
    ++v70;
    LODWORD(ContextCount) = v151;
    v71 = ++v171;
    if ( v70 >= v151 )
    {
      v46 = v163;
      v57 = v156;
      goto LABEL_133;
    }
  }
  WdLogSingleEntry3(2LL, v43, ContextCount, v75);
  v90 = 0;
  WdLogGlobalForLineNumber = 1898;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x failed to reference allocation for FlipToAllocation %I64x, returning 0x%I64x",
    (__int64)v43,
    ContextCount,
    v15,
    0LL,
    0LL);
  LODWORD(ContextCount) = v151;
LABEL_251:
  v143 = (unsigned __int8)v162;
  if ( (_BYTE)v162 )
  {
    do
    {
      for ( i = 0; i < (unsigned int)ContextCount; ++i )
      {
        if ( *((_BYTE *)a9 + 356) )
          v145 = (struct VIDMM_ALLOC **)((char *)a9
                                       + 64 * (unsigned __int64)(v90 + i * *((_DWORD *)a9 + 151))
                                       + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                                       + 648);
        else
          v145 = (struct VIDMM_ALLOC **)((char *)a9 + 80 * v90 + 504);
        v146 = *v145;
        if ( v146 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 768LL),
            *((_DWORD *)a9 + 34),
            v146);
      }
      ++v90;
    }
    while ( v90 < v143 );
    LODWORD(v15) = v165;
  }
  WdLogSingleEntry2(2LL, v43, (int)v15);
  WdLogGlobalForLineNumber = 2227;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x failed to submit present for multi plane overlay, returning 0x%I64x",
    (__int64)v43,
    (int)v15,
    0LL,
    0LL,
    0LL);
LABEL_262:
  v147 = (CAutoRefCountedBuffer *)&v197;
  v148 = 10LL;
  do
  {
    v147 = (CAutoRefCountedBuffer *)((char *)v147 - 8);
    CAutoRefCountedBuffer::~CAutoRefCountedBuffer(v147);
    --v148;
  }
  while ( v148 );
  v149 = (PLOOKASIDE_LIST_EX *)Entry;
  if ( Entry && _InterlockedExchangeAdd((volatile signed __int32 *)Entry + 3, 0xFFFFFFFF) == 1 )
  {
    if ( *v149 )
      ExFreeToLookasideListEx(*v149, v149);
    else
      ExFreePoolWithTag(v149, 0);
  }
  return (unsigned int)v15;
}
