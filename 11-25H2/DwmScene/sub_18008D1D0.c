/*
 * XREFs of sub_18008D1D0 @ 0x18008D1D0
 * Callers:
 *     sub_18006CC9C @ 0x18006CC9C (sub_18006CC9C.c)
 *     sub_18008D1D0 @ 0x18008D1D0 (sub_18008D1D0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011050 @ 0x180011050 (sub_180011050.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 *     sub_1800142A4 @ 0x1800142A4 (sub_1800142A4.c)
 *     sub_180049780 @ 0x180049780 (sub_180049780.c)
 *     sub_18006B15C @ 0x18006B15C (sub_18006B15C.c)
 *     sub_18008D1D0 @ 0x18008D1D0 (sub_18008D1D0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_18008D1D0(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 *a6)
{
  _QWORD *v9; // r15
  __int64 *v10; // rbx
  __int64 *v11; // r15
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  unsigned int v13; // eax
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // [rsp+38h] [rbp-D0h]
  _BYTE *v27; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h]
  _QWORD *v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-90h]
  _QWORD v34[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v35; // [rsp+90h] [rbp-78h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v39[56]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+108h] [rbp+0h]

  v9 = a1;
  v10 = (__int64 *)a1[19];
  if ( v10 != (__int64 *)a1[20] )
  {
    v11 = (__int64 *)a1[20];
    do
    {
      v30 = *v10;
      v32 = v34;
      v26 = unknown_libname_81(v34, a6);
      v27 = v39;
      v40 = 0LL;
      v12 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
      if ( v12 )
        v40 = (**v12)(v12, v39);
      unknown_libname_81(&v35, a4);
      unknown_libname_81(&v36, a3);
      v13 = (unsigned int)unknown_libname_81(&v29, a2);
      sub_18008D1D0(v30, v13, v14, v15, (__int64)v39, (__int64)v26);
      v10 += 2;
    }
    while ( v10 != v11 );
    v9 = a1;
  }
  sub_180011050(a5, (__int64)v37);
  unknown_libname_81(&v32, v37);
  unknown_libname_81(&v30, &v38);
  sub_180013BEC((__int64)v32, &v27);
  v16 = unknown_libname_81(&v29, &v30);
  v17 = (__int64)v27;
  sub_1800142A4((__int64)v27, v16);
  v18 = unknown_libname_81(&v29, a6);
  sub_180049780(v17, v18);
  *(_BYTE *)(v17 + 72) = 0;
  sub_180011010(v9 + 3, a2);
  sub_180011010(v9 + 5, a3);
  sub_180011010(v9 + 1, a4);
  sub_180011010(v9 + 7, (__int64 *)&v32);
  sub_180011010(v9 + 9, (__int64 *)&v27);
  sub_180011010(v9 + 11, a6);
  if ( v28 )
    sub_18001050C(v28);
  if ( v31 )
    sub_18001050C(v31);
  if ( v33 )
    sub_18001050C(v33);
  result = sub_18006B15C((__int64)v37);
  v21 = a2[1];
  if ( v21 )
    result = sub_18001050C(v21);
  v22 = a3[1];
  if ( v22 )
    result = sub_18001050C(v22);
  v23 = a4[1];
  if ( v23 )
    result = sub_18001050C(v23);
  v24 = *(_QWORD *)(a5 + 56);
  if ( v24 )
  {
    LOBYTE(v20) = v24 != a5;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v20);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  v25 = a6[1];
  if ( v25 )
    return sub_18001050C(v25);
  return result;
}
