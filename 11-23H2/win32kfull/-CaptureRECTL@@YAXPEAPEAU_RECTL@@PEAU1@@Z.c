/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C6A6C
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02C7E50 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02C8210 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02C8880 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02C91C0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C02C9520 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02C9990 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C02C9EF0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CA300 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CA7D0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x1C02CB520 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CB920 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureRECTL(struct _RECTL **a1, struct _RECTL *a2)
{
  struct _RECTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct _RECTL *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
