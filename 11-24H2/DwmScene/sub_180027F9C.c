/*
 * XREFs of sub_180027F9C @ 0x180027F9C
 * Callers:
 *     sub_180027FB0 @ 0x180027FB0 (sub_180027FB0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180027F9C(__int64 a1, _QWORD *a2, char *a3)
{
  char result; // al

  *(_QWORD *)a1 = *a2;
  result = *a3;
  *(_BYTE *)(a1 + 8) = *a3;
  return result;
}
