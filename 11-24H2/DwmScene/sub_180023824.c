/*
 * XREFs of sub_180023824 @ 0x180023824
 * Callers:
 *     sub_18002BB54 @ 0x18002BB54 (sub_18002BB54.c)
 *     sub_1800653C4 @ 0x1800653C4 (sub_1800653C4.c)
 *     sub_180068130 @ 0x180068130 (sub_180068130.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180023E04 @ 0x180023E04 (sub_180023E04.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

_QWORD *__fastcall sub_180023824(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r14
  _QWORD *i; // rbx
  _QWORD *v6; // rbp
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  _QWORD v12[3]; // [rsp+38h] [rbp-30h] BYREF

  sub_18003BE3C();
  v4 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v4; i += 2 )
  {
    v6 = unknown_libname_81(v12, i);
    sub_180023E04(&v10, v6);
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
    sub_180023E04(a2, i);
  }
  return a2;
}
