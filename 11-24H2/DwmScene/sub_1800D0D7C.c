/*
 * XREFs of sub_1800D0D7C @ 0x1800D0D7C
 * Callers:
 *     sub_1800D10CC @ 0x1800D10CC (sub_1800D10CC.c)
 * Callees:
 *     sub_1800CF3D8 @ 0x1800CF3D8 (sub_1800CF3D8.c)
 */

__int64 __fastcall sub_1800D0D7C(_QWORD *a1)
{
  char *v1; // rdx
  __int64 result; // rax

  v1 = (char *)a1[2];
  a1[2] = *(_QWORD *)v1;
  sub_1800CF3D8((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
