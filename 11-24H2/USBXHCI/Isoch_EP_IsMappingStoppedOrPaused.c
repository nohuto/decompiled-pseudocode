/*
 * XREFs of Isoch_EP_IsMappingStoppedOrPaused @ 0x14004B820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Isoch_EP_IsMappingStoppedOrPaused(__int64 a1)
{
  return (*(_DWORD *)(a1 + 108) & 0xFFFFFFFD) == 0;
}
