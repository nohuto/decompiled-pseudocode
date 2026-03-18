/*
 * XREFs of SddlBaseInitialize @ 0x1405FD3F8
 * Callers:
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140787140 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
