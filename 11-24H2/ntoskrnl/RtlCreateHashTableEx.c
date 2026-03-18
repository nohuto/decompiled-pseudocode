/*
 * XREFs of RtlCreateHashTableEx @ 0x1405EA350
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHashTable @ 0x140481260 (RtlpCreateHashTable.c)
 */

char __fastcall RtlCreateHashTableEx(__int64 *a1, unsigned int a2, int a3, int a4)
{
  return RtlpCreateHashTable(a1, a2, a3, a4);
}
