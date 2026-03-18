/*
 * XREFs of ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV2@2@Z @ 0x1800270F0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027A38 (-IsInfinite@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

bool __fastcall CWindowNode::GetAlphaMarginsRects(__int64 a1, char a2, _OWORD *a3, LONG *a4, int *a5)
{
  char v5; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  int v13; // r10d
  int v14; // r9d
  int v15; // r11d
  int v16; // r9d
  int v17; // r10d
  int v18; // r8d
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  LONG v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // r8d
  int v29; // eax
  int v30; // r9d
  tagRECT v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rax
  LONG v35; // ecx
  LONG left; // eax
  LONG v37; // edx
  LONG top; // eax
  LONG v39; // r8d
  LONG right; // eax
  LONG v41; // eax
  LONG bottom; // r9d
  tagRECT rcDst; // [rsp+20h] [rbp-30h] BYREF
  RECT rcSrc2; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  *(_OWORD *)a4 = *a3;
  *(_OWORD *)a5 = *a3;
  v9 = *(_QWORD *)(a1 + 756);
  if ( (_DWORD)v9
    || (v10 = _mm_srli_si128(*(__m128i *)(a1 + 756), 8).m128i_u64[0], __PAIR64__(HIDWORD(v9), 0) != (unsigned int)v10)
    || HIDWORD(v10) )
  {
    v33 = HIDWORD(*(_QWORD *)(a1 + 756));
    rcDst = *(tagRECT *)(a1 + 712);
    v32 = rcDst;
    rcDst.right -= v33;
    rcDst.top += *(_DWORD *)(a1 + 764);
    rcDst.bottom -= HIDWORD(*(_QWORD *)(a1 + 764));
    v34 = *(_QWORD *)(a1 + 728);
    *(_QWORD *)&rcSrc2.right = v34;
    rcDst.left = *(_DWORD *)(a1 + 756) + _mm_cvtsi128_si32((__m128i)v32);
    *(_QWORD *)&rcSrc2.left = 0LL;
    IntersectRect(&rcDst, &rcDst, &rcSrc2);
    if ( !EqualRect(&rcDst, &rcSrc2) )
    {
      v35 = *a4;
      left = rcDst.left;
      if ( rcDst.left > *a4 )
      {
        *a4 = rcDst.left;
        v35 = left;
      }
      v37 = a4[1];
      top = rcDst.top;
      if ( rcDst.top > v37 )
      {
        a4[1] = rcDst.top;
        v37 = top;
      }
      v39 = a4[2];
      right = rcDst.right;
      if ( rcDst.right < v39 )
      {
        a4[2] = rcDst.right;
        v39 = right;
      }
      v41 = a4[3];
      bottom = rcDst.bottom;
      if ( rcDst.bottom < v41 )
      {
        a4[3] = rcDst.bottom;
        v41 = bottom;
      }
      if ( v39 <= v35 || v41 <= v37 )
      {
        *((_QWORD *)a4 + 1) = 0LL;
        *(_QWORD *)a4 = 0LL;
      }
    }
  }
  if ( a2 )
  {
    v11 = *(_QWORD *)(a1 + 680);
    if ( (_DWORD)v11
      || (v12 = _mm_srli_si128(*(__m128i *)(a1 + 680), 8).m128i_u64[0], __PAIR64__(HIDWORD(v11), 0) != (unsigned int)v12)
      || HIDWORD(v12) )
    {
      v13 = *(_DWORD *)(a1 + 680);
      v5 = 1;
      v14 = *(_DWORD *)(a1 + 688);
      v15 = *a5;
      rcSrc2 = *(RECT *)(a1 + 696);
      v16 = rcSrc2.top + v14;
      v17 = _mm_cvtsi128_si32((__m128i)rcSrc2) + v13;
      v18 = rcSrc2.bottom - HIDWORD(*(_QWORD *)(a1 + 688));
      v19 = v17;
      if ( (int)(rcSrc2.right - HIDWORD(*(_QWORD *)(a1 + 680))) > v17 )
        v19 = rcSrc2.right - HIDWORD(*(_QWORD *)(a1 + 680));
      if ( v18 <= v16 )
        v18 = v16;
      if ( v17 > v15 )
      {
        *a5 = v17;
        v15 = v17;
      }
      v20 = a5[1];
      if ( v16 > v20 )
      {
        a5[1] = v16;
        v20 = v16;
      }
      v21 = a5[2];
      if ( v19 < v21 )
      {
        a5[2] = v19;
        v21 = v19;
      }
      v22 = a5[3];
      if ( v18 < v22 )
      {
        a5[3] = v18;
        v22 = v18;
      }
      if ( v21 <= v15 || v22 <= v20 )
      {
        *((_QWORD *)a5 + 1) = 0LL;
        *(_QWORD *)a5 = 0LL;
      }
    }
  }
  v23 = *a4;
  v24 = *a5;
  if ( *a4 > *a5 )
  {
    *a5 = v23;
    v24 = v23;
  }
  v25 = a4[1];
  v26 = a5[1];
  if ( v25 > v26 )
  {
    a5[1] = v25;
    v26 = v25;
  }
  v27 = a4[2];
  v28 = a5[2];
  if ( v27 < v28 )
  {
    a5[2] = v27;
    v28 = v27;
  }
  v29 = a4[3];
  v30 = a5[3];
  if ( v29 < v30 )
  {
    a5[3] = v29;
    v30 = v29;
  }
  if ( v28 <= v24 || v30 <= v26 )
  {
    v24 = 0;
    *((_QWORD *)a5 + 1) = 0LL;
    v28 = 0;
    *(_QWORD *)a5 = 0LL;
    v30 = 0;
    v26 = 0;
  }
  return v5
      && (v24 != *a4 || v26 != a4[1] || v28 != a4[2] || v30 != a4[3])
      && (!(unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(a5)
       || !(unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(a4))
      && (!(unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsInfinite(a5)
       || !(unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsInfinite(a4));
}
