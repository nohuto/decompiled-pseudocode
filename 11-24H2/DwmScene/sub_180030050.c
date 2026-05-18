/*
 * XREFs of sub_180030050 @ 0x180030050
 * Callers:
 *     sub_180052F40 @ 0x180052F40 (sub_180052F40.c)
 *     sub_180052F4C @ 0x180052F4C (sub_180052F4C.c)
 *     sub_1800D6C3E @ 0x1800D6C3E (sub_1800D6C3E.c)
 *     sub_1800D6D51 @ 0x1800D6D51 (sub_1800D6D51.c)
 *     sub_1800D6D6A @ 0x1800D6D6A (sub_1800D6D6A.c)
 *     sub_1800D6F41 @ 0x1800D6F41 (sub_1800D6F41.c)
 *     sub_1800D7054 @ 0x1800D7054 (sub_1800D7054.c)
 *     sub_1800D706D @ 0x1800D706D (sub_1800D706D.c)
 *     sub_1800D752D @ 0x1800D752D (sub_1800D752D.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180010BA8 @ 0x180010BA8 (sub_180010BA8.c)
 */

__int64 __fastcall sub_180030050(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180010BA8((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
