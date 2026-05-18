/*
 * XREFs of sub_180011F00 @ 0x180011F00
 * Callers:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180013120 @ 0x180013120 (sub_180013120.c)
 *     sub_18005CFDC @ 0x18005CFDC (sub_18005CFDC.c)
 *     sub_180084830 @ 0x180084830 (sub_180084830.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800123DC @ 0x1800123DC (sub_1800123DC.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

_QWORD *__fastcall sub_180011F00(__int64 a1, _QWORD *a2)
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
    sub_1800123DC(&v10, v6);
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
    sub_1800123DC(a2, i);
  }
  return a2;
}
