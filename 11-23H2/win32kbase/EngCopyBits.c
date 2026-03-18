/*
 * XREFs of EngCopyBits @ 0x1C02325F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  BOOL result; // eax

  result = (int)qword_1C0294688;
  if ( qword_1C0294688 )
    return qword_1C0294688(psoDest, psoSrc, pco, pxlo, prclDest, pptlSrc);
  return result;
}
