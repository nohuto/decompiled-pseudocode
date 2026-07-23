/*
 * XREFs of BgpTxtDisplayString @ 0x140BB4BB0
 * Callers:
 *     BgkDrawText @ 0x140BB22DC (BgkDrawText.c)
 * Callees:
 *     BgpRasPrintGlyph @ 0x14046EF8C (BgpRasPrintGlyph.c)
 *     BgpGxFillRectangle @ 0x14046F3E0 (BgpGxFillRectangle.c)
 *     BgpGxDrawRectangle @ 0x14047D084 (BgpGxDrawRectangle.c)
 *     BgpFoGetTextMetrics @ 0x1404D344C (BgpFoGetTextMetrics.c)
 *     BgpFoGetAdvanceWidth @ 0x140699748 (BgpFoGetAdvanceWidth.c)
 *     BgpGxBlendRectangle @ 0x140BB4400 (BgpGxBlendRectangle.c)
 *     BgpTxtClearRegion @ 0x140BB48D8 (BgpTxtClearRegion.c)
 *     TxtpJustifyRectangle @ 0x140BB4DD4 (TxtpJustifyRectangle.c)
 *     BgpGxRectangleCreate @ 0x140BB5E78 (BgpGxRectangleCreate.c)
 *     BgpGxRectangleDestroy @ 0x140BB5F04 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpTxtDisplayString(__int64 a1, __int64 a2, __int64 a3, int a4, __int128 *a5)
{
  int AdvanceWidth; // ebx
  __int64 v8; // rsi
  unsigned int v9; // r15d
  unsigned int i; // r14d
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  __int128 *v15; // r14
  unsigned int v16; // ecx
  int v17; // eax
  __int64 v18; // r12
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  int *v22; // rsi
  __int64 v24; // [rsp+38h] [rbp-28h]
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-8h]
  int *v27; // [rsp+A0h] [rbp+40h] BYREF
  int v28; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+58h] BYREF

  v25 = 0LL;
  v28 = 0;
  v29 = 0LL;
  v26 = 0;
  v27 = 0LL;
  a5 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 76) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)(a2 + 2 * v8) );
      v9 = 0;
      for ( i = 0; i < (unsigned int)v8; ++i )
      {
        AdvanceWidth = BgpFoGetAdvanceWidth((int)a1 + 40, *(unsigned __int16 *)(a2 + 2LL * i), (int)&v28, a4, 0LL);
        if ( AdvanceWidth < 0 )
          return (unsigned int)AdvanceWidth;
        v9 += v28;
      }
      AdvanceWidth = BgpFoGetTextMetrics(a1 + 40, (__int64)&v27);
      if ( AdvanceWidth >= 0 )
      {
        v11 = *(_DWORD *)(a1 + 12);
        v12 = HIDWORD(v27);
        v26 = v9;
        if ( HIDWORD(v27) > v11 )
          v12 = v11;
        v13 = *(_DWORD *)(a1 + 8);
        HIDWORD(v25) = v12;
        if ( v9 > v13 )
          v9 = v13;
        LODWORD(v25) = v9;
        v14 = BgpGxRectangleCreate(&v25, 32LL, &a5);
        v15 = a5;
        AdvanceWidth = v14;
        if ( v14 >= 0 )
        {
          BgpGxFillRectangle((__int64)a5, *(_DWORD *)(a1 + 40));
          v16 = 0;
          v17 = 0;
          v18 = 0LL;
          v29 = 0LL;
          while ( (unsigned int)v18 < (unsigned int)v8 )
          {
            v19 = BgpRasPrintGlyph(v15, a1 + 40, *(_WORD *)(a2 + 2 * v18), v16, v17, 0, &v28, v24, 0LL);
            AdvanceWidth = v19;
            if ( v19 == -2147483643 )
              break;
            if ( v19 < 0 )
              goto LABEL_30;
            v16 = v28 + v29;
            LODWORD(v29) = v16;
            if ( v16 > v9 )
              break;
            v17 = HIDWORD(v29);
            v18 = (unsigned int)(v18 + 1);
          }
          TxtpJustifyRectangle(a1, &v25, &v29);
          v20 = *(_DWORD **)(a1 + 24);
          v27 = 0LL;
          v21 = BgpGxBlendRectangle(v20, v15, &v29, &v27);
          v22 = v27;
          AdvanceWidth = v21;
          if ( v21 >= 0 )
          {
            AdvanceWidth = BgpTxtClearRegion(a1);
            if ( AdvanceWidth >= 0 )
            {
              HIDWORD(v29) = *(_DWORD *)(a1 + 4);
              LODWORD(v29) = *(_DWORD *)a1 + v29;
              AdvanceWidth = BgpGxDrawRectangle(v22, (__int64)&v29);
            }
          }
          if ( v22 )
            BgpGxRectangleDestroy(v22);
        }
LABEL_30:
        if ( v15 )
          BgpGxRectangleDestroy(v15);
      }
    }
  }
  else
  {
    return (unsigned int)BgpTxtClearRegion(a1);
  }
  return (unsigned int)AdvanceWidth;
}
