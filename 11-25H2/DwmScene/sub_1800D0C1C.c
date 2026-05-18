/*
 * XREFs of sub_1800D0C1C @ 0x1800D0C1C
 * Callers:
 *     sub_1800D0F6C @ 0x1800D0F6C (sub_1800D0F6C.c)
 * Callees:
 *     sub_1800CF278 @ 0x1800CF278 (sub_1800CF278.c)
 */

__int64 __fastcall sub_1800D0C1C(_QWORD *a1)
{
  char *v1; // rdx
  __int64 result; // rax

  v1 = (char *)a1[2];
  a1[2] = *(_QWORD *)v1;
  sub_1800CF278((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
