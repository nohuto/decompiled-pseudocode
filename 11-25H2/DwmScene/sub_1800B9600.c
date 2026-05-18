/*
 * XREFs of sub_1800B9600 @ 0x1800B9600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_1800B617C @ 0x1800B617C (sub_1800B617C.c)
 *     sub_1800B6328 @ 0x1800B6328 (sub_1800B6328.c)
 *     sub_1800B64D4 @ 0x1800B64D4 (sub_1800B64D4.c)
 *     sub_1800B6680 @ 0x1800B6680 (sub_1800B6680.c)
 *     sub_1800B682C @ 0x1800B682C (sub_1800B682C.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall sub_1800B9600(_QWORD *a1, _OWORD *a2, __int128 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int128 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v19; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+58h] [rbp+17h]
  __int64 v21; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+68h] [rbp+27h]
  __int128 v23; // [rsp+78h] [rbp+37h] BYREF
  __int128 v24; // [rsp+88h] [rbp+47h]

  switch ( *(_DWORD *)a3 )
  {
    case 0:
      v16 = sub_180011C64((__int64)(a1 + 1), &v19);
      v23 = *a3;
      v24 = a3[1];
      v17 = sub_1800B6680(a1, &v21, (__int64)&v23, v16, (__int64)(a1 + 68));
      v8 = *(_OWORD *)v17;
      *v17 = 0LL;
      v17[1] = 0LL;
      if ( v22 )
        sub_18001050C(v22);
      goto LABEL_22;
    case 1:
      v14 = sub_180011C64((__int64)(a1 + 1), &v19);
      v23 = *a3;
      v24 = a3[1];
      v15 = sub_1800B682C(a1, &v21, (__int64)&v23, v14, (__int64)(a1 + 68));
      v8 = *(_OWORD *)v15;
      *v15 = 0LL;
      v15[1] = 0LL;
      if ( v22 )
        sub_18001050C(v22);
      goto LABEL_22;
    case 2:
    case 3:
      v12 = sub_180011C64((__int64)(a1 + 1), &v19);
      v23 = *a3;
      v24 = a3[1];
      v13 = sub_1800B6328(a1, &v21, (__int64)&v23, v12, (__int64)(a1 + 68));
      v8 = *(_OWORD *)v13;
      *v13 = 0LL;
      v13[1] = 0LL;
      if ( v22 )
        sub_18001050C(v22);
      goto LABEL_22;
    case 5:
      v10 = sub_180011C64((__int64)(a1 + 1), &v19);
      v23 = *a3;
      v24 = a3[1];
      v11 = sub_1800B64D4(a1, &v21, (__int64)&v23, v10, (__int64)(a1 + 68));
      v8 = *(_OWORD *)v11;
      *v11 = 0LL;
      v11[1] = 0LL;
      if ( v22 )
        sub_18001050C(v22);
LABEL_22:
      v9 = v20;
      goto LABEL_23;
  }
  if ( *(_DWORD *)a3 != 6 )
  {
    v8 = 0LL;
    goto LABEL_25;
  }
  v6 = sub_180011C64((__int64)(a1 + 1), &v21);
  v23 = *a3;
  v24 = a3[1];
  v7 = sub_1800B617C(a1, &v19, (__int64)&v23, v6, (__int64)(a1 + 68));
  v8 = *(_OWORD *)v7;
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( v20 )
    sub_18001050C(v20);
  v9 = v22;
LABEL_23:
  if ( v9 )
    sub_18001050C(v9);
LABEL_25:
  *a2 = v8;
  return a2;
}
