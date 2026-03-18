/*
 * XREFs of ?Release@CCompressedSourceBitmap@@WHI@EAAKXZ @ 0x180255940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::Release(__int64 a1)
{
  return CMILCOMBaseT<ICompositionSurfaceStatistics,ICompositionSurfaceStatistics,CMilObjectDeleter>::Release((CBitmapLock *)(a1 - 120));
}
