/*
 * XREFs of sub_18003F9D8 @ 0x18003F9D8
 * Callers:
 *     sub_1800356CC @ 0x1800356CC (sub_1800356CC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18001E5D4 @ 0x18001E5D4 (sub_18001E5D4.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18003CFE0 @ 0x18003CFE0 (sub_18003CFE0.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 *     sub_18003F038 @ 0x18003F038 (sub_18003F038.c)
 *     sub_18003F924 @ 0x18003F924 (sub_18003F924.c)
 *     sub_18003FCDC @ 0x18003FCDC (sub_18003FCDC.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18003F9D8(__int64 a1, __int64 a2)
{
  __int64 **v4; // rdi
  __int64 v5; // r8
  volatile __int32 *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  volatile __int32 *v9; // rax
  __int64 v10; // rax
  volatile __int32 *v11; // rax
  __int64 *v12; // rax
  __int64 result; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int16 *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  volatile __int32 *v19; // rax
  __int64 *v20; // rax
  volatile __int32 *v21; // [rsp+20h] [rbp-49h]
  __int64 v22; // [rsp+28h] [rbp-41h] BYREF
  volatile __int32 *v23; // [rsp+30h] [rbp-39h]
  __int64 v24; // [rsp+38h] [rbp-31h] BYREF
  volatile __int32 *v25; // [rsp+40h] [rbp-29h]
  volatile __int32 *v26; // [rsp+48h] [rbp-21h]
  __int64 v27; // [rsp+50h] [rbp-19h] BYREF
  __int64 v28; // [rsp+58h] [rbp-11h] BYREF
  __int64 v29; // [rsp+60h] [rbp-9h]
  __int64 v30; // [rsp+68h] [rbp-1h] BYREF
  __int64 v31; // [rsp+70h] [rbp+7h]
  __int64 v32; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+80h] [rbp+17h]
  __int64 v34; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v35; // [rsp+90h] [rbp+27h]
  _BYTE v36[40]; // [rsp+98h] [rbp+2Fh] BYREF

  sub_1800287EC(a1 + 16, a2);
  v4 = (__int64 **)(a1 + 88);
  v5 = **(_QWORD **)(a1 + 88);
  v22 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (volatile __int32 *)(*(_QWORD *)(v5 + 64) + 76LL);
    v21 = v6;
    while ( _InterlockedExchange(v6, 1) )
      v6 = v21;
    v7 = (__int64 *)sub_18003EB98(*(_QWORD *)(v5 + 64), &v30);
    sub_18003F924(a1, a2, v7);
    if ( v31 )
      sub_18001050C(v31);
    *v21 = 0;
    sub_18001C2C0(&v22);
    v5 = v22;
  }
  v8 = **v4;
  v24 = v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = (volatile __int32 *)(*(_QWORD *)(v8 + 64) + 76LL);
    v23 = v9;
    while ( _InterlockedExchange(v9, 1) )
      v9 = v23;
    sub_18003FCDC(a1);
    *v23 = 0;
    sub_18001C2C0(&v24);
    v8 = v24;
  }
  v10 = sub_18003CFE0((__int64 *)(a1 + 88), (__int64)v36, (void *)v5);
  unknown_libname_81(&v28, (_QWORD *)(*(_QWORD *)v10 + 64LL));
  v11 = (volatile __int32 *)(v28 + 76);
  v25 = (volatile __int32 *)(v28 + 76);
  while ( _InterlockedExchange(v11, 1) )
    v11 = v25;
  v12 = (__int64 *)sub_18003EB98(v28, &v32);
  sub_18003F038(a1, a2, v12);
  if ( v33 )
    sub_18001050C(v33);
  *v25 = 0;
  result = **v4;
  v27 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    sub_1800130AC((__int64)&unk_1801C4028);
    v15 = sub_1800130AC(v14);
    if ( v17 != qword_1801C4038 || (unsigned int)sub_18001E5D4(v15, v16, v17) )
    {
      v19 = (volatile __int32 *)(*(_QWORD *)(v18 + 32) + 76LL);
      v26 = v19;
      while ( _InterlockedExchange(v19, 1) )
        v19 = v26;
      v20 = (__int64 *)sub_18003EB98(*(_QWORD *)(v18 + 32), &v34);
      sub_18003F038(a1, a2, v20);
      if ( v35 )
        sub_18001050C(v35);
      *v26 = 0;
    }
    sub_18001C2C0(&v27);
    result = v27;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
  if ( v29 )
    return sub_18001050C(v29);
  return result;
}
