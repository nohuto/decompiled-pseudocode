/*
 * XREFs of ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180024D70
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800238A8 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180023C04 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180024410 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18002668C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180134654 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B180 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026030 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?GetInteraction@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026450 (-GetInteraction@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x180092090 (-RoundOffsets@CMILMatrix@@QEAAXXZ.c)
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18011F6A0 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::CalcTransform(
        CVisual *this,
        CVisual **a2,
        const struct CMILMatrix *a3,
        bool *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  __m128 v6; // xmm2
  _DWORD *v8; // rdx
  char v9; // r14
  CTransform3D *v12; // r13
  bool *v13; // rcx
  float v14; // xmm5_4
  __int64 v15; // r12
  __int64 v16; // rax
  __m128 v17; // xmm7
  float v18; // xmm9_4
  char v19; // dl
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm7_4
  __m128 *Matrix; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __m128i v29; // xmm0
  int v30; // edx
  __m128i v31; // xmm0
  int v32; // edx
  __m128i v33; // xmm0
  int v34; // edx
  __int64 v35; // rax
  _BYTE *v36; // rcx
  __int64 i; // r8
  CTransform3D **v38; // rcx
  CTransform3D *v39; // rcx
  __int64 (__fastcall *v40)(); // rax
  const struct D2D_SIZE_F *v41; // rdx
  char v42; // al
  char v43; // cl
  struct CMILMatrix *v44; // r8
  void (__fastcall *v45)(CMatrixTransform *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *); // r9
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm1
  int v51; // eax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  float v54; // xmm0_4
  __m128 v55; // xmm2
  __int64 v56; // r15
  int v57; // r12d
  _DWORD *v58; // rdx
  char v59; // cl
  __int64 v60; // rax
  struct CTreeEffect *(__fastcall *v61)(CLayerVisual *__hidden); // rax
  __int64 v62; // rax
  char v63; // al
  char v64; // al
  bool v65; // zf
  unsigned int v66; // ecx
  _BYTE *v67; // rax
  __int64 j; // r8
  __int64 v69; // rax
  _QWORD *v70; // rcx
  char v71; // r8
  struct CMILMatrix *v72; // r8
  void (__fastcall *v73)(CMatrixTransform *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *); // r9
  unsigned int v74; // edx
  __int64 v75; // rcx
  int v76; // xmm1_4
  int v77; // xmm0_4
  int v78; // xmm1_4
  int v79; // xmm0_4
  int v80; // xmm1_4
  int v81; // xmm0_4
  int v82; // xmm1_4
  int v83; // xmm0_4
  int v84; // xmm1_4
  int v85; // xmm0_4
  int v86; // xmm1_4
  int v87; // xmm0_4
  int v88; // xmm1_4
  int v89; // xmm0_4
  int v90; // xmm1_4
  int v91; // xmm1_4
  int v92; // xmm0_4
  int v93; // xmm1_4
  int v94; // xmm0_4
  int v95; // xmm1_4
  int v96; // xmm0_4
  int v97; // xmm1_4
  int v98; // xmm0_4
  int v99; // xmm1_4
  int v100; // xmm0_4
  int v101; // xmm1_4
  int v102; // xmm0_4
  int v103; // xmm1_4
  int v104; // xmm0_4
  int v105; // xmm1_4
  CTransform3D *v106; // rcx
  __int64 (__fastcall *v107)(); // rax
  __m128 v108; // rt1
  __m128 v109; // rt1
  __m128 v110; // rt1
  bool *v111; // [rsp+30h] [rbp-D0h] BYREF
  char v112; // [rsp+38h] [rbp-C8h]
  float v113; // [rsp+3Ch] [rbp-C4h] BYREF
  int v114; // [rsp+40h] [rbp-C0h] BYREF
  int v115; // [rsp+44h] [rbp-BCh] BYREF
  int v116; // [rsp+48h] [rbp-B8h] BYREF
  int v117; // [rsp+4Ch] [rbp-B4h] BYREF
  int v118; // [rsp+50h] [rbp-B0h] BYREF
  int v119; // [rsp+54h] [rbp-ACh] BYREF
  int v120; // [rsp+58h] [rbp-A8h] BYREF
  int v121; // [rsp+5Ch] [rbp-A4h] BYREF
  int v122; // [rsp+60h] [rbp-A0h] BYREF
  int v123; // [rsp+64h] [rbp-9Ch] BYREF
  int v124; // [rsp+68h] [rbp-98h] BYREF
  int v125; // [rsp+6Ch] [rbp-94h] BYREF
  int v126; // [rsp+70h] [rbp-90h] BYREF
  int v127; // [rsp+74h] [rbp-8Ch] BYREF
  CTransform3D *v128; // [rsp+78h] [rbp-88h] BYREF
  __int128 v129; // [rsp+80h] [rbp-80h] BYREF
  __int128 v130; // [rsp+90h] [rbp-70h]
  __int128 v131; // [rsp+A0h] [rbp-60h]
  __int128 v132; // [rsp+B0h] [rbp-50h]
  int v133; // [rsp+C0h] [rbp-40h]
  struct CInteraction *Interaction; // [rsp+D0h] [rbp-30h] BYREF
  CVisual *v135; // [rsp+D8h] [rbp-28h] BYREF
  struct CInteraction *v136; // [rsp+E0h] [rbp-20h] BYREF
  CVisual *v137; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DESCRIPTOR v139; // [rsp+100h] [rbp+0h] BYREF
  __int128 v140; // [rsp+110h] [rbp+10h] BYREF
  __int128 v141; // [rsp+120h] [rbp+20h]
  __int128 v142; // [rsp+130h] [rbp+30h]
  __int128 v143; // [rsp+140h] [rbp+40h]
  int v144; // [rsp+150h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v146; // [rsp+170h] [rbp+70h]
  int v147; // [rsp+178h] [rbp+78h]
  int v148; // [rsp+17Ch] [rbp+7Ch]
  CVisual **v149; // [rsp+180h] [rbp+80h]
  __int64 v150; // [rsp+188h] [rbp+88h]
  struct CInteraction **p_Interaction; // [rsp+190h] [rbp+90h]
  __int64 v152; // [rsp+198h] [rbp+98h]
  CTransform3D **v153; // [rsp+1A0h] [rbp+A0h]
  __int64 v154; // [rsp+1A8h] [rbp+A8h]
  int *v155; // [rsp+1B0h] [rbp+B0h]
  __int64 v156; // [rsp+1B8h] [rbp+B8h]
  int *v157; // [rsp+1C0h] [rbp+C0h]
  __int64 v158; // [rsp+1C8h] [rbp+C8h]
  int *v159; // [rsp+1D0h] [rbp+D0h]
  __int64 v160; // [rsp+1D8h] [rbp+D8h]
  int *v161; // [rsp+1E0h] [rbp+E0h]
  __int64 v162; // [rsp+1E8h] [rbp+E8h]
  int *v163; // [rsp+1F0h] [rbp+F0h]
  __int64 v164; // [rsp+1F8h] [rbp+F8h]
  int *v165; // [rsp+200h] [rbp+100h]
  __int64 v166; // [rsp+208h] [rbp+108h]
  int *v167; // [rsp+210h] [rbp+110h]
  __int64 v168; // [rsp+218h] [rbp+118h]
  int *v169; // [rsp+220h] [rbp+120h]
  __int64 v170; // [rsp+228h] [rbp+128h]
  int *v171; // [rsp+230h] [rbp+130h]
  __int64 v172; // [rsp+238h] [rbp+138h]
  int *v173; // [rsp+240h] [rbp+140h]
  __int64 v174; // [rsp+248h] [rbp+148h]
  int *v175; // [rsp+250h] [rbp+150h]
  __int64 v176; // [rsp+258h] [rbp+158h]
  int *v177; // [rsp+260h] [rbp+160h]
  __int64 v178; // [rsp+268h] [rbp+168h]
  int *v179; // [rsp+270h] [rbp+170h]
  __int64 v180; // [rsp+278h] [rbp+178h]
  CTransform3D **v181; // [rsp+280h] [rbp+180h]
  __int64 v182; // [rsp+288h] [rbp+188h]
  bool **v183; // [rsp+290h] [rbp+190h]
  __int64 v184; // [rsp+298h] [rbp+198h]

  v8 = (_DWORD *)*((_QWORD *)this + 29);
  v9 = 0;
  v12 = 0LL;
  v111 = a4;
  if ( (*v8 & 0x800000) != 0 )
  {
    v35 = (unsigned int)v8[1];
    v36 = v8 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v35; ++v36 )
    {
      if ( *v36 == 9 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v35 )
      v38 = 0LL;
    else
      v38 = (CTransform3D **)((char *)&v8[2 * i] + v35 + 15 - (((_BYTE)v35 + 15) & 7));
    v39 = *v38;
    v128 = v39;
    v40 = *(__int64 (__fastcall **)())(*(_QWORD *)v39 + 64LL);
    if ( v40 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
    {
      if ( (unsigned __int8)CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(v39, 173LL) )
      {
LABEL_61:
        v12 = v128;
        goto LABEL_2;
      }
    }
    else if ( ((unsigned __int8 (__fastcall *)(CTransform3D *, __int64))v40)(v39, 173LL) )
    {
      goto LABEL_61;
    }
    v106 = v128;
    v107 = *(__int64 (__fastcall **)())(*(_QWORD *)v128 + 64LL);
    if ( v107 != CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
    {
      if ( !((unsigned __int8 (__fastcall *)(CTransform3D *, __int64))v107)(v128, 57LL) )
        goto LABEL_2;
      v106 = v128;
    }
    v12 = (CTransform3D *)*((_QWORD *)v106 + 11);
  }
LABEL_2:
  v13 = v111;
  *v111 = 0;
  if ( a3 )
  {
    v9 = 1;
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *((_OWORD *)a5 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a5 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a5 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)a5 + 16) = *((_DWORD *)a3 + 16);
  }
  if ( this != a2[9] )
  {
    v14 = *((float *)this + 32);
    if ( v14 == 0.0 && *((float *)this + 33) == 0.0 && *((float *)this + 31) == 0.0 )
    {
LABEL_8:
      v15 = *((_QWORD *)this + 30);
      if ( v15 )
      {
        v41 = (const struct D2D_SIZE_F *)((char *)this + 144);
        v42 = *(_BYTE *)(v15 + 40) & 1;
        if ( v9 )
        {
          v43 = *(_BYTE *)(v15 + 40) & 1;
          if ( this != (CVisual *)-144LL )
          {
            if ( !v42
              && *(_BYTE *)(v15 + 156)
              && (*(float *)(v15 + 148) != v41->width || *(float *)(v15 + 152) != *((float *)this + 37)) )
            {
              v43 = 1;
            }
            *(struct D2D_SIZE_F *)(v15 + 148) = *v41;
          }
          if ( v43 )
          {
            v44 = (struct CMILMatrix *)(v15 + 80);
            v45 = *(void (__fastcall **)(CMatrixTransform *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v15 + 200LL);
            if ( v45 == CComponentTransform3D::GetRealization )
            {
              CComponentTransform3D::GetRealization((CComponentTransform3D *)v15, v41, v44);
            }
            else if ( v45 == CMatrixTransform::GetRealization )
            {
              CMatrixTransform::GetRealization((CMatrixTransform *)v15, v41, v44);
            }
            else
            {
              (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v15 + 200LL))(
                v15,
                v41,
                v44);
            }
            *(_DWORD *)(v15 + 40) &= ~1u;
          }
          v46 = *(_OWORD *)(v15 + 80);
          v47 = *(_OWORD *)(v15 + 96);
          v144 = *(_DWORD *)(v15 + 144);
          v140 = v46;
          v48 = *(_OWORD *)(v15 + 112);
          v141 = v47;
          v49 = *(_OWORD *)(v15 + 128);
          v142 = v48;
          v143 = v49;
          CMILMatrix::Multiply((CMILMatrix *)&v140, a5);
          v50 = v141;
          v51 = v144;
          v13 = v111;
          *(_OWORD *)a5 = v140;
          v52 = v142;
          *((_OWORD *)a5 + 1) = v50;
          v53 = v143;
          *((_OWORD *)a5 + 2) = v52;
          *((_OWORD *)a5 + 3) = v53;
        }
        else
        {
          v71 = *(_BYTE *)(v15 + 40) & 1;
          if ( this != (CVisual *)-144LL )
          {
            if ( !v42
              && *(_BYTE *)(v15 + 156)
              && (*(float *)(v15 + 148) != v41->width || *(float *)(v15 + 152) != *((float *)this + 37)) )
            {
              v71 = 1;
            }
            *(struct D2D_SIZE_F *)(v15 + 148) = *v41;
          }
          if ( v71 )
          {
            v72 = (struct CMILMatrix *)(v15 + 80);
            v73 = *(void (__fastcall **)(CMatrixTransform *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v15 + 200LL);
            if ( v73 == CComponentTransform3D::GetRealization )
            {
              CComponentTransform3D::GetRealization((CComponentTransform3D *)v15, v41, v72);
            }
            else if ( v73 == CMatrixTransform::GetRealization )
            {
              CMatrixTransform::GetRealization((CMatrixTransform *)v15, v41, v72);
            }
            else
            {
              (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v15 + 200LL))(
                v15,
                v41,
                v72);
            }
            *(_DWORD *)(v15 + 40) &= ~1u;
            v13 = v111;
          }
          v9 = 1;
          *(_OWORD *)a5 = *(_OWORD *)(v15 + 80);
          *((_OWORD *)a5 + 1) = *(_OWORD *)(v15 + 96);
          *((_OWORD *)a5 + 2) = *(_OWORD *)(v15 + 112);
          *((_OWORD *)a5 + 3) = *(_OWORD *)(v15 + 128);
          v51 = *(_DWORD *)(v15 + 144);
        }
        *((_DWORD *)a5 + 16) = v51;
        *v13 = 1;
      }
      goto LABEL_9;
    }
    v17 = (__m128)*((unsigned int *)this + 33);
    v18 = *((float *)this + 31);
    if ( !v9 )
    {
      *(_QWORD *)a5 = 1065353216LL;
      v9 = 1;
      *((_QWORD *)a5 + 1) = 0LL;
      *((_DWORD *)a5 + 4) = 0;
      *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
      *(_QWORD *)((char *)a5 + 28) = 0LL;
      *((_DWORD *)a5 + 9) = 0;
      *((_QWORD *)a5 + 5) = 1065353216LL;
      *((float *)a5 + 12) = v14;
      *((_DWORD *)a5 + 13) = v17.m128_i32[0];
      *((float *)a5 + 14) = v18;
      *((_DWORD *)a5 + 15) = 1065353216;
      *((_BYTE *)a5 + 64) = -88;
      *((_BYTE *)a5 + 65) = *((_BYTE *)a5 + 65) & 0xC0 | 0x29;
      goto LABEL_77;
    }
    if ( COERCE_FLOAT(LODWORD(v14) & _xmm) < 0.000081380211
      && COERCE_FLOAT(v17.m128_i32[0] & _xmm) < 0.000081380211
      && COERCE_FLOAT(LODWORD(v18) & _xmm) < 0.000081380211 )
    {
      goto LABEL_77;
    }
    v19 = *((_BYTE *)a5 + 65);
    v20 = v14 * *((float *)a5 + 2);
    v21 = (float)((float)(v17.m128_f32[0] * *((float *)a5 + 5)) + (float)(v14 * *((float *)a5 + 1)))
        + (float)(v18 * *((float *)a5 + 9));
    v22 = v18 * *((float *)a5 + 10);
    *((float *)a5 + 12) = (float)((float)((float)(v17.m128_f32[0] * *((float *)a5 + 4)) + (float)(v14 * *(float *)a5))
                                + (float)(v18 * *((float *)a5 + 8)))
                        + *((float *)a5 + 12);
    v6 = v17;
    v6.m128_f32[0] = (float)(v17.m128_f32[0] * *((float *)a5 + 6)) + v20;
    *((float *)a5 + 13) = v21 + *((float *)a5 + 13);
    *((float *)a5 + 14) = (float)(v6.m128_f32[0] + v22) + *((float *)a5 + 14);
    if ( (char)(4 * v19) >> 6 == 1 )
      goto LABEL_22;
    if ( (char)(4 * v19) >> 6 >= 0 )
    {
      v55 = _mm_and_ps((__m128)*((unsigned int *)a5 + 7), (__m128)(unsigned int)_xmm);
      v55.m128_f32[0] = (float)((float)((float)(v55.m128_f32[0] * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)a5 + 3) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)a5 + 15) & _xmm))
                      - 1.0;
      v6 = _mm_and_ps(v55, (__m128)(unsigned int)_xmm);
      if ( v6.m128_f32[0] >= 0.000081380211 )
        goto LABEL_22;
      LODWORD(v54) = *((_DWORD *)a5 + 11) & _xmm;
      *((_BYTE *)a5 + 65) = v19 | 0x30;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v54 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
        goto LABEL_22;
    }
    else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a5 + 11) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
    {
LABEL_22:
      v23 = v17.m128_f32[0] * *((float *)a5 + 7);
      *((_DWORD *)a5 + 16) = 0;
      *((float *)a5 + 15) = (float)((float)(v23 + (float)(v14 * *((float *)a5 + 3))) + (float)(v18 * *((float *)a5 + 11)))
                          + *((float *)a5 + 15);
LABEL_77:
      *v13 = 1;
      goto LABEL_8;
    }
    *((_BYTE *)a5 + 64) &= 0xFCu;
    goto LABEL_77;
  }
LABEL_9:
  if ( a6 )
  {
    if ( v9 )
    {
      *(_OWORD *)a6 = *(_OWORD *)a5;
      *((_OWORD *)a6 + 1) = *((_OWORD *)a5 + 1);
      *((_OWORD *)a6 + 2) = *((_OWORD *)a5 + 2);
      *((_OWORD *)a6 + 3) = *((_OWORD *)a5 + 3);
      *((_DWORD *)a6 + 16) = *((_DWORD *)a5 + 16);
    }
    else
    {
      *(_QWORD *)a6 = 1065353216LL;
      *((_QWORD *)a6 + 1) = 0LL;
      *((_DWORD *)a6 + 4) = 0;
      *(_QWORD *)((char *)a6 + 20) = 1065353216LL;
      *(_QWORD *)((char *)a6 + 28) = 0LL;
      *((_DWORD *)a6 + 9) = 0;
      *((_QWORD *)a6 + 5) = 1065353216LL;
      *((_QWORD *)a6 + 6) = 0LL;
      *((_DWORD *)a6 + 14) = 0;
      *((_DWORD *)a6 + 15) = 1065353216;
      v64 = *((_BYTE *)a6 + 65);
      *((_BYTE *)a6 + 64) = -86;
      *((_BYTE *)a6 + 65) = v64 & 0xC0 | 0x29;
    }
  }
  if ( v12 )
    goto LABEL_89;
  v16 = *((_QWORD *)this + 11);
  if ( v16 && *(_DWORD *)(v16 + 112) == 1 )
  {
    v56 = *((_QWORD *)this + 10);
    v57 = *((_DWORD *)this + 28);
    if ( (v56 & 2) != 0 )
      v56 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v56) = v56 & 1;
    v58 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v58 & 0x800000) == 0 )
      goto LABEL_83;
    v66 = v58[1];
    v67 = v58 + 2;
    for ( j = 0LL; (unsigned int)j < v66; ++v67 )
    {
      if ( *v67 == 9 )
        break;
      j = (unsigned int)(j + 1);
    }
    v69 = (unsigned int)v58[1];
    v70 = (unsigned int)j >= (unsigned int)v69
        ? 0LL
        : (_QWORD *)((char *)&v58[2 * j + 3] + v69 - (((_BYTE)v69 + 15) & 7) + 3);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v70 + 64LL))(*v70, 60LL) )
      v59 = 1;
    else
LABEL_83:
      v59 = 0;
    v60 = *(_QWORD *)this;
    v112 = v59;
    v61 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *__hidden))(v60 + 224);
    if ( v61 == CLayerVisual::GetTreeEffect )
    {
      v62 = *((_QWORD *)this + 85);
    }
    else
    {
      v62 = (__int64)v61(this);
      v59 = v112;
    }
    if ( v57 == 1 || !(_DWORD)v56 )
    {
      v65 = v59 == 0;
      v13 = v111;
      if ( v65 && !v62 )
        goto LABEL_13;
    }
    else
    {
      v13 = v111;
    }
LABEL_89:
    if ( !v9 )
    {
      *(_QWORD *)a5 = 1065353216LL;
      *((_QWORD *)a5 + 1) = 0LL;
      *((_DWORD *)a5 + 4) = 0;
      *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
      *((_DWORD *)a5 + 7) = 0;
      *((_QWORD *)a5 + 6) = 0LL;
      *((_DWORD *)a5 + 14) = 0;
      *((_DWORD *)a5 + 15) = 1065353216;
      *((_BYTE *)a5 + 64) = -86;
      *((_BYTE *)a5 + 65) = *((_BYTE *)a5 + 65) & 0xC0 | 0x29;
    }
    v63 = *((_BYTE *)a5 + 64);
    *((_QWORD *)a5 + 4) = 0LL;
    *((_QWORD *)a5 + 5) = 0LL;
    *((_BYTE *)a5 + 64) = v63 & 0xF0 | 1;
    *v13 = 1;
    if ( v12 )
    {
      Matrix = (__m128 *)CTransform3D::GetMatrix(v12, (const struct D2D_SIZE_F *)this + 18);
      CMILMatrix::Multiply(Matrix, a5, a5);
      v13 = v111;
      *v111 = 1;
    }
    goto LABEL_23;
  }
LABEL_13:
  if ( !v9 )
  {
    *(_QWORD *)a5 = 1065353216LL;
    *((_QWORD *)a5 + 1) = 0LL;
    *((_DWORD *)a5 + 4) = 0;
    *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a5 + 28) = 0LL;
    *((_DWORD *)a5 + 9) = 0;
    *((_QWORD *)a5 + 5) = 1065353216LL;
    *((_QWORD *)a5 + 6) = 0LL;
    *((_DWORD *)a5 + 14) = 0;
    *((_DWORD *)a5 + 15) = 1065353216;
    *((_BYTE *)a5 + 64) = -86;
    *((_BYTE *)a5 + 65) = *((_BYTE *)a5 + 65) & 0xC0 | 0x29;
    goto LABEL_15;
  }
LABEL_23:
  if ( (*((_BYTE *)this + 105) & 0x40) == 0 )
    goto LABEL_15;
  if ( a5 )
  {
    if ( !CMILMatrix::Is2DAxisAlignedPreserving(a5) )
      goto LABEL_15;
    v25 = *(_OWORD *)a5;
    v26 = *((_OWORD *)a5 + 1);
    v133 = *((_DWORD *)a5 + 16);
    v129 = v25;
    v27 = *((_OWORD *)a5 + 2);
    v130 = v26;
    v28 = *((_OWORD *)a5 + 3);
    v131 = v27;
    v132 = v28;
    CMILMatrix::RoundOffsets((CMILMatrix *)&v129);
    if ( *(float *)a5 == *(float *)&v129
      && *((float *)a5 + 1) == *((float *)&v129 + 1)
      && *((float *)a5 + 2) == *((float *)&v129 + 2)
      && *((float *)a5 + 3) == *((float *)&v129 + 3)
      && *((float *)a5 + 4) == *(float *)&v130
      && *((float *)a5 + 5) == *((float *)&v130 + 1)
      && *((float *)a5 + 6) == *((float *)&v130 + 2)
      && *((float *)a5 + 7) == *((float *)&v130 + 3)
      && *((float *)a5 + 8) == *(float *)&v131
      && *((float *)a5 + 9) == *((float *)&v131 + 1)
      && *((float *)a5 + 10) == *((float *)&v131 + 2)
      && *((float *)a5 + 11) == *((float *)&v131 + 3)
      && *((float *)a5 + 12) == *(float *)&v132
      && *((float *)a5 + 13) == *((float *)&v132 + 1)
      && *((float *)a5 + 14) == *((float *)&v132 + 2)
      && *((float *)a5 + 15) == *((float *)&v132 + 3) )
    {
      goto LABEL_15;
    }
    v13 = v111;
  }
  v29 = (__m128i)*((unsigned int *)a5 + 12);
  if ( (_mm_cvtsi128_si32(v29) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6.m128_f32[0] = (float)(int)*(float *)v29.m128i_i32 - *(float *)v29.m128i_i32;
    v108.m128_f32[0] = FLOAT_N0_5;
    v6 = _mm_cmple_ss(v6, v108);
    v30 = (int)*(float *)v29.m128i_i32 - _mm_cvtsi128_si32((__m128i)v6);
  }
  else
  {
    v113 = *(float *)v29.m128i_i32 + 6291456.25;
    v30 = (int)(LODWORD(v113) << 10) >> 11;
  }
  *((float *)a5 + 12) = (float)v30;
  v31 = (__m128i)*((unsigned int *)a5 + 13);
  if ( (_mm_cvtsi128_si32(v31) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6.m128_f32[0] = (float)(int)*(float *)v31.m128i_i32 - *(float *)v31.m128i_i32;
    v109.m128_f32[0] = FLOAT_N0_5;
    v6 = _mm_cmple_ss(v6, v109);
    v32 = (int)*(float *)v31.m128i_i32 - _mm_cvtsi128_si32((__m128i)v6);
  }
  else
  {
    v113 = *(float *)v31.m128i_i32 + 6291456.25;
    v32 = (int)(LODWORD(v113) << 10) >> 11;
  }
  *((float *)a5 + 13) = (float)v32;
  v33 = (__m128i)*((unsigned int *)a5 + 14);
  if ( (_mm_cvtsi128_si32(v33) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6.m128_f32[0] = (float)(int)*(float *)v33.m128i_i32 - *(float *)v33.m128i_i32;
    v110.m128_f32[0] = FLOAT_N0_5;
    v34 = (int)*(float *)v33.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v6, v110));
  }
  else
  {
    v113 = *(float *)v33.m128i_i32 + 6291456.25;
    v34 = (int)(LODWORD(v113) << 10) >> 11;
  }
  *((_BYTE *)a5 + 64) &= 0xFCu;
  *((float *)a5 + 14) = (float)v34;
  *v13 = 1;
LABEL_15:
  if ( (*((_BYTE *)this + 107) & 8) != 0 )
  {
    v74 = dword_180404D18;
    v75 = qword_180404D30;
    if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
    {
      v76 = *((_DWORD *)a5 + 14);
      v113 = *((float *)a5 + 15);
      v77 = *((_DWORD *)a5 + 13);
      v114 = v76;
      v78 = *((_DWORD *)a5 + 12);
      v115 = v77;
      v79 = *((_DWORD *)a5 + 11);
      v116 = v78;
      v80 = *((_DWORD *)a5 + 10);
      v117 = v79;
      v81 = *((_DWORD *)a5 + 9);
      v118 = v80;
      v82 = *((_DWORD *)a5 + 8);
      v119 = v81;
      v83 = *((_DWORD *)a5 + 7);
      v120 = v82;
      v84 = *((_DWORD *)a5 + 6);
      v121 = v83;
      v85 = *((_DWORD *)a5 + 5);
      v122 = v84;
      v86 = *((_DWORD *)a5 + 4);
      v123 = v85;
      v87 = *((_DWORD *)a5 + 3);
      v124 = v86;
      v88 = *((_DWORD *)a5 + 2);
      v125 = v87;
      v89 = *((_DWORD *)a5 + 1);
      v126 = v88;
      v90 = *(_DWORD *)a5;
      v127 = v89;
      LODWORD(v128) = v90;
      Interaction = CVisual::GetInteraction(this);
      v183 = (bool **)&v113;
      v181 = (CTransform3D **)&v114;
      v179 = &v115;
      v177 = &v116;
      v175 = &v117;
      v173 = &v118;
      v171 = &v119;
      v169 = &v120;
      v167 = &v121;
      v165 = &v122;
      v163 = &v123;
      v161 = &v124;
      v159 = &v125;
      v157 = &v126;
      v155 = &v127;
      v135 = this;
      v184 = 4LL;
      v182 = 4LL;
      v180 = 4LL;
      v178 = 4LL;
      v176 = 4LL;
      v174 = 4LL;
      v172 = 4LL;
      v170 = 4LL;
      v168 = 4LL;
      v166 = 4LL;
      v164 = 4LL;
      v162 = 4LL;
      v160 = 4LL;
      v158 = 4LL;
      v156 = 4LL;
      v154 = 4LL;
      v153 = &v128;
      v152 = 8LL;
      p_Interaction = &Interaction;
      v150 = 8LL;
      v149 = &v135;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180404D20;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 2LL;
      UserData.Size = *(unsigned __int16 *)off_180404D20;
      v146 = &unk_1803D833C;
      UserData.Reserved = 2;
      v147 = 371;
      v148 = 1;
      LODWORD(v111) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x14u, &UserData);
      v75 = qword_180404D30;
      v74 = dword_180404D18;
    }
    if ( a3 && v74 > 4 && (byte_180404D28 & 2) != 0 && (v75 & 2) == v75 )
    {
      v91 = *((_DWORD *)a3 + 14);
      LODWORD(v111) = *((_DWORD *)a3 + 15);
      v92 = *((_DWORD *)a3 + 13);
      LODWORD(v128) = v91;
      v93 = *((_DWORD *)a3 + 12);
      v127 = v92;
      v94 = *((_DWORD *)a3 + 11);
      v126 = v93;
      v95 = *((_DWORD *)a3 + 10);
      v125 = v94;
      v96 = *((_DWORD *)a3 + 9);
      v124 = v95;
      v97 = *((_DWORD *)a3 + 8);
      v123 = v96;
      v98 = *((_DWORD *)a3 + 7);
      v122 = v97;
      v99 = *((_DWORD *)a3 + 6);
      v121 = v98;
      v100 = *((_DWORD *)a3 + 5);
      v120 = v99;
      v101 = *((_DWORD *)a3 + 4);
      v119 = v100;
      v102 = *((_DWORD *)a3 + 3);
      v118 = v101;
      v103 = *((_DWORD *)a3 + 2);
      v117 = v102;
      v104 = *((_DWORD *)a3 + 1);
      v116 = v103;
      v105 = *(_DWORD *)a3;
      v115 = v104;
      v114 = v105;
      v136 = CVisual::GetInteraction(this);
      v183 = &v111;
      v181 = &v128;
      v179 = &v127;
      v177 = &v126;
      v175 = &v125;
      v173 = &v124;
      v171 = &v123;
      v169 = &v122;
      v167 = &v121;
      v165 = &v120;
      v163 = &v119;
      v161 = &v118;
      v159 = &v117;
      v157 = &v116;
      v155 = &v115;
      v137 = this;
      v184 = 4LL;
      v182 = 4LL;
      v180 = 4LL;
      v178 = 4LL;
      v176 = 4LL;
      v174 = 4LL;
      v172 = 4LL;
      v170 = 4LL;
      v168 = 4LL;
      v166 = 4LL;
      v164 = 4LL;
      v162 = 4LL;
      v160 = 4LL;
      v158 = 4LL;
      v156 = 4LL;
      v154 = 4LL;
      v153 = (CTransform3D **)&v114;
      v152 = 8LL;
      p_Interaction = &v136;
      v150 = 8LL;
      v149 = &v137;
      *(_DWORD *)&v139.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180404D20;
      *(_DWORD *)&v139.Id = 184549376;
      v139.Keyword = 2LL;
      UserData.Size = *(unsigned __int16 *)off_180404D20;
      v146 = &unk_1803D8147;
      UserData.Reserved = 2;
      v147 = 489;
      v148 = 1;
      LODWORD(v113) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &v139, 0LL, 0LL, 0x14u, &UserData);
    }
  }
}
