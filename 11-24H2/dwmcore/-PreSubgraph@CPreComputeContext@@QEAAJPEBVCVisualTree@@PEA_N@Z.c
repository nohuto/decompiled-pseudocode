/*
 * XREFs of ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A2DA0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 * Callees:
 *     ?push_back@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUVisualTreePathUnit@CVisualTreePath@@@Z @ 0x180007E90 (-push_back@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUn.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180020830 (-AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x180032000 (-AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z.c)
 *     ?Has3DContent@CVisual@@IEBA_NXZ @ 0x180036430 (-Has3DContent@CVisual@@IEBA_NXZ.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180037500 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x180039AC0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18003BD60 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z @ 0x18008F500 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180092F70 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A0D70 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x1800BFEA0 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1@PEAVCMILMatrix@@@Z @ 0x1800C28B0 (-ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801550E0 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x180155658 (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x1801756FC (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180177658 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?PushLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x18017B830 (-PushLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801865D0 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 *     ?HasInputSink@CVisual@@QEBA_NXZ @ 0x1801992F0 (-HasInputSink@CVisual@@QEBA_NXZ.c)
 *     ?HasProjectedShadowReceivers@CVisual@@QEBA_NXZ @ 0x18019DED0 (-HasProjectedShadowReceivers@CVisual@@QEBA_NXZ.c)
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1802005FC (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 *     ?GetUnoptimizedBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180242C0C (-GetUnoptimizedBounds@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18024D0BC (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180257014 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 *     ?WorldTransformChangedInCurrentFrame@CTreeData@@IEBA_NXZ @ 0x18025D820 (-WorldTransformChangedInCurrentFrame@CTreeData@@IEBA_NXZ.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::PreSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // r12
  __int64 v5; // rsi
  void **v6; // r15
  struct CVisualTree *v8; // r13
  __int64 **TreeData; // rbx
  char v10; // al
  __int64 **v11; // rcx
  struct CVisualTree *VisualTreeNoRef; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  const void **v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 *v18; // r9
  char v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  CVisualTree *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 i; // rbx
  void ***v27; // rax
  char v28; // al
  unsigned int v29; // eax
  unsigned int v30; // ecx
  int v31; // r13d
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r15
  void *v34; // rax
  void *v35; // r12
  unsigned int v36; // r15d
  __int64 v37; // rdx
  unsigned int v38; // eax
  int v39; // r8d
  _DWORD *v40; // rax
  __int64 v41; // rdx
  _DWORD *v42; // rax
  _BYTE *v43; // rax
  int v44; // eax
  unsigned int v45; // ebx
  char v47; // al
  unsigned int v48; // r15d
  __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // r12
  void *v54; // rax
  void *v55; // r13
  unsigned int v56; // ebx
  __int64 v57; // rax
  unsigned int v58; // ecx
  unsigned int v59; // edx
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // r12
  void *v62; // rax
  void *v63; // r13
  unsigned int v64; // eax
  unsigned int v65; // ecx
  struct CVisualTree *v66; // r13
  CPreComputeContext *v67; // rcx
  char v68; // al
  int v69; // eax
  unsigned int v70; // ebx
  struct CTreeData *v71; // r12
  _BYTE *v72; // rbx
  int v73; // eax
  bool v74; // al
  unsigned int v75; // eax
  struct CPreComputeContext::SubTreeContext *v76; // rbx
  struct CPreComputeContext::SubTreeContext *v77; // r13
  struct CVisual *v78; // r8
  int v79; // eax
  unsigned int v80; // r12d
  char v81; // al
  __int64 v82; // rbx
  __int64 v83; // r12
  int v84; // eax
  __int128 *v85; // rdx
  int v86; // eax
  void *v87; // r9
  int v88; // eax
  struct CVisualTree *v89; // rbx
  __int64 v90; // rax
  __int64 v91; // r8
  void *InputHandle; // rax
  unsigned int v93; // ecx
  void *v94; // r13
  unsigned int v95; // edx
  unsigned __int64 v96; // rbx
  unsigned __int64 v97; // r12
  void *v98; // rax
  void *v99; // rdi
  unsigned int v100; // ebx
  unsigned int v101; // eax
  unsigned int v102; // ecx
  char v103; // al
  char v104; // al
  __int64 v105; // rdx
  __int64 v106; // rbx
  float v107; // xmm0_4
  float v108; // edx
  float *v109; // rcx
  float v110; // xmm6_4
  unsigned int v111; // ecx
  unsigned int v112; // eax
  float v113; // xmm6_4
  unsigned __int64 v114; // rbx
  unsigned __int64 v115; // r12
  void *v116; // rax
  void *v117; // rdi
  unsigned int v118; // eax
  unsigned int v119; // ecx
  __int64 v120; // rcx
  float v121; // edx
  int *v122; // rcx
  float v123; // xmm2_4
  float v124; // xmm7_4
  float v125; // xmm6_4
  float v126; // xmm7_4
  float v127; // xmm1_4
  float v128; // xmm0_4
  __int64 v129; // rdx
  unsigned int v130; // eax
  unsigned int v131; // ecx
  float v132; // xmm7_4
  float v133; // xmm6_4
  unsigned __int64 v134; // rbx
  unsigned __int64 v135; // r12
  void *v136; // rax
  void *v137; // rdi
  __int64 v138; // rcx
  __int64 v139; // rax
  unsigned int v140; // eax
  unsigned int v141; // edx
  int v142; // eax
  const struct D2D_VECTOR_2F *v143; // r8
  int v144; // eax
  float *v145; // rcx
  _DWORD *v146; // r8
  unsigned int v147; // edx
  _BYTE *v148; // rcx
  unsigned int j; // eax
  __int64 v150; // rcx
  __int64 *v151; // rbx
  __int64 v152; // rdx
  __int64 v153; // rbx
  __int64 v154; // xmm1_8
  CEffectIntermediateProducer *v155; // rcx
  char *v156; // rdx
  int v157; // eax
  _OWORD *v158; // rcx
  int v159; // eax
  __int128 v160; // xmm1
  __int128 v161; // xmm0
  __int128 v162; // xmm1
  bool v163; // zf
  __int64 v164; // rcx
  unsigned int v165; // eax
  unsigned int v166; // ecx
  unsigned __int64 v167; // rbx
  unsigned __int64 v168; // r12
  void *v169; // rax
  void *v170; // rdi
  unsigned int v171; // ebx
  __int64 v172; // rdx
  __int64 UnoptimizedBounds; // rax
  unsigned int v174; // ecx
  _OWORD *v175; // r13
  unsigned int v176; // edx
  unsigned __int64 v177; // rbx
  unsigned __int64 v178; // r12
  void *v179; // rax
  void *v180; // rdi
  unsigned int v181; // eax
  unsigned int v182; // ecx
  struct CVisualTree *v183; // r13
  CBspPreComputeHelper *v184; // rbx
  CBspPreComputeHelper *v185; // r12
  const struct CVisualTree *v186; // rdx
  const struct CVisual *v187; // r9
  int v188; // eax
  unsigned int v189; // edi
  _QWORD *v190; // rdi
  __int64 v191; // rcx
  __int64 v192; // rax
  int v193; // eax
  unsigned int v194; // ebx
  bool HasProjectedShadowReceivers; // al
  int v196; // xmm1_4
  int v197; // xmm2_4
  int v198; // xmm3_4
  int v199; // xmm4_4
  float v200; // xmm5_4
  float v201; // xmm6_4
  int v202; // eax
  int v203; // edi
  __int64 v204; // rcx
  __int64 v205; // rbx
  __int64 v206; // r14
  int v207; // eax
  __m128 v208; // xmm6
  __int64 **v209; // rdi
  __m128 *v210; // rax
  float v211; // xmm0_4
  float v212; // xmm1_4
  float v213; // xmm2_4
  __m128 v214; // xmm6
  __m128 v215; // xmm6
  __m128 v216; // xmm6
  HANDLE ProcessHeap; // rax
  __int64 *v218; // rax
  __int64 *v219; // rcx
  DwmDbg::DbgString *v220; // rbx
  DwmDbg::DbgString *v221; // rax
  char v222; // [rsp+48h] [rbp-C0h]
  __int128 v223; // [rsp+50h] [rbp-B8h] BYREF
  char *v224; // [rsp+60h] [rbp-A8h] BYREF
  CTreeData *v225[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct CVisualTree *v226; // [rsp+78h] [rbp-90h] BYREF
  int v227; // [rsp+80h] [rbp-88h]
  __int128 v228; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v229[2]; // [rsp+98h] [rbp-70h] BYREF
  int v230; // [rsp+A8h] [rbp-60h]
  int v231; // [rsp+ACh] [rbp-5Ch]
  int v232[2]; // [rsp+B8h] [rbp-50h] BYREF
  char *v233; // [rsp+C0h] [rbp-48h]
  char *v234; // [rsp+C8h] [rbp-40h]
  char v235; // [rsp+D0h] [rbp-38h] BYREF
  float v236; // [rsp+D8h] [rbp-30h]
  float v237; // [rsp+DCh] [rbp-2Ch]
  char v238; // [rsp+F0h] [rbp-18h] BYREF
  int v239; // [rsp+F8h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v3 = *((_QWORD *)this + 189);
  v5 = *((_QWORD *)this + 188);
  v6 = 0LL;
  *(_QWORD *)&v223 = a3;
  v226 = a2;
  v8 = a2;
  v239 = 0;
  *(_QWORD *)&v228 = v3;
  TreeData = CVisual::FindTreeData((CVisual *)v5, a2);
  *a3 = 0;
  v222 = 0;
  v10 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v8 + 184LL))(v8);
  v11 = 0LL;
  if ( v10 )
    v11 = TreeData;
  v225[0] = (CTreeData *)v11;
  VisualTreeNoRef = CVisual::GetVisualTreeNoRef((CVisual *)v5);
  if ( !VisualTreeNoRef || (v13 = *((_QWORD *)VisualTreeNoRef + 9)) == 0 || !*(_BYTE *)(v13 + 96) )
  {
LABEL_15:
    v24 = *(_QWORD *)this;
    v25 = *((_QWORD *)this + 1);
    v224 = *(char **)this;
    if ( g_pComposition )
      v6 = (void **)*((_QWORD *)g_pComposition + 111);
    for ( i = v24; i != v25; i += 352LL )
    {
      v27 = CVisual::EnsureTreeData((CVisual *)v5, *(void ***)(i + 328));
      if ( !*(_DWORD *)(i + 340) && !*(_BYTE *)(*(_QWORD *)(i + 320) + 2324LL) )
        v27[26] = v6;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, 93LL) )
    {
      v28 = *(_BYTE *)(v5 + 96);
      if ( v28 < 0 )
        *(_BYTE *)(v5 + 96) = v28 | 4;
    }
    if ( (*(_DWORD *)(v5 + 96) & 0x40000000) == 0 )
    {
LABEL_39:
      v39 = *((_DWORD *)this + 272);
      v40 = 0LL;
      v41 = (unsigned int)(v39 - 1);
      if ( v39 )
        v40 = (_DWORD *)(*((_QWORD *)this + 135) + 4 * v41);
      if ( *(_DWORD *)(v5 + 112) != *v40 )
      {
        v42 = 0LL;
        if ( v39 )
          v42 = (_DWORD *)(*((_QWORD *)this + 135) + 4 * v41);
        *(_DWORD *)(v5 + 112) = *v42;
        CVisual::OnOuterTransformChanged((CVisual *)v5);
      }
      v43 = (_BYTE *)v223;
      if ( *(_DWORD *)(v5 + 112) == 1 )
        *(_BYTE *)v223 = 1;
      if ( *(int *)(v5 + 268) > 0 || *(int *)(v5 + 264) > 0 )
        *v43 = 1;
      CVisual::UpdateLayoutSize((CVisual *)v5);
      v44 = CLightStack::PushLightsFromVisual(
              (CPreComputeContext *)((char *)this + 1176),
              (const struct CVisual *)v5,
              v8);
      v45 = v44;
      if ( v44 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x199,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
          (const char *)(unsigned int)v44);
        return v45;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 224) + 4LL) & 0x2000000) != 0 )
      {
        v47 = *(_BYTE *)(v5 + 96);
        if ( (v47 & 0xC0) != 0 )
          *(_BYTE *)(v5 + 96) = v47 | 4;
      }
      if ( v3 && (*(_BYTE *)(v3 + 96) & 2) != 0 )
        *(_BYTE *)(v5 + 96) |= 2u;
      if ( (*(_BYTE *)(v5 + 96) & 6) == 2
        && CLightStack::GetActiveLightCount((CPreComputeContext *)((char *)this + 1176), (struct CVisual *)v5, v8, 0) )
      {
        *(_BYTE *)(v5 + 96) = *(_BYTE *)(v5 + 96) ^ 2 | 4;
      }
      v48 = -2147024882;
      if ( (*(_BYTE *)(v5 + 107) & 1) == 0 )
      {
        v66 = v226;
        goto LABEL_100;
      }
      v49 = *((_QWORD *)v224 + 40);
      if ( *(_BYTE *)(v49 + 2324) )
      {
        v50 = *((_DWORD *)this + 355);
        v51 = *((_DWORD *)this + 354);
        if ( v51 != v50 )
        {
LABEL_77:
          *(_OWORD *)(*((_QWORD *)this + 176) + 16LL * *((unsigned int *)this + 354)) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
LABEL_88:
          v64 = *((_DWORD *)this + 357);
          v65 = *((_DWORD *)this + 354) + 1;
          if ( v64 <= v65 )
            v64 = *((_DWORD *)this + 354) + 1;
          *((_DWORD *)this + 357) = v64;
          *((_DWORD *)this + 354) = v65;
          goto LABEL_91;
        }
        v52 = 2LL * v50;
        if ( v52 <= 0xFFFFFFFF )
        {
          if ( (unsigned int)v52 <= 0x40 )
            LODWORD(v52) = 64;
          v53 = 16LL * v51;
          if ( v53 <= 0xFFFFFFFF )
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v52 > 0x10 )
            {
              v54 = MIDL_user_allocate(16LL * (unsigned int)v52);
              v55 = v54;
              if ( !v54 )
              {
                v56 = -2147024882;
LABEL_95:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x68,
                  (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                  (const char *)v56);
LABEL_98:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x83,
                  (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                  (const char *)v56);
LABEL_91:
                v66 = v226;
                if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v226 + 184LL))(v226)
                  && CVisualTree::_IsInTree((__int64)v226, v5, 2) )
                {
                  CPreComputeContext::AddVisualToBVIPreRenderList(this, (struct CVisual *)v5);
                }
LABEL_100:
                if ( (*(_BYTE *)(v5 + 96) & 0xD3) != 0 )
                  *(_BYTE *)v223 = 1;
                if ( CVisual::Has3DContent((CVisual *)v5) )
                  ++*(_DWORD *)(v25 - 16);
                v68 = *(_BYTE *)(v5 + 96);
                if ( (v68 & 4) != 0 )
                {
                  if ( (v68 & 1) != 0 && !*(_DWORD *)(v25 - 12) )
                  {
                    v69 = CPreComputeContext::AddLocalBoundsToSubTreesDirtyRegion(this, (struct CVisual *)v5);
                    v70 = v69;
                    if ( v69 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x1F9,
                        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                        (const char *)(unsigned int)v69);
                      return v70;
                    }
                  }
                  ++*(_DWORD *)(v25 - 12);
                }
                v71 = v225[0];
                v72 = (_BYTE *)v223;
                if ( v225[0] )
                {
                  v73 = *(_DWORD *)(v5 + 96);
                  if ( (v73 & 0x10000) != 0 )
                  {
                    *(_BYTE *)v223 = 1;
                    goto LABEL_125;
                  }
                  if ( *(_BYTE *)v223 )
                  {
LABEL_125:
                    v75 = *(_DWORD *)(v5 + 96) & 0xFFFC00FF;
                    *(_DWORD *)(v5 + 96) = v75;
                    *(_BYTE *)(v5 + 96) = v75 | 0x10;
                    if ( *v72 )
                      goto LABEL_129;
                    goto LABEL_126;
                  }
                  if ( (*(_BYTE *)(v5 + 104) & 0x20) != 0 && (v73 & 0x2000) != 0 )
                  {
                    *(_BYTE *)v223 = 1;
                    goto LABEL_125;
                  }
                  if ( (v73 & 0x4000) != 0 )
                  {
                    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
                    {
                      CVisual::EnsureWorldTransform((CVisual *)v5, v66, v225[0]);
                      v74 = CTreeData::WorldTransformChangedInCurrentFrame(v225[0]);
                    }
                    else
                    {
                      v74 = CVisual::EnsureWorldTransform((CVisual *)v5, v66, v225[0]);
                    }
                    if ( v74 )
                      *(_BYTE *)v223 = 1;
                    v222 = 1;
                  }
                }
                if ( !*v72 )
                {
LABEL_126:
                  if ( (*(_BYTE *)(v5 + 107) & 5) == 0 && ((*(_BYTE *)(v5 + 96) & 8) == 0 || *(_DWORD *)(v25 - 12)) )
                  {
                    v81 = v222;
                    goto LABEL_152;
                  }
LABEL_129:
                  v76 = *(struct CPreComputeContext::SubTreeContext **)this;
                  v77 = (struct CPreComputeContext::SubTreeContext *)*((_QWORD *)this + 1);
                  while ( v76 != v77 )
                  {
                    if ( v5 == *(_QWORD *)(*(_QWORD *)(v25 - 24) + 72LL) )
                      v78 = 0LL;
                    else
                      v78 = *(struct CVisual **)(v5 + 88);
                    v79 = CPreComputeContext::ProcessVisualsWorldTransformAndClip(
                            v67,
                            (struct CVisual *)v5,
                            v78,
                            v76,
                            (struct CMILMatrix *)v232);
                    v80 = v79;
                    if ( v79 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x261,
                        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                        (const char *)(unsigned int)v79);
                      return v80;
                    }
                    v76 = (struct CPreComputeContext::SubTreeContext *)((char *)v76 + 352);
                  }
                  v81 = 1;
                  if ( (*(_BYTE *)(v5 + 96) & 8) != 0 )
                  {
                    v82 = *(_QWORD *)this;
                    v83 = *((_QWORD *)this + 1);
                    while ( v82 != v83 )
                    {
                      if ( !*(_DWORD *)(v82 + 340) && !*(_BYTE *)(*(_QWORD *)(v82 + 320) + 2324LL) )
                      {
                        v84 = *(_DWORD *)(v82 + 304);
                        v85 = 0LL;
                        v228 = 0LL;
                        if ( v84 )
                        {
                          v85 = &v228;
                          v228 = *(_OWORD *)(*(_QWORD *)(v82 + 296) + 16LL * (unsigned int)(v84 - 1));
                        }
                        v86 = *(_DWORD *)(v82 + 280);
                        v87 = v86
                            ? (void *)(*(_QWORD *)(v82 + 272) + 68LL * (unsigned int)(v86 - 1))
                            : &CMILMatrix::Identity;
                        v88 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *, __int128 *))(*(_QWORD *)v5 + 336LL))(
                                v5,
                                *(_QWORD *)(v82 + 328),
                                *(_QWORD *)(v82 + 320),
                                v87,
                                v85);
                        if ( v88 < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x516,
                            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                            (const char *)(unsigned int)v88);
                          break;
                        }
                      }
                      v82 += 352LL;
                    }
                    v81 = 1;
                  }
                  v71 = v225[0];
LABEL_152:
                  if ( !v71 )
                    goto LABEL_186;
                  if ( !v81 && (CVisual::HasInputSink((CVisual *)v5) || (*(_BYTE *)(v5 + 106) & 8) != 0) )
                  {
                    v89 = v226;
                    CVisual::EnsureWorldTransform((CVisual *)v5, v226, v71);
                  }
                  else
                  {
                    v89 = v226;
                  }
                  if ( (*(_DWORD *)(v5 + 96) & 0xC0000) != 0 )
                  {
                    v90 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v89 + 216LL))(v89);
                    if ( v90 )
                    {
                      LOBYTE(v91) = *(_DWORD *)(v25 - 12) != 0;
                      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v90 + 40LL))(
                        v90,
                        v5,
                        v91,
                        (*(_DWORD *)(v5 + 96) >> 18) & 3);
                    }
                  }
                  if ( !CVisual::HasInputSink((CVisual *)v5) )
                  {
                    if ( (*(_BYTE *)(v5 + 104) & 0x20) != 0 && !*((_BYTE *)this + 1568) )
                    {
                      *((_BYTE *)this + 1568) = 1;
                      *(_BYTE *)(v5 + 104) |= 0x10u;
                    }
LABEL_186:
                    if ( (*(_BYTE *)(v5 + 106) & 0x20) == 0 )
                      goto LABEL_226;
                    v106 = *(_QWORD *)(v5 + 224);
                    if ( (*(_DWORD *)(v106 + 4) & 0x40000) == 0
                      || (v107 = CVisual::CalculateWorldRenderingScale((CVisual *)v5), v107 <= 0.00000011920929) )
                    {
LABEL_202:
                      v120 = *(_QWORD *)(v5 + 224);
                      if ( (*(_DWORD *)(v120 + 4) & 0x20000) == 0 )
                        goto LABEL_226;
                      v121 = *(float *)(v120 + 12);
                      v122 = (int *)(v120 + 12);
                      if ( (LODWORD(v121) & 0x7F000000) != 0xF000000 )
                      {
                        do
                        {
                          v122 = (int *)((char *)v122 + (LODWORD(v121) & 0xFFFFFF) + 4);
                          v121 = *(float *)v122;
                        }
                        while ( (*v122 & 0x7F000000) != 0xF000000 );
                      }
                      v123 = *((float *)v122 + 3);
                      *(_QWORD *)&v228 = *(_QWORD *)(v122 + 1);
                      v124 = _mm_shuffle_ps((__m128)(unsigned __int64)v228, (__m128)(unsigned __int64)v228, 85).m128_f32[0];
                      v125 = (float)((float)(v124 * *((float *)&v234 + 1))
                                   + (float)(*(float *)&v228 * *(float *)&v232[1]))
                           + (float)(v123 * v237);
                      v126 = (float)((float)(v124 * *(float *)&v234) + (float)(*(float *)&v228 * *(float *)v232))
                           + (float)(v123 * v236);
                      v127 = (float)(v125 * v125) + (float)(v126 * v126);
                      v128 = v127 < 0.0 ? sqrtf_0(v127) : fsqrt(v127);
                      if ( v128 <= 0.00000011920929 )
                      {
LABEL_226:
                        if ( (*(_BYTE *)(v5 + 106) & 8) != 0
                          && v225[0]
                          && (!(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl)
                           || *((_BYTE *)v225[0] + 15))
                          && *((_QWORD *)v225[0] + 28) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v225[0] + 31) + 24LL)
                                                                    + 888LL) )
                        {
                          v142 = *((_DWORD *)this + 284);
                          v143 = 0LL;
                          if ( v142 )
                            v143 = (const struct D2D_VECTOR_2F *)(*((_QWORD *)this + 141)
                                                                + 8LL * (unsigned int)(v142 - 1));
                          v144 = *((_DWORD *)this + 278);
                          v145 = 0LL;
                          if ( v144 )
                            v145 = (float *)(*((_QWORD *)this + 138) + 4LL * (unsigned int)(v144 - 1));
                          CVisual::IssueContextUpdateNotification((CVisual *)v5, *v145, v143);
                        }
                        v146 = *(_DWORD **)(v5 + 232);
                        if ( (*v146 & 0x400000) == 0 )
                          goto LABEL_291;
                        v147 = v146[1];
                        v148 = v146 + 2;
                        for ( j = 0; j < v147; ++v148 )
                        {
                          if ( *v148 == 10 )
                            break;
                          ++j;
                        }
                        v150 = (unsigned int)v146[1];
                        if ( j >= (unsigned int)v150 )
                          v151 = 0LL;
                        else
                          v151 = (__int64 *)((char *)v146 + 8LL * j - (((_BYTE)v150 + 15) & 7) + v150 + 15);
                        v153 = *v151;
                        v154 = *(_QWORD *)(v153 + 104);
                        *(_OWORD *)(v153 + 112) = *(_OWORD *)(v153 + 88);
                        *(_QWORD *)(v153 + 128) = v154;
                        *(_QWORD *)(v153 + 104) = 0LL;
                        *(_QWORD *)(v153 + 96) = 0LL;
                        *(_QWORD *)(v153 + 88) = 0LL;
                        if ( *(_BYTE *)(v153 + 300) )
                        {
                          v155 = *(CEffectIntermediateProducer **)(v153 + 80);
                          *(_QWORD *)(v153 + 80) = 0LL;
                          if ( v155 )
                            CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v155);
                          *(_BYTE *)(v153 + 300) = 0;
                        }
                        v156 = v224;
                        *(_BYTE *)(v153 + 301) = 1;
                        v157 = *((_DWORD *)v156 + 70);
                        if ( v157 )
                          v158 = (_OWORD *)(*((_QWORD *)v156 + 34) + 68LL * (unsigned int)(v157 - 1));
                        else
                          v158 = &CMILMatrix::Identity;
                        if ( *(_DWORD *)(v153 + 228) == 1 )
                        {
                          v159 = *(_DWORD *)(v153 + 224);
                          v160 = *(_OWORD *)(v153 + 176);
                          *(_OWORD *)(v153 + 232) = *(_OWORD *)(v153 + 160);
                          v161 = *(_OWORD *)(v153 + 192);
                          *(_OWORD *)(v153 + 248) = v160;
                          v162 = *(_OWORD *)(v153 + 208);
                          *(_OWORD *)(v153 + 264) = v161;
                          *(_OWORD *)(v153 + 280) = v162;
                          *(_DWORD *)(v153 + 296) = v159;
                        }
                        v163 = *(_QWORD *)(v153 + 304) == 0LL;
                        *(_OWORD *)(v153 + 160) = *v158;
                        *(_OWORD *)(v153 + 176) = v158[1];
                        *(_OWORD *)(v153 + 192) = v158[2];
                        *(_OWORD *)(v153 + 208) = v158[3];
                        *(_DWORD *)(v153 + 224) = *((_DWORD *)v158 + 16);
                        *(_DWORD *)(v153 + 228) = 1;
                        if ( v163 )
                        {
LABEL_291:
                          v183 = v226;
LABEL_292:
                          v184 = *(CBspPreComputeHelper **)this;
                          v185 = (CBspPreComputeHelper *)*((_QWORD *)this + 1);
                          while ( v184 != v185 )
                          {
                            v186 = (const struct CVisualTree *)*((_QWORD *)v184 + 41);
                            if ( v5 == *((_QWORD *)v186 + 9) )
                              v187 = 0LL;
                            else
                              v187 = *(const struct CVisual **)(v5 + 88);
                            v188 = CBspPreComputeHelper::PreComputePreSubgraph(v184, v186, (struct CVisual *)v5, v187);
                            v189 = v188;
                            if ( v188 < 0 )
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x326,
                                (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                                (const char *)(unsigned int)v188);
                              return v189;
                            }
                            v184 = (CBspPreComputeHelper *)((char *)v184 + 352);
                          }
                          if ( (*(_BYTE *)(v5 + 96) & 1) == 0 )
                            goto LABEL_330;
                          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, 154LL) )
                          {
                            v190 = *(_QWORD **)(v5 + 256);
                            if ( !v190
                              || (*(unsigned __int8 (__fastcall **)(_QWORD))(*v190 + 216LL))(*(_QWORD *)(v5 + 256)) )
                            {
                              *(_QWORD *)(v5 + 192) = 0LL;
                              *(_QWORD *)(v5 + 184) = 0LL;
                              *(_QWORD *)(v5 + 176) = 0LL;
                            }
                            else
                            {
                              v191 = v190[11];
                              v225[0] = 0LL;
                              LODWORD(v225[1]) = 0;
                              v226 = 0LL;
                              v227 = 0;
                              (*(void (__fastcall **)(__int64, CTreeData **, struct CVisualTree **))(*(_QWORD *)v191 + 48LL))(
                                v191,
                                v225,
                                &v226);
                              v229[0] = v225[0];
                              v229[1] = v226;
                              v230 = (int)v225[1];
                              v231 = v227;
                              v239 = 0;
                              CMILMatrix::SetScale((CMILMatrix *)v232, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
                              CMILMatrix::Transform3DBoundsHelper<1>((__int64)v232, (float *)v229, (float *)(v5 + 176));
                            }
                            goto LABEL_330;
                          }
                          v192 = *(_QWORD *)v5;
                          *(_OWORD *)v225 = 0LL;
                          v193 = (*(__int64 (__fastcall **)(__int64, CTreeData **))(v192 + 232))(v5, v225);
                          v194 = v193;
                          if ( v193 < 0 )
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x33A,
                              (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                              (const char *)(unsigned int)v193);
                            return v194;
                          }
                          HasProjectedShadowReceivers = CVisual::HasProjectedShadowReceivers((CVisual *)v5);
                          v196 = HIDWORD(v225[1]);
                          v197 = HIDWORD(v225[0]);
                          v198 = (int)v225[1];
                          v199 = (int)v225[0];
                          if ( HasProjectedShadowReceivers )
                          {
                            v200 = *(float *)(v5 + 144);
                            v201 = *(float *)(v5 + 148);
                            if ( *(float *)&v225[1] <= *(float *)v225
                              || *((float *)&v225[1] + 1) <= *((float *)v225 + 1) )
                            {
                              v203 = 1;
                              v202 = 1;
                            }
                            else
                            {
                              v202 = 0;
                              v203 = 1;
                            }
                            if ( v200 > 0.0 && v201 > 0.0 )
                              v203 = 0;
                            if ( !v202 )
                            {
                              if ( v203 )
                                goto LABEL_329;
                              if ( *(float *)v225 > 0.0 )
                                v199 = 0;
                              if ( *((float *)v225 + 1) > 0.0 )
                                v197 = 0;
                              if ( v200 > *(float *)&v225[1] )
                                v198 = *(_DWORD *)(v5 + 144);
                              if ( v201 <= *((float *)&v225[1] + 1) )
                                goto LABEL_329;
                              goto LABEL_328;
                            }
                            if ( !v203 )
                            {
                              v199 = 0;
                              v197 = 0;
                              v198 = *(_DWORD *)(v5 + 144);
LABEL_328:
                              v196 = *(_DWORD *)(v5 + 148);
                              goto LABEL_329;
                            }
                            v196 = 0;
                            v198 = 0;
                            v197 = 0;
                            v199 = 0;
                          }
LABEL_329:
                          *(_DWORD *)(v5 + 176) = v199;
                          *(_DWORD *)(v5 + 180) = v197;
                          *(_DWORD *)(v5 + 184) = v198;
                          *(_DWORD *)(v5 + 188) = v196;
                          *(_QWORD *)(v5 + 192) = 0LL;
LABEL_330:
                          v204 = *(_QWORD *)(v5 + 256);
                          if ( v204
                            && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v204 + 64LL))(
                                 v204,
                                 168LL) )
                          {
                            v205 = *(_QWORD *)this;
                            v206 = *((_QWORD *)this + 1);
                            while ( v205 != v206 )
                            {
                              v207 = *(_DWORD *)(v205 + 304);
                              if ( v207 )
                                v208 = *(__m128 *)(*(_QWORD *)(v205 + 296) + 16LL * (unsigned int)(v207 - 1));
                              else
                                v208 = (__m128)_xmm;
                              v209 = CVisual::FindTreeData((CVisual *)v5, *(const struct CVisualTree **)(v205 + 328));
                              v210 = (__m128 *)v209[34];
                              if ( v210 )
                              {
                                v211 = _mm_shuffle_ps(v208, v208, 85).m128_f32[0];
                                v212 = _mm_shuffle_ps(v208, v208, 170).m128_f32[0];
                                v205 += 352LL;
                                v213 = _mm_shuffle_ps(v208, v208, 255).m128_f32[0];
                                v214 = _mm_shuffle_ps(v208, v208, 225);
                                v214.m128_f32[0] = v211;
                                v215 = _mm_shuffle_ps(v214, v214, 198);
                                v215.m128_f32[0] = v212;
                                v216 = _mm_shuffle_ps(v215, v215, 39);
                                v216.m128_f32[0] = v213;
                                *v210 = _mm_shuffle_ps(v216, v216, 57);
                              }
                              else
                              {
                                ProcessHeap = GetProcessHeap();
                                v218 = (__int64 *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
                                if ( !v218 )
                                  ModuleFailFastForHRESULT(-2147024882, retaddr);
                                *(__m128 *)v218 = v208;
                                v219 = v209[34];
                                v209[34] = v218;
                                if ( v219 )
                                  operator delete(v219, 0x10uLL);
                                v205 += 352LL;
                              }
                            }
                          }
                          if ( dword_1803F8D50 && !*(_BYTE *)v223 && (*(int *)(v5 + 264) > 0 || *(int *)(v5 + 268) > 0) )
                          {
                            v220 = DwmDbg::DbgString::DbgString((char **)&v228, word_18032AF78);
                            *(_QWORD *)&v223 = 0LL;
                            *((_QWORD *)&v223 + 1) = v183;
                            *(_QWORD *)v232 = &v235;
                            v233 = &v235;
                            v234 = &v238;
                            detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::push_back(
                              (detail::liberal_expansion_policy *)v232,
                              &v223);
                            v221 = DwmDbg::DbgString::DbgString(&v224, "PreCompute-BailWithBackdropsStillInSubtree");
                            DwmDbg::Backdrops::LogTreeWalkEtwEvent(v221, v5, v183, v232, v220);
                            detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)v232);
                          }
                          return 0LL;
                        }
                        v164 = *((_QWORD *)v156 + 40);
                        if ( *(_BYTE *)(v164 + 2324) )
                        {
                          v165 = *((_DWORD *)this + 355);
                          v166 = *((_DWORD *)this + 354);
                          if ( v166 != v165 )
                          {
LABEL_269:
                            *(_OWORD *)(*((_QWORD *)this + 176) + 16LL * *((unsigned int *)this + 354)) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
LABEL_280:
                            v181 = *((_DWORD *)this + 357);
                            v182 = *((_DWORD *)this + 354) + 1;
                            if ( v181 <= v182 )
                              v181 = *((_DWORD *)this + 354) + 1;
                            *((_DWORD *)this + 357) = v181;
                            *((_DWORD *)this + 354) = v182;
                            goto LABEL_283;
                          }
                          v167 = 2LL * v165;
                          if ( v167 <= 0xFFFFFFFF )
                          {
                            if ( (unsigned int)v167 <= 0x40 )
                              LODWORD(v167) = 64;
                            v168 = 16LL * v166;
                            if ( v168 <= 0xFFFFFFFF )
                            {
                              if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v167 > 0x10 )
                              {
                                v169 = MIDL_user_allocate(16LL * (unsigned int)v167);
                                v170 = v169;
                                if ( !v169 )
                                {
                                  v171 = -2147024882;
                                  v172 = 104LL;
LABEL_290:
                                  wil::details::in1diag3::Return_Hr(
                                    retaddr,
                                    (void *)v172,
                                    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                    (const char *)v171);
                                  wil::details::in1diag3::Return_Hr(
                                    retaddr,
                                    (void *)0x83,
                                    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                    (const char *)v171);
LABEL_283:
                                  v183 = v226;
                                  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v226 + 184LL))(v226)
                                    && CVisualTree::_IsInTree((__int64)v226, v5, 2) )
                                  {
                                    CPreComputeContext::AddVisualToBVIPreRenderList(this, (struct CVisual *)v5);
                                  }
                                  goto LABEL_292;
                                }
                                memcpy_0(v169, *((const void **)this + 176), (unsigned int)v168);
                                operator delete(*((void **)this + 176));
                                *((_QWORD *)this + 176) = v170;
                                *((_DWORD *)this + 355) = v167;
                                goto LABEL_269;
                              }
LABEL_286:
                              v171 = -2147024809;
                              v172 = 104LL;
                              goto LABEL_290;
                            }
                            goto LABEL_287;
                          }
LABEL_288:
                          v172 = 98LL;
                          goto LABEL_289;
                        }
                        UnoptimizedBounds = CTreeDirty::GetUnoptimizedBounds(v164, v229);
                        v174 = *((_DWORD *)this + 355);
                        v175 = (_OWORD *)UnoptimizedBounds;
                        v176 = *((_DWORD *)this + 354);
                        if ( v176 == v174 )
                        {
                          v177 = 2LL * v174;
                          if ( v177 > 0xFFFFFFFF )
                            goto LABEL_288;
                          if ( (unsigned int)v177 <= 0x40 )
                            LODWORD(v177) = 64;
                          v178 = 16LL * v176;
                          if ( v178 > 0xFFFFFFFF )
                          {
LABEL_287:
                            v172 = 101LL;
LABEL_289:
                            v171 = -2147024362;
                            goto LABEL_290;
                          }
                          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v177 <= 0x10 )
                            goto LABEL_286;
                          v179 = MIDL_user_allocate(16LL * (unsigned int)v177);
                          v180 = v179;
                          if ( !v179 )
                          {
                            v171 = -2147024882;
                            v172 = 104LL;
                            goto LABEL_290;
                          }
                          memcpy_0(v179, *((const void **)this + 176), (unsigned int)v178);
                          operator delete(*((void **)this + 176));
                          *((_QWORD *)this + 176) = v180;
                          *((_DWORD *)this + 355) = v177;
                        }
                        *(_OWORD *)(*((_QWORD *)this + 176) + 16LL * *((unsigned int *)this + 354)) = *v175;
                        goto LABEL_280;
                      }
                      v130 = *((_DWORD *)this + 285);
                      v131 = *((_DWORD *)this + 284);
                      v132 = v126 / v128;
                      v133 = v125 / v128;
                      if ( v131 != v130 )
                      {
LABEL_223:
                        v138 = *((unsigned int *)this + 284);
                        v139 = *((_QWORD *)this + 141);
                        *(float *)(v139 + 8 * v138) = v132;
                        *(float *)(v139 + 8 * v138 + 4) = v133;
                        v140 = *((_DWORD *)this + 287);
                        v141 = *((_DWORD *)this + 284) + 1;
                        *((_DWORD *)this + 284) = v141;
                        if ( v140 <= v141 )
                          v140 = v141;
                        *((_DWORD *)this + 287) = v140;
                        *(_BYTE *)(v5 + 104) |= 4u;
                        goto LABEL_226;
                      }
                      v134 = 2LL * v130;
                      if ( v134 > 0xFFFFFFFF )
                      {
                        v152 = 98LL;
                      }
                      else
                      {
                        if ( (unsigned int)v134 <= 2 )
                          v134 = 2LL;
                        v135 = 8LL * v131;
                        if ( v135 <= 0xFFFFFFFF )
                        {
                          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v134 <= 8 )
                          {
                            v48 = -2147024809;
                          }
                          else
                          {
                            v136 = MIDL_user_allocate(8 * v134);
                            v137 = v136;
                            if ( v136 )
                            {
                              memcpy_0(v136, *((const void **)this + 141), (unsigned int)v135);
                              operator delete(*((void **)this + 141));
                              *((_QWORD *)this + 141) = v137;
                              *((_DWORD *)this + 285) = v134;
                              goto LABEL_223;
                            }
                          }
                          v152 = 104LL;
LABEL_247:
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)v152,
                            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                            (const char *)v48);
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x83,
                            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                            (const char *)v48);
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x2D4,
                            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                            (const char *)v48);
                          return v48;
                        }
                        v152 = 101LL;
                      }
                      v48 = -2147024362;
                      goto LABEL_247;
                    }
                    v108 = *(float *)(v106 + 12);
                    v109 = (float *)(v106 + 12);
                    if ( (LODWORD(v108) & 0x7F000000) != 0xE000000 )
                    {
                      do
                      {
                        v109 = (float *)((char *)v109 + (LODWORD(v108) & 0xFFFFFF) + 4);
                        v108 = *v109;
                      }
                      while ( (*(_DWORD *)v109 & 0x7F000000) != 0xE000000 );
                    }
                    v110 = v109[1];
                    v111 = *((_DWORD *)this + 278);
                    v112 = *((_DWORD *)this + 279);
                    v113 = v110 / v107;
                    if ( v111 != v112 )
                    {
LABEL_199:
                      *(float *)(*((_QWORD *)this + 138) + 4LL * *((unsigned int *)this + 278)) = v113;
                      v118 = *((_DWORD *)this + 281);
                      v119 = *((_DWORD *)this + 278) + 1;
                      *((_DWORD *)this + 278) = v119;
                      if ( v118 <= v119 )
                        v118 = v119;
                      *((_DWORD *)this + 281) = v118;
                      *(_BYTE *)(v5 + 104) |= 2u;
                      goto LABEL_202;
                    }
                    v114 = 2LL * v112;
                    if ( v114 > 0xFFFFFFFF )
                    {
                      v129 = 98LL;
                    }
                    else
                    {
                      if ( (unsigned int)v114 <= 2 )
                        v114 = 2LL;
                      v115 = 4LL * v111;
                      if ( v115 <= 0xFFFFFFFF )
                      {
                        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v114 <= 4 )
                        {
                          v48 = -2147024809;
                        }
                        else
                        {
                          v116 = MIDL_user_allocate(4 * v114);
                          v117 = v116;
                          if ( v116 )
                          {
                            memcpy_0(v116, *((const void **)this + 138), (unsigned int)v115);
                            operator delete(*((void **)this + 138));
                            *((_QWORD *)this + 138) = v117;
                            *((_DWORD *)this + 279) = v114;
                            goto LABEL_199;
                          }
                        }
                        v129 = 104LL;
LABEL_212:
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v129,
                          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                          (const char *)v48);
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x83,
                          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                          (const char *)v48);
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x2BC,
                          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                          (const char *)v48);
                        return v48;
                      }
                      v129 = 101LL;
                    }
                    v48 = -2147024362;
                    goto LABEL_212;
                  }
                  InputHandle = CVisual::GetInputHandle((CVisual *)v5);
                  v93 = *((_DWORD *)this + 291);
                  v94 = InputHandle;
                  v95 = *((_DWORD *)this + 290);
                  if ( v95 != v93 )
                    goto LABEL_172;
                  v96 = 2LL * v93;
                  if ( v96 > 0xFFFFFFFF )
                  {
                    v105 = 98LL;
                  }
                  else
                  {
                    if ( (unsigned int)v96 <= 2 )
                      v96 = 2LL;
                    v97 = 8LL * v95;
                    if ( v97 <= 0xFFFFFFFF )
                    {
                      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v96 <= 8 )
                      {
                        v100 = -2147024809;
                        goto LABEL_178;
                      }
                      v98 = MIDL_user_allocate(8 * v96);
                      v99 = v98;
                      if ( !v98 )
                      {
                        v100 = -2147024882;
LABEL_178:
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x68,
                          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                          (const char *)v100);
LABEL_182:
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x83,
                          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                          (const char *)v100);
LABEL_175:
                        v103 = *(_BYTE *)(v5 + 104) | 8;
                        *(_BYTE *)(v5 + 104) = v103;
                        v104 = (v103 & 0x20) != 0;
                        if ( v104 != *((_BYTE *)this + 1568) )
                        {
                          *((_BYTE *)this + 1568) = v104;
                          *(_BYTE *)(v5 + 104) |= 0x10u;
                        }
                        goto LABEL_186;
                      }
                      memcpy_0(v98, *((const void **)this + 144), (unsigned int)v97);
                      operator delete(*((void **)this + 144));
                      *((_QWORD *)this + 144) = v99;
                      *((_DWORD *)this + 291) = v96;
LABEL_172:
                      *(_QWORD *)(*((_QWORD *)this + 144) + 8LL * *((unsigned int *)this + 290)) = v94;
                      v101 = *((_DWORD *)this + 293);
                      v102 = *((_DWORD *)this + 290) + 1;
                      *((_DWORD *)this + 290) = v102;
                      if ( v101 <= v102 )
                        v101 = v102;
                      *((_DWORD *)this + 293) = v101;
                      goto LABEL_175;
                    }
                    v105 = 101LL;
                  }
                  v100 = -2147024362;
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v105,
                    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                    (const char *)0x80070216LL);
                  goto LABEL_182;
                }
                goto LABEL_125;
              }
              memcpy_0(v54, *((const void **)this + 176), (unsigned int)v53);
              operator delete(*((void **)this + 176));
              *((_QWORD *)this + 176) = v55;
              *((_DWORD *)this + 355) = v52;
              goto LABEL_77;
            }
LABEL_94:
            v56 = -2147024809;
            goto LABEL_95;
          }
LABEL_96:
          v56 = -2147024362;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x65,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)0x80070216LL);
          goto LABEL_98;
        }
LABEL_97:
        v56 = -2147024362;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x62,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)0x80070216LL);
        goto LABEL_98;
      }
      v57 = CTreeDirty::GetUnoptimizedBounds(v49, v229);
      v58 = *((_DWORD *)this + 355);
      v59 = *((_DWORD *)this + 354);
      *(_QWORD *)&v228 = v57;
      if ( v59 == v58 )
      {
        v60 = 2LL * v58;
        if ( v60 > 0xFFFFFFFF )
          goto LABEL_97;
        if ( (unsigned int)v60 <= 0x40 )
          LODWORD(v60) = 64;
        v61 = 16LL * v59;
        if ( v61 > 0xFFFFFFFF )
          goto LABEL_96;
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v60 <= 0x10 )
          goto LABEL_94;
        v62 = MIDL_user_allocate(16LL * (unsigned int)v60);
        v63 = v62;
        if ( !v62 )
        {
          v56 = -2147024882;
          goto LABEL_95;
        }
        memcpy_0(v62, *((const void **)this + 176), (unsigned int)v61);
        operator delete(*((void **)this + 176));
        *((_QWORD *)this + 176) = v63;
        *((_DWORD *)this + 355) = v60;
      }
      *(_OWORD *)(*((_QWORD *)this + 176) + 16LL * *((unsigned int *)this + 354)) = *(_OWORD *)v228;
      goto LABEL_88;
    }
    v29 = *((_DWORD *)this + 273);
    v30 = *((_DWORD *)this + 272);
    v31 = *(_DWORD *)(v5 + 216);
    if ( v30 == v29 )
    {
      v32 = 2LL * v29;
      if ( v32 > 0xFFFFFFFF )
      {
        v37 = 98LL;
      }
      else
      {
        if ( (unsigned int)v32 <= 0x40 )
          v32 = 64LL;
        v33 = 4LL * v30;
        if ( v33 <= 0xFFFFFFFF )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 <= 4 )
          {
            v36 = -2147024809;
            v37 = 104LL;
            goto LABEL_56;
          }
          v34 = MIDL_user_allocate(4 * v32);
          v35 = v34;
          if ( !v34 )
          {
            v36 = -2147024882;
            v37 = 104LL;
LABEL_56:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v37,
              (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
              (const char *)v36);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x83,
              (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
              (const char *)v36);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x175,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
              (const char *)v36);
            return v36;
          }
          memcpy_0(v34, *((const void **)this + 135), (unsigned int)v33);
          operator delete(*((void **)this + 135));
          *((_QWORD *)this + 135) = v35;
          v3 = v228;
          *((_DWORD *)this + 273) = v32;
          goto LABEL_36;
        }
        v37 = 101LL;
      }
      v36 = -2147024362;
      goto LABEL_56;
    }
LABEL_36:
    *(_DWORD *)(*((_QWORD *)this + 135) + 4LL * *((unsigned int *)this + 272)) = v31;
    v38 = *((_DWORD *)this + 275);
    ++*((_DWORD *)this + 272);
    v8 = v226;
    if ( v38 <= *((_DWORD *)this + 272) )
      v38 = *((_DWORD *)this + 272);
    *((_DWORD *)this + 275) = v38;
    goto LABEL_39;
  }
  detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::emplace_back<CVisualTree *>(
    this,
    VisualTreeNoRef);
  v14 = *((_QWORD *)this + 1);
  v15 = *(const void ***)(v14 - 24);
  if ( v8 == (struct CVisualTree *)v15 )
  {
LABEL_14:
    v23 = *(CVisualTree **)(v14 - 24);
    *(_DWORD *)(v14 - 72) = 0;
    *(_DWORD *)(v14 - 48) = 0;
    *(_DWORD *)(v14 - 16) = 0;
    CVisualTree::BeginPreCompute(v23);
    goto LABEL_15;
  }
  if ( (int)CThreadContext::RegisterGraphWalkRoot(v15[9]) >= 0 )
  {
    *(_BYTE *)(v14 - 8) = 1;
    goto LABEL_14;
  }
  *(_BYTE *)(v14 - 7) = 1;
  v16 = *(_QWORD *)this;
  v17 = *((_QWORD *)this + 1);
  while ( v16 != v17 )
  {
    v18 = *(__int64 **)(v16 + 320);
    if ( !*((_BYTE *)v18 + 2324) )
    {
      v19 = *((_BYTE *)v18 + 2325);
      v20 = v18[1];
      v21 = *v18;
      v18[1] = 0LL;
      *((_WORD *)v18 + 1162) = 1;
      *(_WORD *)((char *)v18 + 2327) = 0;
      v22 = *(_OWORD *)(v21 + 2504);
      *((_BYTE *)v18 + 2325) = v19;
      v18[1] = v20;
      *(_OWORD *)((char *)v18 + 2308) = v22;
    }
    v16 += 352LL;
  }
  return 0LL;
}
