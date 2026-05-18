/*
 * XREFs of sub_18006C298 @ 0x18006C298
 * Callers:
 *     sub_18006C8F0 @ 0x18006C8F0 (sub_18006C8F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180041B48 @ 0x180041B48 (sub_180041B48.c)
 *     sub_1800498E0 @ 0x1800498E0 (sub_1800498E0.c)
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 *     sub_18007C558 @ 0x18007C558 (sub_18007C558.c)
 *     sub_18007C758 @ 0x18007C758 (sub_18007C758.c)
 *     sub_18008D058 @ 0x18008D058 (sub_18008D058.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006C298(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, _QWORD *); // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  int v11; // r10d
  float v12; // xmm0_4
  float v13; // xmm1_4
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdi
  void (__fastcall *v22)(__int64, __int64 *, _QWORD *, __int64, _QWORD *); // rbx
  __int64 v23; // rax
  unsigned int v24; // eax
  int v25; // r10d
  __int64 result; // rax
  __int128 v27; // [rsp+30h] [rbp-49h] BYREF
  __int64 v28; // [rsp+40h] [rbp-39h] BYREF
  __int64 v29; // [rsp+48h] [rbp-31h]
  __int128 v30; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v31[8]; // [rsp+60h] [rbp-19h] BYREF
  volatile signed __int32 *v32; // [rsp+68h] [rbp-11h]
  _QWORD v33[4]; // [rsp+70h] [rbp-9h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v31);
  sub_180011C04(v6, &v28);
  if ( v32 )
    sub_180010644(v32);
  v7 = unknown_libname_81(&v27, &v28);
  v8(v9, v7);
  v10 = (unsigned int)unknown_libname_81(v33, a3);
  v27 = 0LL;
  sub_18008D058(v11, (unsigned int)&v28, (unsigned int)&v27, v10, -1);
  v27 = 0LL;
  sub_1800588F0(*(_QWORD *)(a1 + 272), (__int64 *)&v27);
  *(_BYTE *)(*(_QWORD *)(a1 + 272) + 465LL) &= 0xF8u;
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 32LL))(*a2, &v30);
  v27 = v30;
  v30 = 0LL;
  sub_180058A5C(*(_QWORD *)(a1 + 272), (__int64 *)&v27);
  if ( (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) != 1.0
    || (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2) != 1.0 )
  {
    v12 = *(float *)(*a3 + 144LL);
    v13 = *(float *)(*a3 + 148LL);
    v14 = *(_QWORD *)(a1 + 272);
    *(_DWORD *)(v14 + 372) = 0;
    *(_DWORD *)(v14 + 376) = 0;
    *(_DWORD *)(v14 + 380) = (int)v12;
    *(_DWORD *)(v14 + 384) = (int)v13;
    *(_BYTE *)(v14 + 388) = 1;
  }
  v15 = unknown_libname_81(v33, a3);
  sub_18007C558(v16, &unk_1801C8F38, v15);
  v17 = unknown_libname_81(v33, (_QWORD *)(a1 + 304));
  sub_18007C758(v18, &unk_1801C8F38, v17);
  sub_180041B48(*(_QWORD *)(a1 + 400), *(_DWORD *)(a1 + 448), 0, 2);
  v19 = unknown_libname_81(v33, (_QWORD *)(a1 + 400));
  sub_1800498E0(v20, v19);
  v21 = *(_QWORD *)(a1 + 272);
  v22 = *(void (__fastcall **)(__int64, __int64 *, _QWORD *, __int64, _QWORD *))(*(_QWORD *)v21 + 208LL);
  std::string::string(v33, "Display");
  v22(v21, &v28, a2, a1 + 336, v33);
  sub_180011B5C((__int64)v33);
  v23 = *(_QWORD *)(a1 + 272);
  if ( *(_BYTE *)(v23 + 388) )
    *(_BYTE *)(v23 + 388) = 0;
  v27 = 0LL;
  sub_18007C558(*(_QWORD *)(a1 + 416), &unk_1801C8F38, &v27);
  v27 = 0LL;
  sub_18007C758(*(_QWORD *)(a1 + 416), &unk_1801C8F38, &v27);
  v24 = (unsigned int)unknown_libname_81(v33, a3);
  v27 = 0LL;
  result = sub_18008D058(v25, (unsigned int)&v28, (unsigned int)&v27, v24, -1);
  if ( *((_QWORD *)&v30 + 1) )
    result = sub_18001060C(*((__int64 *)&v30 + 1));
  if ( v29 )
    return sub_18001060C(v29);
  return result;
}
