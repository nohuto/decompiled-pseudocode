/*
 * XREFs of ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x180260F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CMILCOMBaseT<ICompositionSurfaceStatistics,ICompositionSurfaceStatistics,CMilObjectDeleter>::Release((CBitmapLock *)(a1 - 16));
}
