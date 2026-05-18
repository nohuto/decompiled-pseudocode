/*
 * XREFs of sub_180068A3C @ 0x180068A3C
 * Callers:
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_180069048 @ 0x180069048 (sub_180069048.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_180050580 @ 0x180050580 (sub_180050580.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_180051658 @ 0x180051658 (sub_180051658.c)
 *     sub_1800521B8 @ 0x1800521B8 (sub_1800521B8.c)
 *     sub_18005224C @ 0x18005224C (sub_18005224C.c)
 *     sub_180052350 @ 0x180052350 (sub_180052350.c)
 *     sub_180052400 @ 0x180052400 (sub_180052400.c)
 *     sub_180052420 @ 0x180052420 (sub_180052420.c)
 *     sub_180069108 @ 0x180069108 (sub_180069108.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_180068A3C(__int64 *a1, _QWORD *a2)
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
    sub_180051658(v6, v5);
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
        sub_1800521B8(v35);
        sub_180052400(v10);
        sub_18005224C(v11);
        sub_180052350(v12);
        v14 = sub_180052420(v13);
        v19 = (__int64 *)sub_180069108((unsigned int)v39, (_DWORD)v7, v14, v17, v15, v16, v18);
        sub_180011010(&a1[2 * v8 + 16], v19);
        if ( v40 )
          sub_18001050C(v40);
      }
      v20 = unknown_libname_81(&v41, &v35);
      sub_180051658(v21, v20);
    }
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)*a2 + 80LL))(*a2, &v33, v8);
    if ( v33 )
    {
      if ( !*v9 )
      {
        v22 = *(_DWORD **)(v33 + 96);
        sub_180015D88(v7, &v31);
        v23 = v4 | 1;
        v43 = v23;
        sub_180027C70(v31, 1, 0);
        sub_180027C70(v31, v24 + 2, v24);
        sub_180027C70(v31, v25 + 4, v25);
        sub_180050750(v31, v22, v26);
        sub_180011010(&a1[2 * v8 + 24], &v31);
        v4 = v23 & 0xFFFFFFFE;
        v43 = v4;
        if ( v32 )
          sub_18001050C(v32);
      }
      sub_180050580(*v9, (__int64)&v33);
    }
    if ( v34 )
      sub_18001050C(v34);
    if ( v36 )
      sub_18001050C(v36);
    ++v8;
    v9 += 2;
  }
  while ( v8 < 4 );
  v43 = *(_DWORD *)(*a2 + 88LL);
  sub_180050140(a1 + 32, (__int64)v39, &v43);
  result = unknown_libname_81(&v41, a2);
  v28 = *result;
  *result = *(_QWORD *)(v29 + 40);
  *(_QWORD *)(v29 + 40) = v28;
  v30 = result[1];
  result[1] = *(_QWORD *)(v29 + 48);
  *(_QWORD *)(v29 + 48) = v30;
  if ( v42 )
    result = (__int64 *)sub_18001050C(v42);
  if ( v38 )
    return (__int64 *)sub_18001050C(v38);
  return result;
}
