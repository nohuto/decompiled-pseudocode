/*
 * XREFs of ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800BA8B0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009C50 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800193E0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x18001DF00 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022190 (-IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180024410 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026030 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800577E0 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180096CC0 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x180096F10 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180097160 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18009B3F0 (-AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18009BA30 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800CF300 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800D1450 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180107B68 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18010ACD0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18010AE60 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18010B828 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18010B864 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x18010BA24 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x18012B5F0 (-HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18012B6A0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?pop_back@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18012D198 (-pop_back@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPr.c)
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x18012D340 (--1CBspPreComputeHelper@@QEAA@XZ.c)
 *     ?GetParent@SubTreeContext@CPreComputeContext@@AEBAPEAVCVisual@@PEAV3@@Z @ 0x18012D660 (-GetParent@SubTreeContext@CPreComputeContext@@AEBAPEAVCVisual@@PEAV3@@Z.c)
 *     ?GetContentAsPrimitiveGroupNoRef@CVisual@@QEBA_NPEAPEAVCPrimitiveGroup@@@Z @ 0x18012D680 (-GetContentAsPrimitiveGroupNoRef@CVisual@@QEBA_NPEAPEAVCPrimitiveGroup@@@Z.c)
 *     ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x18012D6F0 (-HasAntialiasedContent@CVisual@@MEBA_NXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x18012E924 (-HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18018C520 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801963F0 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801B4C20 (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ @ 0x1801BF270 (-ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ.c)
 *     ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ @ 0x1801BF310 (-ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1801D9D60 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UtagWINDOW_INPUTSINK_HINT@@$0A@@@QEAAJPEFBUtagWINDOW_INPUTSINK_HINT@@I@Z @ 0x1801DDF80 (-AddMultipleAndSet@-$DynArray@UtagWINDOW_INPUTSINK_HINT@@$0A@@@QEAAJPEFBUtagWINDOW_INPUTSINK_HIN.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801DE534 (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x1801DFF40 (-AddMultipleAndSet@-$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INP.c)
 *     ??1CBspPolygonListBuilder@@QEAA@XZ @ 0x1801EC4BC (--1CBspPolygonListBuilder@@QEAA@XZ.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x1801FC43C (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@Z @ 0x180253440 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18025851C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ??4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x18025AE38 (--4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     IsNotifyInputSinkParentedPresent @ 0x18025D410 (IsNotifyInputSinkParentedPresent.c)
 *     IsNotifyInputSinkTransformChangedPresent @ 0x18025D464 (IsNotifyInputSinkTransformChangedPresent.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x18029A7E0 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::PostSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 *v3; // r14
  __int64 v4; // r13
  __int64 v5; // rdi
  CBspPreComputeHelper *v6; // r12
  __int64 v7; // rsi
  unsigned __int8 (__fastcall *v10)(const struct CVisualTree *); // rax
  struct CPrimitiveGroup *v11; // r15
  __int64 v12; // rax
  char v13; // al
  _DWORD *v14; // r9
  int v15; // r8d
  unsigned int v16; // edx
  _BYTE *v17; // rcx
  unsigned int ii; // eax
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // edx
  int v25; // ecx
  __int64 v26; // rbx
  __int64 v27; // r12
  CPreComputeContext *v28; // r15
  unsigned __int8 v29; // r9
  _DWORD *v30; // r8
  unsigned int v31; // edx
  _BYTE *v32; // rcx
  unsigned int mm; // eax
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  struct CPrimitiveGroup *v39; // rax
  struct CPrimitiveGroup *v40; // rbx
  _DWORD *v41; // r8
  CBspPreComputeHelper *v42; // rbx
  CVisualTree *v43; // rcx
  __int64 v45; // r15
  _QWORD *v46; // rdi
  struct CVisual *Parent; // rax
  struct CVisual *v48; // r15
  char v49; // r12
  int v50; // eax
  __int64 v51; // r8
  int v52; // edi
  unsigned __int8 v53; // r9
  int *v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  unsigned int v57; // ebx
  int v58; // ebx
  char (__fastcall *v59)(CSpriteVisual *); // rax
  int v60; // r15d
  char HasNonEmptyContent; // al
  bool (__fastcall *v62)(CVisual *__hidden); // rax
  bool ContentAsPrimitiveGroupNoRef; // al
  char (__fastcall *v64)(CSpriteVisual *); // rax
  char HasAntialiasedContent; // al
  __int64 v66; // rcx
  _DWORD *v67; // r8
  unsigned int v68; // edx
  _BYTE *v69; // rcx
  unsigned int n; // eax
  __int64 v71; // rcx
  __int64 *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  bool v75; // zf
  __int64 v76; // rax
  int v77; // eax
  float v78; // xmm6_4
  float v79; // xmm7_4
  float v80; // xmm8_4
  int v81; // ecx
  unsigned int v82; // edx
  float v83; // xmm0_4
  unsigned int v84; // eax
  unsigned int v85; // ecx
  float v86; // xmm0_4
  float v87; // xmm0_4
  float v88; // xmm0_4
  float v89; // xmm0_4
  float v90; // xmm1_4
  ULONGLONG v91; // r8
  __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  __int64 v94; // r9
  CBspPreComputeHelper *v95; // rsi
  ULONGLONG v96; // rbx
  ULONGLONG v97; // rdi
  CBspPreComputeHelper *v98; // rbx
  void *v99; // rdi
  void *v100; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v102; // rax
  bool v103; // al
  _DWORD *v104; // r8
  char v105; // r12
  const struct CVisual *TransformParent; // r15
  unsigned int v107; // edx
  _BYTE *v108; // rcx
  unsigned int m; // eax
  __int64 v110; // rcx
  _QWORD **v111; // rcx
  _QWORD *v112; // rcx
  bool *v113; // r8
  __int64 v114; // r8
  __int64 v115; // rcx
  _BYTE *v116; // rdx
  unsigned int i; // eax
  __int64 ****v118; // rcx
  __int64 ***v119; // rcx
  __int64 **j; // rax
  int v121; // eax
  int *v122; // r8
  unsigned int v123; // edx
  _BYTE *v124; // rcx
  unsigned int jj; // eax
  __int64 v126; // rcx
  int *v127; // rcx
  _QWORD *v128; // rcx
  _QWORD *kk; // rax
  int v130; // eax
  int v131; // eax
  unsigned int v132; // edx
  _BYTE *v133; // rcx
  unsigned int nn; // eax
  __int64 v135; // rcx
  _QWORD *v136; // rbx
  __int64 v137; // rcx
  __int64 (__fastcall *v138)(); // rax
  int v139; // eax
  unsigned int v140; // ebx
  __int64 v141; // rbx
  __int64 v142; // r15
  __int64 (__fastcall *v143)(CVisual *, struct CPreComputeContext::SubTreeContext *); // rax
  __int64 v144; // rax
  __int64 v145; // rdx
  int v146; // eax
  unsigned int v147; // edi
  int v148; // eax
  __int128 v149; // xmm0
  int v150; // eax
  __int64 v151; // rcx
  unsigned int v152; // edi
  unsigned __int8 (__fastcall *v153)(__int64, __int64); // rax
  CMaskBrush *v154; // rcx
  __int64 (*v155)(void); // rax
  char ShouldSnapToPixels; // al
  const struct CVisual **TopByReference; // rax
  __int64 v158; // r8
  const struct CVisual *v159; // rdx
  int v160; // eax
  int v161; // eax
  unsigned int v162; // ebx
  unsigned int *v163; // r12
  __int64 v164; // rdx
  unsigned int k; // ebx
  __int64 v166; // rax
  __int64 v167; // rax
  _BYTE *v168; // rcx
  int v169; // eax
  unsigned int v170; // r15d
  int v171; // eax
  unsigned int v172; // ebx
  __int64 (__fastcall *v173)(); // rax
  int v174; // r12d
  int Count; // r13d
  char v176; // di
  struct CTreeEffect *(__fastcall *v177)(CLayerVisual *); // rax
  __int64 v178; // rax
  bool *v179; // r8
  CVisual ***v180; // rbx
  struct CPrimitiveGroup *v181; // rax
  bool v182; // r13
  struct CTreeEffect *(__fastcall *v183)(CLayerVisual *); // rax
  __int64 v184; // rax
  bool v185; // al
  struct CEffect *v186; // rax
  struct CEffect *v187; // rax
  __int64 v188; // r8
  int v189; // eax
  _QWORD *v190; // rdx
  __int64 (__fastcall *v191)(); // rax
  struct CEffect *EffectInternal; // r15
  bool (__fastcall *v193)(CWindowNode *__hidden); // rax
  __int64 (__fastcall *v194)(); // rax
  int v195; // eax
  CVisualTreePath *v196; // rbx
  DwmDbg::DbgString *v197; // rax
  __int64 v198; // r8
  unsigned __int8 v199; // [rsp+30h] [rbp-188h]
  struct CPrimitiveGroup *v201; // [rsp+40h] [rbp-178h] BYREF
  CBspPreComputeHelper *v202; // [rsp+48h] [rbp-170h]
  _DWORD v203[2]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v204; // [rsp+58h] [rbp-160h] BYREF
  __int64 v205; // [rsp+70h] [rbp-148h] BYREF
  _OWORD v206[4]; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v207[4]; // [rsp+C0h] [rbp-F8h] BYREF
  int v208; // [rsp+C4h] [rbp-F4h]
  const struct CVisual *v209; // [rsp+C8h] [rbp-F0h]
  __int64 v210; // [rsp+D0h] [rbp-E8h]
  int v211; // [rsp+D8h] [rbp-E0h]
  int v212; // [rsp+DCh] [rbp-DCh]
  void *v213; // [rsp+E0h] [rbp-D8h] BYREF
  int v214; // [rsp+E8h] [rbp-D0h]
  __int64 v215; // [rsp+ECh] [rbp-CCh]
  int v216; // [rsp+F4h] [rbp-C4h]
  __int64 v217; // [rsp+F8h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR v218; // [rsp+100h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v219; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v220; // [rsp+120h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR v221; // [rsp+130h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 189);
  v6 = (CBspPreComputeHelper *)(*((_QWORD *)this + 1) - 352LL);
  v7 = *((_QWORD *)this + 188);
  v10 = *(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL);
  v218.Ptr = (ULONGLONG)a2;
  v202 = v6;
  v199 = 0;
  if ( v10(a2) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    {
      v4 = v7 + 328;
    }
    else
    {
      v114 = *(_QWORD *)(v7 + 232);
      if ( *(int *)v114 < 0 )
      {
        v115 = *(unsigned int *)(v114 + 4);
        v116 = (_BYTE *)(v114 + 8);
        for ( i = 0; i < (unsigned int)v115; ++v116 )
        {
          if ( *v116 == 1 )
            break;
          ++i;
        }
        v118 = i >= (unsigned int)v115 ? 0LL : (__int64 ****)(v115 + 15 + v114 + 8LL * i - (((_BYTE)v115 + 15) & 7));
        v119 = *v118;
        if ( v119 )
        {
          for ( j = *v119; j != (__int64 **)v119; j = (__int64 **)*j )
          {
            if ( j[4] == (__int64 *)a2 )
            {
              v4 = (__int64)(j - 43);
              break;
            }
          }
        }
      }
    }
  }
  *a3 = 1;
  if ( *((_BYTE *)v6 + 345) )
  {
    v91 = *(_QWORD *)this;
    v92 = 0x2E8BA2E8BA2E8BA3LL * ((*((_QWORD *)this + 1) - *(_QWORD *)this - 352LL) >> 5);
    v93 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5);
    v94 = v92 + 1;
    if ( v92 + 1 <= v93 )
    {
      v95 = (CBspPreComputeHelper *)(v91 + 32 * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5));
      if ( v94 != v93 )
      {
        if ( v92 && (!v91 || v92 < 0 || v93 < v92) )
          _invalid_parameter_noinfo_noreturn();
        *(_QWORD *)&v219.Size = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5);
        v220 = v92;
        v96 = v91 + 352 * v94;
        v219.Ptr = v91;
        v97 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *> &,__int64>(
                &v219,
                0x2E8BA2E8BA2E8BA3LL * ((__int64)((__int64)v95 - v96) >> 5))
            - v96;
        while ( (CBspPreComputeHelper *)v96 != v95 )
        {
          CPreComputeContext::SubTreeContext::operator=(v97 + v96, v96);
          v96 += 352LL;
        }
      }
      v98 = (CBspPreComputeHelper *)((char *)v95 - 352);
      do
      {
        v99 = (void *)*((_QWORD *)v98 + 37);
        if ( v99 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v99);
        }
        v100 = (void *)*((_QWORD *)v98 + 34);
        if ( v100 )
        {
          v102 = GetProcessHeap();
          HeapFree(v102, 0, v100);
        }
        CBspPreComputeHelper::~CBspPreComputeHelper(v98);
        v98 = (CBspPreComputeHelper *)((char *)v98 + 352);
      }
      while ( v98 != v95 );
      *((_QWORD *)this + 1) -= 352LL;
      return 0LL;
    }
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_375;
  }
  v11 = (CPreComputeContext *)((char *)this + 1176);
  v12 = (__int64)(*(_QWORD *)(v7 + 280) - *(_QWORD *)(v7 + 272)) >> 4;
  v201 = (CPreComputeContext *)((char *)this + 1176);
  if ( (_DWORD)v12 || (unsigned int)((__int64)(*(_QWORD *)(v7 + 304) - *(_QWORD *)(v7 + 296)) >> 4) )
  {
    v203[0] = 0;
    v163 = v203;
    v203[1] = 1;
    while ( v163 != (unsigned int *)&v204 )
    {
      v164 = *v163;
      for ( k = 0; k < (unsigned int)CVisual::GetLightsCount(v7, v164); ++k )
      {
        if ( (_DWORD)v164 )
          v166 = *(_QWORD *)(v7 + 304) - *(_QWORD *)(v7 + 296);
        else
          v166 = *(_QWORD *)(v7 + 280) - *(_QWORD *)(v7 + 272);
        if ( k >= (unsigned int)(v166 >> 4) )
        {
          v168 = 0LL;
        }
        else
        {
          if ( (_DWORD)v164 )
            v167 = *(_QWORD *)(v7 + 296);
          else
            v167 = *(_QWORD *)(v7 + 272);
          v168 = *(_BYTE **)(v167 + 16LL * k);
        }
        if ( v168[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, ULONGLONG, __int64))(*(_QWORD *)v168 + 240LL))(
                 v168,
                 v218.Ptr,
                 v7) )
          {
            v169 = CLightStack::Pop(v11);
            v170 = v169;
            if ( v169 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v169, 0x69u, 0LL);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x362,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)v170);
              return v170;
            }
            v11 = v201;
          }
          v164 = *v163;
        }
      }
      ++v163;
    }
  }
  v13 = *(_BYTE *)(v7 + 96);
  if ( (v13 & 1) != 0 )
  {
    v104 = *(_DWORD **)(v7 + 232);
    v105 = 0;
    v199 = 1;
    TransformParent = 0LL;
    if ( (*v104 & 0x2000000) != 0 )
    {
      v107 = v104[1];
      v108 = v104 + 2;
      for ( m = 0; m < v107; ++v108 )
      {
        if ( *v108 == 7 )
          break;
        ++m;
      }
      v110 = (unsigned int)v104[1];
      v111 = m >= (unsigned int)v110 ? 0LL : (_QWORD **)((char *)v104 + v110 + 8LL * m - (((_BYTE)v110 + 15) & 7) + 15);
      v112 = *v111;
      if ( v112 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v112 + 184LL))(*v112) )
        {
          TransformParent = CVisual::GetTransformParent((CVisual *)v7, (CVisual **)v218.Ptr, v113);
          v180 = *(CVisual ****)this;
          v181 = (struct CPrimitiveGroup *)*((_QWORD *)this + 1);
          v201 = v181;
          while ( v180 != (CVisual ***)v181 )
          {
            if ( TransformParent != CVisual::GetTransformParent((CVisual *)v7, v180[41], v179) )
            {
              v105 = 1;
              break;
            }
            v181 = v201;
            v180 += 44;
          }
        }
      }
    }
    LODWORD(a3) = CVisual::ConvertInnerToOuterBounds(
                    (CVisual *)v7,
                    (const struct CVisualTree *)v218.Ptr,
                    TransformParent,
                    v105);
    if ( (int)a3 >= 0 )
    {
      v13 = *(_BYTE *)(v7 + 96) & 0xFE;
      *(_BYTE *)(v7 + 96) = v13;
      goto LABEL_8;
    }
LABEL_375:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x381,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)a3);
    return (unsigned int)a3;
  }
LABEL_8:
  if ( (v13 & 0x10) == 0 )
    goto LABEL_9;
  v58 = (int)(*(_DWORD *)(v7 + 96) << 14) >> 22;
  v59 = *(char (__fastcall **)(CSpriteVisual *))(*(_QWORD *)v7 + 264LL);
  v60 = v58;
  if ( (char *)v59 == (char *)CWindowNode::HasNonEmptyContent )
  {
    HasNonEmptyContent = CWindowNode::HasNonEmptyContent((CWindowNode *)v7);
  }
  else if ( (char *)v59 == (char *)CVisual::HasNonEmptyContent )
  {
    HasNonEmptyContent = CVisual::HasNonEmptyContent((CVisual *)v7);
  }
  else if ( v59 == CSpriteVisual::HasNonEmptyContent )
  {
    HasNonEmptyContent = CSpriteVisual::HasNonEmptyContent((CSpriteVisual *)v7);
  }
  else
  {
    HasNonEmptyContent = v59((CSpriteVisual *)v7);
  }
  if ( HasNonEmptyContent )
  {
    if ( (v58 & 1) != 0 )
    {
      v58 |= 0x200u;
    }
    else
    {
      v58 |= 1u;
      if ( !CVisual::HasSingleD2DBitmapOrPrimitiveGroup((CVisual *)v7) )
        v58 = v60 | 0x201;
    }
  }
  if ( (**(_DWORD **)(v7 + 232) & 0x800000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)v7);
    v194 = *(__int64 (__fastcall **)())(*(_QWORD *)EffectInternal + 64LL);
    if ( v194 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
    {
      if ( !CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType((__int64)EffectInternal, 173) )
      {
LABEL_360:
        v191 = *(__int64 (__fastcall **)())(*(_QWORD *)EffectInternal + 64LL);
        if ( v191 != CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
          && !((unsigned __int8 (__fastcall *)(struct CEffect *, __int64))v191)(EffectInternal, 57LL) )
        {
          goto LABEL_86;
        }
        EffectInternal = (struct CEffect *)*((_QWORD *)EffectInternal + 11);
      }
    }
    else if ( !((unsigned __int8 (__fastcall *)(struct CEffect *, __int64))v194)(EffectInternal, 173LL) )
    {
      goto LABEL_360;
    }
    if ( EffectInternal )
      v58 |= 2u;
  }
LABEL_86:
  v62 = *(bool (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v7 + 344LL);
  if ( v62 == CVisual::HasAtlasedContent )
  {
    v201 = 0LL;
    ContentAsPrimitiveGroupNoRef = CVisual::GetContentAsPrimitiveGroupNoRef((CVisual *)v7, &v201);
  }
  else
  {
    ContentAsPrimitiveGroupNoRef = v62((CVisual *)v7);
  }
  if ( ContentAsPrimitiveGroupNoRef )
    v58 |= 4u;
  v64 = *(char (__fastcall **)(CSpriteVisual *))(*(_QWORD *)v7 + 352LL);
  if ( (char *)v64 == (char *)CVisual::HasAntialiasedContent )
  {
    HasAntialiasedContent = CVisual::HasAntialiasedContent((CVisual *)v7);
  }
  else if ( v64 == CSpriteVisual::HasAntialiasedContent )
  {
    HasAntialiasedContent = CSpriteVisual::HasAntialiasedContent((CSpriteVisual *)v7);
  }
  else
  {
    HasAntialiasedContent = v64((CSpriteVisual *)v7);
  }
  if ( HasAntialiasedContent )
    v58 |= 8u;
  v66 = *(_QWORD *)(v7 + 256);
  if ( v66 )
  {
    v153 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 64LL);
    if ( (char *)v153 == (char *)CColorBrush::IsOfType )
    {
      if ( !CBrush::IsOfType(v66, 17) )
        goto LABEL_95;
    }
    else if ( !v153(v66, 17LL) )
    {
      goto LABEL_95;
    }
    v154 = *(CMaskBrush **)(v7 + 256);
    v155 = *(__int64 (**)(void))(*(_QWORD *)v154 + 328LL);
    if ( (char *)v155 == (char *)CSurfaceBrush::ShouldSnapToPixels )
    {
      ShouldSnapToPixels = *((_BYTE *)v154 + 200);
    }
    else if ( (char *)v155 == (char *)CMaskBrush::ShouldSnapToPixels )
    {
      ShouldSnapToPixels = CMaskBrush::ShouldSnapToPixels(v154);
    }
    else if ( (char *)v155 == (char *)CEffectBrush::ShouldSnapToPixels )
    {
      ShouldSnapToPixels = CEffectBrush::ShouldSnapToPixels(v154);
    }
    else
    {
      ShouldSnapToPixels = v155();
    }
    if ( ShouldSnapToPixels )
      v58 |= 0x10u;
  }
LABEL_95:
  v67 = *(_DWORD **)(v7 + 232);
  if ( (*v67 & 0x1000000) != 0 )
  {
    v68 = v67[1];
    v69 = v67 + 2;
    for ( n = 0; n < v68; ++v69 )
    {
      if ( *v69 == 8 )
        break;
      ++n;
    }
    v71 = (unsigned int)v67[1];
    if ( n >= (unsigned int)v71 )
      v72 = 0LL;
    else
      v72 = (__int64 *)((char *)v67 + 8LL * n - (((_BYTE)v71 + 15) & 7) + v71 + 15);
    v73 = *v72;
    if ( v73 )
    {
      v74 = *(_QWORD *)(v73 + 112);
      if ( v74 )
      {
        if ( *(_QWORD *)(v74 + 64) )
          v58 |= 0x20u;
      }
    }
  }
  v75 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftwareXORCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SoftwareXORCursor>::GetImpl'::`2'::impl) == 0;
  v76 = *(_QWORD *)v7;
  if ( v75 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(v76 + 64))(v7, 49LL)
      || !CCursorVisual::HasVisibleCursor((CCursorVisual *)v7) )
    {
      goto LABEL_155;
    }
LABEL_154:
    v58 |= 0x80u;
    goto LABEL_155;
  }
  v193 = *(bool (__fastcall **)(CWindowNode *__hidden))(v76 + 272);
  if ( v193 == CWindowNode::HasVisibleCursor )
  {
    if ( !*(_BYTE *)(v7 + 746) )
      goto LABEL_155;
    v103 = CWindowNode::HasNonEmptyContent((CWindowNode *)v7);
  }
  else
  {
    v103 = v193((CWindowNode *)v7);
  }
  if ( v103 )
    goto LABEL_154;
LABEL_155:
  *(_DWORD *)(v7 + 96) = (v58 << 8) ^ (*(_DWORD *)(v7 + 96) ^ (v58 << 8)) & 0xFFFC00FF;
LABEL_9:
  if ( v5 )
  {
    v14 = *(_DWORD **)(v7 + 232);
    v15 = 0;
    if ( (*v14 & 0x1000000) != 0 )
    {
      v16 = v14[1];
      v17 = v14 + 2;
      for ( ii = 0; ii < v16; ++v17 )
      {
        if ( *v17 == 8 )
          break;
        ++ii;
      }
      v19 = (unsigned int)v14[1];
      if ( ii >= (unsigned int)v19 )
        v20 = 0LL;
      else
        v20 = (__int64 *)((char *)v14 + v19 + 8LL * ii - (((_BYTE)v19 + 15) & 7) + 15);
      v21 = *v20;
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 112);
        if ( v22 )
        {
          if ( *(_QWORD *)(v22 + 64) )
            v15 = 64;
        }
      }
    }
    if ( (*(_BYTE *)(v7 + 106) & 8) != 0 )
      v15 = 64;
    v23 = *(_DWORD *)(v7 + 96);
    if ( (v23 & 0xC0000) != 0 )
      v15 |= 0x100u;
    v24 = *(_DWORD *)(v5 + 96);
    v25 = v15 | 0x200;
    if ( (v24 & v23 & 0x100) == 0 )
      v25 = v15;
    *(_DWORD *)(v5 + 96) = (v24 | v23 | (v25 << 8)) ^ (v24 ^ (v24 | v23 | (v25 << 8))) & 0xFFFC00FF;
    if ( (v24 & 1) != 0 )
    {
      v77 = (*(float *)(v5 + 196) <= *(float *)(v5 + 192)) + 1;
      v78 = *(float *)(v5 + 176);
      v79 = *(float *)(v5 + 180);
      v80 = *(float *)(v5 + 184);
      if ( v80 > v78 )
        v77 = *(float *)(v5 + 196) <= *(float *)(v5 + 192);
      v81 = 0;
      v82 = v77 + 1;
      v83 = *(float *)(v7 + 152);
      if ( *(float *)(v5 + 188) > v79 )
        v82 = v77;
      if ( *(float *)(v7 + 172) <= *(float *)(v7 + 168) )
        v81 = 1;
      v84 = v81 + 1;
      if ( *(float *)(v7 + 160) > v83 )
        v84 = v81;
      v85 = v84 + 1;
      if ( *(float *)(v7 + 164) > *(float *)(v7 + 156) )
        v85 = v84;
      if ( v82 > 1 )
      {
        if ( v85 > 1 )
        {
          *(_QWORD *)(v5 + 192) = 0LL;
          *(_QWORD *)(v5 + 184) = 0LL;
          *(_QWORD *)(v5 + 176) = 0LL;
        }
        else
        {
          *(_OWORD *)(v5 + 176) = *(_OWORD *)(v7 + 152);
          *(_QWORD *)(v5 + 192) = *(_QWORD *)(v7 + 168);
        }
      }
      else if ( v85 <= 1 )
      {
        if ( v78 > v83 )
          *(float *)(v5 + 176) = v83;
        v86 = *(float *)(v7 + 156);
        if ( v79 > v86 )
          *(float *)(v5 + 180) = v86;
        v87 = *(float *)(v7 + 160);
        if ( v87 > v80 )
          *(float *)(v5 + 184) = v87;
        v88 = *(float *)(v7 + 164);
        if ( v88 > *(float *)(v5 + 188) )
          *(float *)(v5 + 188) = v88;
        v89 = *(float *)(v7 + 172);
        if ( v89 > *(float *)(v5 + 196) )
          *(float *)(v5 + 196) = v89;
        v90 = *(float *)(v7 + 168);
        if ( *(float *)(v5 + 192) > v90 )
          *(float *)(v5 + 192) = v90;
      }
    }
  }
  if ( (*(_BYTE *)(v7 + 107) & 4) != 0 )
  {
    v139 = CPreComputeContext::ProcessPostSubgraphWindowBackdropInput(this, (struct CVisual *)v7);
    v140 = v139;
    if ( v139 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x403,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v139);
      return v140;
    }
  }
  v26 = *(_QWORD *)this;
  v27 = *((_QWORD *)this + 1);
  while ( v26 != v27 )
  {
    v45 = *(_QWORD *)(v26 + 328);
    v46 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 184LL))(v45) )
    {
      v46 = (_QWORD *)(v7 + 328);
    }
    else
    {
      v122 = *(int **)(v7 + 232);
      if ( *v122 < 0 )
      {
        v123 = v122[1];
        v124 = v122 + 2;
        for ( jj = 0; jj < v123; ++v124 )
        {
          if ( *v124 == 1 )
            break;
          ++jj;
        }
        v126 = (unsigned int)v122[1];
        v127 = jj >= (unsigned int)v126 ? 0LL : (int *)((char *)v122 + v126 + 8LL * jj - (((_BYTE)v126 + 15) & 7) + 15);
        v128 = *(_QWORD **)v127;
        if ( v128 )
        {
          for ( kk = (_QWORD *)*v128; kk != v128; kk = (_QWORD *)*kk )
          {
            if ( kk[4] == v45 )
            {
              v46 = kk - 43;
              break;
            }
          }
        }
      }
    }
    if ( *((_BYTE *)v46 + 8) )
    {
      v121 = *(_DWORD *)(v26 + 280);
      if ( v121 )
        *(_DWORD *)(v26 + 280) = v121 - 1;
      *((_BYTE *)v46 + 8) = 0;
    }
    if ( *((_BYTE *)v46 + 9) )
    {
      v130 = *(_DWORD *)(v26 + 304);
      if ( v130 )
        *(_DWORD *)(v26 + 304) = v130 - 1;
      *((_BYTE *)v46 + 9) = 0;
    }
    v26 += 352LL;
  }
  v28 = this;
  if ( (*(_BYTE *)(v7 + 104) & 4) != 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 1128);
  if ( (*(_BYTE *)(v7 + 104) & 2) != 0 )
  {
    v148 = *((_DWORD *)this + 278);
    if ( v148 )
      *((_DWORD *)this + 278) = v148 - 1;
  }
  if ( (*(_BYTE *)(v7 + 104) & 8) != 0 )
  {
    v131 = *((_DWORD *)this + 290);
    if ( v131 )
      *((_DWORD *)this + 290) = v131 - 1;
  }
  if ( (*(_BYTE *)(v7 + 104) & 0x10) != 0 )
    *((_BYTE *)this + 1568) = *((_BYTE *)this + 1568) == 0;
  if ( (*(_BYTE *)(v7 + 107) & 1) != 0 )
  {
    v161 = CPreComputeContext::ProcessPostSubgraphBackdropInput(this, (struct CVisual *)v7, v199);
    v162 = v161;
    if ( v161 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x433,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v161);
      return v162;
    }
  }
  if ( (**(_DWORD **)(v7 + 232) & 0x400000) != 0 )
  {
    v171 = CPreComputeContext::ProcessPostSubgraphWindowBackgroundTreatment(this, (struct CVisual *)v7, v199);
    v172 = v171;
    if ( v171 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x438,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v171);
      return v172;
    }
  }
  if ( (*(_BYTE *)(v7 + 96) & 4) != 0 )
  {
    --*((_DWORD *)v202 + 85);
    v141 = *(_QWORD *)this;
    v142 = *((_QWORD *)this + 1);
    while ( v141 != v142 )
    {
      if ( !*(_DWORD *)(v141 + 340) && !*(_BYTE *)(*(_QWORD *)(v141 + 320) + 2324LL) )
      {
        v143 = *(__int64 (__fastcall **)(CVisual *, struct CPreComputeContext::SubTreeContext *))(*(_QWORD *)v7 + 216LL);
        if ( v143 == CVisual::AddBoundsToDirtyRegion )
        {
          v144 = *(_QWORD *)(v141 + 328);
          v145 = v144 + 80;
          if ( v7 != *(_QWORD *)(v144 + 72) )
            v145 = v7 + 152;
          v146 = CPreComputeContext::SubTreeContext::AddRectToDirtyRegion(v141, v145, v7);
          v147 = v146;
          if ( v146 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xC9,
              (int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\Visual.h",
              (const char *)(unsigned int)v146);
LABEL_266:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4C3,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
              (const char *)v147);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x440,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
              (const char *)v147);
            return v147;
          }
          v147 = 0;
        }
        else
        {
          v147 = v143((CVisual *)v7, (struct CPreComputeContext::SubTreeContext *)v141);
        }
        if ( (v147 & 0x80000000) != 0 )
          goto LABEL_266;
      }
      v141 += 352LL;
    }
    if ( dword_180404D50 && (*(int *)(v7 + 264) > 0 || *(int *)(v7 + 268) > 0) )
    {
      DwmDbg::DbgString::DbgString((char **)&v201, word_180336D88);
      v196 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)v207, (const struct CVisualTree *)v218.Ptr);
      v197 = DwmDbg::DbgString::DbgString((char **)&v204, "PreCompute-AddedDirtyRectInPostSubgraph");
      DwmDbg::Backdrops::LogTreeWalkEtwEvent(v197, v7, v218.Ptr, v196);
      detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)v207);
    }
    v28 = this;
  }
  if ( v4 )
  {
    v29 = *(_BYTE *)(v7 + 104);
    v204 = 0LL;
    if ( (v29 & 0x40) != 0 && v29 >> 7 != (((*(int *)(v7 + 96) >> 8) & 0x20) != 0) )
    {
      v53 = (*(_DWORD *)(v7 + 96) >> 6) ^ ((*(_DWORD *)(v7 + 96) >> 6) ^ v29) & 0x7F;
      *(_BYTE *)(v7 + 104) = v53;
      v54 = *(int **)(v7 + 224);
      v55 = v54[1] >= 0
          ? 0LL
          : *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot((CSparseStorage::AllocatedStorage *)v54, 1)
                      + 4);
      *(_QWORD *)&v204 = v55;
      DWORD2(v204) = v53 >> 7;
      v56 = DynArray<tagWINDOW_INPUTSINK_HINT,0>::AddMultipleAndSet((char *)v28 + 1432, &v204);
      v57 = v56;
      if ( v56 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x456,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
          (const char *)(unsigned int)v56);
        return v57;
      }
    }
    v30 = *(_DWORD **)(v7 + 232);
    if ( (*v30 & 0x1000000) != 0 )
    {
      v31 = v30[1];
      v32 = v30 + 2;
      for ( mm = 0; mm < v31; ++v32 )
      {
        if ( *v32 == 8 )
          break;
        ++mm;
      }
      v34 = (unsigned int)v30[1];
      v35 = mm >= (unsigned int)v34 ? 0LL : (__int64 *)((char *)v30 + 8LL * mm - (((_BYTE)v34 + 15) & 7) + v34 + 15);
      v36 = *v35;
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 112);
        v38 = 0LL;
        if ( v37 )
          v38 = *(_QWORD *)(v37 + 64);
        if ( v38 )
        {
          if ( ((*(_BYTE *)(v7 + 104) & 0x20) != 0 || *((_BYTE *)v28 + 1568))
            && (unsigned __int8)IsNotifyInputSinkParentedPresent(v37) )
          {
            v189 = *((_DWORD *)v28 + 290);
            v190 = 0LL;
            if ( v189 )
              v190 = (_QWORD *)(*((_QWORD *)v28 + 144) + 8LL * (unsigned int)(v189 - 1));
            NotifyInputSinkParented(v38, *v190);
          }
          if ( (*(_BYTE *)(v7 + 104) & 0x20) != 0
            || *(_QWORD *)(v4 + 224) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 248) + 24LL) + 888LL) )
          {
            v149 = *(_OWORD *)(v4 + 272);
            v205 = v38;
            v206[0] = v149;
            v206[1] = *(_OWORD *)(v4 + 288);
            v206[2] = *(_OWORD *)(v4 + 304);
            v206[3] = *(_OWORD *)(v4 + 320);
            v150 = DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet((char *)v28 + 1464, &v205);
            v152 = v150;
            if ( v150 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x475,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)(unsigned int)v150);
              return v152;
            }
            if ( (unsigned __int8)IsNotifyInputSinkTransformChangedPresent(v151) )
              NotifyInputSinkTransformChanged(v38, v206);
          }
        }
      }
    }
    *(_BYTE *)(v7 + 104) &= ~0x20u;
  }
  v39 = (struct CPrimitiveGroup *)*((_QWORD *)v28 + 1);
  v40 = *(struct CPrimitiveGroup **)v28;
  v201 = v39;
  while ( v40 != v39 )
  {
    Parent = CPreComputeContext::SubTreeContext::GetParent(v40, (struct CVisual *)v7);
    v48 = Parent;
    if ( !*((_DWORD *)v40 + 20) )
      goto LABEL_76;
    if ( !Parent || *((_DWORD *)Parent + 28) != 1 )
    {
      if ( !CVisual::IsPreserve3DRoot((CVisual *)v7, Parent) )
        goto LABEL_76;
      if ( !v48 )
        goto LABEL_69;
    }
    if ( *((_DWORD *)v48 + 28) == 1
      && ((v174 = *(_DWORD *)(v7 + 112),
           Count = CPtrArray<CVisual>::GetCount((_QWORD *)(v7 + 80)),
           (**(_DWORD **)(v7 + 232) & 0x800000) == 0)
       || (v187 = CVisual::GetEffectInternal((CVisual *)v7),
           !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v187 + 64LL))(v187, 60LL))
        ? (v176 = 0)
        : (v176 = 1),
          (v177 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)v7 + 224LL),
           v177 != CLayerVisual::GetTreeEffect)
        ? (v178 = (__int64)v177((CLayerVisual *)v7))
        : (v178 = *(_QWORD *)(v7 + 680)),
          v174 != 1 && Count || v176 || v178) )
    {
      v49 = 1;
    }
    else
    {
LABEL_69:
      v49 = 0;
    }
    v50 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(v40, (struct CVisual *)v7, v49);
    v52 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x180u, 0LL);
      goto LABEL_252;
    }
    if ( *(_DWORD *)(v7 + 112) == 1 )
    {
      v182 = v48 && *((_DWORD *)v48 + 28) == 1;
      v183 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)v7 + 224LL);
      if ( v183 == CLayerVisual::GetTreeEffect )
        v184 = *(_QWORD *)(v7 + 680);
      else
        v184 = (__int64)v183((CLayerVisual *)v7);
      v185 = 1;
      if ( !v184 )
      {
        if ( (**(_DWORD **)(v7 + 232) & 0x800000) == 0
          || (v186 = CVisual::GetEffectInternal((CVisual *)v7),
              !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v186 + 64LL))(v186, 60LL)) )
        {
          v185 = 0;
        }
      }
      if ( v182 )
      {
        if ( v185 )
          goto LABEL_248;
      }
      else if ( (unsigned int)CPtrArray<CVisual>::GetCount((_QWORD *)(v7 + 80)) )
      {
LABEL_248:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_P3D_BUILDING_BSPTREE_Stop,
            v51,
            1u,
            &v218);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_P3D_BUILDING_POLYGONLIST_Start,
              v198,
              1u,
              &v221);
        }
        v215 = 0LL;
        v213 = 0LL;
        v216 = 0;
        v212 = 1;
        v208 = 0;
        v209 = 0LL;
        v210 = 0LL;
        v214 = 0;
        v217 = v7;
        TopByReference = (const struct CVisual **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)v40);
        v159 = *TopByReference;
        if ( *TopByReference )
        {
          v209 = *TopByReference;
          v211 = 0;
          v160 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(
                   (__int64)v207,
                   (__int64)v159,
                   v158,
                   (__int64)v207);
          v52 = v160;
          if ( v160 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v160, 0x2Eu, 0LL);
            v208 = 0;
            v209 = 0LL;
            v210 = 0LL;
            v214 = 0;
            CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize((__int64)&v213);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x17u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x18Du, 0LL);
            operator delete(v213);
LABEL_252:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x486,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
              (const char *)(unsigned int)v52);
            return (unsigned int)v52;
          }
          v208 = 0;
          v209 = 0LL;
          v210 = 0LL;
          v214 = 0;
          CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize((__int64)&v213);
        }
        CBspPreComputeHelper::PopStacksForBspRootVisual(v40, v159);
        if ( *((_DWORD *)v40 + 20) )
        {
          if ( v49 )
          {
            v195 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(v40, (struct CVisual *)v7, 1);
            v52 = v195;
            if ( v195 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v195, 0x195u, 0LL);
              CBspPolygonListBuilder::~CBspPolygonListBuilder((CBspPolygonListBuilder *)v207);
              goto LABEL_252;
            }
          }
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_P3D_BUILDING_POLYGONLIST_Stop,
            v188,
            1u,
            &v219);
        operator delete(v213);
      }
    }
    if ( v48 && *((_DWORD *)v48 + 28) == 1 )
      CBspPreComputeHelper::PopStacksForBspChildVisual(v40, (const struct CVisual *)v7);
    if ( v52 < 0 )
      goto LABEL_252;
LABEL_76:
    v39 = v201;
    v40 = (struct CPrimitiveGroup *)((char *)v40 + 352);
  }
  if ( (*(_DWORD *)(v7 + 96) & 0x40000000) != 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 1080);
  v41 = *(_DWORD **)(v7 + 232);
  if ( (*v41 & 0x800000) == 0 )
  {
LABEL_55:
    v42 = v202;
    goto LABEL_56;
  }
  v132 = v41[1];
  v133 = v41 + 2;
  for ( nn = 0; nn < v132; ++v133 )
  {
    if ( *v133 == 9 )
      break;
    ++nn;
  }
  v135 = (unsigned int)v41[1];
  if ( nn < (unsigned int)v135 )
    v3 = (__int64 *)((char *)v41 + v135 + 8LL * nn - (((_BYTE)v135 + 15) & 7) + 15);
  v136 = (_QWORD *)*v3;
  v137 = *v3;
  v138 = *(__int64 (__fastcall **)())(*(_QWORD *)*v3 + 64LL);
  if ( v138 != CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
  {
    if ( ((unsigned __int8 (__fastcall *)(__int64, __int64))v138)(v137, 173LL) )
      goto LABEL_305;
LABEL_303:
    v173 = *(__int64 (__fastcall **)())(*v136 + 64LL);
    if ( v173 != CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
      && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v173)(v136, 57LL) )
    {
      goto LABEL_55;
    }
    v136 = (_QWORD *)v136[11];
    goto LABEL_305;
  }
  if ( !CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(v137, 173) )
    goto LABEL_303;
LABEL_305:
  v75 = v136 == 0LL;
  v42 = v202;
  if ( !v75 )
    --*((_DWORD *)v202 + 84);
LABEL_56:
  *(_BYTE *)(v7 + 104) &= 0xE0u;
  *(_BYTE *)(v7 + 96) = 0;
  v43 = (CVisualTree *)*((_QWORD *)v42 + 41);
  if ( *((_QWORD *)v43 + 9) == v7 )
  {
    CVisualTree::EndPreCompute(v43, 0);
    CBspPreComputeHelper::CleanupAfterWalking(v42);
    if ( *((_BYTE *)v42 + 344) )
    {
      CThreadContext::UnregisterGraphWalkRoot();
      *((_BYTE *)v42 + 344) = 0;
    }
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::pop_back(this);
  }
  return 0LL;
}
