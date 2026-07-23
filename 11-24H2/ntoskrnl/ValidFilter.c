/*
 * XREFs of ValidFilter @ 0x1409F2A20
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x1409F27A0 (PiDqQueryValidateQueryData.c)
 * Callees:
 *     ValidFilterExpression @ 0x1404818E0 (ValidFilterExpression.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FilterEvalStrict @ 0x1408CA150 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1408D1A38 (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall ValidFilter(unsigned int a1, _DWORD *a2)
{
  int v4; // eax
  unsigned int i; // ebx
  int v7; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v9[3]; // [rsp+48h] [rbp-38h] BYREF

  v7 = 0;
  v8[0] = 1LL;
  v8[1] = v9;
  memset(v9, 0, sizeof(v9));
  if ( !a1 )
    return 0LL;
  v4 = (*a2 & 0xFF00000) != 0
     ? FilterEvalStrict((int)GetPropertyFromPropArray, (__int64)v8, a1, (__int64)a2, &v7)
     : FilterEvalImpliedAnd(GetPropertyFromPropArray, (__int64)v8, a1, (__int64)a2, &v7);
  if ( v4 == -1073741811 )
    return 0LL;
  for ( i = 0; i < a1; ++i )
  {
    if ( !ValidFilterExpression((__int64)&a2[14 * i]) )
      return 0LL;
  }
  return 1LL;
}
