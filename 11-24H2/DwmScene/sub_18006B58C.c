/*
 * XREFs of sub_18006B58C @ 0x18006B58C
 * Callers:
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_1800376C0 @ 0x1800376C0 (sub_1800376C0.c)
 *     sub_180037718 @ 0x180037718 (sub_180037718.c)
 *     sub_180057494 @ 0x180057494 (sub_180057494.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18006B58C(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
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
  sub_180011C04(v8, &v32);
  if ( v31 )
    sub_180010644(v31);
  v9 = *(_QWORD *)(a1 + 272);
  v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 88LL);
  v11 = v32;
  v12 = sub_180011D64((__int64)(v32 + 1), &v29);
  v10(v9, v12);
  sub_180028890(*(_QWORD *)(a1 + 288) + 16LL);
  sub_18002894C((__int64)(v11 + 3), v13);
  unknown_libname_81(&v30, v11 + 34);
  v14 = *(_QWORD *)(a1 + 272);
  v15 = sub_180011D64((__int64)(v11 + 1), &v34);
  sub_180057494(v14, &v27, v15);
  if ( v35 )
    sub_18001060C(v35);
  v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 184LL))(*a3);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 200LL))(*a3, &v29);
  v17 = sub_180015274(v36, v16);
  v18 = v30;
  sub_180037718(v30, v17);
  v19 = sub_180015274(v36, &v29);
  sub_1800376C0(v18, v19);
  v20 = sub_180015274(v36, v16);
  sub_180037718(v21, v20);
  v22 = sub_180015274(v36, &v29);
  sub_1800376C0(v23, v22);
  if ( *((_QWORD *)&v29 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v29 + 1));
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v11 + 104LL))(v11, &v27);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)*a4 + 16LL))(*a4, a2, v11, a3, a5);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v11 + 112LL))(v11, &v27);
  v29 = 0LL;
  sub_180037718(v18, (__int64 *)&v29);
  v29 = 0LL;
  sub_1800376C0(v18, (__int64 *)&v29);
  v29 = 0LL;
  sub_180037718(v27, (__int64 *)&v29);
  v29 = 0LL;
  sub_1800376C0(v27, (__int64 *)&v29);
  if ( v28 )
    sub_18001060C(v28);
  if ( v31 )
    sub_18001060C((__int64)v31);
  if ( v33 )
    sub_18001060C(v33);
  v24 = a4[1];
  if ( v24 )
    sub_18001060C(v24);
  v25 = *(_QWORD *)(a5 + 8);
  if ( v25 )
    sub_18001060C(v25);
  return a2;
}
