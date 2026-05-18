/*
 * XREFs of sub_180027FA8 @ 0x180027FA8
 * Callers:
 *     sub_180027E78 @ 0x180027E78 (sub_180027E78.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180027FA8(__int64 a1, __int64 a2, _QWORD *a3, char *a4)
{
  char result; // al

  *(_QWORD *)a2 = *a3;
  result = *a4;
  *(_BYTE *)(a2 + 8) = *a4;
  return result;
}
