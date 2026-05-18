/*
 * XREFs of sub_1800973E4 @ 0x1800973E4
 * Callers:
 *     sub_1800959D4 @ 0x1800959D4 (sub_1800959D4.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180025288 @ 0x180025288 (sub_180025288.c)
 *     sub_18002909C @ 0x18002909C (sub_18002909C.c)
 *     sub_1800296B4 @ 0x1800296B4 (sub_1800296B4.c)
 *     sub_1800966C0 @ 0x1800966C0 (sub_1800966C0.c)
 *     sub_18009671C @ 0x18009671C (sub_18009671C.c)
 *     sub_18009686C @ 0x18009686C (sub_18009686C.c)
 *     sub_1800968A4 @ 0x1800968A4 (sub_1800968A4.c)
 *     sub_18009690C @ 0x18009690C (sub_18009690C.c)
 *     sub_180097354 @ 0x180097354 (sub_180097354.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800973E4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v6; // rax
  _QWORD *v7; // rax
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *result; // rax
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+28h] [rbp-89h] BYREF
  _OWORD v17[2]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v18; // [rsp+58h] [rbp-59h]
  __int64 v19; // [rsp+60h] [rbp-51h]
  __int64 v20; // [rsp+68h] [rbp-49h]
  __int64 v21; // [rsp+70h] [rbp-41h]
  __int64 v22; // [rsp+78h] [rbp-39h]
  __int64 v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]
  __int64 v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]
  char v29; // [rsp+B0h] [rbp-1h]
  int v30; // [rsp+B1h] [rbp+0h]
  __int16 v31; // [rsp+B5h] [rbp+4h]
  char v32; // [rsp+B7h] [rbp+6h]
  __int64 v33; // [rsp+B8h] [rbp+7h]
  void *v34[5]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v35; // [rsp+E8h] [rbp+37h] BYREF

  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0LL;
  sub_1800296B4((__int64 *)v34);
  sub_180097354(a1 + 928, (__int64)v17);
  sub_18002909C(v34, (__int64)v34);
  *(_QWORD *)(a1 + 1056) = a2;
  v6 = (__int64 *)sub_180025288(*(_QWORD *)(a1 + 912), (__int64)v17, 0);
  sub_18009671C(a1, v6);
  sub_1800966C0(v17);
  if ( sub_18009686C(a1) )
  {
    v7 = unknown_libname_81(v16, a3);
    sub_1800968A4(a1, v7);
  }
  v8 = (__int64 *)sub_180025288(*(_QWORD *)(a1 + 912), (__int64)v17, 2u);
  sub_18009671C(a1 + 704, v8);
  sub_1800966C0(v17);
  if ( sub_18009686C(a1 + 704) )
  {
    v9 = unknown_libname_81(v16, a3);
    sub_1800968A4(a1 + 704, v9);
  }
  v10 = (__int64 *)sub_180025288(*(_QWORD *)(a1 + 912), (__int64)v17, 1u);
  sub_18009671C(a1 + 176, v10);
  sub_1800966C0(v17);
  if ( sub_18009686C(a1 + 176) )
  {
    unknown_libname_81(v16, a3);
    v12 = unknown_libname_81(&v35, v11);
    sub_18009690C(a1 + 176, v12, v13);
  }
  *(_DWORD *)(a1 + 920) = 1;
  result = sub_180011010((_QWORD *)(a1 + 896), a3);
  v15 = a3[1];
  if ( v15 )
    return (_QWORD *)sub_18001050C(v15);
  return result;
}
