/*
 * XREFs of RtlCreateHashTable @ 0x18010FB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlCreateHashTable(__int64 *a1, int a2, int a3)
{
  return RtlpCreateHashTable(a1, 0x80u, a2, a3);
}
