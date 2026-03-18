/*
 * XREFs of ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x180260F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CMILCOMBaseT<ICompositionSurfaceStatistics,ICompositionSurfaceStatistics,CMilObjectDeleter>::Release((CBitmapLock *)(a1 - 32));
}
