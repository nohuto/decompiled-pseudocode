/*
 * XREFs of ViTargetFreeContiguousMemoryCallback @ 0x140B8BA20
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140B8BA48 (ViTargetFreeContiguousMemoryFromNode.c)
 */

_BOOL8 __fastcall ViTargetFreeContiguousMemoryCallback(__int64 a1, __int64 a2)
{
  return (unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, a1) == 0;
}
