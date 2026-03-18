/*
 * XREFs of ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1@PEAVCMILMatrix@@@Z @ 0x1800C28B0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::ProcessVisualsWorldTransformAndClip(
        CPreComputeContext *this,
        struct CVisual *a2,
        struct CVisual *a3,
        const struct CVisualTree **a4,
        struct CMILMatrix *a5)
{
  _QWORD **v5; // rsi
  bool v6; // r12
  bool v8; // r13
  const struct CVisualTree *v9; // r14
  float *v10; // r15
  struct CTreeData *v11; // rbx
  struct CMILMatrix *v12; // r9
  CRectanglesShape *v13; // r15
  __int64 v14; // r8
  struct CPreComputeContext::SubTreeContext *v15; // r14
  char *v16; // r13
  __int64 v18; // r8
  __int64 v19; // rax
  _BYTE *v20; // rdx
  __int64 i; // rcx
  _QWORD **v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *j; // rax
  CGeometry *v25; // rcx
  int ShapeData; // eax
  int v27; // ebx
  CRectanglesShape *v28; // r13
  int v29; // r14d
  __int64 (__fastcall *v30)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *); // rax
  _OWORD *v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rax
  _BYTE *v42; // rdx
  unsigned int n; // ecx
  _QWORD *v44; // rcx
  _QWORD *ii; // rax
  int TightBounds; // eax
  CRectanglesShape *(__fastcall *v47)(CRectanglesShape *, char, __int64); // rax
  unsigned __int64 v48; // r14
  char v49; // cl
  float v50; // xmm5_4
  float v51; // xmm2_4
  float v52; // xmm4_4
  float v53; // xmm3_4
  __int64 v54; // rdx
  __m128 v55; // xmm6
  float v56; // xmm7_4
  float v57; // xmm5_4
  __m128 v58; // xmm6
  float v59; // xmm1_4
  __m128 v60; // xmm6
  float v61; // xmm0_4
  __m128 v62; // xmm6
  unsigned int v63; // eax
  __int64 v64; // rbx
  float v65; // xmm7_4
  float v66; // xmm8_4
  int v67; // xmm3_4
  float v68; // xmm5_4
  float v69; // xmm4_4
  __int64 v70; // r8
  __int64 v71; // rax
  _BYTE *v72; // rdx
  __int64 k; // rcx
  _QWORD **v74; // rcx
  _QWORD *v75; // rcx
  _QWORD *m; // rax
  __int64 v77; // rcx
  unsigned int v78; // r12d
  __int64 v79; // rdx
  unsigned int v80; // ebx
  char IsTranslateAndScaleIgnore; // al
  unsigned __int64 v82; // rbx
  __int64 v83; // rdx
  unsigned int v84; // ebx
  HANDLE ProcessHeap; // rax
  void *v86; // rax
  void *v87; // rbx
  float v88; // xmm1_4
  float v89; // xmm0_4
  unsigned int v90; // r13d
  struct CPreComputeContext::SubTreeContext *v91; // rax
  __int64 v92; // r14
  bool v93; // [rsp+30h] [rbp-D0h] BYREF
  CRectanglesShape *v94[2]; // [rsp+38h] [rbp-C8h] BYREF
  struct CPreComputeContext::SubTreeContext *v95; // [rsp+48h] [rbp-B8h]
  float v96[5]; // [rsp+50h] [rbp-B0h] BYREF
  float v97; // [rsp+64h] [rbp-9Ch]
  int v98; // [rsp+6Ch] [rbp-94h]
  float v99; // [rsp+80h] [rbp-80h]
  float v100; // [rsp+84h] [rbp-7Ch]
  int v101; // [rsp+8Ch] [rbp-74h]
  int v102; // [rsp+90h] [rbp-70h]
  size_t Size[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v104; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v5 = 0LL;
  v6 = 0;
  v95 = (struct CPreComputeContext::SubTreeContext *)a4;
  v94[0] = a5;
  v102 = 0;
  v8 = 0;
  if ( *((_QWORD *)a2 + 31) && *((char *)a2 + 105) >= 0 && (!a3 || *((_DWORD *)a3 + 28) != 1) )
  {
    if ( *((_DWORD *)a2 + 28) != 1
      || ((v77 = *((_QWORD *)a2 + 10), (v77 & 2) == 0)
        ? (LODWORD(v77) = v77 & 1)
        : (v77 = *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFFCuLL)),
          !(_DWORD)v77) )
    {
      v8 = 1;
    }
  }
  v9 = a4[41];
  v10 = v96;
  if ( !v8 )
    v10 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, struct CVisual *, struct CVisual *))(*(_QWORD *)v9 + 184LL))(
         a4[41],
         a2,
         a3) )
  {
    v11 = (struct CVisual *)((char *)a2 + 328);
LABEL_7:
    if ( v11 )
    {
      v93 = 0;
      CVisual::EnsureWorldTransform(a2, v9, v11);
      v12 = (struct CMILMatrix *)v10;
      v13 = v94[0];
      CTreeData::GetWorldTransform(v11, v94[0], &v93, v12);
      v6 = v93;
      goto LABEL_9;
    }
  }
  else
  {
    v18 = *((_QWORD *)a2 + 29);
    if ( *(int *)v18 < 0 )
    {
      v19 = *(unsigned int *)(v18 + 4);
      v20 = (_BYTE *)(v18 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v19; ++v20 )
      {
        if ( *v20 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v22 = (unsigned int)i >= (unsigned int)v19 ? 0LL : (_QWORD **)(v19 + 15 + v18 + 8 * i - (((_BYTE)v19 + 15) & 7));
      v23 = *v22;
      if ( v23 )
      {
        for ( j = (_QWORD *)*v23; j != v23; j = (_QWORD *)*j )
        {
          v11 = (struct CTreeData *)(j - 44);
          if ( (const struct CVisualTree *)j[4] == v9 )
            goto LABEL_7;
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
  v13 = v94[0];
LABEL_9:
  v14 = 8LL;
  if ( !v8 )
  {
    v15 = v95;
    v16 = 0LL;
    goto LABEL_11;
  }
  v25 = (CGeometry *)*((_QWORD *)a2 + 31);
  v94[0] = 0LL;
  LOBYTE(v94[1]) = 0;
  *(_OWORD *)Size = 0LL;
  ShapeData = CGeometry::GetShapeData(v25, (const struct D2D_SIZE_F *)a2 + 18, (struct CShapePtr *)v94);
  v27 = ShapeData;
  if ( ShapeData >= 0 )
  {
    v28 = v94[0];
    v29 = -2003304309;
    if ( v94[0] )
    {
      v30 = *(__int64 (__fastcall **)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *))(*(_QWORD *)v94[0] + 48LL);
      if ( (char *)v30 == (char *)CRectanglesShape::GetTightBounds )
      {
        v31 = (_OWORD *)*((_QWORD *)v94[0] + 2);
        if ( *((_OWORD **)v94[0] + 3) != v31 )
        {
          v32 = 1LL;
          *(_OWORD *)Size = *v31;
          v33 = *((_QWORD *)v94[0] + 2);
          if ( (unsigned __int64)((*((_QWORD *)v94[0] + 3) - v33) >> 4) > 1 )
          {
            v92 = 16LL;
            do
            {
              TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
                (float *)Size,
                (float *)(v33 + v92));
              v33 = *((_QWORD *)v28 + 2);
              v92 += 16LL;
              ++v32;
            }
            while ( v32 < (*((_QWORD *)v28 + 3) - v33) >> 4 );
            v28 = v94[0];
          }
        }
        goto LABEL_34;
      }
      if ( (char *)v30 == (char *)CRegionShape::GetTightBounds )
      {
        v104 = 0LL;
        if ( FastRegion::CRegion::GetBoundingRect((CRectanglesShape *)((char *)v94[0] + 16), &v104) )
        {
          *(float *)Size = (float)v104.left;
          *((float *)Size + 1) = (float)v104.top;
          *(float *)&Size[1] = (float)v104.right;
          *((float *)&Size[1] + 1) = (float)v104.bottom;
        }
        v28 = v94[0];
        v27 = 0;
        goto LABEL_69;
      }
      if ( v30 == CRoundedRectangleShape::GetTightBounds )
        TightBounds = CRoundedRectangleShape::GetTightBounds(v94[0], (struct D2D_RECT_F *)Size, 0LL);
      else
        TightBounds = v30(v94[0], (struct D2D_RECT_F *)Size, 0LL);
      v29 = TightBounds;
      v27 = TightBounds;
      if ( TightBounds < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0x140u, 0LL);
LABEL_64:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x63u, 0LL);
        goto LABEL_65;
      }
      v28 = v94[0];
    }
    v27 = v29;
    if ( v29 >= 0 )
      goto LABEL_67;
    goto LABEL_64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x62u, 0LL);
LABEL_65:
  v28 = v94[0];
LABEL_67:
  if ( v27 == -2003304438 || v27 == -2003304309 )
  {
    LODWORD(Size[0]) = _xmm;
    HIDWORD(Size[1]) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
    HIDWORD(Size[0]) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
    LODWORD(Size[1]) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
LABEL_34:
    v27 = 0;
  }
LABEL_69:
  if ( !LOBYTE(v94[1]) || !v28 )
    goto LABEL_73;
  v47 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v28;
  if ( v47 == CRectanglesShape::`scalar deleting destructor' )
  {
    CRectanglesShape::~CRectanglesShape(v28);
    CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v28);
LABEL_73:
    v48 = 1LL;
    goto LABEL_74;
  }
  if ( (char *)v47 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
  {
    CRoundedRectangleShape::~CRoundedRectangleShape(v28);
    CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v28);
    goto LABEL_73;
  }
  v48 = 1LL;
  if ( (char *)v47 == (char *)CPolygonShape::`scalar deleting destructor' )
    CPolygonShape::`scalar deleting destructor'(v28, 1);
  else
    ((void (__fastcall *)(CRectanglesShape *, __int64))v47)(v28, 1LL);
LABEL_74:
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)v27);
    return (unsigned int)v27;
  }
  v49 = v102;
  if ( (char)(4 * v102) >> 6 == 1 )
  {
    v65 = v97;
    v66 = v96[0];
    v67 = _xmm;
    v68 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v69 = FLOAT_0_000081380211;
  }
  else
  {
    if ( (char)(4 * v102) >> 6 < 0
      || (IsTranslateAndScaleIgnore = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v96),
          v65 = v97,
          v66 = v96[0],
          v67 = _xmm,
          v68 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
          v69 = FLOAT_0_000081380211,
          IsTranslateAndScaleIgnore)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v96[0] - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v97 - 1.0) & _xmm) < 0.000081380211 )
    {
      v50 = v99 + *(float *)Size;
      v51 = v99 + *(float *)&Size[1];
      v52 = v100 + *((float *)Size + 1);
      v53 = v100 + *((float *)&Size[1] + 1);
      goto LABEL_78;
    }
    v49 = v102 & 0xCF | 0x10;
    LOBYTE(v102) = v49;
  }
  if ( v49 >> 6 == 1 )
  {
LABEL_146:
    CMILMatrix::Transform2DRectToPerspective(
      (CMILMatrix *)v96,
      (const struct D2D_RECT_F *)Size,
      (struct D2D_POINT_2F *const)&v104);
    v50 = *(float *)&v104.left;
    v52 = *(float *)&v104.top;
    v51 = *(float *)&v104.left;
    v53 = *(float *)&v104.top;
    do
    {
      v88 = *((float *)&v104.left + 2 * v48);
      v89 = *((float *)&v104.top + 2 * v48);
      v50 = fminf(v50, v88);
      ++v48;
      v52 = fminf(v52, v89);
      v51 = fmaxf(v51, v88);
      v53 = fmaxf(v53, v89);
    }
    while ( v48 < 4 );
    goto LABEL_78;
  }
  if ( v49 >> 6 < 0 )
    goto LABEL_102;
  if ( (char)(4 * BYTE1(v102)) >> 6 == 1 )
    goto LABEL_145;
  if ( (char)(4 * BYTE1(v102)) >> 6 >= 0 )
  {
    if ( v69 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(v98 & v67) * 61440.0)
                                            + (float)(COERCE_FLOAT(LODWORD(v96[3]) & v67) * 61440.0))
                                    + COERCE_FLOAT(v101 & v67))
                            - v68) & v67) )
    {
      BYTE1(v102) |= 0x30u;
      goto LABEL_144;
    }
    BYTE1(v102) = BYTE1(v102) & 0xCF | 0x10;
LABEL_145:
    LOBYTE(v102) = v49 & 0x3F | 0x40;
    goto LABEL_146;
  }
LABEL_144:
  if ( v69 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v96[1] - 0.0) & v67)
    || v69 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v96[4] - 0.0) & v67) )
  {
    goto LABEL_145;
  }
LABEL_102:
  v50 = (float)(v66 * *(float *)Size) + v99;
  v52 = (float)(v65 * *((float *)Size + 1)) + v100;
  v51 = (float)(v66 * *(float *)&Size[1]) + v99;
  v53 = (float)(v65 * *((float *)&Size[1] + 1)) + v100;
  if ( v66 <= 0.0 || v65 <= 0.0 )
  {
    if ( v50 > v51 )
    {
      v50 = (float)(v66 * *(float *)&Size[1]) + v99;
      v51 = (float)(v66 * *(float *)Size) + v99;
    }
    if ( v52 > v53 )
    {
      v52 = (float)(v65 * *((float *)&Size[1] + 1)) + v100;
      v53 = (float)(v65 * *((float *)Size + 1)) + v100;
    }
  }
LABEL_78:
  v15 = v95;
  *(_OWORD *)v94 = 0LL;
  v54 = *((unsigned int *)v95 + 76);
  if ( (_DWORD)v54 )
    v55 = *(__m128 *)(*((_QWORD *)v95 + 37) + 16LL * (unsigned int)(v54 - 1));
  else
    v55 = (__m128)_xmm;
  *(__m128 *)v94 = v55;
  v56 = v55.m128_f32[0];
  if ( v50 > v55.m128_f32[0] )
  {
    v55.m128_f32[0] = v50;
    v56 = v50;
    *(__m128 *)v94 = v55;
  }
  v57 = _mm_shuffle_ps(v55, v55, 85).m128_f32[0];
  if ( v52 > v57 )
  {
    v57 = v52;
    v58 = _mm_shuffle_ps(*(__m128 *)v94, *(__m128 *)v94, 225);
    v58.m128_f32[0] = v52;
    v55 = _mm_shuffle_ps(v58, v58, 225);
    *(__m128 *)v94 = v55;
  }
  v59 = _mm_shuffle_ps(v55, v55, 170).m128_f32[0];
  if ( v59 > v51 )
  {
    v59 = v51;
    v60 = _mm_shuffle_ps(*(__m128 *)v94, *(__m128 *)v94, 210);
    v60.m128_f32[0] = v51;
    v55 = _mm_shuffle_ps(v60, v60, 201);
    *(__m128 *)v94 = v55;
  }
  v61 = _mm_shuffle_ps(v55, v55, 255).m128_f32[0];
  if ( v61 > v53 )
  {
    v61 = v53;
    v62 = _mm_shuffle_ps(*(__m128 *)v94, *(__m128 *)v94, 147);
    v62.m128_f32[0] = v53;
    v55 = _mm_shuffle_ps(v62, v62, 57);
    *(__m128 *)v94 = v55;
  }
  if ( v59 <= v56 || v61 <= v57 )
  {
    v94[1] = 0LL;
    v94[0] = 0LL;
    v55 = 0u;
  }
  if ( (_DWORD)v54 != *((_DWORD *)v95 + 77) )
    goto LABEL_91;
  v82 = 2LL * *((unsigned int *)v95 + 77);
  if ( v82 <= 0xFFFFFFFF )
  {
    if ( (unsigned int)v82 <= 8 )
      LODWORD(v82) = 8;
    v90 = 16 * v54;
    if ( (unsigned __int64)(16 * v54) <= 0xFFFFFFFF )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v82 <= 0x10 )
      {
        v84 = -2147024809;
      }
      else
      {
        v91 = (struct CPreComputeContext::SubTreeContext *)MIDL_user_allocate(16LL * (unsigned int)v82);
        v95 = v91;
        if ( v91 )
        {
          memcpy_0(v91, *((const void **)v15 + 37), v90);
          operator delete(*((void **)v15 + 37));
          *((_QWORD *)v15 + 37) = v95;
          *((_DWORD *)v15 + 77) = v82;
LABEL_91:
          v16 = 0LL;
          *(__m128 *)(*((_QWORD *)v15 + 37) + 16LL * (unsigned int)(*((_DWORD *)v15 + 76))++) = v55;
          v63 = *((_DWORD *)v15 + 79);
          if ( v63 <= *((_DWORD *)v15 + 76) )
            v63 = *((_DWORD *)v15 + 76);
          *((_DWORD *)v15 + 79) = v63;
          v64 = *((_QWORD *)v15 + 41);
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v64 + 184LL))(v64) )
          {
            v16 = (char *)a2 + 328;
          }
          else
          {
            v70 = *((_QWORD *)a2 + 29);
            if ( *(int *)v70 < 0 )
            {
              v71 = *(unsigned int *)(v70 + 4);
              v72 = (_BYTE *)(v70 + 8);
              for ( k = 0LL; (unsigned int)k < (unsigned int)v71; ++v72 )
              {
                if ( *v72 == 1 )
                  break;
                k = (unsigned int)(k + 1);
              }
              v74 = (unsigned int)k >= (unsigned int)v71
                  ? 0LL
                  : (_QWORD **)(v71 + 15 + v70 + 8 * k - (((_BYTE)v71 + 15) & 7));
              v75 = *v74;
              if ( v75 )
              {
                for ( m = (_QWORD *)*v75; m != v75; m = (_QWORD *)*m )
                {
                  if ( m[4] == v64 )
                  {
                    v16 = (char *)(m - 44);
                    break;
                  }
                }
              }
            }
          }
          v16[9] = 1;
          v14 = 8LL;
LABEL_11:
          if ( !v6 )
            return 0LL;
          v34 = *((unsigned int *)v15 + 70);
          v35 = *((unsigned int *)v15 + 71);
          if ( (_DWORD)v34 != (_DWORD)v35 )
            goto LABEL_36;
          v78 = 2 * v35;
          if ( (unsigned __int64)(2 * v35) <= 0xFFFFFFFF )
          {
            if ( v78 <= 8 )
              v78 = 8;
            Size[0] = 68 * v34;
            if ( (unsigned __int64)(68 * v34) <= 0xFFFFFFFF )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v78 <= 0x44 )
              {
                v80 = -2147024809;
              }
              else
              {
                ProcessHeap = GetProcessHeap();
                v86 = HeapAlloc(ProcessHeap, 0, 68LL * v78);
                v87 = v86;
                if ( v86 )
                {
                  memcpy_0(v86, *((const void **)v15 + 34), LODWORD(Size[0]));
                  operator delete(*((void **)v15 + 34));
                  *((_QWORD *)v15 + 34) = v87;
                  *((_DWORD *)v15 + 71) = v78;
LABEL_36:
                  v36 = *((_QWORD *)v15 + 34);
                  v37 = 68LL * *((unsigned int *)v15 + 70);
                  *(_OWORD *)(v37 + v36) = *(_OWORD *)v13;
                  *(_OWORD *)(v37 + v36 + 16) = *((_OWORD *)v13 + 1);
                  *(_OWORD *)(v37 + v36 + 32) = *((_OWORD *)v13 + 2);
                  *(_OWORD *)(v37 + v36 + 48) = *((_OWORD *)v13 + 3);
                  *(_DWORD *)(v37 + v36 + 64) = *((_DWORD *)v13 + 16);
                  v38 = *((_DWORD *)v15 + 73);
                  if ( v38 <= ++*((_DWORD *)v15 + 70) )
                    v38 = *((_DWORD *)v15 + 70);
                  *((_DWORD *)v15 + 73) = v38;
                  goto LABEL_39;
                }
                v80 = -2147024882;
              }
              v79 = 104LL;
LABEL_124:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v79,
                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                (const char *)v80);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x83,
                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                (const char *)v80);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v80, 0x36u, 0LL);
LABEL_39:
              if ( !v16 )
              {
                v39 = *((_QWORD *)v15 + 41);
                v16 = 0LL;
                if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v39 + 184LL))(
                       v39,
                       v37,
                       v14) )
                {
                  v16 = (char *)a2 + 328;
                }
                else
                {
                  v40 = *((_QWORD *)a2 + 29);
                  if ( *(int *)v40 < 0 )
                  {
                    v41 = *(unsigned int *)(v40 + 4);
                    v42 = (_BYTE *)(v40 + 8);
                    for ( n = 0; n < (unsigned int)v41; ++v42 )
                    {
                      if ( *v42 == 1 )
                        break;
                      ++n;
                    }
                    if ( n < (unsigned int)v41 )
                      v5 = (_QWORD **)(v40 + v41 + 15 + 8LL * n - (((_BYTE)v41 + 15) & 7));
                    v44 = *v5;
                    if ( *v5 )
                    {
                      for ( ii = (_QWORD *)*v44; ii != v44; ii = (_QWORD *)*ii )
                      {
                        if ( ii[4] == v39 )
                        {
                          v16 = (char *)(ii - 44);
                          break;
                        }
                      }
                    }
                  }
                }
              }
              v16[8] = 1;
              return 0LL;
            }
            v79 = 101LL;
          }
          else
          {
            v79 = 98LL;
          }
          v80 = -2147024362;
          goto LABEL_124;
        }
        v84 = -2147024882;
      }
      v83 = 104LL;
      goto LABEL_131;
    }
    v83 = 101LL;
  }
  else
  {
    v83 = 98LL;
  }
  v84 = -2147024362;
LABEL_131:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v83,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)v84);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)v84);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v84, 0x31u, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x116,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)v84);
  return v84;
}
