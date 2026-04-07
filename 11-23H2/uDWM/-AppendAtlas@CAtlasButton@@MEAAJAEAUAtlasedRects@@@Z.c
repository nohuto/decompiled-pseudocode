/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18003EB00
 * Callers:
 *     <none>
 * Callees:
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180004A28 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18003F520 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     floor @ 0x18005D4A8 (floor.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, struct AtlasedRects *a2)
{
  struct CBitmapSource *v2; // r8
  unsigned int v3; // r14d
  int appended; // eax
  unsigned int v7; // edi
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // r12d
  int v11; // r13d
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // xmm8_4
  float v20; // xmm10_4
  float v21; // xmm8_4
  double v22; // xmm0_8
  int v23; // eax
  float v24; // xmm11_4
  float v25; // xmm9_4
  __m128i v26; // xmm1
  float v27; // xmm8_4
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  float v30; // xmm0_4
  __m128i v31; // xmm4
  bool v32; // zf
  char v33; // r15
  unsigned __int32 v34; // xmm1_4
  unsigned __int32 v35; // xmm2_4
  unsigned __int32 v36; // xmm3_4
  unsigned __int32 v37; // xmm4_4
  char v38; // r14
  __int64 v39; // rax
  unsigned int v40; // edx
  __int128 v41; // xmm0
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // edx
  int v47; // ebx
  struct tagRECT *v49; // rax
  unsigned int v50; // eax
  int v51; // r14d
  __int64 v52; // rcx
  int v53; // edi
  unsigned int v54; // eax
  int v55; // esi
  int v56; // r9d
  int v57; // eax
  unsigned int v58; // eax
  int v59; // r9d
  int v60; // eax
  __int128 v61; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v62; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v63; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( !v2 || (appended = CAtlasedImage::AppendAtlasNineGrid(this, a2, v2), v3 = appended, appended >= 0) )
  {
    v7 = v3;
    v8 = *((_QWORD *)this + 16);
    if ( !v8 )
      return v7;
    v9 = *((_QWORD *)this + 9);
    v10 = *((_DWORD *)this + 4);
    v11 = *((_DWORD *)this + 5);
    v12 = (float)*((int *)this + 6);
    v13 = (float)*((int *)this + 7);
    v63 = 0LL;
    if ( v9 )
      v63 = *(_OWORD *)(v9 + 64);
    v14 = (float)*(int *)(v8 + 24);
    v15 = (float)*(int *)(v8 + 28);
    if ( v14 <= 0.0 || v15 <= 0.0 )
      return v7;
    v16 = v12 - (float)(v63 + DWORD1(v63));
    v17 = v13 - (float)(DWORD2(v63) + HIDWORD(v63));
    v18 = (float)SDWORD2(v63) + (float)v11;
    if ( v16 <= 0.0 )
      v16 = 0.0;
    if ( v17 <= 0.0 )
      v17 = 0.0;
    v19 = fminf(1.0, fminf(v16 / v14, v17 / v15));
    v20 = v19 * v15;
    v21 = v19 * v14;
    v22 = floor((float)((float)(v16 - v21) * 0.5) + 0.5);
    v23 = *((_DWORD *)this + 34);
    v24 = (float)(int)v22 + (float)((float)(int)v63 + (float)v10);
    if ( v23 == 1 )
      goto LABEL_13;
    if ( !v23 )
    {
      v25 = (float)*((int *)this + 35) + v18;
      goto LABEL_14;
    }
    if ( v23 != 2 )
LABEL_13:
      v25 = (float)(int)floor((float)((float)(v17 - v20) * 0.5) + 0.5) + v18;
    else
      v25 = (float)(v18 + v17) - (float)((float)*((int *)this + 35) + v20);
LABEL_14:
    v26 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 80));
    v27 = v21 + v24;
    v28 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 84));
    v29 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 88));
    v30 = v25 + v20;
    v31 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 92));
    v7 = 0;
    v32 = *((_DWORD *)this + 12) == 0x80000000;
    v33 = *((_BYTE *)this + 144);
    v34 = _mm_cvtepi32_ps(v26).m128_u32[0];
    v35 = _mm_cvtepi32_ps(v28).m128_u32[0];
    v36 = _mm_cvtepi32_ps(v29).m128_u32[0];
    v37 = _mm_cvtepi32_ps(v31).m128_u32[0];
    *(_QWORD *)&v61 = __PAIR64__(v35, v34);
    *((_QWORD *)&v61 + 1) = __PAIR64__(v37, v36);
    *(_QWORD *)&v62 = __PAIR64__(LODWORD(v25), LODWORD(v24));
    *((float *)&v62 + 2) = v27;
    *((float *)&v62 + 3) = v25 + v20;
    if ( v32
      && *((_DWORD *)this + 13) == 0x80000000
      && *((_DWORD *)this + 14) == 0x7FFFFFFF
      && *((_DWORD *)this + 15) == 0x7FFFFFFF )
    {
      v38 = 0;
      if ( !*((_QWORD *)a2 + 8) )
        goto LABEL_19;
    }
    else
    {
      v38 = 1;
    }
    rc = (struct tagRECT)*((_OWORD *)this + 3);
    OffsetRect(&rc, v10, v11);
    v49 = (struct tagRECT *)*((_QWORD *)a2 + 8);
    if ( v49 )
    {
      if ( v38 )
        IntersectRect(&rc, &rc, *((const RECT **)a2 + 8));
      else
        rc = *v49;
    }
    ClipRectAndSimilarRect(&rc.left, (float *)&v62, (float *)&v61);
    v37 = HIDWORD(v61);
    v36 = DWORD2(v61);
    v35 = DWORD1(v61);
    v34 = v61;
    v30 = *((float *)&v62 + 3);
    v27 = *((float *)&v62 + 2);
    v25 = *((float *)&v62 + 1);
    LODWORD(v24) = v62;
LABEL_19:
    if ( (float)(v27 - v24) <= 0.0 || (float)(v30 - v25) <= 0.0 )
      goto LABEL_29;
    v39 = *((unsigned int *)a2 + 6);
    v40 = v39 + 1;
    if ( !v33 )
    {
      if ( v40 < (unsigned int)v39 )
      {
        v53 = -2147024362;
        v54 = 181;
        v47 = -2147024362;
        v55 = -2147024362;
        v56 = -2147024362;
      }
      else
      {
        if ( v40 <= *((_DWORD *)a2 + 5) )
        {
          v41 = v61;
          v42 = (unsigned int)v39;
          v43 = *(_QWORD *)a2;
          v44 = 2 * v42;
LABEL_25:
          *(_OWORD *)(v43 + 8 * v44) = v41;
          *((_DWORD *)a2 + 6) = v40;
LABEL_26:
          v45 = *((_DWORD *)a2 + 14);
          v46 = v45 + 1;
          if ( v45 + 1 < v45 )
          {
            v7 = -2147024362;
            v58 = 181;
            v47 = -2147024362;
            v55 = -2147024362;
            v59 = -2147024362;
LABEL_54:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, v58, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x354u, 0LL);
            goto LABEL_55;
          }
          v7 = 0;
          if ( v46 <= *((_DWORD *)a2 + 13) )
          {
            *(_OWORD *)(*((_QWORD *)a2 + 4) + 16LL * v45) = v62;
            *((_DWORD *)a2 + 14) = v46;
            goto LABEL_29;
          }
          v60 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 32, 16, 1, &v62);
          v7 = v60;
          v47 = v60;
          if ( v60 < 0 )
          {
            v55 = v60;
            v59 = v60;
            v58 = 192;
            goto LABEL_54;
          }
LABEL_29:
          v47 = v7;
          if ( (v7 & 0x80000000) == 0 )
            return v7;
LABEL_49:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x25Fu, 0LL);
          return v7;
        }
        v57 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 16, 1, &v61);
        v53 = v57;
        v47 = v57;
        if ( v57 >= 0 )
          goto LABEL_26;
        v55 = v57;
        v56 = v57;
        v54 = 192;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, v54, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x351u, 0LL);
LABEL_55:
      v7 = v55;
      goto LABEL_49;
    }
    *(_QWORD *)&v63 = __PAIR64__(v35, v36);
    *((_QWORD *)&v63 + 1) = __PAIR64__(v37, v34);
    if ( v40 >= (unsigned int)v39 )
    {
      if ( v40 <= *((_DWORD *)a2 + 5) )
      {
        v41 = v63;
        v52 = v39;
        v43 = *(_QWORD *)a2;
        v44 = 2 * v52;
        goto LABEL_25;
      }
      v51 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 16, 1, &v63);
      v7 = v51;
      if ( v51 >= 0 )
        goto LABEL_26;
      v50 = 192;
    }
    else
    {
      v7 = -2147024362;
      v50 = 181;
      v51 = -2147024362;
    }
    v47 = v7;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v50, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x34Du, 0LL);
    goto LABEL_49;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x252u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x21Cu, 0LL);
  return v3;
}
