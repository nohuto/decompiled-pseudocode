/*
 * XREFs of ?AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x18003B470
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18003ADE0 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18003B0F0 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18003B770 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNot.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasRect(
        struct tagRECT *a1,
        __int64 a2,
        const __m128i *a3,
        __int128 *a4,
        char a5)
{
  __m128i v5; // xmm2
  unsigned int v6; // esi
  __int128 v8; // xmm0
  char v9; // bl
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // ebx
  int top; // r8d
  int left; // edx
  struct tagRECT *v18; // rax
  int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // ebx
  unsigned int v23; // eax
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF
  __m128i v25; // [rsp+40h] [rbp-38h] BYREF
  __int128 v26; // [rsp+50h] [rbp-28h] BYREF

  v5 = _mm_loadu_si128(a3);
  v6 = 0;
  v8 = *a4;
  v25 = v5;
  v26 = v8;
  if ( a1[3].left == 0x80000000 && a1[3].top == 0x80000000 && a1[3].right == 0x7FFFFFFF && a1[3].bottom == 0x7FFFFFFF )
  {
    v9 = 0;
    if ( !*(_QWORD *)(a2 + 64) )
      goto LABEL_6;
  }
  else
  {
    v9 = 1;
  }
  top = a1[1].top;
  left = a1[1].left;
  rc = a1[3];
  OffsetRect(&rc, left, top);
  v18 = *(struct tagRECT **)(a2 + 64);
  if ( v18 )
  {
    if ( v9 )
      IntersectRect(&rc, &rc, *(const RECT **)(a2 + 64));
    else
      rc = *v18;
  }
  ClipRectAndSimilarRect(&rc, &v26, &v25);
  v5 = v25;
LABEL_6:
  if ( (float)(*((float *)&v26 + 2) - *(float *)&v26) > 0.0
    && (float)(*((float *)&v26 + 3) - *((float *)&v26 + 1)) > 0.0 )
  {
    v10 = *(unsigned int *)(a2 + 24);
    v11 = v10 + 1;
    if ( !a5 )
    {
      if ( v11 < (unsigned int)v10 )
      {
        v19 = -2147024362;
        v20 = 179;
        v6 = -2147024362;
LABEL_24:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x343u, 0LL);
        return v6;
      }
      if ( v11 <= *(_DWORD *)(a2 + 20) )
      {
        *(__m128i *)(*(_QWORD *)a2 + 16LL * (unsigned int)v10) = v5;
LABEL_12:
        *(_DWORD *)(a2 + 24) = v11;
        goto LABEL_13;
      }
      v19 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16, 1, &v25);
      v6 = v19;
      if ( v19 < 0 )
      {
        v20 = 190;
        goto LABEL_24;
      }
LABEL_13:
      v12 = *(_DWORD *)(a2 + 56);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v14 = -2147024362;
        v21 = 179;
        v6 = -2147024362;
      }
      else
      {
        v14 = 0;
        if ( v13 <= *(_DWORD *)(a2 + 52) )
        {
          *(_OWORD *)(*(_QWORD *)(a2 + 32) + 16LL * v12) = v26;
          *(_DWORD *)(a2 + 56) = v13;
          return (unsigned int)v14;
        }
        v14 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 32, 16, 1, &v26);
        v6 = v14;
        if ( v14 >= 0 )
          return (unsigned int)v14;
        v21 = 190;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v21, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x346u, 0LL);
      return v6;
    }
    rc.left = v25.m128i_i32[2];
    rc.top = v25.m128i_i32[1];
    rc.right = v25.m128i_i32[0];
    rc.bottom = v25.m128i_i32[3];
    if ( v11 >= (unsigned int)v10 )
    {
      if ( v11 <= *(_DWORD *)(a2 + 20) )
      {
        *(struct tagRECT *)(*(_QWORD *)a2 + 16 * v10) = rc;
        goto LABEL_12;
      }
      v22 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16, 1, &rc);
      v6 = v22;
      if ( v22 >= 0 )
        goto LABEL_13;
      v23 = 190;
    }
    else
    {
      v22 = -2147024362;
      v23 = 179;
      v6 = -2147024362;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v23, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x33Fu, 0LL);
  }
  return v6;
}
