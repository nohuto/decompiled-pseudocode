/*
 * XREFs of sub_180091560 @ 0x180091560
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_1800419C0 @ 0x1800419C0 (sub_1800419C0.c)
 *     sub_180049780 @ 0x180049780 (sub_180049780.c)
 *     sub_180057334 @ 0x180057334 (sub_180057334.c)
 *     sub_180058790 @ 0x180058790 (sub_180058790.c)
 *     sub_18007C3F8 @ 0x18007C3F8 (sub_18007C3F8.c)
 *     sub_18007C5F8 @ 0x18007C5F8 (sub_18007C5F8.c)
 *     sub_18008CEF8 @ 0x18008CEF8 (sub_18008CEF8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180091560(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  _QWORD *v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, __int64, __int64, __int64 *, _QWORD *); // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int128 v26; // [rsp+30h] [rbp-89h] BYREF
  __int64 v27; // [rsp+40h] [rbp-79h] BYREF
  __int64 v28; // [rsp+48h] [rbp-71h]
  __int64 v29; // [rsp+58h] [rbp-61h]
  _QWORD *v30; // [rsp+60h] [rbp-59h]
  _QWORD *v31; // [rsp+68h] [rbp-51h]
  __int64 v32; // [rsp+70h] [rbp-49h] BYREF
  __int64 v33; // [rsp+78h] [rbp-41h]
  __int64 v34; // [rsp+80h] [rbp-39h] BYREF
  __int64 v35; // [rsp+88h] [rbp-31h]
  _QWORD v36[4]; // [rsp+90h] [rbp-29h] BYREF

  v29 = a4;
  v30 = a5;
  v31 = a6;
  v9 = a1[3];
  v10 = sub_180011C64(*a3 + 8LL, &v32);
  sub_180057334(v9, &v34, v10);
  if ( v33 )
    sub_18001050C(v33);
  unknown_libname_81(v36, a5);
  v11 = unknown_libname_81(&v27, a6);
  sub_18008CEF8(v13, (__int64)a3, v11, v12, 0xFFFFFFFF);
  v26 = 0LL;
  sub_180058790(a1[3], (__int64 *)&v26);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  sub_1800419C0(a1[34], -1LL, 0);
  *(_BYTE *)(a1[9] + 72) = 1;
  v15 = unknown_libname_81(&v27, v14);
  sub_180049780(v16, v15);
  v17 = a1[36];
  v26 = *(_OWORD *)a5;
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_18007C3F8(v17, (__int64)&unk_1801C7F28, &v26);
  v18 = unknown_libname_81(&v27, a1 + 40);
  sub_18007C5F8(v19, (__int64)&unk_1801C7F28, v18);
  v20 = a1[3];
  v21 = *(void (__fastcall **)(__int64, __int64, __int64, __int64 *, _QWORD *))(*(_QWORD *)v20 + 208LL);
  std::string::string(v36, "Downsampling");
  v22 = sub_180011C64(*a3 + 8LL, &v27);
  v21(v20, v22, v29, a1 + 9, v36);
  if ( v28 )
    sub_18001050C(v28);
  sub_180011A5C((__int64)v36);
  *(_BYTE *)(a1[9] + 72) = 0;
  v26 = 0LL;
  sub_18007C3F8(a1[36], (__int64)&unk_1801C7F28, &v26);
  v26 = 0LL;
  sub_18007C5F8(a1[36], (__int64)&unk_1801C7F28, &v26);
  sub_1800254DC(*a6, a2);
  if ( v35 )
    sub_18001050C(v35);
  v23 = a5[1];
  if ( v23 )
    sub_18001050C(v23);
  v24 = a6[1];
  if ( v24 )
    sub_18001050C(v24);
  return a2;
}
