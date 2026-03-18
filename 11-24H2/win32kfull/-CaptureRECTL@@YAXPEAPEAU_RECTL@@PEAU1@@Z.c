/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1401FE608
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     NtGdiEngAlphaBlend @ 0x140338D50 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x140339030 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x140339420 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x140339840 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x140339C60 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x14033A400 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

void __fastcall CaptureRECTL(struct _RECTL **a1, struct _RECTL *a2)
{
  const void *v4; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, v4, 0x10uLL);
    *a1 = a2;
  }
}
