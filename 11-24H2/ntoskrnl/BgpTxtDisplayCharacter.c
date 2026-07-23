/*
 * XREFs of BgpTxtDisplayCharacter @ 0x14046ECF8
 * Callers:
 *     BgpDisplayCharacterEx @ 0x140698FEC (BgpDisplayCharacterEx.c)
 *     AnFwDisplayProgressIndicator @ 0x140BB3FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressAnimationManual @ 0x140BB427C (AnFwpProgressAnimationManual.c)
 *     AnFwpProgressIndicatorTimer @ 0x140BB69D0 (AnFwpProgressIndicatorTimer.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     BgpGxConvertRectangleEx @ 0x1404553DC (BgpGxConvertRectangleEx.c)
 *     BgpRasPrintGlyph @ 0x14046EF8C (BgpRasPrintGlyph.c)
 *     BgpGxFillRectangle @ 0x14046F3E0 (BgpGxFillRectangle.c)
 *     BgpGxDrawRectangle @ 0x14047D084 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x14047D508 (BgpGetBitsPerPixel.c)
 *     TxtpGetCacheEntry @ 0x140497B68 (TxtpGetCacheEntry.c)
 *     BgpRasGetGlyphTextCellDimensions @ 0x14069BCD0 (BgpRasGetGlyphTextCellDimensions.c)
 *     BgpGxBlendRectangle @ 0x140BB4400 (BgpGxBlendRectangle.c)
 *     TxtpJustifyRectangle @ 0x140BB4DD4 (TxtpJustifyRectangle.c)
 *     TxtpAddCacheEntry @ 0x140BB53FC (TxtpAddCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x140BB5F04 (BgpGxRectangleDestroy.c)
 */

__int64 BgpTxtDisplayCharacter(__int64 a1, __int64 a2, char a3, _DWORD *a4, _DWORD *a5, ...)
{
  __int64 v6; // rcx
  int *v7; // rbx
  int v8; // eax
  int *v9; // rdi
  unsigned int *v10; // r8
  int v11; // r9d
  char v12; // r15
  int *v13; // r12
  int v14; // esi
  char v15; // r14
  __int64 CacheEntry; // rax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // r10
  int v20; // eax
  unsigned int BitsPerPixel; // eax
  int v23; // [rsp+58h] [rbp-41h]
  __int64 v24; // [rsp+60h] [rbp-39h] BYREF
  __int64 v25; // [rsp+68h] [rbp-31h]
  int v26; // [rsp+70h] [rbp-29h]
  int v27; // [rsp+74h] [rbp-25h]
  __int64 v28; // [rsp+78h] [rbp-21h] BYREF
  int *v29; // [rsp+80h] [rbp-19h] BYREF
  int *v30; // [rsp+88h] [rbp-11h] BYREF
  __int64 v31; // [rsp+90h] [rbp-9h]
  char v32; // [rsp+E8h] [rbp+4Fh]
  unsigned __int16 v33; // [rsp+F0h] [rbp+57h]
  __int64 v36; // [rsp+110h] [rbp+77h] BYREF
  va_list va; // [rsp+110h] [rbp+77h]
  va_list va1; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v36 = va_arg(va1, _QWORD);
  v33 = a2;
  v31 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  v28 = 0LL;
  v7 = 0LL;
  v23 = 0;
  v8 = 0;
  v24 = 0LL;
  v9 = *(int **)(a1 + 32);
  v10 = (unsigned int *)(a1 + 40);
  v11 = 0;
  v12 = *(_BYTE *)(a1 + 60) & 1;
  v26 = 0;
  v27 = 0;
  v13 = 0LL;
  v30 = 0LL;
  v14 = 0;
  v32 = 0;
  v15 = v12;
  v25 = 0LL;
  v29 = 0LL;
  LODWORD(v36) = 0;
  if ( (unsigned __int16)a2 >= 0x20u )
  {
    if ( v12 )
    {
      CacheEntry = TxtpGetCacheEntry(&TxtpTextCache, a2, v10, 0LL);
      v25 = CacheEntry;
      if ( CacheEntry )
      {
        v7 = *(int **)(CacheEntry + 48);
        v15 = 0;
        goto LABEL_21;
      }
    }
    BgpGxFillRectangle(v9, *v10);
    v27 = v9[1];
    v26 = *v9;
    v18 = BgpRasPrintGlyph(v17, (int)a1 + 40, v33, v24, HIDWORD(v24), 1, (__int64)va);
    v14 = v18;
    if ( v18 < 0 )
    {
      DbgPrintEx(0x65u, 0, "BGFX internal font error %x char %x!\n", v18, v33);
      v11 = 0;
LABEL_27:
      v6 = v25;
      v8 = v36;
      goto LABEL_28;
    }
    if ( !v12 )
    {
      BgpRasGetGlyphTextCellDimensions(a1 + 40, (char *)&v28 + 4, &v28);
      v14 = 0;
      v23 = HIDWORD(v28);
      *v9 = HIDWORD(v28);
      v9[1] = v36;
      v32 = 1;
    }
    if ( v31 )
    {
      TxtpJustifyRectangle(a1, a1 + 8, &v24);
      v20 = BgpGxBlendRectangle(v19, v9, &v24, &v29);
      v7 = v29;
      v14 = v20;
      if ( v20 < 0 )
        goto LABEL_26;
    }
    else
    {
      v7 = v9;
    }
    v15 = v12;
    if ( !v12 )
      goto LABEL_21;
    BitsPerPixel = BgpGetBitsPerPixel();
    if ( v7 != v9 && BitsPerPixel == v7[2] )
    {
      v13 = v7;
LABEL_21:
      HIDWORD(v24) = *(_DWORD *)(a1 + 4);
      LODWORD(v24) = *(_DWORD *)a1 + v24;
      if ( (a3 & 1) != 0 || (dword_140EF0270 & 0x1000000) != 0 || (v14 = BgpGxDrawRectangle(v7, &v24), v14 >= 0) )
      {
        if ( v15 )
          v14 = TxtpAddCacheEntry(&TxtpTextCache, v33, a1 + 40, v13);
      }
      goto LABEL_26;
    }
    v14 = BgpGxConvertRectangleEx(v7, BitsPerPixel, &v30, 0);
    if ( v14 >= 0 )
    {
      if ( v7 != v9 )
        BgpGxRectangleDestroy(v7);
      v13 = v30;
      v7 = v30;
      goto LABEL_21;
    }
LABEL_26:
    v11 = v23;
    goto LABEL_27;
  }
LABEL_28:
  if ( a4 )
    *a4 = v8;
  if ( a5 )
    *a5 = v11;
  if ( v7 != v9 && !v6 && (!v15 || v14 < 0) && v7 )
    BgpGxRectangleDestroy(v7);
  if ( v32 )
  {
    *v9 = v26;
    v9[1] = v27;
  }
  return (unsigned int)v14;
}
