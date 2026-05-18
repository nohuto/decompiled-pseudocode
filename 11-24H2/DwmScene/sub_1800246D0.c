/*
 * XREFs of sub_1800246D0 @ 0x1800246D0
 * Callers:
 *     sub_1800D642D @ 0x1800D642D (sub_1800D642D.c)
 *     sub_1800D6725 @ 0x1800D6725 (sub_1800D6725.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180023944 @ 0x180023944 (sub_180023944.c)
 */

__int64 __fastcall sub_1800246D0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180023944((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
