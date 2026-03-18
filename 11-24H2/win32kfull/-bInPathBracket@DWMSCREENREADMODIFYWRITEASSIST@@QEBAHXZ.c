/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x14030D740
 * Callers:
 *     NtGdiLineTo @ 0x14001A120 (NtGdiLineTo.c)
 *     NtGdiRectangle @ 0x1400E6870 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1401A19F0 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1401BACF0 (GrePolyPolyline.c)
 *     NtGdiInvertRgn @ 0x140202670 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x140330E40 (GrePolyBezier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = **((_QWORD **)this + 3);
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 248) & 1) == 0 )
    return 0;
  return v2;
}
