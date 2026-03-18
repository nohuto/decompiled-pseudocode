/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C02A8108
 * Callers:
 *     NtGdiLineTo @ 0x1C015A570 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C02A94E0 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C02AB7A0 (GrePolyBezier.c)
 *     GrePolyPolygon @ 0x1C02ABAE0 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C02ABDD0 (GrePolyPolyline.c)
 *     NtGdiRectangle @ 0x1C02ACE40 (NtGdiRectangle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 248LL) & 1) == 0 )
    return 0;
  return v2;
}
