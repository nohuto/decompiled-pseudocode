/*
 * XREFs of ?GetFrameFormat@CBridgeSourceEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140067660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBridgeSourceEndpoint::GetFrameFormat(const struct tWAVEFORMATEX **this, struct tWAVEFORMATEX **a2)
{
  return CloneWaveFormat(this[8], a2);
}
