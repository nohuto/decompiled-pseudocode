/*
 * XREFs of ?AddRef@CDeviceTextureTarget@@WGA@EAAKXZ @ 0x180280B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 96));
}
