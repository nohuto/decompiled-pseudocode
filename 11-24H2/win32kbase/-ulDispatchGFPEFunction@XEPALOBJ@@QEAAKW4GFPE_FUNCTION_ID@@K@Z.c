/*
 * XREFs of ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x14003B820
 * Callers:
 *     ulGetMatchingIndexFromColorref @ 0x14003BF10 (ulGetMatchingIndexFromColorref.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x14003C0B0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x14003B974 (-ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     ?ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x14003D490 (-ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     EngBugCheckEx @ 0x1401C4130 (EngBugCheckEx.c)
 */

unsigned int __fastcall XEPALOBJ::ulDispatchGFPEFunction(ULONG_PTR *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  int v5; // r9d
  _DWORD *v7; // r8

  v3 = a3;
  if ( a2 > 5 )
  {
    switch ( a2 )
    {
      case 6:
        v4 = ((unsigned __int8)a3 << 16) | BYTE2(a3);
        v5 = a3 & 0xFF00;
        return v5 | v4;
      case 7:
        return v3;
      case 8:
        return a3 & 0xFFFFFF;
    }
LABEL_20:
    EngBugCheckEx(0x164u, 0xCuLL, *a1, a2, 9uLL);
  }
  if ( a2 == 5 )
  {
    v7 = *(_DWORD **)(*a1 + 112);
    v4 = v7[1] & (v3 >> v7[4] << v7[7]) | v7[2] & (v3 >> v7[5] << v7[8]);
    v5 = *v7 & (v3 >> v7[3] << v7[6]);
    return v5 | v4;
  }
  if ( !a2 )
    goto LABEL_20;
  if ( a2 != 1 )
  {
    switch ( a2 )
    {
      case 2:
        return ulIndexedGetNearestFromPalentry((struct PALETTE *)*a1, a3);
      case 3:
        v4 = (a3 & 0xFC00 | (a3 >> 14) & 0x3E0) >> 5;
        v5 = (a3 & 0xF8) << 8;
        return v5 | v4;
      case 4:
        v4 = (a3 & 0xF800 | (a3 >> 13) & 0x7C0) >> 6;
        v5 = (a3 & 0xF8) << 7;
        return v5 | v4;
    }
    goto LABEL_20;
  }
  return ulIndexedGetMatchFromPalentry((struct PALETTE *)*a1, a3);
}
