/*
 * XREFs of ?AddRef@CCompositionMagnifierBrush@@WEI@EAAKXZ @ 0x1802760B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionMagnifierBrush::AddRef(__int64 a1)
{
  return TValueResource<D2D_RECT_F,tagMILCMD_RECTRESOURCE,128>::AddRef(a1 - 72);
}
