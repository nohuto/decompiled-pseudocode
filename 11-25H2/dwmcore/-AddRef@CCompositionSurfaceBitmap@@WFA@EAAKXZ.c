/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x180280B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 80));
}
