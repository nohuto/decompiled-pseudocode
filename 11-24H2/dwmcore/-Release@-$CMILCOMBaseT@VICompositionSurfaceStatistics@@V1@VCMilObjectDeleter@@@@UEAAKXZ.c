/*
 * XREFs of ?Release@?$CMILCOMBaseT@VICompositionSurfaceStatistics@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18020C420
 * Callers:
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x180255910 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180255920 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x180255930 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WHI@EAAKXZ @ 0x180255940 (-Release@CCompressedSourceBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WIA@EAAKXZ @ 0x180255E30 (-Release@CWICBitmapWrapper@@WIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILCOMBaseT<ICompositionSurfaceStatistics,ICompositionSurfaceStatistics,CMilObjectDeleter>::Release(
        CBitmapLock *this)
{
  return CBitmapLock::Release(this);
}
