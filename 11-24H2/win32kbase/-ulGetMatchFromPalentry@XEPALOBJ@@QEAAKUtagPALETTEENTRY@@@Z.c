/*
 * XREFs of ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003CA18
 * Callers:
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003BA00 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ulGetMatchingIndexFromColorref @ 0x14003BF10 (ulGetMatchingIndexFromColorref.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x14003C0B0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 * Callees:
 *     ?ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x14003B974 (-ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     ?ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x14003D490 (-ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     EngBugCheckEx @ 0x1401C4130 (EngBugCheckEx.c)
 */

__int64 __fastcall XEPALOBJ::ulGetMatchFromPalentry(ULONG_PTR *this, struct tagPALETTEENTRY a2)
{
  ULONG_PTR v2; // r10
  ULONG_PTR v3; // r8
  unsigned int v4; // r9d
  int v5; // edx
  _DWORD *v9; // r8

  v2 = *this;
  v3 = *(int *)(*this + 100);
  if ( (int)v3 <= 5 )
  {
    if ( (_DWORD)v3 == 5 )
    {
      v9 = *(_DWORD **)(v2 + 112);
      v4 = v9[1] & (*(unsigned int *)&a2 >> v9[4] << v9[7]) | v9[2] & (*(unsigned int *)&a2 >> v9[5] << v9[8]);
      v5 = *v9 & (*(unsigned int *)&a2 >> v9[3] << v9[6]);
      return v5 | v4;
    }
    if ( (_DWORD)v3 )
    {
      switch ( (_DWORD)v3 )
      {
        case 1:
          return ulIndexedGetMatchFromPalentry((struct PALETTE *)v2, *(_DWORD *)&a2);
        case 2:
          return (unsigned int)ulIndexedGetNearestFromPalentry((struct PALETTE *)v2, a2);
        case 3:
          v4 = (*(_WORD *)&a2.peRed & 0xFC00 | (*(unsigned int *)&a2 >> 14) & 0x3E0) >> 5;
          v5 = (a2.peRed & 0xF8) << 8;
          return v5 | v4;
        case 4:
          v4 = (*(_WORD *)&a2.peRed & 0xF800 | (*(unsigned int *)&a2 >> 13) & 0x7C0) >> 6;
          v5 = (a2.peRed & 0xF8) << 7;
          return v5 | v4;
      }
    }
LABEL_21:
    EngBugCheckEx(0x164u, 0xCuLL, v2, v3, 9uLL);
  }
  if ( (_DWORD)v3 != 6 )
  {
    if ( (_DWORD)v3 == 7 )
      return *(unsigned int *)&a2;
    if ( (_DWORD)v3 == 8 )
      return *(_DWORD *)&a2 & 0xFFFFFF;
    goto LABEL_21;
  }
  v4 = (a2.peRed << 16) | a2.peBlue;
  v5 = *(_WORD *)&a2.peRed & 0xFF00;
  return v5 | v4;
}
