/*
 * XREFs of ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400DC380
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400DB6D0 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngPlgBlt @ 0x140339C60 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400DC2AC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall bCheckMask(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 )
  {
    if ( a1->iBitmapFormat == 1 )
      return bCheckSurfaceRect(a1, a2, 0LL);
    else
      return 0LL;
  }
  return result;
}
