/*
 * XREFs of sub_180060070 @ 0x180060070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_18005CC1C @ 0x18005CC1C (sub_18005CC1C.c)
 *     sub_18005CD4C @ 0x18005CD4C (sub_18005CD4C.c)
 *     sub_18005CE7C @ 0x18005CE7C (sub_18005CE7C.c)
 *     sub_18005CFAC @ 0x18005CFAC (sub_18005CFAC.c)
 *     sub_18005D0DC @ 0x18005D0DC (sub_18005D0DC.c)
 *     sub_18005D20C @ 0x18005D20C (sub_18005D20C.c)
 *     sub_18005E2E8 @ 0x18005E2E8 (sub_18005E2E8.c)
 *     sub_18005EBD8 @ 0x18005EBD8 (sub_18005EBD8.c)
 *     sub_180061250 @ 0x180061250 (sub_180061250.c)
 */

// Hidden C++ exception states: #wind=3
__int64 **__fastcall sub_180060070(__int64 *a1, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // r9
  __int64 *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  __int64 *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // r9
  __int64 *v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // r9
  __int64 *v26; // rbx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // r9
  __int64 *v31; // rbx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // r9
  __int64 *v35; // rax
  _QWORD *v36; // rbx
  _QWORD *v37; // rax
  _QWORD *v38; // r9
  __int64 *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // r9
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 *v47; // rax
  __int64 v49; // [rsp+20h] [rbp-69h] BYREF
  __int64 v50; // [rsp+28h] [rbp-61h]
  _QWORD v51[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v52; // [rsp+40h] [rbp-49h] BYREF
  __int64 v53; // [rsp+48h] [rbp-41h]
  __int64 v54; // [rsp+50h] [rbp-39h] BYREF
  __int64 v55; // [rsp+58h] [rbp-31h]
  __int64 v56[3]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v57[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v58; // [rsp+88h] [rbp-1h] BYREF
  __int64 v59; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v60; // [rsp+A0h] [rbp+17h]
  int v61; // [rsp+F0h] [rbp+67h] BYREF
  __int64 **v62; // [rsp+F8h] [rbp+6Fh] BYREF

  v62 = a2;
  sub_18005E2E8(v57);
  sub_180011C64(a4, &v54);
  v8 = (__int64 *)v57[0];
  v9 = 0LL;
  v10 = 3LL;
  v11 = 3LL;
  do
  {
    unknown_libname_81(v56, &a1[v9 + 1]);
    v12 = unknown_libname_81(&v58, &v54);
    v14 = sub_18005CE7C(a3, &v59, v12, v13);
    sub_180011010(&v8[v9 + 1], v14);
    if ( v60 )
      sub_18001050C(v60);
    unknown_libname_81(&v49, &a1[v9 + 7]);
    v15 = unknown_libname_81(v51, &v54);
    v17 = sub_18005CC1C(a3, &v52, v15, v16);
    sub_180011010(&v8[v9 + 7], v17);
    if ( v53 )
      sub_18001050C(v53);
    v9 += 2LL;
    --v11;
  }
  while ( v11 );
  LODWORD(v62) = 0;
  v18 = (_QWORD *)sub_18005EBD8(a1 + 13, &v62);
  unknown_libname_81(&v52, v18);
  v19 = unknown_libname_81(v51, &v54);
  v21 = sub_18005CFAC(a3, &v49, v19, v20);
  v61 = 0;
  v22 = (_QWORD *)sub_18005EBD8(v8 + 13, &v61);
  sub_180011010(v22, v21);
  if ( v50 )
    sub_18001050C(v50);
  LODWORD(v62) = 1;
  v23 = (_QWORD *)sub_18005EBD8(a1 + 13, &v62);
  unknown_libname_81(&v52, v23);
  v24 = unknown_libname_81(v51, &v54);
  v26 = sub_18005CFAC(a3, &v49, v24, v25);
  v61 = 1;
  v27 = (_QWORD *)sub_18005EBD8(v8 + 13, &v61);
  sub_180011010(v27, v26);
  if ( v50 )
    sub_18001050C(v50);
  LODWORD(v62) = 2;
  v28 = (_QWORD *)sub_18005EBD8(a1 + 13, &v62);
  unknown_libname_81(&v52, v28);
  v29 = unknown_libname_81(v51, &v54);
  v31 = sub_18005CFAC(a3, &v49, v29, v30);
  v61 = 2;
  v32 = (_QWORD *)sub_18005EBD8(v8 + 13, &v61);
  sub_180011010(v32, v31);
  if ( v50 )
    sub_18001050C(v50);
  unknown_libname_81(&v52, a1 + 15);
  v33 = unknown_libname_81(v51, &v54);
  v35 = sub_18005CD4C(a3, &v49, v33, v34);
  sub_180011010(v8 + 15, v35);
  if ( v50 )
    sub_18001050C(v50);
  v36 = v8 + 17;
  do
  {
    unknown_libname_81(&v52, (_QWORD *)((char *)v36 + (char *)a1 - (char *)v8));
    v37 = unknown_libname_81(v51, &v54);
    v39 = sub_18005D0DC(a3, &v49, v37, v38);
    sub_180011010(v36, v39);
    if ( v50 )
      sub_18001050C(v50);
    v36 += 2;
    --v10;
  }
  while ( v10 );
  unknown_libname_81(&v52, a1 + 23);
  v40 = unknown_libname_81(v51, &v54);
  v42 = sub_18005D20C(a3, &v49, v40, v41);
  v43 = *v42;
  v44 = v42[1];
  *v42 = 0LL;
  v42[1] = 0LL;
  v8[23] = v43;
  v45 = v8[24];
  v8[24] = v44;
  if ( v45 )
    sub_18001050C(v45);
  if ( v50 )
    sub_18001050C(v50);
  unknown_libname_81(&v52, a1 + 25);
  v46 = unknown_libname_81(v51, &v54);
  v47 = (__int64 *)sub_180061250(a3, &v49, v46);
  sub_180011010(v8 + 25, v47);
  if ( v50 )
    sub_18001050C(v50);
  sub_18001244C(v8 + 27, a1 + 27);
  sub_18001244C(v8 + 29, a1 + 29);
  sub_18001244C(v8 + 31, a1 + 31);
  sub_18001244C(v8 + 33, a1 + 33);
  sub_18001244C(v8 + 35, a1 + 35);
  sub_18001244C(v8 + 37, a1 + 37);
  sub_18001244C(v8 + 39, a1 + 39);
  *a2 = v8;
  a2[1] = (__int64 *)v57[1];
  if ( v55 )
    sub_18001050C(v55);
  return a2;
}
