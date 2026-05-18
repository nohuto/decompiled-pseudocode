/*
 * XREFs of sub_1800C75E0 @ 0x1800C75E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18007ED78 @ 0x18007ED78 (sub_18007ED78.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800C77D8 @ 0x1800C77D8 (sub_1800C77D8.c)
 *     sub_1800C7AD8 @ 0x1800C7AD8 (sub_1800C7AD8.c)
 *     sub_1800C7C90 @ 0x1800C7C90 (sub_1800C7C90.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C75E0(_QWORD *a1, __int64 *a2)
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
    sub_180011110(a1 + 12, a2);
  }
  else
  {
    v5 = sub_18007ED78(&v15);
    sub_180011110(v4, v5);
    if ( v16 )
      sub_18001060C(v16);
  }
  sub_180011C04((__int64)(a1 + 9), &v15);
  sub_1800B9B64(v15, v17);
  v18 = 0LL;
  v19 = 0LL;
  *(_QWORD *)&v20 = 0LL;
  sub_1800C7C90(*v4, &v18);
  v6 = v17[0];
  v7 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *))(*(_QWORD *)v17[0] + 176LL);
  sub_18000E954(a1 + 14);
  v8 = v7(v6, &v18, a1 + 14);
  sub_1800BB2F8(v15, v8);
  memset(v22, 0, 0x108uLL);
  sub_1800C77D8(*v4, v22);
  v9 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v6 + 160LL);
  sub_18000E954(a1 + 15);
  v10 = v9(v6, v22, a1 + 15);
  sub_1800BB2F8(v15, v10);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  sub_1800C7AD8(*v4, &v18);
  v11 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *))(*(_QWORD *)v6 + 168LL);
  sub_18000E954(a1 + 16);
  v12 = v11(v6, &v18, a1 + 16);
  sub_1800BB2F8(v15, v12);
  result = sub_18000E954(v17);
  if ( v16 )
    result = sub_18001060C(v16);
  v14 = a2[1];
  if ( v14 )
    return sub_18001060C(v14);
  return result;
}
