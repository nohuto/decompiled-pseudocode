/*
 * XREFs of sub_180080DC8 @ 0x180080DC8
 * Callers:
 *     sub_180081720 @ 0x180081720 (sub_180081720.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_18008099C @ 0x18008099C (sub_18008099C.c)
 *     sub_1800814CC @ 0x1800814CC (sub_1800814CC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_180080DC8(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  _BYTE v13[40]; // [rsp+38h] [rbp-30h] BYREF

  sub_18008099C(*a4, &v11);
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
