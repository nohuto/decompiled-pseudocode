/*
 * XREFs of sub_18000F688 @ 0x18000F688
 * Callers:
 *     sub_18000D7F4 @ 0x18000D7F4 (sub_18000D7F4.c)
 * Callees:
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 */

__int64 sub_18000F688(_WORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_18000F730(a1, a2, a3, a3, (__int64 *)va);
  result = 2147942487LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
