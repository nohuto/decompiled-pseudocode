/*
 * XREFs of ?AddRef@CHolographicInteropTarget@@WKA@EAAKXZ @ 0x1802760E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 160));
}
