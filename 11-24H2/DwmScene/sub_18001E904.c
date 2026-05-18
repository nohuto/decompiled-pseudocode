/*
 * XREFs of sub_18001E904 @ 0x18001E904
 * Callers:
 *     sub_18001E220 @ 0x18001E220 (sub_18001E220.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001DC00 @ 0x18001DC00 (sub_18001DC00.c)
 */

__int64 *__fastcall sub_18001E904(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 *result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 *v10; // r10
  __int64 v11; // r8
  _WORD *v12; // rdi
  __int64 i; // rcx

  v2 = a1[2];
  if ( a2 > v2 )
  {
    v7 = a2 - v2;
    if ( v7 > a1[3] - v2 )
    {
      return sub_18001DC00(a1, v7, 0LL, v7);
    }
    else
    {
      a1[2] = a2;
      result = (__int64 *)sub_1800131AC((__int64)a1);
      v10 = result;
      v12 = (_WORD *)result + v11;
      if ( v8 )
      {
        result = 0LL;
        for ( i = v8; i; --i )
          *v12++ = 0;
      }
      *((_WORD *)v10 + v9) = 0;
    }
  }
  else
  {
    result = (__int64 *)sub_1800131AC((__int64)a1);
    a1[2] = v6;
    *((_WORD *)result + v6) = 0;
  }
  return result;
}
