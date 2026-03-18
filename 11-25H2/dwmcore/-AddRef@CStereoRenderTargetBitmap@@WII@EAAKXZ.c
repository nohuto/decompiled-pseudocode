/*
 * XREFs of ?AddRef@CStereoRenderTargetBitmap@@WII@EAAKXZ @ 0x1802E3B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStereoRenderTargetBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 136));
}
