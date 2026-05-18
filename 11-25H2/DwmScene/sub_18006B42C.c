/*
 * XREFs of sub_18006B42C @ 0x18006B42C
 * Callers:
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180037560 @ 0x180037560 (sub_180037560.c)
 *     sub_1800375B8 @ 0x1800375B8 (sub_1800375B8.c)
 *     sub_180057334 @ 0x180057334 (sub_180057334.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18006B42C(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, __int64); // rbx
  _QWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+40h] [rbp-61h] BYREF
  __int64 v28; // [rsp+48h] [rbp-59h]
  __int128 v29; // [rsp+50h] [rbp-51h] BYREF
  __int64 v30; // [rsp+60h] [rbp-41h] BYREF
  volatile signed __int32 *v31; // [rsp+68h] [rbp-39h]
  _QWORD *v32; // [rsp+70h] [rbp-31h] BYREF
  __int64 v33; // [rsp+78h] [rbp-29h]
  __int64 v34; // [rsp+80h] [rbp-21h] BYREF
  __int64 v35; // [rsp+88h] [rbp-19h]
  _QWORD v36[11]; // [rsp+90h] [rbp-11h] BYREF

  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 376LL))(*a3, &v30);
  sub_180011B04(v8, &v32);
  if ( v31 )
    sub_180010544(v31);
  v9 = *(_QWORD *)(a1 + 272);
  v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 88LL);
  v11 = v32;
  v12 = sub_180011C64((__int64)(v32 + 1), &v29);
  v10(v9, v12);
  sub_180028730(*(_QWORD *)(a1 + 288) + 16LL);
  sub_1800287EC((__int64)(v11 + 3), v13);
  unknown_libname_81(&v30, v11 + 34);
  v14 = *(_QWORD *)(a1 + 272);
  v15 = sub_180011C64((__int64)(v11 + 1), &v34);
  sub_180057334(v14, &v27, v15);
  if ( v35 )
    sub_18001050C(v35);
  v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 184LL))(*a3);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 200LL))(*a3, &v29);
  v17 = sub_180015174(v36, v16);
  v18 = v30;
  sub_1800375B8(v30, v17);
  v19 = sub_180015174(v36, &v29);
  sub_180037560(v18, v19);
  v20 = sub_180015174(v36, v16);
  sub_1800375B8(v21, v20);
  v22 = sub_180015174(v36, &v29);
  sub_180037560(v23, v22);
  if ( *((_QWORD *)&v29 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v29 + 1));
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v11 + 104LL))(v11, &v27);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)*a4 + 16LL))(*a4, a2, v11, a3, a5);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v11 + 112LL))(v11, &v27);
  v29 = 0LL;
  sub_1800375B8(v18, (__int64 *)&v29);
  v29 = 0LL;
  sub_180037560(v18, (__int64 *)&v29);
  v29 = 0LL;
  sub_1800375B8(v27, (__int64 *)&v29);
  v29 = 0LL;
  sub_180037560(v27, (__int64 *)&v29);
  if ( v28 )
    sub_18001050C(v28);
  if ( v31 )
    sub_18001050C((__int64)v31);
  if ( v33 )
    sub_18001050C(v33);
  v24 = a4[1];
  if ( v24 )
    sub_18001050C(v24);
  v25 = *(_QWORD *)(a5 + 8);
  if ( v25 )
    sub_18001050C(v25);
  return a2;
}
