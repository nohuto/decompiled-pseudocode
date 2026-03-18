/*
 * XREFs of ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C68CC
 * Callers:
 *     NtGdiEngBitBlt @ 0x1C02C8210 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x1C02C9310 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C02C9990 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02C9D40 (NtGdiEngPaint.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CA7D0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CADE0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CB1B0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CB520 (NtGdiEngTextOut.c)
 * Callees:
 *     <none>
 */

struct _BRUSHOBJ *__fastcall CaptureAndFakeBRUSHOBJ(struct _BRUSHOBJ *a1, struct _BRUSHOBJ *a2)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (struct _BRUSHOBJ *)MmUserProbeAddress;
  *a2 = *a1;
  if ( a2 && a2->iSolidColor == -1 )
    return 0LL;
  a2->pvRbrush = 0LL;
  return a2;
}
