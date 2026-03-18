/*
 * XREFs of ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401CF550
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x14001A6C0 (EngFreeMem.c)
 *     EngDeletePalette @ 0x1401156E0 (EngDeletePalette.c)
 */

void __fastcall StubDispDisablePDEV(_QWORD *pv)
{
  HPALETTE v2; // rcx

  v2 = (HPALETTE)pv[3];
  if ( v2 )
    EngDeletePalette(v2);
  EngFreeMem(pv);
}
