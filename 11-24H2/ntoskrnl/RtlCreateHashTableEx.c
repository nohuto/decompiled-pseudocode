/*
 * XREFs of RtlCreateHashTableEx @ 0x1405E78A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHashTable @ 0x14047C520 (RtlpCreateHashTable.c)
 */

char __fastcall RtlCreateHashTableEx(__int64 *a1, unsigned int a2, int a3, int a4)
{
  return RtlpCreateHashTable(a1, a2, a3, a4);
}
