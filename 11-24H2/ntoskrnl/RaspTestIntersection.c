/*
 * XREFs of RaspTestIntersection @ 0x14045E4A8
 * Callers:
 *     RaspScanConvert @ 0x14045E04C (RaspScanConvert.c)
 * Callees:
 *     BgpFmSqrt @ 0x14045E768 (BgpFmSqrt.c)
 */

__int64 __fastcall RaspTestIntersection(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r10
  _DWORD *v5; // r11
  _DWORD *v6; // r13
  _DWORD *v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r8
  bool v19; // cc
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // r10
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  __int64 v29; // r10
  __int64 v30; // rcx
  bool v31; // cc
  __int64 v32; // [rsp+20h] [rbp-38h]
  __int64 v33; // [rsp+28h] [rbp-30h]

  v4 = *(_DWORD **)a1;
  v5 = a4;
  v6 = *(_DWORD **)(a1 + 8);
  v9 = *(_DWORD **)(a1 + 16);
  v32 = *v4 + v4[2];
  v10 = v4[1] + v4[3];
  v11 = v6[1] + v6[3];
  v33 = *v9 + v9[2];
  v12 = a2;
  v13 = v32 << 16;
  v14 = (__int64)a2 << 16;
  v15 = v10 << 16;
  v16 = v11 << 16;
  v17 = v33 << 16;
  v18 = (__int64)(v9[1] + v9[3]) << 16;
  if ( v10 << 16 == v18 )
  {
    if ( v15 == v14 )
      goto LABEL_12;
  }
  else if ( v15 == v14 )
  {
    goto LABEL_7;
  }
  if ( v18 == v14 )
  {
LABEL_7:
    ++v14;
    if ( *(_BYTE *)(a1 + 24) != 1 )
      goto LABEL_8;
LABEL_31:
    result = 0x7FFFFFFFLL;
    *v5 = 0x7FFFFFFF;
    v31 = v15 < v14;
    if ( v15 > v14 )
    {
      if ( v18 > v14 )
      {
LABEL_37:
        *a3 = result;
        return result;
      }
      v31 = v15 < v14;
    }
    if ( !v31 || v18 >= v14 )
      result = (v13 + (v17 - v13) * (v14 - v15) / (v18 - v15)) / 0x10000;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(a1 + 24) == 1 )
    goto LABEL_31;
  if ( v16 == v14 )
    ++v14;
LABEL_8:
  v19 = v15 < v14;
  if ( v15 > v14 )
  {
    if ( v16 <= v14 )
      goto LABEL_10;
    if ( v18 > v14 )
      goto LABEL_12;
    v19 = v15 < v14;
  }
  if ( v19 && v18 < v14 && v16 < v14 )
    goto LABEL_12;
LABEL_10:
  if ( v15 + v18 - ((__int64)(v6[1] + v6[3]) << 17) )
  {
    v20 = *v6 + v6[2];
    v21 = v10 + v9[1] + v9[3] - 2 * v11;
    v22 = 2 * (v11 - v10);
    v23 = v22 * v22 - 4 * v21 * (v10 - v12);
    if ( v23 < 0 )
    {
LABEL_12:
      result = 0x7FFFFFFFLL;
      *a3 = 0x7FFFFFFF;
LABEL_13:
      *v5 = 0x7FFFFFFF;
      return result;
    }
    v25 = BgpFmSqrt(v23);
    v26 = -65536 * v22;
    v27 = (v26 + v25) / (2 * v21);
    v28 = (v26 - v25) / (2 * v21);
    v29 = (__int64)(v33 * v27 * v27 + (0x10000 - v27) * (v32 * (0x10000 - v27) + 2 * v20 * v27)) / 0x100000000LL;
    *a3 = v29;
    *v5 = (__int64)(v33 * v28 * v28 + (0x10000 - v28) * (v32 * (0x10000 - v28) + 2 * v20 * v28)) / 0x100000000LL;
    v30 = (__int64)(v33 * v28 * v28 + (0x10000 - v28) * (v32 * (0x10000 - v28) + 2 * v20 * v28)) / 0x100000000LL;
    result = 0x7FFFFFFFLL;
    if ( v27 > 0x10000 )
    {
      *a3 = 0x7FFFFFFF;
      LODWORD(v29) = 0x7FFFFFFF;
    }
    if ( v28 > 0x10000 )
    {
      *v5 = 0x7FFFFFFF;
      LODWORD(v30) = 0x7FFFFFFF;
    }
    if ( (int)v29 <= (int)v30 )
    {
      if ( (_DWORD)v29 == (_DWORD)v30 )
        goto LABEL_13;
    }
    else
    {
      *a3 = v30;
      *v5 = v29;
    }
  }
  else
  {
    *v5 = 0x7FFFFFFF;
    result = (v13 + (v17 - v13) * (v14 - v15) / (v18 - v15)) / 0x10000;
    *a3 = result;
  }
  return result;
}
