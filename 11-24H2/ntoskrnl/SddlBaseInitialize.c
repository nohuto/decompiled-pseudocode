/*
 * XREFs of SddlBaseInitialize @ 0x140607EA0
 * Callers:
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140796620 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
