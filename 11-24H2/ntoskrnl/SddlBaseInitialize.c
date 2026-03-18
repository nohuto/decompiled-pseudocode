/*
 * XREFs of SddlBaseInitialize @ 0x1406098E8
 * Callers:
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140796510 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
