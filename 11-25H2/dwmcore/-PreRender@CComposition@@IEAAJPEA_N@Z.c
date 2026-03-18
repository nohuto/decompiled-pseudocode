/*
 * XREFs of ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateExpressions@CComposition@@QEAAXXZ @ 0x18003B120 (-UpdateExpressions@CComposition@@QEAAXXZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x18003B1F0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?ShrinkQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x18003D9E0 (-ShrinkQueuedStateChanges@CExpressionManager@@AEAAXXZ.c)
 *     ?Complete_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x18003DF70 (-Complete_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180069EE8 (-_Tidy@-$vector@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x1800ADA40 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x1800ADC64 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x1800ADF5C (-SetEvent@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1800ADF98 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x1800AE180 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x1800AE6D0 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800AEC80 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 *     ?RequestCursorUpdate@CGlobalMit@@UEAAXXZ @ 0x1800AEFF0 (-RequestCursorUpdate@CGlobalMit@@UEAAXXZ.c)
 *     ?UpdateAnimateResources@CComposition@@IEAAXXZ @ 0x1800AF840 (-UpdateAnimateResources@CComposition@@IEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180133020 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x180133070 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1801330C0 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18013E9A0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ @ 0x1801A8FE0 (-DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1801B529C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801C7820 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?ClearCaches@CComposition@@IEBA_NXZ @ 0x1801CDED0 (-ClearCaches@CComposition@@IEBA_NXZ.c)
 *     ?PostExpressionsUpdated@DataProviderManager@@QEAAXXZ @ 0x1801D8870 (-PostExpressionsUpdated@DataProviderManager@@QEAAXXZ.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801DD53C (-clear_region@-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$buffe.c)
 *     ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1801E05E0 (-BeginUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 *     ?FrameTick@CSceneResourceManager@@QEAAXXZ @ 0x1801E911C (-FrameTick@CSceneResourceManager@@QEAAXXZ.c)
 *     ?PreRender@CHolographicManager@@UEAAXXZ @ 0x1801EB490 (-PreRender@CHolographicManager@@UEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x18020BF1C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 *     ?AnyOutstandingCaptures@CGlobalSurfaceManager@@UEBA_NXZ @ 0x180210B60 (-AnyOutstandingCaptures@CGlobalSurfaceManager@@UEBA_NXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180239090 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NXZ @ 0x18024A934 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NX.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180298F90 (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x180299140 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::PreRender(CComposition *this, bool *a2)
{
  DWORD CurrentThreadId; // eax
  DWORD v5; // ecx
  _DWORD *Value; // rbx
  const char *v7; // r9
  CVisualTree *v8; // rcx
  __int64 v9; // rsi
  unsigned int j; // ebx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  int v14; // r12d
  CKernelTransport *v15; // rcx
  unsigned __int64 v16; // r8
  __int64 (__fastcall *v17)(CKernelTransport *__hidden, struct CComposition *, unsigned __int64); // rax
  int v18; // eax
  __int64 v19; // r8
  unsigned int k; // ebx
  __int64 v21; // rsi
  int v22; // eax
  int v23; // ebx
  __int64 v24; // r14
  unsigned int m; // ebx
  __int64 v26; // rax
  _QWORD *v27; // r14
  _QWORD *n; // rbx
  __int64 v29; // rsi
  void (__fastcall *v30)(CAnimationController *); // rax
  unsigned __int64 v31; // rcx
  HANDLE CurrentThread; // rax
  BOOL v33; // eax
  CGlobalSurfaceManager *v34; // rcx
  __int64 (*v35)(void); // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rbx
  CResource *v41; // rsi
  _QWORD *v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // r14
  void *v45; // rbx
  CResource *v46; // rbx
  _DWORD *v47; // rsi
  CGlobalMit *v48; // rcx
  void (*v49)(void); // rax
  __int64 v51; // rax
  int v52; // esi
  __int64 *v53; // rbx
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  void *(__fastcall *v57)(CRectangleGeometry *__hidden, unsigned int); // rax
  HANDLE ProcessHeap; // rax
  __int64 (__fastcall *v59)(CResource *); // rax
  CThreadContext *v60; // rax
  CThreadContext *v61; // rax
  CThreadContext *v62; // rax
  CThreadContext *v63; // rax
  unsigned __int64 v64; // rcx
  HANDLE v65; // rax
  BOOL v66; // eax
  int v67; // eax
  void (__fastcall *v68)(CGlobalComposition *__hidden); // rax
  CComposition *v69; // rcx
  _QWORD *v70; // rbx
  CD3DResource *v71; // rcx
  CD3DDevice *v72; // rcx
  CHolographicManager *v73; // rcx
  void (*v74)(void); // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  unsigned __int64 v77; // rcx
  HANDLE v78; // rax
  BOOL v79; // eax
  __int64 v80; // rdx
  __int64 v81; // r8
  int v82; // eax
  int v83; // ebx
  __int64 v84; // rbx
  __int64 v85; // rsi
  __int64 v86; // rdx
  CGlobalSurfaceManager *v87; // rcx
  __int64 (*v88)(void); // rax
  char v89; // al
  unsigned __int64 v91; // rdx
  unsigned int v92; // ecx
  unsigned int v93; // eax
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // rax
  _QWORD *v98; // r12
  _QWORD *i; // rbx
  _QWORD *v100; // r8
  _QWORD *v101; // rdx
  __int64 v102; // rax
  __int64 v103; // r14
  _QWORD *v104; // r15
  _QWORD *ii; // rsi
  int v106; // eax
  int v107; // ebx
  struct CMILPoolResource *v108; // rcx
  int v109; // [rsp+20h] [rbp-E0h]
  int v110; // [rsp+20h] [rbp-E0h]
  int v111; // [rsp+30h] [rbp-D0h] BYREF
  int v112; // [rsp+38h] [rbp-C8h] BYREF
  int v113; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 CycleTime; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v115; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v116; // [rsp+58h] [rbp-A8h] BYREF
  CResource *v117; // [rsp+60h] [rbp-A0h] BYREF
  CComposition *v118; // [rsp+68h] [rbp-98h] BYREF
  CComposition *v119; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v120[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v121[4]; // [rsp+90h] [rbp-70h] BYREF
  int v122; // [rsp+94h] [rbp-6Ch]
  __int64 v123; // [rsp+98h] [rbp-68h]
  __int64 v124; // [rsp+A0h] [rbp-60h]
  int v125; // [rsp+ACh] [rbp-54h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  int v127; // [rsp+B8h] [rbp-48h]
  __int64 v128; // [rsp+BCh] [rbp-44h]
  int v129; // [rsp+C4h] [rbp-3Ch]
  __int64 v130; // [rsp+C8h] [rbp-38h]
  __int64 v131; // [rsp+D8h] [rbp-28h]
  _BYTE v132[16]; // [rsp+E0h] [rbp-20h] BYREF
  int *v133; // [rsp+F0h] [rbp-10h]
  __int64 v134; // [rsp+F8h] [rbp-8h]
  int *v135; // [rsp+100h] [rbp+0h]
  __int64 v136; // [rsp+108h] [rbp+8h]
  int *v137; // [rsp+110h] [rbp+10h]
  __int64 v138; // [rsp+118h] [rbp+18h]
  _BYTE v139[16]; // [rsp+120h] [rbp+20h] BYREF
  CComposition **v140; // [rsp+130h] [rbp+30h]
  __int64 v141; // [rsp+138h] [rbp+38h]
  _BYTE v142[16]; // [rsp+140h] [rbp+40h] BYREF
  CComposition **v143; // [rsp+150h] [rbp+50h]
  __int64 v144; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *a2 = 1;
  v117 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 713);
  CurrentThreadId = GetCurrentThreadId();
  v5 = CThreadContext::s_dwTlsIndex;
  *((_DWORD *)this + 1428) = CurrentThreadId;
  Value = TlsGetValue(v5);
  if ( !Value )
  {
    v60 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v60 || (v61 = CThreadContext::CThreadContext(v60), (Value = v61) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)0x8007000ELL,
        v109);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v61);
  }
  ++Value[10];
  if ( (__int64)(*((_QWORD *)this + 725) - *((_QWORD *)this + 724)) >> 3 )
    detail::vector_facade<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,8,1,detail::liberal_expansion_policy>>::clear_region();
  EnterCriticalSection((LPCRITICAL_SECTION)this + 143);
  while ( 1 )
  {
    v8 = (CVisualTree *)*((_QWORD *)this + 721);
    if ( !v8 )
      break;
    v56 = *((_QWORD *)v8 + 8);
    *((_QWORD *)this + 721) = v56;
    if ( !v56 )
      *((_QWORD *)this + 722) = 0LL;
    if ( *((_DWORD *)v8 + 2) != -1 )
    {
      *((_QWORD *)this + 723) = v8;
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
        v7);
    }
    v57 = *(void *(__fastcall **)(CRectangleGeometry *__hidden, unsigned int))(*(_QWORD *)v8 + 32LL);
    if ( v57 == CVisualTree::`vector deleting destructor' )
    {
      CVisualTree::`vector deleting destructor'(v8, 1u);
    }
    else if ( v57 == CSurfaceBrush::`scalar deleting destructor' )
    {
      CSurfaceBrush::`scalar deleting destructor'(v8, 1u);
    }
    else if ( v57 == CRectangleGeometry::`vector deleting destructor' )
    {
      CRectangleGeometry::`vector deleting destructor'(v8, 1u);
    }
    else
    {
      v57(v8, 1u);
    }
  }
  if ( this != (CComposition *)-5720LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 143);
  v9 = *((_QWORD *)this + 81);
  EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 16));
  if ( *(_DWORD *)(v9 + 200) )
  {
    do
    {
      CEffectCompilationTask::Complete_RenderThread(**(CEffectCompilationTask ***)(v9 + 64));
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v9 + 64, 0LL);
    }
    while ( (*(_DWORD *)(v9 + 200))-- != 1 );
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectHash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EffectHash>::GetImpl'::`2'::impl) )
  {
    if ( *(_BYTE *)(v9 + 242) )
    {
      *(_BYTE *)(v9 + 242) = 0;
      v97 = *(_QWORD *)(v9 + 216);
      if ( v97 != *(_QWORD *)(v9 + 224) )
        *(_QWORD *)(v9 + 224) = v97;
      if ( !*(_BYTE *)(v9 + 240) )
      {
        v98 = *(_QWORD **)(v9 + 104);
        for ( i = (_QWORD *)*v98; i != v98; i = (_QWORD *)*i )
        {
          v100 = i + 2;
          if ( *(int *)(i[4] + 72LL) > 1 )
          {
            v101 = *(_QWORD **)(v9 + 224);
            if ( v101 == *(_QWORD **)(v9 + 232) )
            {
              std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(v9 + 216, v101, v100);
            }
            else
            {
              *v101 = *v100;
              *(_QWORD *)(v9 + 224) += 8LL;
            }
          }
        }
      }
    }
    v91 = 0LL;
    if ( g_pComposition )
      v91 = *((_QWORD *)g_pComposition + 111);
    v92 = *(_DWORD *)(v9 + 200);
    v93 = *(_DWORD *)(v9 + 88);
    *(_QWORD *)(v9 + 208) = v91;
    if ( v92 < v93 )
    {
      v94 = 8LL * v92;
      v95 = v93 - v92;
      do
      {
        v94 += 8LL;
        v96 = *(_QWORD *)(v94 + *(_QWORD *)(v9 + 64) - 8);
        if ( v91 >= *(_QWORD *)(v96 + 8) - 1LL )
          v91 = *(_QWORD *)(v96 + 8) - 1LL;
        *(_QWORD *)(v9 + 208) = v91;
        --v95;
      }
      while ( v95 );
    }
  }
  if ( v9 != -16 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v9 + 16));
  for ( j = 0; j < *((_DWORD *)this + 216); ++j )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 105) + 8LL * j);
    if ( v11 && *(_QWORD *)(v11 + 40) && *(_BYTE *)(v11 + 105) && !*(_DWORD *)(v11 + 128) )
    {
      *(_BYTE *)(v11 + 105) = 0;
      _SetEvent___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBAXXZ(v11 + 40);
    }
  }
  v12 = CComposition::BeginCompositionFrame(this);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180336AF8, 3u, v12, 0xD22u, 0LL);
    goto LABEL_55;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v118 = this;
    v140 = &v118;
    v141 = 8LL;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, "6", v13, 2LL, v139);
  }
  v15 = (CKernelTransport *)*((_QWORD *)this + 709);
  v16 = *((_QWORD *)this + 111);
  v17 = *(__int64 (__fastcall **)(CKernelTransport *__hidden, struct CComposition *, unsigned __int64))(*(_QWORD *)v15 + 24LL);
  if ( v17 == CKernelTransport::DispatchBatches )
    v18 = CKernelTransport::DispatchBatches(v15, this, v16);
  else
    v18 = v17(v15, this, v16);
  v14 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xE11u, 0LL);
  for ( k = 0; k < *((_DWORD *)this + 216); ++k )
  {
    v21 = *(_QWORD *)(*((_QWORD *)this + 105) + 8LL * k);
    if ( v21 )
    {
      if ( *(_DWORD *)(v21 + 120) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
        {
          v113 = *(_DWORD *)(v21 + 120);
          v112 = *(_DWORD *)(v21 + 28);
          v111 = *(_DWORD *)(v21 + 24);
          v133 = &v111;
          v135 = &v112;
          v137 = &v113;
          v134 = 4LL;
          v136 = 4LL;
          v138 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &CHANNELBATCHES_PROCESSED,
            v19,
            4LL,
            v132);
        }
        dword_180406858 += *(_DWORD *)(v21 + 120);
        ++*(_DWORD *)(*(_QWORD *)(v21 + 64) + 36LL);
        *(_DWORD *)(v21 + 120) = 0;
      }
      *(_BYTE *)(v21 + 104) = 0;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v119 = this;
    v143 = &v119;
    v144 = 8LL;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, "8", v19, 2LL, v142);
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 712) + 24LL))(*((_QWORD *)this + 712), 3LL);
  v23 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xE1Eu, 0LL);
  if ( !v14 )
    goto LABEL_34;
  if ( v14 >= 0 )
  {
    if ( v23 >= 0 )
    {
LABEL_35:
      if ( v14 >= 0 )
      {
        v24 = *((_QWORD *)this + 103);
        for ( m = 0; m < *(_DWORD *)(v24 + 280); ++m )
        {
          v26 = *(_QWORD *)(v24 + 256);
          if ( *(_BYTE *)(*(_QWORD *)(v26 + 8LL * m) + 320LL) )
            InteractionSourceManager::UpdateActiveManipulations((InteractionSourceManager *)(*(_QWORD *)(v26 + 8LL * m)
                                                                                           + 208LL));
        }
        v27 = *(_QWORD **)(v24 + 592);
        for ( n = (_QWORD *)*v27; n != v27; n = (_QWORD *)*n )
        {
          v29 = n[2];
          v30 = **(void (__fastcall ***)(CAnimationController *))v29;
          if ( v30 == CAnimationController::NotifyBatchProcessingComplete )
          {
            if ( (*(_BYTE *)(v29 + 8) & 3) != 0 )
            {
              CAnimationController::UpdateKeyframeAnimations((CAnimationController *)(v29 - 112));
              *(_BYTE *)(v29 + 8) &= 0xFCu;
            }
          }
          else
          {
            v30((CAnimationController *)n[2]);
          }
        }
        v31 = 0LL;
        CycleTime = 0LL;
        if ( ::CycleTime )
        {
          CurrentThread = GetCurrentThread();
          v33 = QueryThreadCycleTime(CurrentThread, &CycleTime);
          v31 = CycleTime;
          if ( v33 )
            qword_180406810 += CycleTime - ::CycleTime;
        }
        ::CycleTime = v31;
        v34 = (CGlobalSurfaceManager *)*((_QWORD *)this + 78);
        v35 = *(__int64 (**)(void))(*(_QWORD *)v34 + 32LL);
        if ( (char *)v35 == (char *)CGlobalSurfaceManager::ProcessSurfaceUpdates )
          v36 = CGlobalSurfaceManager::ProcessSurfaceUpdates(v34);
        else
          v36 = v35();
        v14 = v36;
        if ( v36 >= 0 )
        {
          v64 = 0LL;
          v115 = 0LL;
          if ( ::CycleTime )
          {
            v65 = GetCurrentThread();
            v66 = QueryThreadCycleTime(v65, &v115);
            v64 = v115;
            if ( v66 )
              qword_180406818 += v115 - ::CycleTime;
          }
          ::CycleTime = v64;
          if ( g_pDebugVisual )
          {
            v117 = 0LL;
            if ( (int)CDebugVisualImage::Create(this, g_pDebugVisual, &v117) >= 0 )
              *((_BYTE *)this + 6440) = 1;
          }
          v67 = CRenderTargetManager::CheckOcclusionState(*((CRenderTargetManager **)this + 77));
          v14 = v67;
          if ( v67 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180336AF8, 3u, v67, 0xD38u, 0LL);
          v68 = *(void (__fastcall **)(CGlobalComposition *__hidden))(*(_QWORD *)this + 32LL);
          if ( v68 == CGlobalComposition::BeginUpdateCursors )
            CGlobalComposition::BeginUpdateCursors(this);
          else
            v68(this);
          *a2 = CComposition::ClearCaches(v69);
          v70 = (_QWORD *)*((_QWORD *)this + 85);
          if ( (__int64)(v70[6] - v70[5]) >> 3 )
          {
            CSceneResourceManager::EnsureSceneCompositor(*((CSceneResourceManager **)this + 85));
          }
          else
          {
            v71 = (CD3DResource *)v70[3];
            if ( v71 )
            {
              CD3DResource::RemoveResourceNotifier(v71, *((const struct IDeviceResourceNotify **)this + 85));
              v102 = v70[3];
              if ( v102 )
              {
                v103 = *(_QWORD *)(v102 + 120);
                if ( v103 )
                {
                  v104 = (_QWORD *)v70[6];
                  for ( ii = (_QWORD *)v70[5]; ii != v104; ++ii )
                    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*ii + 8LL))(*ii, v103);
                }
              }
              v108 = (struct CMILPoolResource *)v70[3];
              v70[3] = 0LL;
              if ( v108 )
                CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v108);
            }
            v72 = (CD3DDevice *)v70[4];
            v70[4] = 0LL;
            if ( v72 )
              CD3DDevice::Release(v72);
          }
          v73 = (CHolographicManager *)*((_QWORD *)this + 83);
          if ( v73 )
          {
            v74 = *(void (**)(void))(*(_QWORD *)v73 + 16LL);
            if ( (char *)v74 == (char *)CHolographicManager::PreRender )
              CHolographicManager::PreRender(v73);
            else
              v74();
          }
          if ( *((_DWORD *)this + 1621) || !*(_BYTE *)(*((_QWORD *)this + 77) + 753LL) )
          {
            CSuperWetInkManager::DirtyActiveInk(*((CSuperWetInkManager **)this + 82));
            CComposition::UpdateAnimateResources(this);
            CComposition::UpdateExpressions(this, v75, v76);
            v77 = 0LL;
            v116 = 0LL;
            if ( ::CycleTime )
            {
              v78 = GetCurrentThread();
              v79 = QueryThreadCycleTime(v78, &v116);
              v77 = v116;
              if ( v79 )
                qword_180406820 += v116 - ::CycleTime;
            }
            ::CycleTime = v77;
            DataProviderManager::PostExpressionsUpdated(*((DataProviderManager **)this + 803));
            CSceneResourceManager::FrameTick(*((CSceneResourceManager **)this + 85));
            v82 = CComposition::CleanTrees(this, v80, v81);
            v83 = v82;
            if ( v82 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180336AF8, 3u, v82, 0xD5Du, 0LL);
            if ( !v14 || v14 >= 0 && v83 < 0 )
              v14 = v83;
          }
          else
          {
            dword_1804067D0 |= 0x200u;
            v84 = *((_QWORD *)this + 103);
            v85 = *((_QWORD *)this + 111);
            v86 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39));
            if ( *(_QWORD *)(v84 + 536) )
            {
              *(_BYTE *)(v84 + 440) |= 2u;
              CExpressionManager::UpdateExpressions((CExpressionManager *)v84, v86, v85);
            }
            CExpressionManager::ShrinkQueuedStateChanges((CExpressionManager *)v84);
            v87 = (CGlobalSurfaceManager *)*((_QWORD *)this + 78);
            v88 = *(__int64 (**)(void))(*(_QWORD *)v87 + 48LL);
            if ( (char *)v88 == (char *)CGlobalSurfaceManager::AnyOutstandingCaptures )
              v89 = CGlobalSurfaceManager::AnyOutstandingCaptures(v87);
            else
              v89 = v88();
            if ( v89 || *((_DWORD *)this + 1484) )
              *((_BYTE *)this + 6440) = 1;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xE01u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180336AF8, 3u, v14, 0xD2Au, 0LL);
        }
        goto LABEL_55;
      }
      goto LABEL_183;
    }
LABEL_34:
    v14 = v23;
    goto LABEL_35;
  }
LABEL_183:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180336AF8, 3u, v14, 0xD25u, 0LL);
LABEL_55:
  v39 = *((_QWORD *)this + 80);
  if ( v39 )
  {
    v40 = v39 + 80;
    while ( 1 )
    {
      v41 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v40 + 24));
      v42 = *(_QWORD **)v40;
      if ( *(_QWORD *)(*(_QWORD *)v40 + 8LL) != v40 || (v43 = *v42, *(_QWORD **)(*v42 + 8LL) != v42) )
        __fastfail(3u);
      *(_QWORD *)v40 = v43;
      *(_QWORD *)(v43 + 8) = v40;
      if ( v42 != (_QWORD *)v40 )
      {
        v41 = (CResource *)v42[2];
        operator delete(v42, 0x18uLL);
        --*(_DWORD *)(v40 + 16);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v40 + 24));
      if ( !v41 )
        break;
      v59 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v41 + 16LL);
      if ( v59 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v41);
      else
        v59(v41);
    }
  }
  if ( *((_BYTE *)this + 6440) )
  {
    v106 = CComposition::CleanTrees(this, v37, v38);
    v107 = v106;
    if ( v106 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180336AF8, 3u, v106, 0xD7Cu, 0LL);
    if ( !v14 || v14 >= 0 && v107 < 0 )
      v14 = v107;
  }
  v128 = 0LL;
  lpMem = 0LL;
  v129 = 0;
  v125 = 0;
  v122 = 0;
  v123 = 0LL;
  v124 = 0LL;
  v127 = 0;
  v131 = 0LL;
  while ( 1 )
  {
    v44 = (__int64 *)*((_QWORD *)this + 816);
    if ( !(((__int64)v44 - *((_QWORD *)this + 815)) >> 3) )
      break;
    v51 = *((_QWORD *)this + 817);
    v52 = 0;
    *((_QWORD *)this + 817) = 0LL;
    *((_QWORD *)this + 816) = 0LL;
    v53 = (__int64 *)*((_QWORD *)this + 815);
    v120[0] = v53;
    *((_QWORD *)this + 815) = 0LL;
    v120[1] = v44;
    v120[2] = v51;
    while ( v53 != v44 )
    {
      v54 = *v53;
      if ( (*(_BYTE *)(*v53 + 96) & 0x20) != 0 )
      {
        v131 = 0LL;
        v130 = 0LL;
        v55 = CVisualTreeIterator::WalkSubtree<CInputSinkContext>(v121, v54, v54, v121);
        v52 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x4Au, 0LL);
LABEL_86:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0xE8Du, 0LL);
          std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy((__int64)v120);
          goto LABEL_65;
        }
      }
      ++v53;
    }
    if ( v52 < 0 )
      goto LABEL_86;
    std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy((__int64)v120);
  }
LABEL_65:
  v45 = lpMem;
  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v45);
  }
  v46 = v117;
  if ( v117 )
    CDebugVisualImage::LockAndRead(v117);
  *((_DWORD *)this + 1428) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)this + 713);
  v47 = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !v47 )
  {
    v62 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v62 || (v63 = CThreadContext::CThreadContext(v62), (v47 = v63) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)0x8007000ELL,
        v110);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v63);
  }
  --v47[10];
  if ( *((_BYTE *)this + 6488) )
  {
    v48 = *(CGlobalMit **)(*((_QWORD *)this + 79) + 24LL);
    if ( v48 )
    {
      v49 = *(void (**)(void))(*(_QWORD *)v48 + 16LL);
      if ( (char *)v49 == (char *)CGlobalMit::RequestCursorUpdate )
        CGlobalMit::RequestCursorUpdate(v48);
      else
        v49();
    }
    *((_BYTE *)this + 6488) = 0;
  }
  if ( dword_180405170 )
    SetEvent(CManipulationManager::s_rghWaitEvents);
  if ( v46 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v46);
  return (unsigned int)v14;
}
