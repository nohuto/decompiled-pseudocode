/*
 * XREFs of sub_140006448 @ 0x140006448
 * Callers:
 *     sub_140044C20 @ 0x140044C20 (sub_140044C20.c)
 *     sub_14004B714 @ 0x14004B714 (sub_14004B714.c)
 *     sub_14004B874 @ 0x14004B874 (sub_14004B874.c)
 *     sub_14004BA80 @ 0x14004BA80 (sub_14004BA80.c)
 * Callees:
 *     <none>
 */

__int64 sub_140006448(wchar_t *a1, __int64 a2, const wchar_t *a3, ...)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      v4 = -2147483643;
    }
    else if ( v6 != v5 )
    {
      return v4;
    }
    a1[v5] = 0;
  }
  else
  {
    v4 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  return v4;
}
