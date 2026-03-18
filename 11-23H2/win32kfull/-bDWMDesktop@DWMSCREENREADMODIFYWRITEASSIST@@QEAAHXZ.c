/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C0299D44
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

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 *v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 3);
  v2 = 0;
  v3 = *v1;
  if ( *v1 && *(_DWORD *)(v3 + 492) )
    return (*(_DWORD *)(v3 + 36) & 0x4000) != 0;
  return v2;
}
