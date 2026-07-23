/*
 * XREFs of Xp10BuildHuffmanEncodings @ 0x140789584
 * Callers:
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x140788490 (Xp10BuildAndWriteHuffmanEncodings.c)
 *     Xp10BuildAndWriteHuffmanTables @ 0x14078885C (Xp10BuildAndWriteHuffmanTables.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall Xp10BuildHuffmanEncodings(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned __int64 v9; // r10
  unsigned __int16 i; // r11
  int v11; // edx
  _WORD *v13; // rcx
  __int64 v14; // r8
  __int16 *v15; // rdx
  __int16 v16; // ax
  __int64 v17; // r9
  unsigned int *v18; // r11
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // eax
  __int16 v22; // r8
  __int64 v23; // rcx
  unsigned __int16 *v24; // r11
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 *v28; // r11
  __int64 v29; // rdi
  __int64 v30; // r9
  unsigned int v31; // r8d
  __int64 v32; // rcx
  int *v33; // rcx
  unsigned __int64 v34; // rdx
  int *v35; // r8
  unsigned __int64 v36; // r9
  int **v37; // r9
  int v38; // eax
  unsigned int v39; // r9d
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // esi
  unsigned int *j; // rcx
  unsigned int v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // r11d
  unsigned __int16 k; // r8
  __int64 v50; // rax
  unsigned int v51; // r10d
  __int64 v52; // r15
  unsigned __int16 m; // r9
  unsigned int v54; // r8d
  unsigned int v55; // edi
  unsigned int v56; // ebp
  __int64 v57; // r14
  __int64 v58; // rcx

  memset_0(a1, 0, 0x97E0uLL);
  v9 = (unsigned __int64)a1;
  for ( i = 0; i < a3; ++i )
  {
    v11 = *(_DWORD *)(a2 + 4LL * i);
    if ( v11 )
    {
      *(_DWORD *)v9 = v11;
      ++*((_WORD *)a1 + (unsigned int)(unsigned __int8)v11 + 16909);
      ++*((_WORD *)a1 + (unsigned int)BYTE1(v11) + 17166);
      ++*((_WORD *)a1 + (unsigned int)BYTE2(v11) + 17423);
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_WORD *)(v9 + 16) = i;
      v9 += 24LL;
    }
  }
  if ( v9 > (unsigned __int64)(a1 + 6) )
  {
    v13 = a1 + 8583;
    v14 = 255LL;
    v15 = (__int16 *)a1 + 17165;
    do
    {
      *(v13 - 257) += *(v15 - 257);
      v16 = *v15++;
      *v13++ += v16;
      v13[256] += v15[256];
      --v14;
    }
    while ( v14 );
    v17 = (__int64)(v9 - (_QWORD)a1) / 24;
    if ( (_DWORD)v17 )
    {
      v18 = a1;
      v19 = (unsigned int)v17;
      v20 = (unsigned int)v17;
      do
      {
        v21 = *v18;
        v22 = *((_WORD *)v18 + 8);
        v18 += 6;
        v23 = *((unsigned __int16 *)a1 + (unsigned __int8)v21 + 16908);
        *((_WORD *)a1 + (unsigned __int8)v21 + 16908) = v23 + 1;
        *((_WORD *)a1 + v23 + 17679) = v22;
        --v20;
      }
      while ( v20 );
      v24 = (unsigned __int16 *)a1 + 17679;
      do
      {
        v25 = *v24++;
        v26 = (unsigned __int8)BYTE1(*(_DWORD *)(a2 + 4 * v25));
        v27 = *((unsigned __int16 *)a1 + v26 + 17165);
        *((_WORD *)a1 + v26 + 17165) = v27 + 1;
        *((_WORD *)a1 + v27 + 18383) = v25;
        --v19;
      }
      while ( v19 );
      v28 = (unsigned __int16 *)a1 + 18383;
      v29 = (unsigned int)v17;
      do
      {
        v30 = *v28++;
        v31 = *(_DWORD *)(a2 + 4 * v30);
        v32 = *((unsigned __int16 *)a1 + BYTE2(v31) + 17422);
        *((_WORD *)a1 + BYTE2(v31) + 17422) = v32 + 1;
        v32 *= 3LL;
        LOWORD(a1[2 * v32 + 4]) = v30;
        a1[2 * v32] = v31;
        --v29;
      }
      while ( v29 );
    }
    while ( 1 )
    {
      *(_QWORD *)(v9 + 8) = a1;
      v33 = (int *)(a1 + 12);
      *(_QWORD *)(v9 + 16) = a1 + 6;
      v34 = v9;
      v35 = (int *)v9;
      *(_DWORD *)v9 = a1[6] + *a1;
      while ( 1 )
      {
        v36 = v34;
        if ( v33 == (int *)v9 && v35 == (int *)v34 )
          break;
        v34 += 24LL;
        if ( v33 == (int *)v9 || (unsigned __int64)v35 < v34 && *v35 < (unsigned int)*v33 )
        {
          v37 = (int **)(v36 + 40);
          *(v37 - 1) = v35;
          v38 = *v35;
          v35 += 6;
        }
        else
        {
          v37 = (int **)(v34 + 16);
          *(_QWORD *)(v34 + 8) = v33;
          v38 = *v33;
          v33 += 6;
        }
        *(_DWORD *)v34 = v38;
        if ( v33 == (int *)v9 || (unsigned __int64)v35 < v34 && *v35 < (unsigned int)*v33 )
        {
          *v37 = v35;
          *(_DWORD *)v34 += *v35;
          v35 += 6;
        }
        else
        {
          *v37 = v33;
          *(_DWORD *)v34 += *v33;
          v33 += 6;
        }
      }
      v39 = 0;
      LODWORD(v40) = 0;
      while ( 1 )
      {
        while ( *(_QWORD *)(v34 + 8) )
        {
          ++v39;
          v42 = 2LL * (unsigned int)v40;
          v43 = 2 * ((unsigned int)v40 + 2114LL);
          LODWORD(v40) = v40 + 1;
          a1[2 * v43] = v39;
          *(_QWORD *)&a1[2 * v42 + 8454] = *(_QWORD *)(v34 + 8);
          v34 = *(_QWORD *)(v34 + 16);
        }
        v41 = *(unsigned __int16 *)(v34 + 16);
        *(_DWORD *)(v34 + 8) = v39;
        *((_BYTE *)a1 + v41 + 38176) = v39;
        if ( !(_DWORD)v40 )
          break;
        v40 = (unsigned int)(v40 - 1);
        v34 = *(_QWORD *)&a1[4 * (unsigned int)v40 + 8454];
        v39 = a1[4 * v40 + 8456];
      }
      v44 = a1[2];
      if ( v44 <= a4 )
        break;
      for ( j = a1; (unsigned __int64)j < v9; j += 6 )
      {
        v46 = *j + 1;
        *((_QWORD *)j + 1) = 0LL;
        *j = v46 >> 1;
      }
    }
    v47 = *(_DWORD *)(v9 - 16);
    v48 = 0;
    for ( k = 0; k < a3; v48 += *(_DWORD *)(a2 + 4 * v50) * *((unsigned __int8 *)a1 + v50 + 38176) )
      v50 = k++;
    v51 = 0;
    if ( v47 <= v44 )
    {
      v52 = a5;
      do
      {
        for ( m = 0; m < a3; ++m )
        {
          if ( *((unsigned __int8 *)a1 + m + 38176) == v47 )
          {
            v54 = 0;
            v55 = v47;
            v56 = v51;
            if ( v47 > 8 )
            {
              v57 = ((v47 - 9) >> 3) + 1;
              do
              {
                v58 = (unsigned __int8)v56;
                v55 -= 8;
                v56 >>= 8;
                v54 = *((unsigned __int8 *)qword_140033A70 + v58) | (v54 << 8);
                --v57;
              }
              while ( v57 );
              v52 = a5;
            }
            if ( v55 )
              v54 = (*((unsigned __int8 *)qword_140033A70 + (unsigned __int8)v56) | (v54 << 8)) >> (8 - v55);
            ++v51;
            *(_DWORD *)(v52 + 4LL * m) = v47 & 0x1F | (32 * v54);
          }
        }
        v51 *= 2;
        ++v47;
      }
      while ( v47 <= v44 );
    }
    return v48;
  }
  else if ( (unsigned int *)v9 == a1 + 6 )
  {
    *(_DWORD *)(a5 + 4LL * *((unsigned __int16 *)a1 + 8)) = 1;
    return *a1;
  }
  else
  {
    return 0LL;
  }
}
