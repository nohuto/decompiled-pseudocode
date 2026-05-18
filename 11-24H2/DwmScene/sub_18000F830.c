/*
 * XREFs of sub_18000F830 @ 0x18000F830
 * Callers:
 *     sub_18000EC94 @ 0x18000EC94 (sub_18000EC94.c)
 *     sub_18000F788 @ 0x18000F788 (sub_18000F788.c)
 * Callees:
 *     vsnprintf @ 0x18000C4F4 (vsnprintf.c)
 */

__int64 __fastcall sub_18000F830(char *a1, __int64 a2, __int64 a3, const char *a4, va_list ArgList)
{
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = vsnprintf(a1, a2 - 1, a4, ArgList);
  if ( v8 < 0 || v8 > v5 )
  {
    *(_WORD *)&a1[2 * v5] = 0;
    return (unsigned int)-2147024774;
  }
  else if ( v8 == v5 )
  {
    *(_WORD *)&a1[2 * v5] = 0;
  }
  return v7;
}
