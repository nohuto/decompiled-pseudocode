/*
 * XREFs of sub_1800916C0 @ 0x1800916C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002563C @ 0x18002563C (sub_18002563C.c)
 *     sub_180041B20 @ 0x180041B20 (sub_180041B20.c)
 *     sub_1800498E0 @ 0x1800498E0 (sub_1800498E0.c)
 *     sub_180057494 @ 0x180057494 (sub_180057494.c)
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_18007C558 @ 0x18007C558 (sub_18007C558.c)
 *     sub_18007C758 @ 0x18007C758 (sub_18007C758.c)
 *     sub_18008D058 @ 0x18008D058 (sub_18008D058.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800916C0(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
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
  v10 = sub_180011D64(*a3 + 8LL, &v32);
  sub_180057494(v9, &v34, v10);
  if ( v33 )
    sub_18001060C(v33);
  unknown_libname_81(v36, a5);
  v11 = unknown_libname_81(&v27, a6);
  sub_18008D058(v13, (__int64)a3, v11, v12, 0xFFFFFFFF);
  v26 = 0LL;
  sub_1800588F0(a1[3], (__int64 *)&v26);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  sub_180041B20(a1[34], -1LL, 0);
  *(_BYTE *)(a1[9] + 72) = 1;
  v15 = unknown_libname_81(&v27, v14);
  sub_1800498E0(v16, v15);
  v17 = a1[36];
  v26 = *(_OWORD *)a5;
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_18007C558(v17, (__int64)&unk_1801C8F38, &v26);
  v18 = unknown_libname_81(&v27, a1 + 40);
  sub_18007C758(v19, (__int64)&unk_1801C8F38, v18);
  v20 = a1[3];
  v21 = *(void (__fastcall **)(__int64, __int64, __int64, __int64 *, _QWORD *))(*(_QWORD *)v20 + 208LL);
  std::string::string(v36, "Downsampling");
  v22 = sub_180011D64(*a3 + 8LL, &v27);
  v21(v20, v22, v29, a1 + 9, v36);
  if ( v28 )
    sub_18001060C(v28);
  sub_180011B5C((__int64)v36);
  *(_BYTE *)(a1[9] + 72) = 0;
  v26 = 0LL;
  sub_18007C558(a1[36], (__int64)&unk_1801C8F38, &v26);
  v26 = 0LL;
  sub_18007C758(a1[36], (__int64)&unk_1801C8F38, &v26);
  sub_18002563C(*a6, a2);
  if ( v35 )
    sub_18001060C(v35);
  v23 = a5[1];
  if ( v23 )
    sub_18001060C(v23);
  v24 = a6[1];
  if ( v24 )
    sub_18001060C(v24);
  return a2;
}
