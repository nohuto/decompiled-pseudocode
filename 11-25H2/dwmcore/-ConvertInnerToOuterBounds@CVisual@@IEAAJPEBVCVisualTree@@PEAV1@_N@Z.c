/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800193E0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180018F60 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B180 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026030 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?GetBounds@CTreeEffect@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18002721C (-GetBounds@CTreeEffect@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002723C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180088CB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009EB10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800CC200 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801069B0 (-IsOfType@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18011F6A0 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1801212A0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1801215D0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180124AD0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18012B648 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801951A0 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1801EC2E0 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x180205834 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        char a4)
{
  __int64 v4; // rax
  const struct CVisualTree *v7; // r12
  __int64 (__fastcall *v8)(CVisual *, __int64, _QWORD); // rax
  int v10; // esi
  unsigned __int64 v11; // rdx
  char v12; // al
  _DWORD *v13; // r8
  float v14; // xmm6_4
  __int64 v15; // r9
  __int64 v16; // rax
  FLOAT *v17; // rdi
  __int64 (__fastcall *v18)(CVisual *, __int64, _DWORD *, __int64); // rax
  _DWORD *v19; // r8
  _BYTE *v20; // rcx
  unsigned int m; // eax
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm0_4
  int v28; // ecx
  unsigned int v29; // eax
  char v30; // r14
  float v31; // xmm1_4
  __int64 v32; // rdi
  char v33; // cl
  struct CMILMatrix *v34; // r8
  void (*v35)(CComponentTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  int v36; // r10d
  __m128 v37; // xmm10
  __m128 v38; // xmm14
  __m128 v39; // xmm15
  struct tagRECT v40; // xmm13
  char v41; // al
  float v42; // xmm9_4
  float v43; // xmm11_4
  float v44; // xmm12_4
  char v45; // r10
  __int64 v46; // rcx
  __m128 v47; // xmm2
  struct tagRECT v48; // xmm3
  __m128 v49; // xmm0
  __m128 v50; // xmm1
  float v51; // xmm1_4
  float v52; // xmm0_4
  float v54; // xmm1_4
  char v55; // cl
  float v56; // xmm3_4
  float v57; // xmm4_4
  float v58; // xmm13_4
  float *v59; // rcx
  float v60; // xmm3_4
  float v61; // xmm4_4
  float v62; // xmm0_4
  float v63; // xmm11_4
  float v64; // xmm12_4
  float v65; // xmm5_4
  float v66; // xmm2_4
  __m128 v67; // xmm13
  __int64 v68; // rcx
  _BYTE *v69; // rax
  unsigned int i; // r9d
  float **v71; // rdi
  float *v72; // rdi
  __int64 (__fastcall *v73)(); // rax
  char v74; // al
  __int64 v75; // rax
  __int128 *v76; // r12
  __int64 (__fastcall *v77)(); // rax
  _DWORD *v78; // r8
  unsigned int v79; // edx
  _BYTE *v80; // rcx
  unsigned int v81; // eax
  _DWORD *j; // r14
  __int64 v83; // rcx
  __int64 *v84; // r12
  __int64 v85; // r12
  __int64 v86; // rax
  int v87; // xmm1_4
  int v88; // xmm2_4
  int v89; // xmm3_4
  int v90; // xmm4_4
  int v91; // xmm5_4
  CTransform3D *v92; // r14
  _DWORD *v93; // r8
  CGeometry *v94; // rcx
  int ShapeData; // eax
  CRectanglesShape *v96; // r14
  int v97; // r12d
  __int64 (__fastcall *v98)(); // rax
  struct D2D_RECT_F *v99; // rcx
  unsigned __int64 v100; // rsi
  __int64 v101; // rcx
  __int64 (__fastcall *v102)(); // rax
  int v103; // eax
  unsigned int v104; // edx
  _BYTE *v105; // rax
  unsigned int k; // ecx
  __int64 v107; // rax
  CTransform3D **v108; // r12
  CTransform3D *v109; // r12
  __int64 (__fastcall *v110)(); // rax
  float v111; // xmm14_4
  float v112; // xmm12_4
  float v113; // xmm10_4
  float v114; // xmm4_4
  float v115; // xmm13_4
  float v116; // xmm11_4
  float v117; // xmm5_4
  float v118; // xmm3_4
  char v119; // cl
  float v120; // xmm2_4
  float v121; // xmm15_4
  __m128 v122; // xmm13
  __m128 v123; // xmm14
  __m128 v124; // xmm10
  __m128 v125; // xmm15
  __m128 v126; // xmm14
  __m128 v127; // xmm10
  __m128 v128; // xmm13
  __m128 v129; // xmm13
  int TightBounds; // eax
  void *(__fastcall *v131)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  float v132; // xmm2_4
  float v133; // xmm0_4
  float v134; // xmm5_4
  FLOAT top; // xmm1_4
  float v136; // xmm4_4
  FLOAT right; // xmm1_4
  float v138; // xmm3_4
  FLOAT bottom; // xmm1_4
  int v140; // ecx
  unsigned int v141; // eax
  __m128 v142; // xmm10
  float v143; // xmm12_4
  __m128 v144; // xmm15
  float v145; // xmm11_4
  __m128 v146; // xmm10
  __m128 v147; // xmm14
  __m128 v148; // xmm15
  __m128 v149; // xmm14
  __m128 v150; // xmm15
  __m128 v151; // xmm14
  __m128 v152; // xmm10
  __int64 v153; // rax
  CVisual *v154; // r15
  struct _LIST_ENTRY **p_Blink; // rdi
  struct Windows::Foundation::Numerics::float4x4 *v156; // r8
  bool v157; // al
  struct CTreeData *TreeData; // rax
  struct CTreeData *v159; // rdi
  char v160; // al
  const struct CMILMatrix *Matrix; // rax
  __int64 v162; // rax
  __int64 (__fastcall *v163)(CVisual *); // rax
  __int64 v164; // rax
  int Bounds; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *n; // rcx
  __int64 (__fastcall *v168)(); // rax
  __int64 v169; // r12
  void *v170[2]; // [rsp+38h] [rbp-D0h] BYREF
  __m256i v171; // [rsp+48h] [rbp-C0h]
  _BYTE v172[20]; // [rsp+68h] [rbp-A0h]
  char v173; // [rsp+88h] [rbp-80h]
  __int128 v174; // [rsp+98h] [rbp-70h] BYREF
  __int128 v175; // [rsp+A8h] [rbp-60h]
  __int128 v176; // [rsp+B8h] [rbp-50h]
  struct tagRECT v177; // [rsp+C8h] [rbp-40h]
  int v178; // [rsp+D8h] [rbp-30h]
  float v179; // [rsp+E8h] [rbp-20h] BYREF
  float v180; // [rsp+ECh] [rbp-1Ch] BYREF
  BOOL IsAutomaticBoundsToLocalSpaceEnabled; // [rsp+F0h] [rbp-18h]
  CRectanglesShape *v182; // [rsp+F8h] [rbp-10h] BYREF
  char v183; // [rsp+100h] [rbp-8h]
  _DWORD v184[2]; // [rsp+108h] [rbp+0h] BYREF
  const struct CVisualTree *v185; // [rsp+110h] [rbp+8h]
  __m128 v186; // [rsp+118h] [rbp+10h] BYREF
  __m128 v187; // [rsp+128h] [rbp+20h]
  __m128 v188; // [rsp+138h] [rbp+30h]
  struct tagRECT v189; // [rsp+148h] [rbp+40h]
  int v190; // [rsp+158h] [rbp+50h]
  struct D2D_RECT_F v191; // [rsp+168h] [rbp+60h] BYREF
  __int128 v192; // [rsp+178h] [rbp+70h] BYREF
  struct tagRECT v193; // [rsp+188h] [rbp+80h] BYREF
  __int64 v194; // [rsp+198h] [rbp+90h]
  void *retaddr; // [rsp+290h] [rbp+188h]

  v4 = *(_QWORD *)this;
  v185 = a2;
  v7 = a2;
  v8 = *(__int64 (__fastcall **)(CVisual *, __int64, _QWORD))(v4 + 64);
  v10 = 0;
  if ( (char *)v8 == (char *)&CSpriteVisual::IsOfType )
  {
    if ( !(unsigned __int8)CVisual::IsOfType(this, 92LL) )
      goto LABEL_9;
  }
  else
  {
    if ( (char *)v8 == (char *)CVisual::IsOfType )
    {
      v12 = CVisual::IsOfType(this, 92LL);
    }
    else if ( (char *)v8 == (char *)CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType )
    {
      v12 = CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType(
              this,
              92LL,
              CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType);
    }
    else
    {
      v12 = v8(this, 92LL, CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType);
    }
    if ( !v12 )
      goto LABEL_9;
  }
  if ( (*((_QWORD *)this + 85) || *((_QWORD *)this + 84)) && !*((_BYTE *)this + 696) )
  {
    *((_DWORD *)this + 46) = *((_DWORD *)this + 36);
    *((_DWORD *)this + 47) = *((_DWORD *)this + 37);
    *((_QWORD *)this + 22) = 0LL;
  }
LABEL_9:
  v13 = (_DWORD *)*((_QWORD *)this + 29);
  v14 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( (*v13 & 0x800000) != 0 )
  {
    v68 = (unsigned int)v13[1];
    v69 = v13 + 2;
    for ( i = 0; i < (unsigned int)v68; ++v69 )
    {
      if ( *v69 == 9 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v68 )
    {
      v71 = 0LL;
    }
    else
    {
      v11 = v68 + 15;
      v71 = (float **)((char *)v13 + v68 + 8LL * i - (((_BYTE)v68 + 15) & 7) + 15);
    }
    v72 = *v71;
    v73 = *(__int64 (__fastcall **)())(*(_QWORD *)v72 + 64LL);
    if ( v73 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
      || ((char *)v73 != (char *)CMatrixTransform3D::IsOfType
        ? (v160 = ((__int64 (__fastcall *)(float *, __int64))v73)(v72, 57LL))
        : (v160 = CMatrixTransform3D::IsOfType(v72, 57LL)),
          v160) )
    {
      v14 = v72[20];
    }
  }
  v15 = 1LL;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v14, 0.0))) & _xmm) < 0.0000011920929 )
  {
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    goto LABEL_16;
  }
  v16 = *(_QWORD *)this;
  v17 = (FLOAT *)((char *)this + 152);
  IsAutomaticBoundsToLocalSpaceEnabled = 0;
  v18 = *(__int64 (__fastcall **)(CVisual *, __int64, _DWORD *, __int64))(v16 + 64);
  if ( (char *)v18 == (char *)&CSpriteVisual::IsOfType )
  {
    if ( !(unsigned __int8)CVisual::IsOfType(this, 92LL) )
      goto LABEL_100;
  }
  else
  {
    if ( (char *)v18 == (char *)CVisual::IsOfType )
    {
      v74 = CVisual::IsOfType(this, 92LL);
    }
    else if ( (char *)v18 == (char *)CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType )
    {
      v74 = CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType(this, 92LL, v13);
    }
    else
    {
      v74 = v18(this, 92LL, v13, 1LL);
    }
    if ( !v74 )
      goto LABEL_100;
  }
  if ( *((_QWORD *)this + 85) || *((_QWORD *)this + 84) )
    IsAutomaticBoundsToLocalSpaceEnabled = CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(this);
LABEL_100:
  v75 = *(_QWORD *)this;
  v76 = (__int128 *)((char *)this + 176);
  v192 = 0LL;
  v77 = *(__int64 (__fastcall **)())(v75 + 320);
  if ( v77 != CVisual::GetBoundsWithEffects )
  {
    ((void (__fastcall *)(CVisual *, char *, __int128 *))v77)(this, (char *)this + 176, &v192);
    j = (_DWORD *)((char *)this + 152);
    goto LABEL_109;
  }
  v78 = (_DWORD *)*((_QWORD *)this + 29);
  v192 = *v76;
  if ( (*v78 & 0x800000) == 0 )
  {
    v86 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 224LL))(this);
    j = (_DWORD *)((char *)this + 152);
LABEL_108:
    if ( v86 )
    {
      v173 = *((_BYTE *)this + 696);
      v179 = 0.0;
      v180 = 0.0;
      if ( (CVisual::GetEffectiveSize(this, &v179, &v180) || v173)
        && (v162 = *(_QWORD *)this,
            *(float *)v184 = v179,
            v163 = *(__int64 (__fastcall **)(CVisual *))(v162 + 224),
            *(float *)&v184[1] = v180,
            v164 = v163(this),
            Bounds = CTreeEffect::GetBounds(v164, v76, v184, &v192),
            Bounds < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x187Eu, 0LL);
      }
      else if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v192) )
      {
        v192 = *v76;
      }
    }
    goto LABEL_109;
  }
  v79 = v78[1];
  v80 = v78 + 2;
  v81 = 0;
  for ( j = (_DWORD *)((char *)this + 152); v81 < v79; ++v80 )
  {
    if ( *v80 == 9 )
      break;
    ++v81;
  }
  v83 = (unsigned int)v78[1];
  if ( v81 >= (unsigned int)v83 )
    v84 = 0LL;
  else
    v84 = (__int64 *)((char *)v78 + v83 + 8LL * v81 - (((_BYTE)v83 + 15) & 7) + 15);
  v85 = *v84;
  v86 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 224LL))(this);
  if ( !v85 )
  {
    v76 = (__int128 *)((char *)this + 176);
    goto LABEL_108;
  }
  v102 = *(__int64 (__fastcall **)())(*(_QWORD *)v85 + 64LL);
  if ( v102 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
  {
    if ( !(unsigned __int8)CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(v85, 60LL) )
      goto LABEL_109;
  }
  else if ( !((unsigned __int8 (__fastcall *)(__int64, __int64))v102)(v85, 60LL) )
  {
    goto LABEL_109;
  }
  v103 = CFilterEffect::GetBounds(v85, (char *)this + 176, &v192);
  if ( v103 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, 0x186Au, 0LL);
LABEL_109:
  v87 = DWORD1(v192);
  v88 = DWORD2(v192);
  v89 = HIDWORD(v192);
  v90 = *((_DWORD *)this + 48);
  v91 = *((_DWORD *)this + 49);
  *j = v192;
  v92 = 0LL;
  *((_DWORD *)this + 39) = v87;
  *((_DWORD *)this + 40) = v88;
  *((_DWORD *)this + 41) = v89;
  *((_DWORD *)this + 42) = v90;
  *((_DWORD *)this + 43) = v91;
  v93 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v93 & 0x800000) == 0 )
    goto LABEL_110;
  v104 = v93[1];
  v105 = v93 + 2;
  for ( k = 0; k < v104; ++v105 )
  {
    if ( *v105 == 9 )
      break;
    ++k;
  }
  v107 = (unsigned int)v93[1];
  if ( k >= (unsigned int)v107 )
    v108 = 0LL;
  else
    v108 = (CTransform3D **)((char *)v93 + 8LL * k - (((_BYTE)v107 + 15) & 7) + v107 + 15);
  v109 = *v108;
  v110 = *(__int64 (__fastcall **)())(*(_QWORD *)v109 + 64LL);
  if ( v110 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
  {
    if ( (unsigned __int8)CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(v109, 173LL) )
    {
LABEL_139:
      v92 = v109;
      goto LABEL_110;
    }
  }
  else if ( ((unsigned __int8 (__fastcall *)(CTransform3D *, __int64))v110)(v109, 173LL) )
  {
    goto LABEL_139;
  }
  v168 = *(__int64 (__fastcall **)())(*(_QWORD *)v109 + 64LL);
  if ( v168 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
    || ((unsigned __int8 (__fastcall *)(CTransform3D *, __int64))v168)(v109, 57LL) )
  {
    v92 = (CTransform3D *)*((_QWORD *)v109 + 11);
  }
LABEL_110:
  if ( v92 )
  {
    Matrix = CTransform3D::GetMatrix(v92, (const struct D2D_SIZE_F *)this + 18);
    *(_OWORD *)v170 = *(_OWORD *)Matrix;
    v171 = *(__m256i *)((char *)Matrix + 16);
    *(_OWORD *)v172 = *((_OWORD *)Matrix + 3);
    *(_DWORD *)&v172[16] = *((_DWORD *)Matrix + 16);
    if ( IsAutomaticBoundsToLocalSpaceEnabled || !*((_DWORD *)this + 28) )
    {
      v174 = _xmm;
      v175 = _xmm;
      v177 = *(struct tagRECT *)&_xmm.r;
      v176 = 0LL;
      v178 = 10657;
      CMILMatrix::Multiply((CMILMatrix *)v170, (const struct CMILMatrix *)&v174);
    }
    CMILMatrix::Transform3DBoundsHelper<0>(v170, (char *)this + 152, (char *)this + 152);
  }
  v94 = (CGeometry *)*((_QWORD *)this + 31);
  if ( !v94 || *((char *)this + 105) < 0 || *((_DWORD *)this + 28) )
  {
    v15 = 1LL;
LABEL_113:
    v7 = v185;
    goto LABEL_16;
  }
  v182 = 0LL;
  v183 = 0;
  v191 = 0LL;
  ShapeData = CGeometry::GetShapeData(v94, (const struct D2D_SIZE_F *)this + 18, (struct CShapePtr *)&v182);
  v10 = ShapeData;
  if ( ShapeData >= 0 )
  {
    v96 = v182;
    v97 = -2003304309;
    if ( v182 )
    {
      v98 = *(__int64 (__fastcall **)())(*(_QWORD *)v182 + 48LL);
      if ( (char *)v98 == (char *)&CRectanglesShape::GetTightBounds )
      {
        v99 = (struct D2D_RECT_F *)*((_QWORD *)v182 + 2);
        if ( *((struct D2D_RECT_F **)v182 + 3) != v99 )
        {
          v100 = 1LL;
          v191 = *v99;
          v101 = *((_QWORD *)v182 + 2);
          if ( (unsigned __int64)((*((_QWORD *)v182 + 3) - v101) >> 4) > 1 )
          {
            v169 = 16LL;
            do
            {
              TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v191, v101 + v169);
              v101 = *((_QWORD *)v96 + 2);
              v169 += 16LL;
              ++v100;
            }
            while ( v100 < (*((_QWORD *)v96 + 3) - v101) >> 4 );
            v96 = v182;
          }
        }
        goto LABEL_122;
      }
      if ( v98 == CRegionShape::GetTightBounds )
      {
        v193 = 0LL;
        if ( FastRegion::CRegion::GetBoundingRect((CRectanglesShape *)((char *)v182 + 16), &v193) )
        {
          v191.left = (float)v193.left;
          v191.top = (float)v193.top;
          v191.right = (float)v193.right;
          v191.bottom = (float)v193.bottom;
        }
        v96 = v182;
        v10 = 0;
        goto LABEL_165;
      }
      if ( (char *)v98 == (char *)CRoundedRectangleShape::GetTightBounds )
        TightBounds = CRoundedRectangleShape::GetTightBounds(v182, &v191, 0LL);
      else
        TightBounds = ((__int64 (__fastcall *)(CRectanglesShape *, struct D2D_RECT_F *, _QWORD))v98)(v182, &v191, 0LL);
      v97 = TightBounds;
      v10 = TightBounds;
      if ( TightBounds < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x140u, 0LL);
LABEL_160:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v97, 0x63u, 0LL);
        goto LABEL_161;
      }
      v96 = v182;
    }
    v10 = v97;
    if ( v97 >= 0 )
      goto LABEL_163;
    goto LABEL_160;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x62u, 0LL);
LABEL_161:
  v96 = v182;
LABEL_163:
  if ( v10 == -2003304438 || v10 == -2003304309 )
  {
    LODWORD(v191.left) = _xmm;
    LODWORD(v191.bottom) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
    LODWORD(v191.top) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
    LODWORD(v191.right) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
LABEL_122:
    v10 = 0;
  }
LABEL_165:
  if ( v183 && v96 )
  {
    v131 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v96;
    if ( v131 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(v96);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v96);
    }
    else if ( v131 == CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::~CRoundedRectangleShape(v96);
      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v96);
    }
    else if ( v131 == CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v96, 1u);
    }
    else
    {
      v131(v96, 1u);
    }
  }
  v182 = 0LL;
  v183 = 0;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x613u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x578u, 0LL);
    return (unsigned int)v10;
  }
  v132 = *((float *)this + 42);
  v133 = *((float *)this + 43);
  if ( v191.left > *v17 )
    *v17 = v191.left;
  v134 = *((float *)this + 39);
  top = v191.top;
  if ( v191.top > v134 )
  {
    *((_DWORD *)this + 39) = LODWORD(v191.top);
    v134 = top;
  }
  v136 = *((float *)this + 40);
  right = v191.right;
  if ( v136 > v191.right )
  {
    *((_DWORD *)this + 40) = LODWORD(v191.right);
    v136 = right;
  }
  v138 = *((float *)this + 41);
  bottom = v191.bottom;
  if ( v138 > v191.bottom )
  {
    *((_DWORD *)this + 41) = LODWORD(v191.bottom);
    v138 = bottom;
  }
  v15 = 1LL;
  v140 = (v133 <= v132) + 1;
  if ( v136 > *v17 )
    v140 = v133 <= v132;
  v141 = v140 + 1;
  if ( v138 > v134 )
    v141 = v140;
  if ( v141 <= 1 )
    goto LABEL_113;
  v7 = v185;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *(_QWORD *)v17 = 0LL;
LABEL_16:
  v19 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v19 & 0x8000000) != 0 )
  {
    v11 = (unsigned int)v19[1];
    v20 = v19 + 2;
    for ( m = 0; m < (unsigned int)v11; ++v20 )
    {
      if ( *v20 == 5 )
        break;
      ++m;
    }
    v22 = (unsigned int)v19[1];
    if ( m >= (unsigned int)v22 )
    {
      v23 = 0LL;
    }
    else
    {
      v11 = v22 + 15;
      v23 = (__int64 *)((char *)v19 + 8LL * m - (((_BYTE)v22 + 15) & 7) + v22 + 15);
    }
    v24 = *v23;
    if ( v24 )
    {
      *(_OWORD *)(v24 + 80) = *(_OWORD *)((char *)this + 152);
      *(_QWORD *)(v24 + 96) = *((_QWORD *)this + 21);
    }
  }
  v25 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v25 + 4) & 0x8000000) != 0 )
  {
    v11 = *(unsigned int *)(v25 + 12);
    v59 = (float *)(v25 + 12);
    if ( (*(_DWORD *)(v25 + 12) & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v59 = (float *)((char *)v59 + (v11 & 0xFFFFFF) + 4);
        v11 = *(unsigned int *)v59;
      }
      while ( (*(_DWORD *)v59 & 0x7F000000) != 0x5000000 );
    }
    v26 = v59[1];
  }
  else
  {
    v26 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v26, 0.0))) & _xmm) >= 0.0000011920929 )
  {
    v27 = *((float *)this + 43);
    v28 = (v27 <= *((float *)this + 42)) + 1;
    if ( *((float *)this + 40) > *((float *)this + 38) )
      v28 = v27 <= *((float *)this + 42);
    v29 = v28 + 1;
    if ( *((float *)this + 41) > *((float *)this + 39) )
      v29 = v28;
    if ( v29 > 1 )
      goto LABEL_67;
    if ( a4 )
    {
LABEL_71:
      *(_OWORD *)((char *)this + 152) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *((_QWORD *)this + 21) = 0x7F7FFFFFFF7FFFFFLL;
      goto LABEL_67;
    }
    v178 = 0;
    v30 = 0;
    v175 = _xmm;
    v177 = *(struct tagRECT *)&_xmm.r;
    v31 = *((float *)this + 32);
    LOBYTE(v178) = -86;
    *(_WORD *)((char *)&v178 + 1) = 41;
    v174 = _xmm;
    v176 = _xmm;
    if ( v31 != 0.0 || *((float *)this + 33) != 0.0 || *((float *)this + 31) != 0.0 )
    {
      v30 = 1;
      *(_QWORD *)&v177.left = __PAIR64__(*((_DWORD *)this + 33), LODWORD(v31));
      v177.right = *((_DWORD *)this + 31);
      LOBYTE(v178) = -88;
    }
    v32 = *((_QWORD *)this + 30);
    if ( !v32 )
    {
LABEL_64:
      if ( !a3 )
      {
        if ( v30 )
          CMILMatrix::Transform3DBoundsHelper<0>(&v174, (char *)this + 152, (char *)this + 152);
        goto LABEL_67;
      }
      v153 = *(_QWORD *)v7;
      v154 = (CVisual *)*((_QWORD *)this + 11);
      *(_DWORD *)&v172[16] = 0;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, unsigned __int64, _DWORD *, __int64))(v153 + 184))(
             v7,
             v11,
             v19,
             v15) )
      {
        p_Blink = (struct _LIST_ENTRY **)((char *)v154 + 328);
LABEL_216:
        if ( p_Blink )
        {
          CVisual::EnsureWorldTransform(v154, v7, (struct CTreeData *)p_Blink);
          if ( !p_Blink[28] )
            ModuleFailFastForHRESULT(-2003292412, retaddr);
          *(_OWORD *)v170 = *((_OWORD *)p_Blink + 17);
          v171 = *(__m256i *)((_BYTE *)p_Blink + 9);
          *(_OWORD *)v172 = *((_OWORD *)p_Blink + 20);
          *(_DWORD *)&v172[16] = *((_DWORD *)p_Blink + 84);
LABEL_219:
          v157 = Windows::Foundation::Numerics::invert(
                   (Windows::Foundation::Numerics *)v170,
                   (const struct Windows::Foundation::Numerics::float4x4 *)v170,
                   v156);
          v172[16] &= 3u;
          v172[17] &= 0xC0u;
          if ( v157 )
          {
            v190 = 0;
            TreeData = CVisual::FindTreeData(a3, v7);
            v159 = TreeData;
            if ( TreeData )
            {
              CVisual::EnsureWorldTransform(a3, v7, TreeData);
              if ( !*((_QWORD *)v159 + 28) )
                ModuleFailFastForHRESULT(-2003292412, retaddr);
              v186 = *((__m128 *)v159 + 17);
              v187 = *((__m128 *)v159 + 18);
              v188 = *((__m128 *)v159 + 19);
              v189 = (struct tagRECT)*((_OWORD *)v159 + 20);
              v190 = *((_DWORD *)v159 + 84);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
            }
            if ( v30 )
              CMILMatrix::Multiply((__m128 *)&v174, (const struct CMILMatrix *)&v186, (struct CMILMatrix *)&v186);
            v194 = 0LL;
            v193 = 0LL;
            CMILMatrix::Transform3DBoundsHelper<0>(&v186, (char *)this + 152, &v193);
            CMILMatrix::Transform3DBoundsHelper<0>(v170, &v193, (char *)this + 152);
            goto LABEL_67;
          }
          goto LABEL_71;
        }
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v154);
        if ( TreeDataListHead )
        {
          for ( n = TreeDataListHead->Flink; n != TreeDataListHead; n = n->Flink )
          {
            p_Blink = &n[-22].Blink;
            if ( (const struct CVisualTree *)n[2].Flink == v7 )
              goto LABEL_216;
          }
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
      goto LABEL_219;
    }
    v11 = (unsigned __int64)this + 144;
    v33 = *(_BYTE *)(v32 + 40) & 1;
    if ( this != (CVisual *)-144LL )
    {
      if ( (*(_BYTE *)(v32 + 40) & 1) == 0
        && *(_BYTE *)(v32 + 156)
        && (*(float *)(v32 + 148) != *(float *)v11 || *(float *)(v32 + 152) != *((float *)this + 37)) )
      {
        v33 = 1;
      }
      *(_QWORD *)(v32 + 148) = *(_QWORD *)v11;
    }
    if ( v33 )
    {
      v34 = (struct CMILMatrix *)(v32 + 80);
      v35 = *(void (**)(CComponentTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v32 + 200LL);
      if ( v35 == CComponentTransform3D::GetRealization )
      {
        CComponentTransform3D::GetRealization((CComponentTransform3D *)v32, (const struct D2D_SIZE_F *)v11, v34);
      }
      else if ( (char *)v35 == (char *)CMatrixTransform::GetRealization )
      {
        CMatrixTransform::GetRealization((CMatrixTransform *)v32, (const struct D2D_SIZE_F *)v11, v34);
      }
      else
      {
        ((void (__fastcall *)(__int64, unsigned __int64, struct CMILMatrix *, __int64))v35)(v32, v11, v34, 1LL);
      }
      *(_DWORD *)(v32 + 40) &= ~1u;
    }
    v36 = *(_DWORD *)(v32 + 144);
    v37 = *(__m128 *)(v32 + 80);
    v38 = *(__m128 *)(v32 + 96);
    *(__m128 *)v170 = v37;
    *(__m128 *)v171.m256i_i8 = v38;
    *(_DWORD *)&v172[16] = v36;
    v39 = *(__m128 *)(v32 + 112);
    v40 = *(struct tagRECT *)(v32 + 128);
    *(__m128 *)&v171.m256i_u64[2] = v39;
    *(struct tagRECT *)v172 = v40;
    if ( (char)((_BYTE)v36 << 6) >> 6 == 1 )
    {
      v42 = FLOAT_0_000081380211;
      LODWORD(v43) = _mm_shuffle_ps((__m128)v40, (__m128)v40, 170).m128_u32[0];
      LODWORD(v44) = _mm_shuffle_ps((__m128)v40, (__m128)v40, 85).m128_u32[0];
      v193 = v40;
    }
    else
    {
      if ( (char)((_BYTE)v36 << 6) >> 6 < 0
        || (v41 = CMILMatrix::IsTranslate<1>(v170),
            v42 = FLOAT_0_000081380211,
            v43 = *(float *)&v172[8],
            v44 = *(float *)&v172[4],
            v193 = (struct tagRECT)*(unsigned int *)v172,
            v41)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v172 - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v172[4] - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v172[8] - 0.0) & _xmm) < 0.000081380211 )
      {
        v37 = (__m128)v174;
        v38 = (__m128)v175;
        v39 = (__m128)v176;
        v40 = v177;
        *(_DWORD *)&v172[16] = v178;
        goto LABEL_63;
      }
      v40 = *(struct tagRECT *)v172;
      v39 = *(__m128 *)&v171.m256i_u64[2];
      v38 = *(__m128 *)v171.m256i_i8;
      v37 = *(__m128 *)v170;
      v172[16] = v172[16] & 0xFC | 1;
    }
    if ( CMILMatrix::IsIdentity<1>((__int64)&v174) )
    {
LABEL_63:
      v30 = 1;
      v174 = (__int128)v37;
      v175 = (__int128)v38;
      v176 = (__int128)v39;
      v177 = v40;
      v178 = *(_DWORD *)&v172[16];
      goto LABEL_64;
    }
    if ( !(unsigned __int8)CMILMatrix::IsTranslate<1>(&v174) )
    {
      if ( !(unsigned __int8)CMILMatrix::IsTranslate<1>(v170) )
      {
        if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(&v174) )
        {
          if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v170)
            && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v174) )
          {
            *(_QWORD *)&v172[12] = 0x28083F800000LL;
            *(_OWORD *)&v171.m256i_u64[1] = 0uLL;
            v171.m256i_i32[7] = 0;
            v122 = *(__m128 *)v172;
            v123 = *(__m128 *)v171.m256i_i8;
            v123.m128_f32[0] = (float)(*(float *)&v175 * *(float *)&v171.m256i_i32[1])
                             + (float)(*(float *)&v174 * *(float *)v171.m256i_i32);
            v124 = (__m128)(unsigned __int64)v170[0];
            v124.m128_f32[0] = (float)(*(float *)&v175 * *((float *)v170 + 1))
                             + (float)(*(float *)&v174 * *(float *)v170);
            v125 = _mm_shuffle_ps(*(__m128 *)&v171.m256i_u64[2], *(__m128 *)&v171.m256i_u64[2], 210);
            v126 = _mm_shuffle_ps(v123, v123, 225);
            v125.m128_f32[0] = *(float *)&v171.m256i_i32[6] * *((float *)&v176 + 2);
            v127 = _mm_shuffle_ps(v124, v124, 225);
            v126.m128_f32[0] = (float)(*((float *)&v175 + 1) * *(float *)&v171.m256i_i32[1])
                             + (float)(*((float *)&v174 + 1) * *(float *)v171.m256i_i32);
            v122.m128_f32[0] = (float)((float)(*(float *)&v175 * *(float *)&v172[4])
                                     + (float)(*(float *)&v174 * *(float *)v172))
                             + *(float *)&v177.left;
            v39 = _mm_shuffle_ps(v125, v125, 201);
            v128 = _mm_shuffle_ps(v122, v122, 225);
            v127.m128_f32[0] = (float)(*((float *)&v175 + 1) * *((float *)v170 + 1))
                             + (float)(*((float *)&v174 + 1) * *(float *)v170);
            v128.m128_f32[0] = (float)((float)(*((float *)&v175 + 1) * *(float *)&v172[4])
                                     + (float)(*((float *)&v174 + 1) * *(float *)v172))
                             + *(float *)&v177.top;
            v38 = _mm_shuffle_ps(v126, v126, 225);
            v129 = _mm_shuffle_ps(v128, v128, 198);
            v129.m128_f32[0] = (float)(*((float *)&v176 + 2) * *(float *)&v172[8]) + *(float *)&v177.right;
            v37 = _mm_shuffle_ps(v127, v127, 225);
            v40 = (struct tagRECT)_mm_shuffle_ps(v129, v129, 201);
            *(struct tagRECT *)v172 = v40;
            *(__m128 *)&v171.m256i_u64[2] = v39;
            *(__m128 *)v171.m256i_i8 = v38;
            *(__m128 *)v170 = v37;
          }
          else
          {
            v47 = *(__m128 *)&v171.m256i_u64[2];
            v48 = *(struct tagRECT *)v172;
            v186 = (__m128)v174;
            v187 = (__m128)v175;
            v188 = (__m128)v176;
            v49.m128_u64[1] = (unsigned __int64)v170[1];
            v189 = v177;
            v50 = *(__m128 *)v171.m256i_i8;
            *(double *)v49.m128_u64 = DirectX::XMMatrixMultiply(v46, &v186);
            v40 = v48;
            *(_DWORD *)&v172[16] = 0;
            v39 = v47;
            v38 = v50;
            v37 = v49;
          }
          goto LABEL_63;
        }
        if ( v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v174 - 1.0) & _xmm)
          || v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v175 + 1) - 1.0) & _xmm)
          || v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v176 + 2) - 1.0) & _xmm) )
        {
          v111 = *(float *)v170 * *(float *)&v174;
          v112 = *(float *)v171.m256i_i32 * *(float *)&v174;
          v113 = *(float *)&v171.m256i_i32[4] * *(float *)&v174;
          v114 = *(float *)v172 * *(float *)&v174;
          v115 = *((float *)v170 + 1) * *((float *)&v175 + 1);
          v116 = *(float *)&v171.m256i_i32[1] * *((float *)&v175 + 1);
          v117 = *(float *)&v171.m256i_i32[5] * *((float *)&v175 + 1);
          v118 = *(float *)&v172[4] * *((float *)&v175 + 1);
          *(float *)v170 = *(float *)v170 * *(float *)&v174;
          *(float *)v171.m256i_i32 = *(float *)v171.m256i_i32 * *(float *)&v174;
          *(float *)&v171.m256i_i32[4] = *(float *)&v171.m256i_i32[4] * *(float *)&v174;
          *(float *)v172 = *(float *)v172 * *(float *)&v174;
          *((float *)v170 + 1) = *((float *)v170 + 1) * *((float *)&v175 + 1);
          *(float *)&v171.m256i_i32[1] = *(float *)&v171.m256i_i32[1] * *((float *)&v175 + 1);
          *(float *)&v171.m256i_i32[5] = *(float *)&v171.m256i_i32[5] * *((float *)&v175 + 1);
          *(float *)&v172[4] = *(float *)&v172[4] * *((float *)&v175 + 1);
          if ( v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v176 + 2) - 1.0) & _xmm) )
          {
            *(float *)&v170[1] = *(float *)&v170[1] * *((float *)&v176 + 2);
            *(float *)&v171.m256i_i32[2] = *(float *)&v171.m256i_i32[2] * *((float *)&v176 + 2);
            *(float *)&v171.m256i_i32[6] = *(float *)&v171.m256i_i32[6] * *((float *)&v176 + 2);
            *(float *)&v172[8] = *(float *)&v172[8] * *((float *)&v176 + 2);
          }
          v119 = v172[16] & 0xCC;
          v172[16] &= 0xCCu;
        }
        else
        {
          v119 = v172[16];
          v118 = *(float *)&v172[4];
          v114 = *(float *)v172;
          v117 = *(float *)&v171.m256i_i32[5];
          v113 = *(float *)&v171.m256i_i32[4];
          v116 = *(float *)&v171.m256i_i32[1];
          v112 = *(float *)v171.m256i_i32;
          v115 = *((float *)v170 + 1);
          v111 = *(float *)v170;
        }
        v120 = *(float *)&v177.left;
        v51 = *(float *)&v177.right;
        v121 = *(float *)&v177.top;
        if ( v42 > COERCE_FLOAT(v177.left & _xmm)
          && v42 > COERCE_FLOAT(v177.top & _xmm)
          && v42 > COERCE_FLOAT(v177.right & _xmm) )
        {
          goto LABEL_62;
        }
        v11 = v172[17];
        if ( (char)(4 * v172[17]) >> 6 != 1 )
        {
          if ( (char)(4 * v172[17]) >> 6 >= 0 )
          {
            if ( v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                       (float)((float)((float)(COERCE_FLOAT(v171.m256i_i32[3] & _xmm) * 61440.0)
                                                     + (float)(COERCE_FLOAT(HIDWORD(v170[1]) & _xmm) * 61440.0))
                                             + COERCE_FLOAT(*(_DWORD *)&v172[12] & _xmm))
                                     - 1.0) & _xmm) )
            {
              LOBYTE(v11) = v172[17] & 0xCF | 0x10;
            }
            else
            {
              LOBYTE(v11) = v172[17] | 0x30;
              v172[17] |= 0x30u;
              if ( v42 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v171.m256i_i32[7] & _xmm) * 61440.0) - 0.0) & _xmm) )
              {
                v51 = *(float *)&v177.right;
LABEL_60:
                v52 = *(float *)&v172[8] + v51;
LABEL_61:
                *(float *)&v172[8] = v52;
                v172[16] = v119 & 0xFC;
                *(float *)&v172[4] = v118 + v121;
                *(float *)v172 = v114 + v120;
LABEL_62:
                v40 = *(struct tagRECT *)v172;
                v39 = *(__m128 *)&v171.m256i_u64[2];
                v38 = *(__m128 *)v171.m256i_i8;
                v37 = *(__m128 *)v170;
                goto LABEL_63;
              }
            }
          }
          else if ( v42 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v171.m256i_i32[7] & _xmm) * 61440.0) - 0.0) & _xmm) )
          {
            goto LABEL_60;
          }
        }
        LOBYTE(v11) = v11 & 0xF3;
        v172[17] = v11;
        *(float *)v170 = v111 + (float)(*(float *)&v177.left * *((float *)&v170[1] + 1));
        *((float *)v170 + 1) = v115 + (float)(*(float *)&v177.top * *((float *)&v170[1] + 1));
        *(float *)&v170[1] = *(float *)&v170[1] + (float)(*(float *)&v177.right * *((float *)&v170[1] + 1));
        *(float *)v171.m256i_i32 = v112 + (float)(*(float *)&v177.left * *(float *)&v171.m256i_i32[3]);
        v120 = *(float *)&v177.left * *(float *)&v172[12];
        *(float *)&v171.m256i_i32[2] = *(float *)&v171.m256i_i32[2]
                                     + (float)(*(float *)&v177.right * *(float *)&v171.m256i_i32[3]);
        *(float *)&v171.m256i_i32[1] = v116 + (float)(*(float *)&v177.top * *(float *)&v171.m256i_i32[3]);
        v121 = *(float *)&v177.top * *(float *)&v172[12];
        *(float *)&v171.m256i_i32[4] = v113 + (float)(*(float *)&v177.left * *(float *)&v171.m256i_i32[7]);
        v52 = *(float *)&v172[8] + (float)(*(float *)&v177.right * *(float *)&v172[12]);
        *(float *)&v171.m256i_i32[5] = v117 + (float)(*(float *)&v177.top * *(float *)&v171.m256i_i32[7]);
        *(float *)&v171.m256i_i32[6] = *(float *)&v171.m256i_i32[6]
                                     + (float)(*(float *)&v177.right * *(float *)&v171.m256i_i32[7]);
        goto LABEL_61;
      }
      v60 = *(float *)v172;
      v40 = v177;
      v61 = *(float *)&v172[4];
      LODWORD(v62) = *(_DWORD *)v172 & _xmm;
      *(_DWORD *)&v172[16] = v178;
      v63 = *(float *)&v172[8];
      v37 = (__m128)v174;
      v38 = (__m128)v175;
      v39 = (__m128)v176;
      *(struct tagRECT *)v172 = v177;
      if ( v42 > v62 && v42 > COERCE_FLOAT(LODWORD(v61) & _xmm) && v42 > COERCE_FLOAT(LODWORD(v63) & _xmm) )
        goto LABEL_63;
      LODWORD(v64) = _mm_shuffle_ps((__m128)v174, (__m128)v174, 255).m128_u32[0];
      LODWORD(v65) = _mm_shuffle_ps((__m128)v176, (__m128)v176, 255).m128_u32[0];
      *(float *)v172 = (float)((float)((float)(*(float *)&v175 * v61) + (float)(*(float *)&v174 * v60))
                             + (float)(*(float *)&v176 * v63))
                     + *(float *)&v177.left;
      *(float *)&v172[4] = *(float *)&v172[4]
                         + (float)((float)((float)(_mm_shuffle_ps((__m128)v175, (__m128)v175, 85).m128_f32[0] * v61)
                                         + (float)(_mm_shuffle_ps((__m128)v174, (__m128)v174, 85).m128_f32[0] * v60))
                                 + (float)(_mm_shuffle_ps((__m128)v176, (__m128)v176, 85).m128_f32[0] * v63));
      LODWORD(v66) = _mm_shuffle_ps((__m128)v175, (__m128)v175, 255).m128_u32[0];
      *(float *)&v172[8] = *(float *)&v172[8]
                         + (float)((float)((float)(_mm_shuffle_ps((__m128)v175, (__m128)v175, 170).m128_f32[0] * v61)
                                         + (float)(_mm_shuffle_ps((__m128)v174, (__m128)v174, 170).m128_f32[0] * v60))
                                 + (float)(_mm_shuffle_ps((__m128)v176, (__m128)v176, 170).m128_f32[0] * v63));
      if ( (char)(4 * v172[17]) >> 6 != 1 )
      {
        if ( (char)(4 * v172[17]) >> 6 >= 0 )
        {
          if ( v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                     (float)((float)((float)(COERCE_FLOAT(LODWORD(v66) & _xmm) * 61440.0)
                                                   + (float)(COERCE_FLOAT(LODWORD(v64) & _xmm) * 61440.0))
                                           + COERCE_FLOAT(*(_DWORD *)&v172[12] & _xmm))
                                   - 1.0) & _xmm) )
            goto LABEL_90;
          v172[17] |= 0x30u;
          if ( v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v65) & _xmm) * 61440.0) - 0.0) & _xmm) )
            goto LABEL_90;
        }
        else if ( v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v65) & _xmm) * 61440.0) - 0.0) & _xmm) )
        {
          goto LABEL_90;
        }
        v172[16] &= 0xFCu;
        v40 = *(struct tagRECT *)v172;
        goto LABEL_63;
      }
LABEL_90:
      *(_DWORD *)&v172[16] = 0;
      v67 = _mm_shuffle_ps(*(__m128 *)v172, *(__m128 *)v172, 147);
      v67.m128_f32[0] = *(float *)&v172[12]
                      + (float)((float)((float)(v66 * v61) + (float)(v64 * v60)) + (float)(v65 * v63));
      v40 = (struct tagRECT)_mm_shuffle_ps(v67, v67, 57);
      *(struct tagRECT *)v172 = v40;
      goto LABEL_63;
    }
    v54 = *(float *)&v177.top;
    if ( v42 > COERCE_FLOAT(v177.left & _xmm)
      && v42 > COERCE_FLOAT(v177.top & _xmm)
      && v42 > COERCE_FLOAT(v177.right & _xmm) )
    {
      goto LABEL_63;
    }
    v55 = v172[17];
    LODWORD(v56) = _mm_shuffle_ps(v38, v38, 255).m128_u32[0];
    LODWORD(v57) = _mm_shuffle_ps(v37, v37, 255).m128_u32[0];
    LODWORD(v58) = _mm_shuffle_ps(v39, v39, 255).m128_u32[0];
    if ( (char)(4 * v172[17]) >> 6 == 1 )
      goto LABEL_187;
    if ( (char)(4 * v172[17]) >> 6 < 0 )
    {
      if ( v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v58) & _xmm) * 61440.0) - 0.0) & _xmm) )
        goto LABEL_187;
LABEL_190:
      v143 = v44 + v54;
      v145 = v43 + *(float *)&v177.right;
      *(float *)v172 = *(float *)&v193.left + *(float *)&v177.left;
      goto LABEL_191;
    }
    if ( v42 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                               (float)((float)((float)(COERCE_FLOAT(LODWORD(v56) & _xmm) * 61440.0)
                                             + (float)(COERCE_FLOAT(LODWORD(v57) & _xmm) * 61440.0))
                                     + COERCE_FLOAT(*(_DWORD *)&v172[12] & _xmm))
                             - 1.0) & _xmm) )
    {
      v55 = v172[17] & 0xCF | 0x10;
    }
    else
    {
      v55 = v172[17] | 0x30;
      v172[17] |= 0x30u;
      if ( v42 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v58) & _xmm) * 61440.0) - 0.0) & _xmm) )
      {
        v54 = *(float *)&v177.top;
        goto LABEL_190;
      }
    }
LABEL_187:
    v172[17] = v55 & 0xF3;
    v142 = *(__m128 *)v170;
    v143 = v44 + (float)(*(float *)&v177.top * *(float *)&v172[12]);
    v144 = *(__m128 *)&v171.m256i_u64[2];
    v142.m128_f32[0] = *(float *)v170 + (float)(*(float *)&v177.left * v57);
    v145 = v43 + (float)(*(float *)&v177.right * *(float *)&v172[12]);
    v146 = _mm_shuffle_ps(v142, v142, 225);
    v147 = *(__m128 *)v171.m256i_i8;
    v144.m128_f32[0] = *(float *)&v171.m256i_i32[4] + (float)(*(float *)&v177.left * v58);
    v147.m128_f32[0] = *(float *)v171.m256i_i32 + (float)(*(float *)&v177.left * v56);
    v148 = _mm_shuffle_ps(v144, v144, 225);
    v149 = _mm_shuffle_ps(v147, v147, 225);
    v148.m128_f32[0] = *(float *)&v171.m256i_i32[5] + (float)(*(float *)&v177.top * v58);
    v149.m128_f32[0] = *(float *)&v171.m256i_i32[1] + (float)(*(float *)&v177.top * v56);
    v150 = _mm_shuffle_ps(v148, v148, 198);
    v146.m128_f32[0] = *((float *)v170 + 1) + (float)(*(float *)&v177.top * v57);
    v151 = _mm_shuffle_ps(v149, v149, 198);
    v152 = _mm_shuffle_ps(v146, v146, 198);
    v150.m128_f32[0] = *(float *)&v171.m256i_i32[6] + (float)(*(float *)&v177.right * v58);
    v151.m128_f32[0] = *(float *)&v171.m256i_i32[2] + (float)(*(float *)&v177.right * v56);
    v39 = _mm_shuffle_ps(v150, v150, 201);
    v152.m128_f32[0] = *(float *)&v170[1] + (float)(*(float *)&v177.right * v57);
    v38 = _mm_shuffle_ps(v151, v151, 201);
    v37 = _mm_shuffle_ps(v152, v152, 201);
    *(__m128 *)&v171.m256i_u64[2] = v39;
    *(__m128 *)v171.m256i_i8 = v38;
    *(__m128 *)v170 = v37;
    *(float *)v172 = *(float *)&v193.left + (float)(*(float *)&v177.left * *(float *)&v172[12]);
LABEL_191:
    *(float *)&v172[8] = v145;
    *(float *)&v172[4] = v143;
    v40 = *(struct tagRECT *)v172;
    v172[16] = v45 & 0xFC;
    goto LABEL_63;
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
LABEL_67:
  if ( *((float *)this + 40) < *((float *)this + 38)
    || *((float *)this + 41) < *((float *)this + 39)
    || *((float *)this + 43) < *((float *)this + 42) )
  {
    *(_OWORD *)((char *)this + 152) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *((_QWORD *)this + 21) = 0x7F7FFFFFFF7FFFFFLL;
  }
  return (unsigned int)v10;
}
