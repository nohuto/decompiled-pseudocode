/*
 * XREFs of sub_180095C50 @ 0x180095C50
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x1800958AC (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180027D3C @ 0x180027D3C (sub_180027D3C.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180095C50(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *i; // rdi
  __int64 v4; // rcx

  sub_180027FBC((__int64)a1);
  v2 = a1[5];
  if ( v2 )
  {
    while ( 1 )
    {
      a1[5] = --v2;
      if ( !v2 )
        break;
      ++a1[4];
    }
    a1[4] = 0LL;
  }
  sub_180027D3C(a1 + 6);
  for ( i = a1 + 8; i != a1 + 18; i += 2 )
  {
    *i = 0LL;
    v4 = i[1];
    i[1] = 0LL;
    if ( v4 )
      sub_18001050C(v4);
  }
  if ( a1 + 18 <= a1 + 23 )
    memset(a1 + 18, 0, 8LL * (a1 + 23 >= a1 + 18 ? 5 : 0));
  return sub_18002815C((__int64)a1);
}
