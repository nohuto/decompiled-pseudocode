/*
 * XREFs of sub_18005D33C @ 0x18005D33C
 * Callers:
 *     sub_18005C584 @ 0x18005C584 (sub_18005C584.c)
 *     sub_18005CC1C @ 0x18005CC1C (sub_18005CC1C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18005DE98 @ 0x18005DE98 (sub_18005DE98.c)
 */

_QWORD *__fastcall sub_18005D33C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r14
  _QWORD *i; // rbx
  _QWORD *v6; // rbp
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  _QWORD v12[3]; // [rsp+38h] [rbp-30h] BYREF

  sub_18003BCDC(a1);
  v4 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v4; i += 2 )
  {
    v6 = unknown_libname_81(v12, i);
    sub_18005DE98(&v10, v6);
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
    sub_18005DE98(a2, i);
  }
  return a2;
}
