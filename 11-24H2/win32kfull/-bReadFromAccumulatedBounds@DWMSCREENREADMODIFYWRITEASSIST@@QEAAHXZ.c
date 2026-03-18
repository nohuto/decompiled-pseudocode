/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x14030D768
 * Callers:
 *     NtGdiLineTo @ 0x14001A120 (NtGdiLineTo.c)
 *     NtGdiRectangle @ 0x1400E6870 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1401A19F0 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1401BACF0 (GrePolyPolyline.c)
 *     NtGdiInvertRgn @ 0x140202670 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x140330E40 (GrePolyBezier.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140175528 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1401E0F84 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  _QWORD **v1; // rax
  unsigned int v3; // ebx
  struct _RECTL v5; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)*((_QWORD *)this + 3);
  v3 = 0;
  if ( *v1 )
  {
    if ( (unsigned int)GreGetBounds(**v1, &v5, 4LL) )
    {
      ERECTL::bOffsetSubtract(
        (ERECTL *)&v5,
        (const struct _POINTL *)(**((_QWORD **)this + 3) + 8LL * (*(_DWORD *)(**((_QWORD **)this + 3) + 40LL) & 1) + 1016),
        0);
      if ( !ERECTL::bEmpty((ERECTL *)&v5) )
        return (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, &v5);
    }
  }
  return v3;
}
