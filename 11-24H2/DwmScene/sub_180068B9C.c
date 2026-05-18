/*
 * XREFs of sub_180068B9C @ 0x180068B9C
 * Callers:
 *     sub_180068E40 @ 0x180068E40 (sub_180068E40.c)
 *     sub_180068F70 @ 0x180068F70 (sub_180068F70.c)
 *     sub_1800691A8 @ 0x1800691A8 (sub_1800691A8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015E88 @ 0x180015E88 (sub_180015E88.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_1800506E0 @ 0x1800506E0 (sub_1800506E0.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_1800517B8 @ 0x1800517B8 (sub_1800517B8.c)
 *     sub_180052318 @ 0x180052318 (sub_180052318.c)
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 *     sub_1800524B0 @ 0x1800524B0 (sub_1800524B0.c)
 *     sub_180052560 @ 0x180052560 (sub_180052560.c)
 *     sub_180052580 @ 0x180052580 (sub_180052580.c)
 *     sub_180069268 @ 0x180069268 (sub_180069268.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_180068B9C(__int64 *a1, _QWORD *a2)
{
  unsigned int v4; // r12d
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 *v7; // r13
  unsigned int v8; // esi
  __int64 *v9; // rdi
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // r11
  __int64 v13; // r11
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // r10d
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // r8
  _DWORD *v22; // rbx
  int v23; // r12d
  int v24; // r8d
  int v25; // r8d
  __int64 v26; // r8
  __int64 *result; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // [rsp+40h] [rbp-39h] BYREF
  __int64 v32; // [rsp+48h] [rbp-31h]
  __int64 v33; // [rsp+50h] [rbp-29h] BYREF
  __int64 v34; // [rsp+58h] [rbp-21h]
  __int64 v35; // [rsp+60h] [rbp-19h] BYREF
  __int64 v36; // [rsp+68h] [rbp-11h]
  __int64 v37; // [rsp+70h] [rbp-9h] BYREF
  __int64 v38; // [rsp+78h] [rbp-1h]
  _BYTE v39[8]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v40; // [rsp+88h] [rbp+Fh]
  __int64 v41; // [rsp+90h] [rbp+17h] BYREF
  __int64 v42; // [rsp+98h] [rbp+1Fh]
  unsigned int v43; // [rsp+E0h] [rbp+67h] BYREF

  v4 = 0;
  v43 = 0;
  unknown_libname_81(&v37, (_QWORD *)(*a2 + 96LL));
  if ( v37 )
  {
    v5 = unknown_libname_81(&v35, &v37);
    sub_1800517B8(v6, v5);
  }
  v7 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v8 = 0;
  v9 = a1 + 24;
  do
  {
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)*a2 + 72LL))(*a2, &v35, v8);
    if ( v35 )
    {
      if ( !*(v9 - 8) )
      {
        sub_180052318(v35);
        sub_180052560(v10);
        sub_1800523AC(v11);
        sub_1800524B0(v12);
        v14 = sub_180052580(v13);
        v19 = (__int64 *)sub_180069268((unsigned int)v39, (_DWORD)v7, v14, v17, v15, v16, v18);
        sub_180011110(&a1[2 * v8 + 16], v19);
        if ( v40 )
          sub_18001060C(v40);
      }
      v20 = unknown_libname_81(&v41, &v35);
      sub_1800517B8(v21, v20);
    }
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)*a2 + 80LL))(*a2, &v33, v8);
    if ( v33 )
    {
      if ( !*v9 )
      {
        v22 = *(_DWORD **)(v33 + 96);
        sub_180015E88(v7, &v31);
        v23 = v4 | 1;
        v43 = v23;
        sub_180027DD0(v31, 1, 0);
        sub_180027DD0(v31, v24 + 2, v24);
        sub_180027DD0(v31, v25 + 4, v25);
        sub_1800508B0(v31, v22, v26);
        sub_180011110(&a1[2 * v8 + 24], &v31);
        v4 = v23 & 0xFFFFFFFE;
        v43 = v4;
        if ( v32 )
          sub_18001060C(v32);
      }
      sub_1800506E0(*v9, (__int64)&v33);
    }
    if ( v34 )
      sub_18001060C(v34);
    if ( v36 )
      sub_18001060C(v36);
    ++v8;
    v9 += 2;
  }
  while ( v8 < 4 );
  v43 = *(_DWORD *)(*a2 + 88LL);
  sub_1800502A0(a1 + 32, (__int64)v39, &v43);
  result = unknown_libname_81(&v41, a2);
  v28 = *result;
  *result = *(_QWORD *)(v29 + 40);
  *(_QWORD *)(v29 + 40) = v28;
  v30 = result[1];
  result[1] = *(_QWORD *)(v29 + 48);
  *(_QWORD *)(v29 + 48) = v30;
  if ( v42 )
    result = (__int64 *)sub_18001060C(v42);
  if ( v38 )
    return (__int64 *)sub_18001060C(v38);
  return result;
}
