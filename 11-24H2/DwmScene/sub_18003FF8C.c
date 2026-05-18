/*
 * XREFs of sub_18003FF8C @ 0x18003FF8C
 * Callers:
 *     sub_1800402AC @ 0x1800402AC (sub_1800402AC.c)
 * Callees:
 *     sub_18003D068 @ 0x18003D068 (sub_18003D068.c)
 */

__int64 __fastcall sub_18003FF8C(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_18003D068((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
