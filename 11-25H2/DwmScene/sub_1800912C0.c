/*
 * XREFs of sub_1800912C0 @ 0x1800912C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800419A4 @ 0x1800419A4 (sub_1800419A4.c)
 *     sub_1800419C0 @ 0x1800419C0 (sub_1800419C0.c)
 *     sub_180049780 @ 0x180049780 (sub_180049780.c)
 *     sub_18004C4C4 @ 0x18004C4C4 (sub_18004C4C4.c)
 *     sub_180057334 @ 0x180057334 (sub_180057334.c)
 *     sub_180058790 @ 0x180058790 (sub_180058790.c)
 *     sub_18005BC94 @ 0x18005BC94 (sub_18005BC94.c)
 *     sub_18007C3F8 @ 0x18007C3F8 (sub_18007C3F8.c)
 *     sub_18007C5F8 @ 0x18007C5F8 (sub_18007C5F8.c)
 *     sub_18008CEF8 @ 0x18008CEF8 (sub_18008CEF8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800912C0(__int64 *a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 *v12; // rax
  char v13; // bl
  __int64 *v14; // r9
  __int64 *v15; // r13
  char v16; // r8
  _QWORD *v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, __int64, __int64, __int64 *, __int64 *); // rbx
  __int64 v25; // rax
  __int64 result; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+38h] [rbp-69h] BYREF
  __int64 v30; // [rsp+40h] [rbp-61h]
  __int64 v31; // [rsp+48h] [rbp-59h]
  _QWORD *v32; // [rsp+50h] [rbp-51h]
  __int64 v33; // [rsp+58h] [rbp-49h]
  __int64 v34; // [rsp+60h] [rbp-41h] BYREF
  __int64 v35; // [rsp+68h] [rbp-39h]
  __int64 v36; // [rsp+70h] [rbp-31h] BYREF
  __int64 v37; // [rsp+78h] [rbp-29h]
  __int64 v38[4]; // [rsp+80h] [rbp-21h] BYREF

  v31 = a3;
  v32 = a4;
  v33 = a5;
  v8 = a1[3];
  v9 = sub_180011C64(*a2 + 8LL, &v34);
  sub_180057334(v8, &v36, v9);
  if ( v35 )
    sub_18001050C(v35);
  v10 = unknown_libname_81(&v29, a4);
  *(_OWORD *)v38 = *(_OWORD *)a5;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  sub_18008CEF8(v11, (__int64)a2, v38, (__int64)v10, 0);
  *(_OWORD *)v38 = 0LL;
  sub_180058790(a1[3], v38);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  v12 = (__int64 *)sub_18005BC94(a1[38], &v29);
  v13 = sub_18004C4C4(*v12, (__int64)(a1 + 42));
  if ( v30 )
    sub_18001050C(v30);
  sub_1800419C0(a1[34], -1LL, 0);
  sub_1800419A4(*v14, v13);
  v15 = a1 + 9;
  *(_BYTE *)(a1[9] + 72) = v16;
  v18 = unknown_libname_81(&v29, v17);
  sub_180049780(v19, v18);
  v20 = a1[36];
  *(_OWORD *)v38 = *(_OWORD *)a4;
  *a4 = 0LL;
  a4[1] = 0LL;
  sub_18007C3F8(v20, (__int64)&unk_1801C7F28, v38);
  v21 = unknown_libname_81(&v29, a1 + 40);
  sub_18007C5F8(v22, (__int64)&unk_1801C7F28, v21);
  v23 = a1[3];
  v24 = *(void (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64 *))(*(_QWORD *)v23 + 208LL);
  std::string::string(v38, "Blurring");
  v25 = sub_180011C64(*a2 + 8LL, &v29);
  v24(v23, v25, v31, a1 + 9, v38);
  if ( v30 )
    sub_18001050C(v30);
  sub_180011A5C((__int64)v38);
  *(_OWORD *)v38 = 0LL;
  sub_18007C3F8(a1[36], (__int64)&unk_1801C7F28, v38);
  *(_OWORD *)v38 = 0LL;
  sub_18007C5F8(a1[36], (__int64)&unk_1801C7F28, v38);
  result = *v15;
  *(_BYTE *)(*v15 + 72) = 0;
  if ( v37 )
    result = sub_18001050C(v37);
  v27 = a4[1];
  if ( v27 )
    result = sub_18001050C(v27);
  v28 = *(_QWORD *)(a5 + 8);
  if ( v28 )
    return sub_18001050C(v28);
  return result;
}
