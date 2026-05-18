/*
 * XREFs of sub_180015F50 @ 0x180015F50
 * Callers:
 *     sub_18001A940 @ 0x18001A940 (sub_18001A940.c)
 *     sub_18005C7C4 @ 0x18005C7C4 (sub_18005C7C4.c)
 *     sub_18005CFAC @ 0x18005CFAC (sub_18005CFAC.c)
 *     sub_180075810 @ 0x180075810 (sub_180075810.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016B44 @ 0x180016B44 (sub_180016B44.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

_QWORD *__fastcall sub_180015F50(__int64 a1, _QWORD *a2)
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
    sub_180016B44(&v10, v6);
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
    sub_180016B44(a2, i);
  }
  return a2;
}
