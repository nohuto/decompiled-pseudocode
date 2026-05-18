/*
 * XREFs of sub_18006C8F0 @ 0x18006C8F0
 * Callers:
 *     sub_18005F5A0 @ 0x18005F5A0 (sub_18005F5A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18002563C @ 0x18002563C (sub_18002563C.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_1800376C0 @ 0x1800376C0 (sub_1800376C0.c)
 *     sub_180037718 @ 0x180037718 (sub_180037718.c)
 *     sub_1800377FC @ 0x1800377FC (sub_1800377FC.c)
 *     sub_180057494 @ 0x180057494 (sub_180057494.c)
 *     sub_18006B93C @ 0x18006B93C (sub_18006B93C.c)
 *     sub_18006C298 @ 0x18006C298 (sub_18006C298.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_180096D6C @ 0x180096D6C (sub_180096D6C.c)
 *     sub_180096E1C @ 0x180096E1C (sub_180096E1C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18006C8F0(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  void (__fastcall *v10)(__int64, _QWORD *); // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 *v14; // rax
  _QWORD *v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 result; // rax
  __int128 v27; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-59h] BYREF
  __int64 v29; // [rsp+48h] [rbp-51h]
  _QWORD *v30; // [rsp+50h] [rbp-49h] BYREF
  __int64 v31; // [rsp+58h] [rbp-41h]
  __int64 v32; // [rsp+60h] [rbp-39h] BYREF
  __int64 v33; // [rsp+68h] [rbp-31h]
  __int128 v34; // [rsp+70h] [rbp-29h] BYREF
  __int64 v35; // [rsp+80h] [rbp-19h] BYREF
  __int64 v36; // [rsp+88h] [rbp-11h]
  __int128 v37; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v38[4]; // [rsp+A0h] [rbp+7h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 376LL))(*a2, &v27);
  sub_180011C04(v6, &v30);
  if ( *((_QWORD *)&v27 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v27 + 1));
  sub_180028890(a1[36] + 16LL);
  v7 = v30;
  sub_18002894C((__int64)(v30 + 3), v8);
  unknown_libname_81(&v35, v7 + 34);
  v9 = unknown_libname_81(&v27, &v30);
  v10(v11, v9);
  v34 = 0LL;
  if ( a1[8] )
  {
    v13 = (__int64 *)sub_18006CCE8(a1, &v27, v12, &v30);
    sub_180011110(&v34, v13);
    if ( *((_QWORD *)&v27 + 1) )
      sub_18001060C(*((__int64 *)&v27 + 1));
    v7 = v30;
  }
  else
  {
    v14 = (__int64 *)sub_18002563C(a1[57], &v27);
    sub_180011110(&v34, v14);
    if ( *((_QWORD *)&v27 + 1) )
      sub_18001060C(*((__int64 *)&v27 + 1));
  }
  sub_180057494(a1[34], &v32, (__int64)&v30);
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 200LL))(*a2, &v27);
  v16 = sub_180015274(&v28, v15);
  sub_180037718(v35, v16);
  v17 = sub_180015274(&v28, &v27);
  sub_1800376C0(v35, v17);
  v18 = sub_180015274(&v28, v15);
  sub_180037718(v19, v18);
  v20 = sub_180015274(&v28, &v27);
  sub_1800376C0(v21, v20);
  if ( *((_QWORD *)&v27 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v27 + 1));
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v7 + 104LL))(v7, &v32);
  std::string::string(v38, "IPM_ProcessScene");
  sub_180096D6C(&v37, &v32, v38);
  sub_180011B5C((__int64)v38);
  if ( a3 )
  {
    v22 = unknown_libname_81(&v27, &v34);
    v23 = sub_18006B93C((__int64)a1, &v28, (__int64 *)&v30, (__int64)a2, v22);
    sub_180011110(&v34, v23);
    if ( v29 )
      sub_18001060C(v29);
    v7 = v30;
  }
  v24 = unknown_libname_81(&v27, &v34);
  v28 = v24;
  sub_18006C298((__int64)a1, a2, v24);
  v25 = v24[1];
  if ( v25 )
    sub_18001060C(v25);
  sub_180096E1C(&v37);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v7 + 112LL))(v7, &v32);
  v37 = 0LL;
  v27 = 0LL;
  sub_1800377FC(v35, &v27, &v37);
  v27 = 0LL;
  sub_180037718(v35, (__int64 *)&v27);
  v27 = 0LL;
  sub_1800376C0(v35, (__int64 *)&v27);
  v27 = 0LL;
  sub_180037718(v32, (__int64 *)&v27);
  v27 = 0LL;
  result = (__int64)sub_1800376C0(v32, (__int64 *)&v27);
  if ( v33 )
    result = sub_18001060C(v33);
  if ( *((_QWORD *)&v34 + 1) )
    result = sub_18001060C(*((__int64 *)&v34 + 1));
  if ( v36 )
    result = sub_18001060C(v36);
  if ( v31 )
    return sub_18001060C(v31);
  return result;
}
