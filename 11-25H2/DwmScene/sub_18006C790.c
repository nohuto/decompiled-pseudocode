/*
 * XREFs of sub_18006C790 @ 0x18006C790
 * Callers:
 *     sub_18005F440 @ 0x18005F440 (sub_18005F440.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180037560 @ 0x180037560 (sub_180037560.c)
 *     sub_1800375B8 @ 0x1800375B8 (sub_1800375B8.c)
 *     sub_18003769C @ 0x18003769C (sub_18003769C.c)
 *     sub_180057334 @ 0x180057334 (sub_180057334.c)
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 *     sub_18006C138 @ 0x18006C138 (sub_18006C138.c)
 *     sub_18006CB88 @ 0x18006CB88 (sub_18006CB88.c)
 *     sub_180096C0C @ 0x180096C0C (sub_180096C0C.c)
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18006C790(_QWORD *a1, _QWORD *a2, char a3)
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
  sub_180011B04(v6, &v30);
  if ( *((_QWORD *)&v27 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v27 + 1));
  sub_180028730(a1[36] + 16LL);
  v7 = v30;
  sub_1800287EC((__int64)(v30 + 3), v8);
  unknown_libname_81(&v35, v7 + 34);
  v9 = unknown_libname_81(&v27, &v30);
  v10(v11, v9);
  v34 = 0LL;
  if ( a1[8] )
  {
    v13 = (__int64 *)sub_18006CB88(a1, &v27, v12, &v30);
    sub_180011010(&v34, v13);
    if ( *((_QWORD *)&v27 + 1) )
      sub_18001050C(*((__int64 *)&v27 + 1));
    v7 = v30;
  }
  else
  {
    v14 = (__int64 *)sub_1800254DC(a1[57], &v27);
    sub_180011010(&v34, v14);
    if ( *((_QWORD *)&v27 + 1) )
      sub_18001050C(*((__int64 *)&v27 + 1));
  }
  sub_180057334(a1[34], &v32, (__int64)&v30);
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 200LL))(*a2, &v27);
  v16 = sub_180015174(&v28, v15);
  sub_1800375B8(v35, v16);
  v17 = sub_180015174(&v28, &v27);
  sub_180037560(v35, v17);
  v18 = sub_180015174(&v28, v15);
  sub_1800375B8(v19, v18);
  v20 = sub_180015174(&v28, &v27);
  sub_180037560(v21, v20);
  if ( *((_QWORD *)&v27 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v27 + 1));
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v7 + 104LL))(v7, &v32);
  std::string::string(v38, "IPM_ProcessScene");
  sub_180096C0C(&v37, &v32, v38);
  sub_180011A5C((__int64)v38);
  if ( a3 )
  {
    v22 = unknown_libname_81(&v27, &v34);
    v23 = sub_18006B7DC((__int64)a1, &v28, (__int64 *)&v30, (__int64)a2, v22);
    sub_180011010(&v34, v23);
    if ( v29 )
      sub_18001050C(v29);
    v7 = v30;
  }
  v24 = unknown_libname_81(&v27, &v34);
  v28 = v24;
  sub_18006C138((__int64)a1, a2, v24);
  v25 = v24[1];
  if ( v25 )
    sub_18001050C(v25);
  sub_180096CBC(&v37);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v7 + 112LL))(v7, &v32);
  v37 = 0LL;
  v27 = 0LL;
  sub_18003769C(v35, &v27, &v37);
  v27 = 0LL;
  sub_1800375B8(v35, (__int64 *)&v27);
  v27 = 0LL;
  sub_180037560(v35, (__int64 *)&v27);
  v27 = 0LL;
  sub_1800375B8(v32, (__int64 *)&v27);
  v27 = 0LL;
  result = (__int64)sub_180037560(v32, (__int64 *)&v27);
  if ( v33 )
    result = sub_18001050C(v33);
  if ( *((_QWORD *)&v34 + 1) )
    result = sub_18001050C(*((__int64 *)&v34 + 1));
  if ( v36 )
    result = sub_18001050C(v36);
  if ( v31 )
    return sub_18001050C(v31);
  return result;
}
