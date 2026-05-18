/*
 * XREFs of sub_180035358 @ 0x180035358
 * Callers:
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_18001197C @ 0x18001197C (sub_18001197C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_180025090 @ 0x180025090 (sub_180025090.c)
 *     sub_1800250B8 @ 0x1800250B8 (sub_1800250B8.c)
 *     sub_18002B960 @ 0x18002B960 (sub_18002B960.c)
 *     sub_18002B984 @ 0x18002B984 (sub_18002B984.c)
 *     sub_18002DD88 @ 0x18002DD88 (sub_18002DD88.c)
 *     sub_18002DE9C @ 0x18002DE9C (sub_18002DE9C.c)
 *     sub_180030580 @ 0x180030580 (sub_180030580.c)
 *     sub_180030CCC @ 0x180030CCC (sub_180030CCC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall sub_180035358(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  volatile signed __int32 *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  double v20; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v24; // [rsp+68h] [rbp-98h]
  _BYTE v25[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  _BYTE v29[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v30[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v31[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v32[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v33[32]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v34[32]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v35[32]; // [rsp+160h] [rbp+60h] BYREF

  v24 = a2;
  v21 = 0LL;
  v4 = a2[1];
  if ( v4 && sub_18001197C(v4) )
  {
    v5 = *a2;
    *(_QWORD *)&v21 = *a2;
    v6 = a2[1];
    *((_QWORD *)&v21 + 1) = v6;
  }
  else
  {
    v6 = *((_QWORD *)&v21 + 1);
    v5 = v21;
  }
  if ( v5 )
  {
    v19 = v5;
    v18 = 0LL;
    v20 = 0.0;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 *, double *))(*(_QWORD *)v5 + 224LL))(v5, 0LL, &v18, &v20);
    v7 = v18;
    *(_QWORD *)(*(_QWORD *)sub_18002DE9C((__int64 *)(a1 + 1392), (__int64)v26, &v19) + 40LL) = v7;
    v8 = *(_QWORD *)sub_18002DD88((_QWORD *)(a1 + 1376), (__int64)v25, &v19);
    sub_180012344((__int64)v26, v8 + 64);
    LOBYTE(v7) = v28 == 0;
    sub_180013128((__int64)v26);
    if ( (_BYTE)v7 )
    {
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, _BYTE *))(*(_QWORD *)v5 + 376LL))(v5, v26);
      sub_180011B04(v9, &v22);
      if ( v27 )
        sub_180010544(v27);
      v10 = v22;
      if ( v22 )
      {
        v11 = sub_1800250B8(v22, (__int64)v35);
        v12 = sub_180025090(v10, (__int64)v34);
        sub_180012344((__int64)v29, v10 + 80);
        v13 = sub_18002B984((__int64)v33, (__int64)v29, " ");
        v14 = sub_18002B960((__int64)v32, v13, v12);
        v15 = sub_18002B984((__int64)v31, v14, " ");
        v16 = sub_18002B960((__int64)v30, v15, v11);
        sub_180030580(v8 + 64, v16);
        sub_180013128((__int64)v30);
        sub_180013128((__int64)v31);
        sub_180013128((__int64)v32);
        sub_180013128((__int64)v33);
        sub_180013128((__int64)v29);
        sub_180013128((__int64)v34);
        sub_180013128((__int64)v35);
      }
      if ( v23 )
        sub_18001050C(v23);
    }
    sub_180030CCC(v8 + 40, v20);
  }
  if ( v6 )
    sub_18001050C(v6);
  v17 = (volatile signed __int32 *)a2[1];
  if ( v17 )
    sub_180010544(v17);
}
