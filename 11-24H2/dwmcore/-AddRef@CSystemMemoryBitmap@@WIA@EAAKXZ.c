/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ @ 0x180255D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 128));
}
