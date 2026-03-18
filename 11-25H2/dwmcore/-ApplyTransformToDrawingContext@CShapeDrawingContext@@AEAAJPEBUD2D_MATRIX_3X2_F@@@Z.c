/*
 * XREFs of ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18010CFA0
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Grow@?$CWatermarkStack@_N$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800B2150 (-Grow@-$CWatermarkStack@_N$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x1800B3180 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1800B3320 (-Grow@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x18010D4E0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118D80 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_180118D80.c)
 */

__int64 __fastcall CShapeDrawingContext::ApplyTransformToDrawingContext(
        CShapeDrawingContext *this,
        const struct D2D_MATRIX_3X2_F *a2,
        __int64 a3,
        __int64 a4)
{
  const struct D2D_MATRIX_3X2_F *v4; // r8
  __m128i v6; // xmm0
  FLOAT m21; // eax
  __int64 v8; // rcx
  FLOAT v9; // eax
  FLOAT v10; // eax
  FLOAT v11; // eax
  FLOAT m11; // xmm0_4
  FLOAT m12; // xmm1_4
  __int64 v14; // r15
  FLOAT m22; // xmm0_4
  FLOAT dy; // xmm1_4
  int v17; // eax
  unsigned int v18; // eax
  __int64 *v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // rdx
  int v24; // eax
  __int128 v25; // xmm0
  unsigned int v26; // eax
  int v27; // eax
  CMILMatrix *v28; // rcx
  __int64 v29; // rdx
  bool v30; // di
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // edi
  unsigned int v34; // eax
  _BYTE *v35; // r8
  __int64 v36; // rdx
  __m128i v37; // xmm0
  char *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  int v50; // eax
  int v51; // esi
  int v52; // r14d
  unsigned int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  __m128 v59; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v60; // [rsp+40h] [rbp-C0h]
  __int128 v61; // [rsp+50h] [rbp-B0h]
  _OWORD v62[2]; // [rsp+60h] [rbp-A0h]
  __int128 v63; // [rsp+80h] [rbp-80h]
  _OWORD v64[4]; // [rsp+90h] [rbp-70h] BYREF
  int v65; // [rsp+D0h] [rbp-30h]
  _BYTE v66[64]; // [rsp+E0h] [rbp-20h] BYREF
  int v67; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v4 = a2;
  if ( !a2 )
  {
    v35 = (char *)this + 522;
    if ( *((_BYTE *)this + 522) )
    {
      v36 = *((_QWORD *)this + 40);
      v37 = 0LL;
      v38 = (char *)this + 522;
      v39 = *(_DWORD *)(v36 + 272);
      if ( v39 )
      {
        v40 = (unsigned int)(v39 - 1);
        *(_DWORD *)(v36 + 272) = v40;
        v37 = *(__m128i *)(*(_QWORD *)(v36 + 264) + 16 * v40);
        v38 = (char *)this + 522;
      }
      if ( _mm_srli_si128(v37, 8).m128i_u64[0] )
      {
        v41 = *(_DWORD *)(v36 + 344);
        v35 = v38;
        if ( v41 )
          *(_DWORD *)(v36 + 344) = v41 - 1;
      }
      v42 = *(_DWORD *)(v36 + 296);
      if ( v42 )
        *(_DWORD *)(v36 + 296) = v42 - 1;
      v43 = *(_DWORD *)(v36 + 320);
      if ( v43 )
        *(_DWORD *)(v36 + 320) = v43 - 1;
      *v35 = 0;
    }
    return 0LL;
  }
  if ( *((_BYTE *)this + 520) && *((_BYTE *)this + 522) )
  {
    a2 = (const struct D2D_MATRIX_3X2_F *)*((_QWORD *)this + 40);
    v6 = 0LL;
    m21 = a2[11].m21;
    if ( m21 != 0.0 )
    {
      v8 = (unsigned int)(LODWORD(m21) - 1);
      LODWORD(a2[11].m21) = v8;
      v6 = *(__m128i *)(*(_QWORD *)&a2[11].m11 + 16 * v8);
    }
    if ( _mm_srli_si128(v6, 8).m128i_u64[0] )
    {
      v9 = a2[14].m21;
      if ( v9 != 0.0 )
        LODWORD(a2[14].m21) = LODWORD(v9) - 1;
    }
    v10 = a2[12].m21;
    if ( v10 != 0.0 )
      LODWORD(a2[12].m21) = LODWORD(v10) - 1;
    v11 = a2[13].m21;
    if ( v11 != 0.0 )
      LODWORD(a2[13].m21) = LODWORD(v11) - 1;
    *((_BYTE *)this + 522) = 0;
  }
  if ( *((_BYTE *)this + 522) )
    return 0LL;
  m11 = v4->m11;
  m12 = v4->m12;
  v14 = *((_QWORD *)this + 40);
  *(_QWORD *)((char *)v62 + 12) = 1065353216LL;
  v59 = (__m128)__PAIR64__(LODWORD(m12), LODWORD(m11));
  m22 = v4->m22;
  *(FLOAT *)&v60 = v4->m21;
  dy = v4->dy;
  *((FLOAT *)&v60 + 1) = m22;
  v17 = *(_DWORD *)(v14 + 276);
  *(FLOAT *)v62 = v4->dx;
  *(_QWORD *)((char *)v62 + 4) = LODWORD(dy);
  *((_QWORD *)&v60 + 1) = 0LL;
  v61 = _xmm;
  LOWORD(v62[1]) = 10248;
  v63 = 5uLL;
  if ( *(_DWORD *)(v14 + 272) == v17 )
  {
    v55 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(v14 + 264);
    v51 = v55;
    if ( v55 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v55);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0xD4Du, 0LL);
      v33 = v51;
LABEL_51:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x186u, 0LL);
      return v33;
    }
  }
  *(_OWORD *)(*(_QWORD *)(v14 + 264) + 16LL * (unsigned int)(*(_DWORD *)(v14 + 272))++) = v63;
  v18 = *(_DWORD *)(v14 + 284);
  if ( v18 <= *(_DWORD *)(v14 + 272) )
    v18 = *(_DWORD *)(v14 + 272);
  *(_DWORD *)(v14 + 284) = v18;
  v19 = (__int64 *)(v14 + 288);
  v20 = *(_DWORD *)(v14 + 296);
  if ( v20 )
  {
    v45 = (unsigned int)(v20 - 1);
    v65 = 0;
    v46 = *v19;
    v67 = 0;
    v47 = *(_OWORD *)(68 * v45 + v46 + 16);
    v64[0] = *(_OWORD *)(68 * v45 + v46);
    v48 = *(_OWORD *)(68 * v45 + v46 + 32);
    v64[1] = v47;
    v49 = *(_OWORD *)(68 * v45 + v46 + 48);
    LODWORD(v46) = *(_DWORD *)(68 * v45 + v46 + 64);
    v64[2] = v48;
    v64[3] = v49;
    v65 = v46;
    CMILMatrix::Multiply(&v59, (const struct CMILMatrix *)v64, (struct CMILMatrix *)v66);
    v50 = CWatermarkStack<CMILMatrix,8,2,8>::Push(v14 + 288, (__int64)v66);
    v51 = v50;
    if ( v50 < 0 )
    {
      v52 = v50;
      v53 = 69;
LABEL_43:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, v53, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0xD52u, 0LL);
      goto LABEL_44;
    }
  }
  else
  {
    if ( !*(_DWORD *)(v14 + 300) )
    {
      v56 = CWatermarkStack<CMILMatrix,8,2,8>::Grow(v14 + 288, (__int64)a2, (__int64)v4, a4, (const void **)(v14 + 288));
      v51 = v56;
      v52 = v56;
      if ( v56 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v56);
        v53 = 54;
        goto LABEL_43;
      }
    }
    v21 = *v19;
    v22 = v60;
    v23 = 68LL * *(unsigned int *)(v14 + 296);
    v24 = v62[1];
    *(__m128 *)(v23 + v21) = v59;
    v25 = v62[0];
    *(_OWORD *)(v23 + v21 + 16) = v22;
    *(_OWORD *)(v23 + v21 + 32) = _xmm;
    *(_OWORD *)(v23 + v21 + 48) = v25;
    *(_DWORD *)(v23 + v21 + 64) = v24;
    v26 = *(_DWORD *)(v14 + 308);
    if ( v26 <= ++*(_DWORD *)(v14 + 296) )
      v26 = *(_DWORD *)(v14 + 296);
    *(_DWORD *)(v14 + 308) = v26;
  }
  v27 = *(_DWORD *)(v14 + 296);
  if ( v27 )
    v28 = (CMILMatrix *)(*v19 + 68LL * (unsigned int)(v27 - 1));
  else
    v28 = (CMILMatrix *)&CMILMatrix::Identity;
  v30 = !CMILMatrix::Is2DAffineOrNaN(v28, v23);
  if ( *(_DWORD *)(v14 + 320) != *(_DWORD *)(v14 + 324)
    || (v57 = CWatermarkStack<bool,64,2,10>::Grow(v14 + 312, v29, v31, v32, (const void **)(v14 + 312)),
        v51 = v57,
        v57 >= 0) )
  {
    *(_BYTE *)(*(unsigned int *)(v14 + 320) + *(_QWORD *)(v14 + 312)) = v30;
    v33 = 0;
    v34 = *(_DWORD *)(v14 + 332);
    if ( v34 <= ++*(_DWORD *)(v14 + 320) )
      v34 = *(_DWORD *)(v14 + 320);
    *(_DWORD *)(v14 + 332) = v34;
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)(unsigned int)v57);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0xD56u, 0LL);
  v58 = *(_DWORD *)(v14 + 296);
  if ( v58 )
    *(_DWORD *)(v14 + 296) = v58 - 1;
LABEL_44:
  v54 = *(_DWORD *)(v14 + 272);
  if ( v54 )
    *(_DWORD *)(v14 + 272) = v54 - 1;
  v33 = v51;
  if ( v51 < 0 )
    goto LABEL_51;
LABEL_47:
  *((_BYTE *)this + 520) = 0;
  *((_BYTE *)this + 522) = 1;
  return v33;
}
