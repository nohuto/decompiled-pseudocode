/*
 * XREFs of sub_1800CF1D0 @ 0x1800CF1D0
 * Callers:
 *     sub_1800CF1D0 @ 0x1800CF1D0 (sub_1800CF1D0.c)
 *     sub_1800CFD68 @ 0x1800CFD68 (sub_1800CFD68.c)
 *     sub_1800D0150 @ 0x1800D0150 (sub_1800D0150.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800CF1D0 @ 0x1800CF1D0 (sub_1800CF1D0.c)
 *     sub_1800CFE0C @ 0x1800CFE0C (sub_1800CFE0C.c)
 */

__int64 __fastcall sub_1800CF1D0(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010134(v6, 0xC0uLL) )
  {
    sub_1800CF1D0(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_1800CFE0C(v6 + 32);
  }
  return result;
}
