/*
 * XREFs of sub_18002FEF0 @ 0x18002FEF0
 * Callers:
 *     sub_180052DE0 @ 0x180052DE0 (sub_180052DE0.c)
 *     sub_180052DEC @ 0x180052DEC (sub_180052DEC.c)
 *     sub_1800D6ADE @ 0x1800D6ADE (sub_1800D6ADE.c)
 *     sub_1800D6BF1 @ 0x1800D6BF1 (sub_1800D6BF1.c)
 *     sub_1800D6C0A @ 0x1800D6C0A (sub_1800D6C0A.c)
 *     sub_1800D6DE1 @ 0x1800D6DE1 (sub_1800D6DE1.c)
 *     sub_1800D6EF4 @ 0x1800D6EF4 (sub_1800D6EF4.c)
 *     sub_1800D6F0D @ 0x1800D6F0D (sub_1800D6F0D.c)
 *     sub_1800D73CD @ 0x1800D73CD (sub_1800D73CD.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 */

__int64 __fastcall sub_18002FEF0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180010AA8((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
