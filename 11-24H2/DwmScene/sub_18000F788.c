/*
 * XREFs of sub_18000F788 @ 0x18000F788
 * Callers:
 *     sub_18000D8D4 @ 0x18000D8D4 (sub_18000D8D4.c)
 * Callees:
 *     sub_18000F830 @ 0x18000F830 (sub_18000F830.c)
 */

__int64 sub_18000F788(_WORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_18000F830(a1, a2, a3, a3, (__int64 *)va);
  result = 2147942487LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
