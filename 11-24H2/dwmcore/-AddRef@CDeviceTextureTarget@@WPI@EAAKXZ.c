/*
 * XREFs of ?AddRef@CDeviceTextureTarget@@WPI@EAAKXZ @ 0x1802CD780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 248));
}
