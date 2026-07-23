/*
 * XREFs of SymCryptFdefModSub256Asm @ 0x140532AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModSub256Asm(__int64 a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 *v4; // rcx
  __int128 v5; // kr00_16
  __int64 v6; // rsi
  __int64 v7; // r11
  bool v8; // cf
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // r10
  unsigned __int128 v15; // kr10_16
  __int64 v16; // r11
  __int64 v17; // rtt

  v4 = (unsigned __int64 *)(a1 + 128);
  v5 = *a2 - *(_OWORD *)a3;
  v8 = a2[1] < __PAIR128__(*(_QWORD *)(a3 + 24), (unsigned __int64)(*a2 < *(_OWORD *)a3) + *(_QWORD *)(a3 + 16));
  v6 = (a2[1] - __PAIR128__(*(_QWORD *)(a3 + 24), (unsigned __int64)(*a2 < *(_OWORD *)a3) + *(_QWORD *)(a3 + 16))) >> 64;
  v7 = *((_QWORD *)a2 + 2) - ((*a2 < *(_OWORD *)a3) + *(_QWORD *)(a3 + 16));
  v9 = 0LL;
  if ( v8 )
    v9 = *v4;
  v10 = 0LL;
  if ( v8 )
    v10 = v4[1];
  v11 = 0LL;
  if ( v8 )
    v11 = v4[2];
  v12 = v4[3];
  if ( !v8 )
    v12 = v9;
  v15 = v9 + v5;
  v14 = v15 >> 64;
  result = v15;
  v17 = __CFADD__(__CFADD__(v9, (_QWORD)v5), *((_QWORD *)&v5 + 1)) | (unsigned __int8)__CFADD__(v10, v14);
  v8 = __CFADD__(v17, v7);
  v16 = v17 + v7;
  *a4 = result;
  a4[1] = v10 + v14;
  a4[2] = v11 + v16;
  a4[3] = v12 + (v8 | (unsigned __int8)__CFADD__(v11, v16)) + v6;
  return result;
}
