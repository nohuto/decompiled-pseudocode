/*
 * XREFs of sub_18008FD70 @ 0x18008FD70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800176A4 @ 0x1800176A4 (sub_1800176A4.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 *     sub_18005B954 @ 0x18005B954 (sub_18005B954.c)
 *     sub_180076594 @ 0x180076594 (sub_180076594.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18008FD70(__int64 *a1, __int64 a2, _QWORD *a3)
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
  v6 = sub_18004094C((__int64)(a1 + 1), &v15);
  v7 = sub_180017054((__int64)v18, (__int64)v19);
  v8 = sub_18004C3C8(a2, &v16, v7, v6);
  v9 = a1 + 7;
  sub_180011110(a1 + 7, v8);
  if ( v17 )
    sub_18001060C(v17);
  v10 = *v9;
  v11 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a1 + 176))(a1, v18);
  sub_180076594(v10, v11);
  sub_1800176A4((void **)(*v9 + 528), (__int64)a3);
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
  sub_18005B954(*v9);
  return sub_180011B5C((__int64)v19);
}
