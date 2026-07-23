/*
 * XREFs of SymCryptFdefModSub384Asm @ 0x140532B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModSub384Asm(__int64 a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 *v4; // rcx
  __int128 v5; // kr00_16
  unsigned __int128 v6; // kr10_16
  __int64 v7; // rbp
  __int64 v8; // rdi
  bool v9; // cf
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // r10
  unsigned __int128 v18; // kr20_16
  __int64 v19; // r11
  __int64 v20; // rtt
  __int64 v21; // rsi
  __int64 v22; // rtt
  __int64 v23; // rdi
  __int64 v24; // rtt

  v4 = (unsigned __int64 *)(a1 + 128);
  v5 = *a2 - *(_OWORD *)a3;
  v6 = a2[1] - __PAIR128__(*(_QWORD *)(a3 + 24), (unsigned __int64)(*a2 < *(_OWORD *)a3) + *(_QWORD *)(a3 + 16));
  v9 = a2[2] < __PAIR128__(
                 *(_QWORD *)(a3 + 40),
                 (unsigned __int64)(a2[1] < __PAIR128__(
                                              *(_QWORD *)(a3 + 24),
                                              (unsigned __int64)(*a2 < *(_OWORD *)a3) + *(_QWORD *)(a3 + 16)))
               + *(_QWORD *)(a3 + 32));
  v7 = (a2[2]
      - __PAIR128__(
          *(_QWORD *)(a3 + 40),
          (unsigned __int64)(a2[1] < __PAIR128__(
                                       *(_QWORD *)(a3 + 24),
                                       (unsigned __int64)(*a2 < *(_OWORD *)a3) + *(_QWORD *)(a3 + 16)))
        + *(_QWORD *)(a3 + 32))) >> 64;
  v8 = *((_QWORD *)a2 + 4)
     - ((a2[1] < __PAIR128__(*(_QWORD *)(a3 + 24), (unsigned __int64)(*a2 < *(_OWORD *)a3) + *(_QWORD *)(a3 + 16)))
      + *(_QWORD *)(a3 + 32));
  v10 = 0LL;
  if ( v9 )
    v10 = *v4;
  v11 = 0LL;
  if ( v9 )
    v11 = v4[1];
  v12 = 0LL;
  if ( v9 )
    v12 = v4[2];
  v13 = 0LL;
  if ( v9 )
    v13 = v4[3];
  v14 = 0LL;
  if ( v9 )
    v14 = v4[4];
  v15 = v4[5];
  if ( !v9 )
    v15 = v10;
  v18 = v10 + v5;
  v17 = v18 >> 64;
  result = v18;
  v20 = __CFADD__(__CFADD__(v10, (_QWORD)v5), *((_QWORD *)&v5 + 1)) | (unsigned __int8)__CFADD__(v11, v17);
  v19 = v20 + v6;
  v22 = __CFADD__(v20, (_QWORD)v6) | (unsigned __int8)__CFADD__(v12, v20 + v6);
  v21 = v22 + *((_QWORD *)&v6 + 1);
  v24 = __CFADD__(v22, *((_QWORD *)&v6 + 1)) | (unsigned __int8)__CFADD__(v13, v22 + *((_QWORD *)&v6 + 1));
  v9 = __CFADD__(v24, v8);
  v23 = v24 + v8;
  *a4 = result;
  a4[1] = v11 + v17;
  a4[2] = v12 + v19;
  a4[3] = v13 + v21;
  a4[4] = v14 + v23;
  a4[5] = v15 + (v9 | (unsigned __int8)__CFADD__(v14, v23)) + v7;
  return result;
}
