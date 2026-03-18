/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x180125CBC
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x1801258EC (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801257FC (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180126480 (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        bool a7)
{
  float v8; // xmm0_4
  float v9; // xmm5_4
  float v10; // xmm9_4
  float v11; // xmm1_4
  float v12; // xmm15_4
  float v13; // xmm10_4
  float v14; // xmm6_4
  float v15; // xmm11_4
  float v16; // xmm12_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  float v19; // xmm13_4
  float v20; // xmm14_4
  bool v21; // al
  float v22; // xmm1_4
  bool v23; // al
  float v24; // xmm1_4
  FLOAT left; // xmm0_4
  float v26; // xmm10_4
  bool v27; // di
  float v28; // xmm15_4
  float v29; // xmm6_4
  float v30; // xmm9_4
  int v31; // eax
  unsigned int v32; // ebx
  unsigned int v33; // xmm8_4
  int v34; // eax
  unsigned int v35; // xmm0_4
  int v36; // eax
  const struct D2D_RECT_F *v37; // r15
  FLOAT v38; // xmm1_4
  int v39; // eax
  FLOAT top; // xmm1_4
  int v41; // eax
  unsigned int v42; // xmm7_4
  int v43; // eax
  unsigned int v44; // xmm0_4
  int v45; // eax
  int v46; // ecx
  int v47; // r8d
  FLOAT v48; // xmm1_4
  int v49; // eax
  __int64 v50; // rdx
  __int128 v51; // xmm6
  __int128 v53; // [rsp+38h] [rbp-B1h] BYREF
  int v54; // [rsp+48h] [rbp-A1h]
  float v55; // [rsp+4Ch] [rbp-9Dh]
  FLOAT right; // [rsp+50h] [rbp-99h]
  FLOAT bottom; // [rsp+54h] [rbp-95h]
  const struct D2D_RECT_F *v58; // [rsp+58h] [rbp-91h]

  v8 = *(float *)a4;
  v9 = a5->right - a5->left;
  v10 = a5->bottom - a5->top;
  right = a3->right;
  v11 = right - a3->left;
  bottom = a3->bottom;
  v12 = bottom - a3->top;
  v58 = a3;
  v55 = v11;
  v13 = fmaxf(0.0, fminf(v8, v11));
  v14 = fmaxf(0.0, fminf(*((float *)a4 + 1), v12));
  v15 = fmaxf(0.0, fminf(*((float *)a4 + 2), v11 - v13));
  v16 = fmaxf(0.0, fminf(*((float *)a4 + 3), v12 - v14));
  if ( v13 < 0.0000011920929 )
    v13 = 0.0;
  if ( v15 < 0.0000011920929 )
    v15 = 0.0;
  if ( v14 < 0.0000011920929 )
    v14 = 0.0;
  if ( v16 < 0.0000011920929 )
    v16 = 0.0;
  v17 = fmaxf(0.0, fminf(*(float *)a6, v9));
  v18 = fmaxf(0.0, fminf(*((float *)a6 + 1), v10));
  v19 = fmaxf(0.0, fminf(*((float *)a6 + 2), v9 - v17));
  v20 = fmaxf(0.0, fminf(*((float *)a6 + 3), v10 - v18));
  if ( v17 < 0.0000011920929 )
    v17 = 0.0;
  if ( v19 < 0.0000011920929 )
    v19 = 0.0;
  if ( v18 < 0.0000011920929 )
    v18 = 0.0;
  if ( v20 < 0.0000011920929 )
    v20 = 0.0;
  v21 = a7;
  if ( a7 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v55 - (float)(v15 + v13)) & _xmm) > 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - (float)(v16 + v14)) & _xmm) > 0.0000011920929 )
    {
      v22 = v55;
      goto LABEL_22;
    }
    v21 = 0;
    a7 = 0;
  }
  v22 = v55;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 - v17) - v19) - (float)((float)(v55 - v13) - v15)) & _xmm) <= 0.0000011920929 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - v13) & _xmm) <= 0.0000011920929 )
    {
      v13 = 0.0;
      v17 = 0.0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - v15) & _xmm) <= 0.0000011920929 )
    {
      v15 = 0.0;
      v19 = 0.0;
    }
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 - v18) - v20) - (float)((float)(v12 - v14) - v16)) & _xmm) <= 0.0000011920929 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - v14) & _xmm) <= 0.0000011920929 )
    {
      v14 = 0.0;
      v18 = 0.0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v16) & _xmm) <= 0.0000011920929 )
    {
      v16 = 0.0;
      v20 = 0.0;
    }
  }
  if ( !v21
    && COERCE_FLOAT(LODWORD(v13) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v14) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v15) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v16) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v17) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v18) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v19) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v20) & _xmm) < 0.0000011920929 )
  {
    return 0;
  }
LABEL_22:
  v23 = v13 > 0.0;
  LODWORD(v24) = COERCE_UNSIGNED_INT(v22 - (float)(v15 + v13)) & _xmm;
  left = a3->left;
  v26 = v13 + a3->left;
  LOBYTE(v54) = v14 > 0.0;
  v27 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - (float)(v16 + v14)) & _xmm) <= 0.0000011920929;
  if ( v24 <= 0.0000011920929 )
    v28 = v26;
  else
    v28 = right - v15;
  v29 = v14 + a3->top;
  if ( v27 )
    v30 = v29;
  else
    v30 = bottom - v16;
  if ( v23 )
  {
    *(FLOAT *)&v53 = left;
    DWORD1(v53) = LODWORD(a5->left);
    DWORD2(v53) = DWORD1(v53);
    v31 = CoordMap::AddEntry((_DWORD)this, (_DWORD)this, (_DWORD)a3, (unsigned int)&v53, 0);
    v32 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x15Cu, 0LL);
      return v32;
    }
  }
  else if ( v24 <= 0.0000011920929 )
  {
    goto LABEL_31;
  }
  *(float *)&v33 = v17 + a5->left;
  *(_QWORD *)&v53 = __PAIR64__(v33, LODWORD(v26));
  DWORD2(v53) = v33;
  v34 = CoordMap::AddEntry((_DWORD)this, (_DWORD)this, (_DWORD)a3, (unsigned int)&v53, 2);
  v32 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x163u, 0LL);
    return v32;
  }
LABEL_31:
  if ( v15 > 0.0 || v24 > 0.0000011920929 )
  {
    *(float *)&v35 = a5->right - v19;
    *(_QWORD *)&v53 = __PAIR64__(v35, LODWORD(v28));
    DWORD2(v53) = v35;
    v36 = CoordMap::AddEntry((_DWORD)this, (_DWORD)this, (_DWORD)a3, (unsigned int)&v53, 2);
    v32 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x16Au, 0LL);
      return v32;
    }
    v37 = v58;
    if ( v15 > 0.0 )
    {
      v38 = a5->right;
      *(FLOAT *)&v53 = v58->right;
      *((FLOAT *)&v53 + 1) = v38;
      *((FLOAT *)&v53 + 2) = v38;
      v39 = CoordMap::AddEntry((_DWORD)this, (_DWORD)this, (_DWORD)a3, (unsigned int)&v53, 0);
      v32 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x16Fu, 0LL);
        return v32;
      }
    }
  }
  else
  {
    v37 = v58;
  }
  if ( (_BYTE)v54 )
  {
    top = a5->top;
    *(FLOAT *)&v53 = v37->top;
    *((FLOAT *)&v53 + 1) = top;
    *((FLOAT *)&v53 + 2) = top;
    v41 = CoordMap::AddEntry((_DWORD)this, (int)this + 184, (_DWORD)a3, (unsigned int)&v53, 0);
    v32 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v41, 0x174u, 0LL);
      return v32;
    }
  }
  else if ( v27 )
  {
    goto LABEL_40;
  }
  *(float *)&v42 = v18 + a5->top;
  *(_QWORD *)&v53 = __PAIR64__(v42, LODWORD(v29));
  DWORD2(v53) = v42;
  v43 = CoordMap::AddEntry((_DWORD)this, (int)this + 184, (_DWORD)a3, (unsigned int)&v53, 2);
  v32 = v43;
  if ( v43 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x17Bu, 0LL);
    return v32;
  }
LABEL_40:
  if ( v16 > 0.0 || !v27 )
  {
    *(float *)&v44 = a5->bottom - v20;
    *(_QWORD *)&v53 = __PAIR64__(v44, LODWORD(v30));
    DWORD2(v53) = v44;
    v45 = CoordMap::AddEntry((_DWORD)this, (int)this + 184, (_DWORD)a3, (unsigned int)&v53, 2);
    v32 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x182u, 0LL);
      return v32;
    }
    if ( v16 > 0.0 )
    {
      v48 = a5->bottom;
      *(FLOAT *)&v53 = v37->bottom;
      *((FLOAT *)&v53 + 1) = v48;
      *((FLOAT *)&v53 + 2) = v48;
      v49 = CoordMap::AddEntry(v46, (int)this + 184, v47, (unsigned int)&v53, 0);
      v32 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x187u, 0LL);
        return v32;
      }
    }
  }
  if ( a7 )
  {
    *(_QWORD *)&v53 = __PAIR64__(LODWORD(v29), LODWORD(v26));
    v50 = *((_QWORD *)this + 47) - *((_QWORD *)this + 46);
    *((_QWORD *)&v53 + 1) = __PAIR64__(LODWORD(v30), LODWORD(v28));
    v51 = v53;
    *(_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                 (__int64 *)this + 46,
                 v50 >> 4) = v51;
  }
  return 0;
}
