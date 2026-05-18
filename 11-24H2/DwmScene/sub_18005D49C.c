/*
 * XREFs of sub_18005D49C @ 0x18005D49C
 * Callers:
 *     sub_18005C6E4 @ 0x18005C6E4 (sub_18005C6E4.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18005DFF8 @ 0x18005DFF8 (sub_18005DFF8.c)
 */

_QWORD *__fastcall sub_18005D49C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r14
  _QWORD *i; // rbx
  _QWORD *v6; // rbp
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  _QWORD v12[3]; // [rsp+38h] [rbp-30h] BYREF

  sub_18003BE3C(a1);
  v4 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v4; i += 2 )
  {
    v6 = unknown_libname_81(v12, i);
    sub_18005DFF8(&v10, v6);
    v7 = v10 != 0;
    if ( v11 )
      sub_18001060C(v11);
    v8 = v6[1];
    if ( v8 )
      sub_18001060C(v8);
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
    sub_18005DFF8(a2, i);
  }
  return a2;
}
