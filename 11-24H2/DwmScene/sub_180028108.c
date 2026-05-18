/*
 * XREFs of sub_180028108 @ 0x180028108
 * Callers:
 *     sub_180027FD8 @ 0x180027FD8 (sub_180027FD8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180028108(__int64 a1, __int64 a2, _QWORD *a3, char *a4)
{
  char result; // al

  *(_QWORD *)a2 = *a3;
  result = *a4;
  *(_BYTE *)(a2 + 8) = *a4;
  return result;
}
