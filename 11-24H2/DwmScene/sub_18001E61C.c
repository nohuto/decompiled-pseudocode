/*
 * XREFs of sub_18001E61C @ 0x18001E61C
 * Callers:
 *     sub_18001E0FC @ 0x18001E0FC (sub_18001E0FC.c)
 *     sub_180055328 @ 0x180055328 (sub_180055328.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_1800D0520 @ 0x1800D0520 (sub_1800D0520.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001D8FC @ 0x18001D8FC (sub_18001D8FC.c)
 */

__int64 __fastcall sub_18001E61C(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18001D8FC((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
