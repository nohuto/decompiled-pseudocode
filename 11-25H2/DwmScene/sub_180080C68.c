/*
 * XREFs of sub_180080C68 @ 0x180080C68
 * Callers:
 *     sub_1800815C0 @ 0x1800815C0 (sub_1800815C0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18008083C @ 0x18008083C (sub_18008083C.c)
 *     sub_18008136C @ 0x18008136C (sub_18008136C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_180080C68(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  _BYTE v13[40]; // [rsp+38h] [rbp-30h] BYREF

  sub_18008083C(*a4, &v11);
  v7 = v11;
  v8 = sub_18008136C(a1, v13);
  sub_180027C24(v7, v8);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, a3) )
  {
    v11 = 0LL;
    v9 = v12;
    v12 = 0LL;
    if ( v9 )
      sub_18001050C(v9);
  }
  *a2 = v11;
  a2[1] = v12;
  return a2;
}
