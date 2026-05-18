/*
 * XREFs of sub_18008CD40 @ 0x18008CD40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_180057334 @ 0x180057334 (sub_180057334.c)
 *     sub_180096C0C @ 0x180096C0C (sub_180096C0C.c)
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_18008CD40(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 *a4, __int64 a5)
{
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-91h] BYREF
  __int64 v20; // [rsp+28h] [rbp-89h]
  __int64 v21; // [rsp+30h] [rbp-81h] BYREF
  __int64 v22; // [rsp+38h] [rbp-79h]
  _BYTE v23[8]; // [rsp+40h] [rbp-71h] BYREF
  volatile signed __int32 *v24; // [rsp+48h] [rbp-69h]
  __int64 v25; // [rsp+50h] [rbp-61h] BYREF
  _BYTE v26[16]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v27[3]; // [rsp+70h] [rbp-41h] BYREF
  _BYTE v28[32]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v29[4]; // [rsp+A8h] [rbp-9h] BYREF

  v9 = sub_18001B4B0(v29, (__int64)(a1 + 3), (__int64)&unk_180105F88);
  sub_18001D620((__int64)v28, (__int64)v9, a5);
  sub_180011A5C((__int64)v29);
  sub_180057334((__int64)a1, &v21, (__int64)a2);
  sub_1800287EC(*a2 + 24LL, v10);
  sub_180096C0C(v26, &v21, v28);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 200LL))(*a3, v23);
  sub_18002F2B4(v27, v11);
  if ( v24 )
    sub_180010544(v24);
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD *))(*a1 + 192LL))(a1, a2, a3);
  v12 = sub_1800407EC((__int64)(a1 + 1), &v25);
  v13 = *v12;
  v14 = v12[1];
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  v19 = v13;
  v15 = v12[1];
  v20 = v15;
  if ( v15 )
    sub_18001050C(v15);
  v16 = a1[14];
  v17 = a1[13];
  if ( v17 != v16 )
  {
    do
    {
      sub_180049230(*a4, &v21, 0LL, (__int64)&v19);
      v17 += 48LL;
    }
    while ( v17 != v16 );
    v15 = v20;
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 200LL))(a1);
  if ( v15 )
    sub_18001050C(v15);
  sub_18002FFC8((__int64)v27);
  sub_180096CBC(v26);
  if ( v22 )
    sub_18001050C(v22);
  return sub_180011A5C((__int64)v28);
}
