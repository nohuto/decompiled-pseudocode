/*
 * XREFs of sub_18000EB94 @ 0x18000EB94
 * Callers:
 *     sub_18000DE94 @ 0x18000DE94 (sub_18000DE94.c)
 * Callees:
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 */

_WORD *sub_18000EB94(_WORD *a1, _WORD *a2, __int64 a3, ...)
{
  unsigned __int64 v4; // rdx
  _WORD *v5; // rbx
  __int64 v6; // rax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = a2 - a1;
  v5 = a1;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFF )
      *a1 = 0;
    else
      sub_18000F730(a1, v4, a3, a3, (__int64 *)va);
  }
  if ( a2 != v5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    v5 += v6;
  }
  return v5;
}
