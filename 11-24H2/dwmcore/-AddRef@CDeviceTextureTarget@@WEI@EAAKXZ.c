/*
 * XREFs of ?AddRef@CDeviceTextureTarget@@WEI@EAAKXZ @ 0x18025A780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 72));
}
