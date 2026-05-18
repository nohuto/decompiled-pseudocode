/*
 * XREFs of sub_180013DD4 @ 0x180013DD4
 * Callers:
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 *     sub_180014170 @ 0x180014170 (sub_180014170.c)
 *     sub_1800142E0 @ 0x1800142E0 (sub_1800142E0.c)
 *     sub_1800143FC @ 0x1800143FC (sub_1800143FC.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013F6C @ 0x180013F6C (sub_180013F6C.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

_QWORD *__fastcall sub_180013DD4(__int64 a1, _QWORD *a2)
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
    sub_180013F6C(&v10, v6);
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
    sub_180013F6C(a2, i);
  }
  return a2;
}
