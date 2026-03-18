/*
 * XREFs of ?AddRef@CD3DDevice@@WBA@EAAKXZ @ 0x180260CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDevice::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 16));
}
