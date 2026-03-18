/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x140A366CC
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14065C944 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 304);
}
