/*
 * XREFs of sub_180095DB0 @ 0x180095DB0
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x180095A0C (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180027E9C @ 0x180027E9C (sub_180027E9C.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180095DB0(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *i; // rdi
  __int64 v4; // rcx

  sub_18002811C((__int64)a1);
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
  sub_180027E9C(a1 + 6);
  for ( i = a1 + 8; i != a1 + 18; i += 2 )
  {
    *i = 0LL;
    v4 = i[1];
    i[1] = 0LL;
    if ( v4 )
      sub_18001060C(v4);
  }
  if ( a1 + 18 <= a1 + 23 )
    memset(a1 + 18, 0, 8LL * (a1 + 23 >= a1 + 18 ? 5 : 0));
  return sub_1800282BC((__int64)a1);
}
