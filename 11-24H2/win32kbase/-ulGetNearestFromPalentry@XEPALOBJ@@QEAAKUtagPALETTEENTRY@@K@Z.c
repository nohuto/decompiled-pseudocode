/*
 * XREFs of ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x14003BD18
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x14003B500 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x14003B974 (-ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003BA00 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x14003D490 (-ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     EngBugCheckEx @ 0x1401C4130 (EngBugCheckEx.c)
 */

__int64 __fastcall XEPALOBJ::ulGetNearestFromPalentry(XEPALOBJ *this, struct tagPALETTEENTRY a2, int a3)
{
  ULONG_PTR v3; // r10
  ULONG_PTR v4; // r8
  unsigned int v5; // r9d
  int v6; // edx
  _DWORD *v10; // r8

  if ( !a3 )
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(this, a2);
  v3 = *(_QWORD *)this;
  v4 = *(int *)(*(_QWORD *)this + 96LL);
  if ( (int)v4 <= 5 )
  {
    if ( (_DWORD)v4 == 5 )
    {
      v10 = *(_DWORD **)(v3 + 112);
      v5 = v10[1] & (*(unsigned int *)&a2 >> v10[4] << v10[7]) | v10[2] & (*(unsigned int *)&a2 >> v10[5] << v10[8]);
      v6 = *v10 & (*(unsigned int *)&a2 >> v10[3] << v10[6]);
      return v6 | v5;
    }
    if ( (_DWORD)v4 )
    {
      switch ( (_DWORD)v4 )
      {
        case 1:
          return ulIndexedGetMatchFromPalentry((struct PALETTE *)v3, *(_DWORD *)&a2);
        case 2:
          return (unsigned int)ulIndexedGetNearestFromPalentry((struct PALETTE *)v3, a2);
        case 3:
          v5 = (*(_WORD *)&a2.peRed & 0xFC00 | (*(unsigned int *)&a2 >> 14) & 0x3E0) >> 5;
          v6 = (a2.peRed & 0xF8) << 8;
          return v6 | v5;
        case 4:
          v5 = (*(_WORD *)&a2.peRed & 0xF800 | (*(unsigned int *)&a2 >> 13) & 0x7C0) >> 6;
          v6 = (a2.peRed & 0xF8) << 7;
          return v6 | v5;
      }
    }
LABEL_23:
    EngBugCheckEx(0x164u, 0xCuLL, v3, v4, 9uLL);
  }
  if ( (_DWORD)v4 != 6 )
  {
    if ( (_DWORD)v4 == 7 )
      return *(unsigned int *)&a2;
    if ( (_DWORD)v4 == 8 )
      return *(_DWORD *)&a2 & 0xFFFFFF;
    goto LABEL_23;
  }
  v5 = (a2.peRed << 16) | a2.peBlue;
  v6 = *(_WORD *)&a2.peRed & 0xFF00;
  return v6 | v5;
}
