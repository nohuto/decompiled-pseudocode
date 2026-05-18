/*
 * XREFs of sub_180013D0C @ 0x180013D0C
 * Callers:
 *     sub_180013ACC @ 0x180013ACC (sub_180013ACC.c)
 *     sub_1800143FC @ 0x1800143FC (sub_1800143FC.c)
 *     sub_180014510 @ 0x180014510 (sub_180014510.c)
 *     sub_18003FC20 @ 0x18003FC20 (sub_18003FC20.c)
 *     sub_180048B78 @ 0x180048B78 (sub_180048B78.c)
 *     sub_180049670 @ 0x180049670 (sub_180049670.c)
 *     sub_1800657E0 @ 0x1800657E0 (sub_1800657E0.c)
 *     sub_1800659B4 @ 0x1800659B4 (sub_1800659B4.c)
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

_QWORD *__fastcall sub_180013D0C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r14
  _QWORD *i; // rbx
  _QWORD *v6; // rbp
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  _QWORD v12[3]; // [rsp+38h] [rbp-30h] BYREF

  sub_18003BCDC();
  v4 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v4; i += 2 )
  {
    v6 = unknown_libname_81(v12, i);
    sub_180013F04(&v10, v6);
    v7 = v10 != 0;
    if ( v11 )
      sub_18001050C(v11);
    v8 = v6[1];
    if ( v8 )
      sub_18001050C(v8);
    if ( v7 )
      break;
  }
  if ( i == *(_QWORD **)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180013F04(a2, i);
  }
  return a2;
}
