/*
 * XREFs of sub_18008FC10 @ 0x18008FC10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800175E4 @ 0x1800175E4 (sub_1800175E4.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_18004C268 @ 0x18004C268 (sub_18004C268.c)
 *     sub_18005B7F4 @ 0x18005B7F4 (sub_18005B7F4.c)
 *     sub_180076434 @ 0x180076434 (sub_180076434.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18008FC10(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // r15
  _DWORD *i; // rbx
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-31h]
  _BYTE v18[32]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v19[32]; // [rsp+70h] [rbp-9h] BYREF

  (*(void (__fastcall **)(__int64 *, _BYTE *))(*a1 + 184))(a1, v19);
  v6 = sub_1800407EC((__int64)(a1 + 1), &v15);
  v7 = sub_180016F54((__int64)v18, (__int64)v19);
  v8 = sub_18004C268(a2, &v16, v7, v6);
  v9 = a1 + 7;
  sub_180011010(a1 + 7, v8);
  if ( v17 )
    sub_18001050C(v17);
  v10 = *v9;
  v11 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a1 + 176))(a1, v18);
  sub_180076434(v10, v11);
  sub_1800175E4((void **)(*v9 + 528), (__int64)a3);
  (*(void (__fastcall **)(__int64 *))(*a1 + 136))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 160))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 168))(a1);
  v12 = (_DWORD *)a3[1];
  for ( i = (_DWORD *)*a3; i != v12; ++i )
  {
    *(_DWORD *)(*v9 + 552) = *i;
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 152))(a1, a2);
    *(_DWORD *)(*v9 + 552) = 0;
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 144))(a1, a2);
  sub_18005B7F4(*v9);
  return sub_180011A5C((__int64)v19);
}
