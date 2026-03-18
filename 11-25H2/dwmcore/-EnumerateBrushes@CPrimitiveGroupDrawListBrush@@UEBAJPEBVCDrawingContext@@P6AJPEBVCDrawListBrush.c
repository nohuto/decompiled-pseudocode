/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18019BE10
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049A20 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x1800492C0 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18019C4F0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z @ 0x18019C72C (-ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x18020CD34 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  int v4; // eax
  int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm1_4
  int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  bool v17; // r13
  bool v18; // r12
  __int64 i; // r15
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rbx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // rbx
  unsigned int v33; // r11d
  bool v34; // cf
  __int64 v35; // rcx
  __int64 v37; // r10
  float v38; // xmm4_4
  char v39; // al
  float v40; // xmm3_4
  int v41; // eax
  float v42; // xmm2_4
  float v43; // xmm1_4
  int v44; // r14d
  __m128 v45; // xmm6
  int v46; // xmm1_4
  int v47; // xmm0_4
  int v48; // xmm1_4
  int v49; // xmm0_4
  int v50; // xmm1_4
  CSurfaceDrawListBrush *v51; // rcx
  CSurfaceDrawListBrush *v52; // rax
  CSurfaceDrawListBrush *v53; // rax
  _OWORD *v54; // rcx
  int v55; // eax
  float v56; // xmm3_4
  float v57; // xmm2_4
  FLOAT v58; // xmm0_4
  FLOAT v59; // xmm2_4
  FLOAT v60; // xmm1_4
  FLOAT v61; // xmm3_4
  CSurfaceDrawListBrush *v62; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v63; // [rsp+48h] [rbp-C0h] BYREF
  char v64; // [rsp+4Ah] [rbp-BEh]
  unsigned int v65; // [rsp+58h] [rbp-B0h]
  CSurfaceDrawListBrush **v66; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v67[40]; // [rsp+68h] [rbp-A0h]
  __int128 v68; // [rsp+90h] [rbp-78h]
  int v69; // [rsp+A0h] [rbp-68h]
  CSurfaceDrawListBrush **v70; // [rsp+A8h] [rbp-60h] BYREF
  CSurfaceDrawListBrush *v71; // [rsp+B0h] [rbp-58h] BYREF
  int v72; // [rsp+B8h] [rbp-50h]
  int v73; // [rsp+BCh] [rbp-4Ch]
  void *v74; // [rsp+C0h] [rbp-48h]
  __int64 v75; // [rsp+C8h] [rbp-40h]
  __m128 v76; // [rsp+D0h] [rbp-38h]
  struct D2D_RECT_F v77; // [rsp+E0h] [rbp-28h] BYREF
  int (*v78)(const struct CDrawListBrush *, void *); // [rsp+F0h] [rbp-18h]
  __int64 v79; // [rsp+F8h] [rbp-10h]
  __int128 v80; // [rsp+108h] [rbp+0h] BYREF
  __int128 v81; // [rsp+118h] [rbp+10h]
  __int128 v82; // [rsp+128h] [rbp+20h]
  __int128 v83; // [rsp+138h] [rbp+30h]
  int v84; // [rsp+148h] [rbp+40h]
  __int128 v85; // [rsp+158h] [rbp+50h] BYREF
  __int128 v86; // [rsp+168h] [rbp+60h]
  __int128 v87; // [rsp+178h] [rbp+70h]
  __int128 v88; // [rsp+188h] [rbp+80h]
  int v89; // [rsp+198h] [rbp+90h]
  __int128 v90; // [rsp+1A8h] [rbp+A0h]
  __int128 v91; // [rsp+1B8h] [rbp+B0h]
  __int128 v92; // [rsp+1C8h] [rbp+C0h]
  __int128 v93; // [rsp+1D8h] [rbp+D0h]
  __int128 v94; // [rsp+1E8h] [rbp+E0h]
  __int128 v95; // [rsp+1F8h] [rbp+F0h]
  __int128 v96; // [rsp+208h] [rbp+100h]
  __int128 v97; // [rsp+218h] [rbp+110h]
  __int128 v98; // [rsp+228h] [rbp+120h]
  struct D2D_RECT_F v99; // [rsp+238h] [rbp+130h] BYREF
  __int64 v100; // [rsp+248h] [rbp+140h]

  v4 = *((_DWORD *)a2 + 74);
  v5 = 0;
  v84 = 0;
  v74 = a4;
  v78 = a3;
  if ( v4 )
  {
    v7 = (unsigned int)(v4 - 1);
    v8 = *((_QWORD *)a2 + 36);
    v9 = *(_OWORD *)(68 * v7 + v8 + 16);
    v80 = *(_OWORD *)(68 * v7 + v8);
    v10 = *(_OWORD *)(68 * v7 + v8 + 32);
    v81 = v9;
    v11 = *(_OWORD *)(68 * v7 + v8 + 48);
    v84 = *(_DWORD *)(68 * v7 + v8 + 64);
  }
  else
  {
    v80 = _xmm;
    v10 = _xmm;
    v81 = _xmm;
    v11 = *(__int128 *)&_xmm.r;
    BYTE1(v84) = BYTE1(v84) & 0xC0 | 0x29;
    LOBYTE(v84) = -86;
  }
  v69 = 0;
  *(_QWORD *)v67 = 0LL;
  *(_DWORD *)&v67[36] = 0;
  v82 = v10;
  LODWORD(v66) = *((_DWORD *)this + 2);
  v12 = *((_DWORD *)this + 4);
  v83 = v11;
  v13 = *((_DWORD *)this + 3);
  *(_DWORD *)&v67[8] = v12;
  HIDWORD(v66) = v13;
  v14 = *((_DWORD *)this + 5);
  *(_OWORD *)&v67[16] = 0LL;
  *(_WORD *)((char *)&v69 + 1) = 40;
  v15 = *((_DWORD *)this + 6);
  *(_DWORD *)&v67[12] = v14;
  v16 = *((_DWORD *)this + 7);
  LODWORD(v68) = v15;
  *(_DWORD *)&v67[32] = 1065353216;
  *(_QWORD *)((char *)&v68 + 4) = v16;
  HIDWORD(v68) = 1065353216;
  v85 = (unsigned __int64)v66;
  LOBYTE(v69) = 8;
  v86 = *(_OWORD *)&v67[8];
  v89 = v69;
  v87 = *(_OWORD *)&v67[24];
  v88 = v68;
  CMILMatrix::Multiply((CMILMatrix *)&v85, (const struct CMILMatrix *)&v80);
  v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       sqrtf_0((float)(*((float *)&v85 + 1) * *((float *)&v85 + 1)) + (float)(*(float *)&v85
                                                                                            * *(float *)&v85))
                     - 1.0) & _xmm) < 0.000081380211;
  v18 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       sqrtf_0((float)(*((float *)&v86 + 1) * *((float *)&v86 + 1)) + (float)(*(float *)&v86
                                                                                            * *(float *)&v86))
                     - 1.0) & _xmm) < 0.000081380211;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v20 = *((_QWORD *)this + 9);
    v21 = *(_QWORD *)(v20 + 16);
    if ( (unsigned int)i >= *(_DWORD *)(v21 + 8) )
      return (unsigned int)v5;
    v22 = *(_QWORD *)v21 + 144 * i;
    v23 = **(_QWORD **)(v20 + 24);
    v75 = v22;
    v24 = *(_OWORD *)(v22 + 16);
    v90 = *(_OWORD *)v22;
    v25 = *(_OWORD *)(v22 + 32);
    v91 = v24;
    v26 = *(_OWORD *)(v22 + 48);
    v92 = v25;
    v27 = *(_OWORD *)(v22 + 64);
    v93 = v26;
    v28 = *(_OWORD *)(v22 + 80);
    v94 = v27;
    v29 = *(_OWORD *)(v22 + 96);
    v95 = v28;
    v30 = *(_OWORD *)(v22 + 112);
    v96 = v29;
    v31 = *(_OWORD *)(v22 + 128);
    v97 = v30;
    v98 = v31;
    v32 = (unsigned int)v91 + v23;
    v33 = 100 * v90 + 48;
    v65 = v33;
    v34 = *(_DWORD *)v22 == 0;
    v79 = v32 + v33 * (DWORD1(v91) - 1);
    if ( !v34 && *(_DWORD *)(v22 + 40) < *(_DWORD *)(v20 + 32) )
      break;
LABEL_7:
    ;
  }
  while ( 1 )
  {
    v37 = *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) + 24LL * *(unsigned int *)(v22 + 40);
    if ( *((_BYTE *)this + 52) )
    {
      v38 = *((float *)this + 8);
      if ( (float)(v38 - *(float *)v32) <= 0.0000011920929 )
      {
        v38 = *(float *)v32;
        v39 = 0;
      }
      else
      {
        v39 = 1;
      }
      v40 = *((float *)this + 9);
      v41 = v39 != 0 ? 0x3000000 : 0;
      if ( (float)(v40 - *(float *)(v32 + 4)) <= 0.0000011920929 )
        v40 = *(float *)(v32 + 4);
      else
        v41 |= 3u;
      v42 = *((float *)this + 10);
      if ( (float)(*(float *)(v32 + 8) - v42) <= 0.0000011920929 )
        v42 = *(float *)(v32 + 8);
      else
        v41 |= 0x300u;
      v43 = *((float *)this + 11);
      if ( (float)(*(float *)(v32 + 12) - v43) <= 0.0000011920929 )
        v43 = *(float *)(v32 + 12);
      else
        v41 |= 0x30000u;
      v76.m128_u64[0] = __PAIR64__(LODWORD(v40), LODWORD(v38));
      v44 = *((_DWORD *)this + 12) & v41 | *(_DWORD *)(v32 + 44) & ~v41;
      v76.m128_u64[1] = __PAIR64__(LODWORD(v43), LODWORD(v42));
      v45 = v76;
    }
    else
    {
      v45 = (__m128)_mm_loadu_si128((const __m128i *)v32);
      v44 = *(_DWORD *)(v32 + 44);
      LODWORD(v43) = _mm_shuffle_ps(v45, v45, 255).m128_u32[0];
      LODWORD(v42) = _mm_shuffle_ps(v45, v45, 170).m128_u32[0];
      v38 = v45.m128_f32[0];
      LODWORD(v40) = _mm_shuffle_ps(v45, v45, 85).m128_u32[0];
      v76 = v45;
    }
    if ( v42 <= v38 || v43 <= v40 )
      goto LABEL_41;
    if ( v17 )
    {
      if ( v18 )
      {
        v46 = *(_DWORD *)(v32 + 68);
        LODWORD(v66) = *(_DWORD *)(v32 + 64);
        v47 = *(_DWORD *)(v32 + 72);
        HIDWORD(v66) = v46;
        v48 = *(_DWORD *)(v32 + 76);
        *(_DWORD *)&v67[4] = v47;
        v49 = *(_DWORD *)(v32 + 80);
        *(_DWORD *)&v67[8] = v48;
        v50 = *(_DWORD *)(v32 + 84);
        goto LABEL_27;
      }
    }
    else if ( v18 )
    {
      v56 = 0.0;
      goto LABEL_49;
    }
    v56 = FLOAT_N0_5;
LABEL_49:
    v57 = v17 ? 0.0 : FLOAT_N0_5;
    v58 = *(float *)v32 - v57;
    v59 = v57 + *(float *)(v32 + 8);
    v60 = *(float *)(v32 + 4) - v56;
    v61 = v56 + *(float *)(v32 + 12);
    v100 = 0LL;
    v77.left = v58;
    v77.right = v59;
    v99 = 0LL;
    v77.top = v60;
    v77.bottom = v61;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)v32, &v77, &v99, (struct D2D_MATRIX_3X2_F *)v22);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v70,
      (const struct D2D1::Matrix3x2F *)&v99,
      (const struct D2D1::Matrix3x2F *)(v32 + 64));
    *(_QWORD *)&v67[4] = v71;
    v49 = v72;
    v50 = v73;
    v66 = v70;
LABEL_27:
    *(_DWORD *)v67 = 0;
    *(_DWORD *)&v67[12] = 0;
    v62 = 0LL;
    v71 = 0LL;
    v70 = &v62;
    v63 = *((_WORD *)this + 40);
    v64 = *((_BYTE *)this + 82);
    *(_DWORD *)&v67[20] = v50;
    *(_DWORD *)&v67[16] = v49;
    *(_DWORD *)&v67[24] = 1065353216;
    LOBYTE(v72) = 1;
    v5 = CSurfaceDrawListBrush::CreateWithTextureTransform(v37, &v63, &v66, &v71);
    if ( (_BYTE)v72 )
    {
      v51 = *v70;
      *v70 = v71;
      if ( v51 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v51, 1);
    }
    if ( v5 < 0 )
      break;
    *((_BYTE *)v62 + 146) = 1;
    v52 = v62;
    *(_OWORD *)((char *)v62 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v52 + 3) = *((_QWORD *)this + 3);
    v53 = v62;
    *((_BYTE *)v62 + 52) = 1;
    *((__m128 *)v53 + 2) = v45;
    *((_DWORD *)v53 + 12) = v44;
    if ( CPrimitiveGroupDrawListGenerator::ShouldUseTexCoordClamp((const struct D2D_RECT_F *)(v32 + 88)) )
      *(_OWORD *)((char *)v62 + 120) = *v54;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v62, (const struct D2D_VECTOR_2F *)this + 7);
    if ( (char *)v78 == (char *)lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ )
      v55 = lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_(
              (volatile signed __int32 **)v62,
              (unsigned int *)v74);
    else
      v55 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v78)(v62, v74);
    v5 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v55, 0xA2u, 0LL);
      goto LABEL_9;
    }
    if ( v62 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v62, 1);
    v33 = v65;
    v22 = v75;
LABEL_41:
    if ( v32 == v79 )
      goto LABEL_7;
    v32 += v33;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x92u, 0LL);
LABEL_9:
  if ( v62 )
    std::default_delete<CSurfaceDrawListBrush>::operator()(v35, v62);
  return (unsigned int)v5;
}
