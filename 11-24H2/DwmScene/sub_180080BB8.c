/*
 * XREFs of sub_180080BB8 @ 0x180080BB8
 * Callers:
 *     sub_1800816C0 @ 0x1800816C0 (sub_1800816C0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180080558 @ 0x180080558 (sub_180080558.c)
 *     sub_1800814CC @ 0x1800814CC (sub_1800814CC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_180080BB8(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  _BYTE v13[40]; // [rsp+38h] [rbp-30h] BYREF

  sub_180080558(*a4, &v11);
  v7 = v11;
  v8 = sub_1800814CC(a1, v13);
  sub_180027D84(v7, v8);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, a3) )
  {
    v11 = 0LL;
    v9 = v12;
    v12 = 0LL;
    if ( v9 )
      sub_18001060C(v9);
  }
  *a2 = v11;
  a2[1] = v12;
  return a2;
}
