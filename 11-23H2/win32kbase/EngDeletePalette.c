/*
 * XREFs of EngDeletePalette @ 0x1C009D940
 * Callers:
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C009D910 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F908 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     ?EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z @ 0x1C009D980 (-EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  int v1; // ebx
  int *v3; // [rsp+38h] [rbp+10h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)&v3, hpal);
  v1 = EngDeletePaletteInternal((struct EPALOBJ *)&v3);
  if ( v3 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
  return v1;
}
