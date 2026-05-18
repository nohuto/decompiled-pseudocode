/*
 * XREFs of sub_180027E3C @ 0x180027E3C
 * Callers:
 *     sub_180027E50 @ 0x180027E50 (sub_180027E50.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180027E3C(__int64 a1, _QWORD *a2, char *a3)
{
  char result; // al

  *(_QWORD *)a1 = *a2;
  result = *a3;
  *(_BYTE *)(a1 + 8) = *a3;
  return result;
}
