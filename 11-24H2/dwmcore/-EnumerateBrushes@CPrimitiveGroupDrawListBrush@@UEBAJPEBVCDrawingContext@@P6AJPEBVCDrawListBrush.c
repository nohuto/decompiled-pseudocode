/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B96F0
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D360 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18004AC10 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z @ 0x1800B96A4 (-ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9DE4 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800BA54C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x1800BA7D0 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x18016CC00 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x180200C24 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  int v4; // eax
  unsigned int v5; // esi
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
  float v17; // xmm6_4
  float v18; // xmm2_4
  bool v19; // r10
  struct D2D_MATRIX_3X2_F *v20; // r9
  __int64 v21; // r12
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r11
  __int64 v25; // rdi
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // rdi
  unsigned int v35; // ebx
  bool v36; // cf
  __int64 v37; // rcx
  __int64 v39; // r13
  float v40; // xmm4_4
  char v41; // al
  float v42; // xmm3_4
  int v43; // eax
  float v44; // xmm2_4
  float v45; // xmm1_4
  int v46; // r15d
  __m128 v47; // xmm6
  int v48; // xmm1_4
  int v49; // xmm0_4
  int v50; // xmm1_4
  int v51; // xmm0_4
  int v52; // xmm1_4
  __int16 v53; // bx
  char v54; // si
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  _OWORD *v58; // rcx
  int v59; // eax
  __int64 v60; // r8
  float v61; // xmm3_4
  float v62; // xmm2_4
  FLOAT v63; // xmm0_4
  FLOAT v64; // xmm2_4
  FLOAT v65; // xmm1_4
  FLOAT v66; // xmm3_4
  int v67; // [rsp+28h] [rbp-E0h]
  char v68; // [rsp+38h] [rbp-D0h]
  bool v69; // [rsp+39h] [rbp-CFh]
  __int16 v70; // [rsp+48h] [rbp-C0h] BYREF
  char v71; // [rsp+4Ah] [rbp-BEh]
  __int128 v72; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v73[40]; // [rsp+60h] [rbp-A8h]
  __int128 v74; // [rsp+88h] [rbp-80h]
  int v75; // [rsp+98h] [rbp-70h]
  unsigned int v76; // [rsp+A0h] [rbp-68h]
  void *v77; // [rsp+A8h] [rbp-60h]
  __m128 v78; // [rsp+B0h] [rbp-58h]
  struct D2D_RECT_F v79; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v80[2]; // [rsp+D0h] [rbp-38h] BYREF
  int v81; // [rsp+E0h] [rbp-28h]
  int v82; // [rsp+E4h] [rbp-24h]
  int (*v83)(const struct CDrawListBrush *, void *); // [rsp+E8h] [rbp-20h]
  __int64 v84; // [rsp+F0h] [rbp-18h]
  __int64 v85; // [rsp+F8h] [rbp-10h]
  __int128 v86; // [rsp+108h] [rbp+0h] BYREF
  __int128 v87; // [rsp+118h] [rbp+10h]
  __int128 v88; // [rsp+128h] [rbp+20h]
  __int128 v89; // [rsp+138h] [rbp+30h]
  int v90; // [rsp+148h] [rbp+40h]
  __int128 v91; // [rsp+158h] [rbp+50h] BYREF
  __int128 v92; // [rsp+168h] [rbp+60h]
  __int128 v93; // [rsp+178h] [rbp+70h]
  __int128 v94; // [rsp+188h] [rbp+80h]
  int v95; // [rsp+198h] [rbp+90h]
  __int128 v96; // [rsp+1A8h] [rbp+A0h]
  __int128 v97; // [rsp+1B8h] [rbp+B0h]
  __int128 v98; // [rsp+1C8h] [rbp+C0h]
  __int128 v99; // [rsp+1D8h] [rbp+D0h]
  __int128 v100; // [rsp+1E8h] [rbp+E0h]
  __int128 v101; // [rsp+1F8h] [rbp+F0h]
  __int128 v102; // [rsp+208h] [rbp+100h]
  __int128 v103; // [rsp+218h] [rbp+110h]
  __int128 v104; // [rsp+228h] [rbp+120h]
  struct D2D_RECT_F v105; // [rsp+238h] [rbp+130h] BYREF
  __int64 v106; // [rsp+248h] [rbp+140h]

  v4 = *((_DWORD *)a2 + 74);
  v5 = 0;
  v90 = 0;
  v77 = a4;
  v83 = a3;
  if ( v4 )
  {
    v7 = (unsigned int)(v4 - 1);
    v8 = *((_QWORD *)a2 + 36);
    v9 = *(_OWORD *)(68 * v7 + v8 + 16);
    v86 = *(_OWORD *)(68 * v7 + v8);
    v10 = *(_OWORD *)(68 * v7 + v8 + 32);
    v87 = v9;
    v11 = *(_OWORD *)(68 * v7 + v8 + 48);
    v90 = *(_DWORD *)(68 * v7 + v8 + 64);
  }
  else
  {
    v86 = _xmm;
    v10 = _xmm;
    v87 = _xmm;
    v11 = *(__int128 *)&_xmm.r;
    BYTE1(v90) = BYTE1(v90) & 0xC0 | 0x29;
    LOBYTE(v90) = -86;
  }
  v75 = 0;
  *(_QWORD *)v73 = 0LL;
  v88 = v10;
  DWORD2(v72) = *((_DWORD *)this + 2);
  v12 = *((_DWORD *)this + 4);
  v89 = v11;
  v13 = *((_DWORD *)this + 3);
  *(_DWORD *)&v73[8] = v12;
  HIDWORD(v72) = v13;
  v14 = *((_DWORD *)this + 5);
  *(_OWORD *)&v73[16] = 0LL;
  *(_WORD *)((char *)&v75 + 1) = 40;
  v15 = *((_DWORD *)this + 6);
  *(_DWORD *)&v73[12] = v14;
  v16 = *((_DWORD *)this + 7);
  LODWORD(v74) = v15;
  *(_QWORD *)&v73[32] = 1065353216LL;
  *(_QWORD *)((char *)&v74 + 4) = v16;
  HIDWORD(v74) = 1065353216;
  v91 = *((unsigned __int64 *)&v72 + 1);
  LOBYTE(v75) = 8;
  v92 = *(_OWORD *)&v73[8];
  v95 = v75;
  v93 = *(_OWORD *)&v73[24];
  v94 = v74;
  CMILMatrix::Multiply((CMILMatrix *)&v91, (const struct CMILMatrix *)&v86);
  v17 = sqrtf_0((float)(*((float *)&v91 + 1) * *((float *)&v91 + 1)) + (float)(*(float *)&v91 * *(float *)&v91));
  v18 = sqrtf_0((float)(*((float *)&v92 + 1) * *((float *)&v92 + 1)) + (float)(*(float *)&v92 * *(float *)&v92));
  v19 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - 1.0) & _xmm) < 0.000081380211;
  v69 = v19;
  LOBYTE(v20) = COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - 1.0) & _xmm) < 0.000081380211;
  v21 = 0LL;
  v68 = (char)v20;
  while ( 1 )
  {
    v22 = *((_QWORD *)this + 9);
    v23 = *(_QWORD *)(v22 + 16);
    if ( (unsigned int)v21 >= *(_DWORD *)(v23 + 8) )
      return v5;
    v24 = *(_QWORD *)v23 + 144 * v21;
    v25 = **(_QWORD **)(v22 + 24);
    v84 = v24;
    v26 = *(_OWORD *)(v24 + 16);
    v96 = *(_OWORD *)v24;
    v27 = *(_OWORD *)(v24 + 32);
    v97 = v26;
    v28 = *(_OWORD *)(v24 + 48);
    v98 = v27;
    v29 = *(_OWORD *)(v24 + 64);
    v99 = v28;
    v30 = *(_OWORD *)(v24 + 80);
    v100 = v29;
    v31 = *(_OWORD *)(v24 + 96);
    v101 = v30;
    v32 = *(_OWORD *)(v24 + 112);
    v102 = v31;
    v33 = *(_OWORD *)(v24 + 128);
    v103 = v32;
    v104 = v33;
    v34 = (unsigned int)v97 + v25;
    v35 = 100 * v96 + 48;
    v76 = v35;
    v36 = *(_DWORD *)v24 == 0;
    v85 = v34 + v35 * (DWORD1(v97) - 1);
    if ( !v36 && *(_DWORD *)(v24 + 40) < *(_DWORD *)(v22 + 32) )
      break;
LABEL_7:
    v21 = (unsigned int)(v21 + 1);
  }
  while ( 1 )
  {
    v39 = *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) + 24LL * *(unsigned int *)(v24 + 40);
    if ( *((_BYTE *)this + 52) )
    {
      v40 = *((float *)this + 8);
      if ( (float)(v40 - *(float *)v34) <= 0.0000011920929 )
      {
        v40 = *(float *)v34;
        v41 = 0;
      }
      else
      {
        v41 = 1;
      }
      v42 = *((float *)this + 9);
      v43 = v41 != 0 ? 0x3000000 : 0;
      if ( (float)(v42 - *(float *)(v34 + 4)) <= 0.0000011920929 )
        v42 = *(float *)(v34 + 4);
      else
        v43 |= 3u;
      v44 = *((float *)this + 10);
      if ( (float)(*(float *)(v34 + 8) - v44) <= 0.0000011920929 )
        v44 = *(float *)(v34 + 8);
      else
        v43 |= 0x300u;
      v45 = *((float *)this + 11);
      if ( (float)(*(float *)(v34 + 12) - v45) <= 0.0000011920929 )
        v45 = *(float *)(v34 + 12);
      else
        v43 |= 0x30000u;
      v78.m128_u64[0] = __PAIR64__(LODWORD(v42), LODWORD(v40));
      v46 = *((_DWORD *)this + 12) & v43 | *(_DWORD *)(v34 + 44) & ~v43;
      v78.m128_u64[1] = __PAIR64__(LODWORD(v45), LODWORD(v44));
      v47 = v78;
    }
    else
    {
      v47 = (__m128)_mm_loadu_si128((const __m128i *)v34);
      v46 = *(_DWORD *)(v34 + 44);
      LODWORD(v45) = _mm_shuffle_ps(v47, v47, 255).m128_u32[0];
      LODWORD(v44) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
      v40 = v47.m128_f32[0];
      LODWORD(v42) = _mm_shuffle_ps(v47, v47, 85).m128_u32[0];
      v78 = v47;
    }
    if ( v44 <= v40 || v45 <= v42 )
      goto LABEL_36;
    if ( v19 )
    {
      if ( (_BYTE)v20 )
      {
        v48 = *(_DWORD *)(v34 + 68);
        DWORD2(v72) = *(_DWORD *)(v34 + 64);
        v49 = *(_DWORD *)(v34 + 72);
        HIDWORD(v72) = v48;
        v50 = *(_DWORD *)(v34 + 76);
        *(_DWORD *)&v73[4] = v49;
        v51 = *(_DWORD *)(v34 + 80);
        *(_DWORD *)&v73[8] = v50;
        v52 = *(_DWORD *)(v34 + 84);
        goto LABEL_26;
      }
    }
    else if ( (_BYTE)v20 )
    {
      v61 = 0.0;
      goto LABEL_44;
    }
    v61 = FLOAT_N0_5;
LABEL_44:
    v62 = v19 ? 0.0 : FLOAT_N0_5;
    v63 = *(float *)v34 - v62;
    v64 = v62 + *(float *)(v34 + 8);
    v65 = *(float *)(v34 + 4) - v61;
    v66 = v61 + *(float *)(v34 + 12);
    v106 = 0LL;
    v79.left = v63;
    v79.right = v64;
    v105 = 0LL;
    v79.top = v65;
    v79.bottom = v66;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)v34, &v79, &v105, v20);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)v80,
      (const struct D2D1::Matrix3x2F *)&v105,
      (const struct D2D1::Matrix3x2F *)(v34 + 64));
    *(_QWORD *)&v73[4] = v80[1];
    v51 = v81;
    v52 = v82;
    *((_QWORD *)&v72 + 1) = v80[0];
LABEL_26:
    *(_DWORD *)v73 = 0;
    *(_DWORD *)&v73[12] = 0;
    v53 = *((_WORD *)this + 40);
    v54 = *((_BYTE *)this + 82);
    *(_DWORD *)&v73[20] = v52;
    *(_DWORD *)&v73[16] = v51;
    *(_DWORD *)&v73[24] = 1065353216;
    v55 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
    if ( !v55 )
      break;
    v70 = v53;
    v71 = v54;
    LOBYTE(v67) = 0;
    v56 = CSurfaceDrawListBrush::CSurfaceDrawListBrush(v55, v39, &v70, (char *)&v72 + 8, v67);
    v57 = v56;
    if ( !v56 )
      goto LABEL_51;
    *(_BYTE *)(v56 + 146) = 1;
    *(_OWORD *)(v56 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v56 + 24) = *((_QWORD *)this + 3);
    *(_BYTE *)(v56 + 52) = 1;
    *(__m128 *)(v56 + 32) = v47;
    *(_DWORD *)(v56 + 48) = v46;
    if ( CPrimitiveGroupDrawListGenerator::ShouldUseTexCoordClamp((const struct D2D_RECT_F *)(v34 + 88)) )
      *(_OWORD *)(v57 + 120) = *v58;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(
        (CSurfaceDrawListBrush *)v57,
        (const struct D2D_VECTOR_2F *)this + 7);
    if ( v83 == lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ )
      v59 = lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_((const struct CDrawListBrush *)v57, v77);
    else
      v59 = ((__int64 (__fastcall *)(__int64, void *))v83)(v57, v77);
    v5 = v59;
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v59, 0xA2u, 0LL);
      goto LABEL_9;
    }
    CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v57, 1, v60);
    LOBYTE(v20) = v68;
    v19 = v69;
    v24 = v84;
    v35 = v76;
LABEL_36:
    if ( v34 == v85 )
      goto LABEL_7;
    v34 += v35;
  }
  v57 = 0LL;
LABEL_51:
  v5 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Au, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x92u, 0LL);
  if ( v57 )
LABEL_9:
    std::default_delete<CSurfaceDrawListBrush>::operator()(v37, v57);
  return v5;
}
