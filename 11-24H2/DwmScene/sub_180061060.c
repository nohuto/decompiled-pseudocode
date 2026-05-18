/*
 * XREFs of sub_180061060 @ 0x180061060
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_180013CEC @ 0x180013CEC (sub_180013CEC.c)
 *     sub_1800143A4 @ 0x1800143A4 (sub_1800143A4.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18003AFD4 @ 0x18003AFD4 (sub_18003AFD4.c)
 *     sub_18003DD58 @ 0x18003DD58 (sub_18003DD58.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_180041A88 @ 0x180041A88 (sub_180041A88.c)
 *     sub_180041B48 @ 0x180041B48 (sub_180041B48.c)
 *     sub_1800498E0 @ 0x1800498E0 (sub_1800498E0.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18005B2DC @ 0x18005B2DC (sub_18005B2DC.c)
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 *     sub_18007C298 @ 0x18007C298 (sub_18007C298.c)
 *     sub_180082EC0 @ 0x180082EC0 (sub_180082EC0.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180061060(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r10
  __int64 *v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-99h] BYREF
  __int64 v28; // [rsp+28h] [rbp-91h]
  __int64 v29; // [rsp+30h] [rbp-89h] BYREF
  __int64 v30; // [rsp+38h] [rbp-81h]
  __int64 v31; // [rsp+40h] [rbp-79h] BYREF
  __int64 v32; // [rsp+48h] [rbp-71h]
  __int64 v33; // [rsp+50h] [rbp-69h] BYREF
  __int64 v34; // [rsp+58h] [rbp-61h]
  __int64 v35; // [rsp+60h] [rbp-59h] BYREF
  __int64 v36; // [rsp+68h] [rbp-51h]
  __int64 v37; // [rsp+70h] [rbp-49h] BYREF
  __int64 v38; // [rsp+78h] [rbp-41h]
  __int64 v39; // [rsp+90h] [rbp-29h] BYREF
  __int64 v40; // [rsp+98h] [rbp-21h]
  __int64 v41; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-11h]
  __int64 v43; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+Fh]

  v6 = sub_180017054((__int64)&v37, (__int64)&unk_1801C8ED8);
  sub_18004CE40(a2, &v35, v6);
  sub_18005B2DC(v35, &v31);
  sub_180041A88(v31, (__int64)&unk_1801C8D98, 1);
  sub_18007C298(*(_QWORD *)(v31 + 120), &unk_1801C7EB8, 0LL);
  v7 = *a3;
  v8 = sub_180012444((__int64)&v37, (__int64)&unk_1801C4FF8);
  sub_18003EBDC(v7, (__int64)&v33, v8);
  sub_180082EC0(&v39, a1, 0LL);
  v9 = unknown_libname_81(&v29, &v33);
  sub_18003DD58(v10, (__int64)&v37, qword_1801C4F88, v9);
  std::string::string(&v43, "PlanarReflection");
  v11 = v37;
  sub_1800133F4(v37 + 400, (__int64)&v43);
  sub_180011B5C((__int64)&v43);
  sub_180013CEC(v11, &v43);
  v12 = unknown_libname_81(&v29, &v39);
  sub_1800143A4(v43, v12);
  v13 = unknown_libname_81(&v29, &v31);
  sub_1800498E0(v43, v13);
  result = sub_18003AFD4(v11, 1, 0);
  if ( (*(_BYTE *)(a1 + 560) & 1) != 0 )
  {
    v16 = sub_18005D888(*a3, v15);
    v17 = sub_18005B2DC(v35, &v41);
    v18 = (__int64 *)(v16 + 216);
    sub_180011110((_QWORD *)(v16 + 216), v17);
    if ( v42 )
      sub_18001060C(v42);
    LOBYTE(v19) = 1;
    sub_18007C298(*(_QWORD *)(*v18 + 120), &unk_1801C7EB8, v19);
    *(_DWORD *)(*v18 + 188) = 3;
    sub_180041B48(*v18, 1, 1, 1);
    LOBYTE(v20) = 1;
    sub_180082EC0(&v29, a1, v20);
    v21 = unknown_libname_81(&v41, &v33);
    v23 = (__int64 *)sub_18003DD58(v22, (__int64)&v27, qword_1801C4FB0, v21);
    sub_180011110((_QWORD *)(v16 + 200), v23);
    if ( v28 )
      sub_18001060C(v28);
    v24 = *(_QWORD *)(v16 + 200);
    std::string::string(&v41, "GroundBack");
    sub_1800133F4(v24 + 400, (__int64)&v41);
    sub_180011B5C((__int64)&v41);
    sub_180013CEC(*(_QWORD *)(v16 + 200), &v41);
    v25 = unknown_libname_81(&v27, &v29);
    sub_1800143A4(v41, v25);
    v26 = unknown_libname_81(&v27, (_QWORD *)(v16 + 216));
    result = sub_1800498E0(v41, v26);
    if ( v42 )
      result = sub_18001060C(v42);
    if ( v30 )
      result = sub_18001060C(v30);
  }
  if ( v44 )
    result = sub_18001060C(v44);
  if ( v38 )
    result = sub_18001060C(v38);
  if ( v40 )
    result = sub_18001060C(v40);
  if ( v34 )
    result = sub_18001060C(v34);
  if ( v32 )
    result = sub_18001060C(v32);
  if ( v36 )
    return sub_18001060C(v36);
  return result;
}
