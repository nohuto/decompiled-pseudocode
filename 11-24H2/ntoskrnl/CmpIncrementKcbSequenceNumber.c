/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x140A32B9C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 304);
}
