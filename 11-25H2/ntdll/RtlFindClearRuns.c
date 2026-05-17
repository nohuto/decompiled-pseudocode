/*
 * XREFs of RtlFindClearRuns @ 0x1800E1870
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800E1830 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRuns(int *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  int v6; // r8d
  char v7; // r15
  unsigned __int8 *v8; // r10
  int v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // eax
  __int64 v13; // rdi
  int v14; // r13d
  int v15; // r11d
  unsigned __int8 v16; // r9
  __int64 v17; // rsi
  unsigned int v18; // edi
  unsigned __int8 j; // r9
  unsigned int v20; // r8d
  unsigned __int8 *v21; // rsi
  __int64 v22; // r12
  int v23; // r15d
  unsigned __int8 k; // si
  unsigned int v25; // ebp
  __int64 v26; // r8
  _QWORD *m; // r14
  unsigned int v28; // r14d
  __int64 v29; // rbp
  _QWORD *i; // r15
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v35; // edx
  __int64 v36; // r8
  _QWORD *n; // r9
  int v38; // [rsp+0h] [rbp-58h]
  int v39; // [rsp+4h] [rbp-54h]
  unsigned int v40; // [rsp+60h] [rbp+8h]

  v4 = a2;
  v5 = a3;
  v6 = *a1;
  v7 = a4;
  v8 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v9 = *a1 & 7;
  v39 = *a1;
  v38 = v9;
  v10 = ((unsigned int)*a1 >> 3) + (v9 != 0);
  v11 = 0;
  v12 = 0;
  v40 = 0;
  LODWORD(v13) = 0;
  v14 = 0;
  v15 = 0;
  while ( v12 < v10 )
  {
    v16 = *v8++;
    if ( v12 == v10 - 1 && v9 )
      v16 |= byte_180181958[v6 & 7];
    if ( !v16 )
    {
      LODWORD(v13) = v13 + 8;
      goto LABEL_6;
    }
    v17 = (unsigned __int8)RtlpBitsClearLow[v16];
    v18 = v17 + v13;
    if ( v18 )
    {
      if ( v11 < v5 )
      {
        v40 = ++v11;
LABEL_26:
        v28 = v11 - 2;
        if ( v7 )
        {
          v29 = (int)v28;
          for ( i = (_QWORD *)(v4 + 8 * ((int)v28 + 1LL)); v29 >= 0 && *((_DWORD *)i - 1) < v18; --i )
          {
            --v28;
            --v29;
            *i = *(i - 1);
          }
          v5 = a3;
          v7 = a4;
        }
        v31 = (int)v28;
        v11 = v40;
        *(_DWORD *)(v4 + 8 * v31 + 12) = v18;
        *(_DWORD *)(v4 + 8 * v31 + 8) = v14;
        if ( !v7 && v40 >= v5 )
          return v11;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(v4 + 8LL * (v11 - 1) + 4) < v18 )
        goto LABEL_26;
    }
LABEL_8:
    v13 = RtlpBitsClearHigh[v16];
    v14 = v15 - v13 + 8;
    for ( j = *((_BYTE *)&unk_180181960 - v13) | byte_180194138[v17] | v16; ; j |= k )
    {
      v20 = v11;
      if ( j == 0xFF )
        break;
      v21 = (unsigned __int8 *)&RtlpBitsClearAnywhere + j;
      if ( v11 >= v5 && *(_DWORD *)(v4 + 8LL * (v11 - 1) + 4) >= (unsigned int)*v21 )
        break;
      v22 = *v21;
      v23 = 0;
      for ( k = byte_180194138[v22]; (k & j) != 0; ++v23 )
        k *= 2;
      ++v11;
      if ( v20 >= v5 )
        v11 = v20;
      v40 = v11;
      v25 = v11 - 2;
      if ( a4 )
      {
        v26 = (int)v25;
        for ( m = (_QWORD *)(a2 + 8 + 8LL * (int)v25); v26 >= 0 && *((_DWORD *)m - 1) < (unsigned int)v22; --m )
        {
          --v25;
          --v26;
          *m = *(m - 1);
        }
        v11 = v40;
      }
      v32 = (int)v25;
      v5 = a3;
      v33 = a2 + 8 * v32;
      LODWORD(v32) = v15 + v23;
      *(_DWORD *)(v33 + 12) = v22;
      v7 = a4;
      *(_DWORD *)(v33 + 8) = v32;
      if ( !a4 && v11 >= a3 )
        return v11;
      v4 = a2;
    }
    LOBYTE(v6) = v39;
    v9 = v38;
LABEL_6:
    ++v12;
    v15 += 8;
  }
  if ( (_DWORD)v13 )
  {
    if ( v11 >= v5 )
    {
      if ( *(_DWORD *)(v4 + 8LL * (v11 - 1) + 4) >= (unsigned int)v13 )
        return v11;
    }
    else
    {
      ++v11;
    }
    v35 = v11 - 2;
    if ( v7 )
    {
      v36 = (int)v35;
      for ( n = (_QWORD *)(v4 + 8 * ((int)v35 + 1LL)); v36 >= 0 && *((_DWORD *)n - 1) < (unsigned int)v13; --n )
      {
        --v35;
        --v36;
        *n = *(n - 1);
      }
    }
    *(_DWORD *)(v4 + 8LL * (int)v35 + 12) = v13;
    *(_DWORD *)(v4 + 8LL * (int)v35 + 8) = v14;
  }
  return v11;
}
