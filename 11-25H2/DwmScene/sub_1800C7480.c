/*
 * XREFs of sub_1800C7480 @ 0x1800C7480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18007EC18 @ 0x18007EC18 (sub_18007EC18.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800C7678 @ 0x1800C7678 (sub_1800C7678.c)
 *     sub_1800C7978 @ 0x1800C7978 (sub_1800C7978.c)
 *     sub_1800C7B30 @ 0x1800C7B30 (sub_1800C7B30.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C7480(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // r12
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int128 *, _QWORD *); // rsi
  int v8; // eax
  __int64 (__fastcall *v9)(__int64, _BYTE *, _QWORD *); // rsi
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, __int128 *, _QWORD *); // rsi
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h]
  __int64 v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h]
  __int128 v20; // [rsp+60h] [rbp-A0h]
  int v21; // [rsp+70h] [rbp-90h]
  _BYTE v22[272]; // [rsp+80h] [rbp-80h] BYREF

  v17[1] = (__int64)a2;
  v4 = a1 + 12;
  if ( *a2 )
  {
    sub_180011010(a1 + 12, a2);
  }
  else
  {
    v5 = sub_18007EC18(&v15);
    sub_180011010(v4, v5);
    if ( v16 )
      sub_18001050C(v16);
  }
  sub_180011B04((__int64)(a1 + 9), &v15);
  sub_1800B9A04(v15, v17);
  v18 = 0LL;
  v19 = 0LL;
  *(_QWORD *)&v20 = 0LL;
  sub_1800C7B30(*v4, &v18);
  v6 = v17[0];
  v7 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *))(*(_QWORD *)v17[0] + 176LL);
  sub_18000E854(a1 + 14);
  v8 = v7(v6, &v18, a1 + 14);
  sub_1800BB198(v15, v8);
  memset(v22, 0, 0x108uLL);
  sub_1800C7678(*v4, v22);
  v9 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v6 + 160LL);
  sub_18000E854(a1 + 15);
  v10 = v9(v6, v22, a1 + 15);
  sub_1800BB198(v15, v10);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  sub_1800C7978(*v4, &v18);
  v11 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *))(*(_QWORD *)v6 + 168LL);
  sub_18000E854(a1 + 16);
  v12 = v11(v6, &v18, a1 + 16);
  sub_1800BB198(v15, v12);
  result = sub_18000E854(v17);
  if ( v16 )
    result = sub_18001050C(v16);
  v14 = a2[1];
  if ( v14 )
    return sub_18001050C(v14);
  return result;
}
