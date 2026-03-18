/*
 * XREFs of ?Release@?$CMILCOMBaseT@VICompositionSurfaceStatistics@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180218920
 * Callers:
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x180260F40 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180260F50 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x180260F60 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WHI@EAAKXZ @ 0x180260F70 (-Release@CCompressedSourceBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WIA@EAAKXZ @ 0x180261460 (-Release@CWICBitmapWrapper@@WIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILCOMBaseT<ICompositionSurfaceStatistics,ICompositionSurfaceStatistics,CMilObjectDeleter>::Release(
        CBitmapLock *this)
{
  return CBitmapLock::Release(this);
}
