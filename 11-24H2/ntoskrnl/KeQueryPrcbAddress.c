/*
 * XREFs of KeQueryPrcbAddress @ 0x1404A0210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryPrcbAddress(int a1)
{
  return KiProcessorBlock[a1];
}
