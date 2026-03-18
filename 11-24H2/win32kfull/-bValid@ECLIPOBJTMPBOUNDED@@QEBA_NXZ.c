/*
 * XREFs of ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x140338BA4
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140262710 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     NtGdiEngGradientFill @ 0x140339420 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x140339840 (NtGdiEngLineTo.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033A020 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     <none>
 */

char __fastcall ECLIPOBJTMPBOUNDED::bValid(ECLIPOBJTMPBOUNDED *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 168) || *((_QWORD *)this + 20) )
    return 1;
  return result;
}
