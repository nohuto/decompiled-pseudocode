/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x140385D00
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x1403854A0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140494760 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  char *v2; // r15
  char *v3; // rbx
  _DWORD *v4; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  _WORD *v8; // rcx
  __int64 v9; // rdx
  char *v10; // r8
  int v11; // eax
  __int64 v12; // r11
  unsigned __int16 *v13; // r10
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  char *v16; // rcx
  __int64 v17; // rdx
  char *v18; // rdx
  char *v19; // rcx
  char *v20; // r8
  char *v21; // r9
  char **v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  _QWORD *v25; // rdx
  __int64 v26; // r10
  __int64 *j; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  unsigned __int64 *v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r9
  __int64 v33; // r11
  __int64 k; // rbp
  __int64 v35; // rdi
  _BYTE *v36; // r10
  unsigned __int64 v37; // rax
  unsigned __int8 *v38; // rdx
  unsigned int *v39; // r8
  char *v40; // rbx
  __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  __int64 v44; // r8
  char v45; // dl

  memset_0(a1 + 3331, 0, 0x202uLL);
  memset_0((char *)a1 + 27162, 0, 0x202uLL);
  v2 = (char *)(a1 + 256);
  v3 = (char *)(a1 + 256);
  memset_0(a1 + 3588, 0, 0x200uLL);
  v4 = a1 + 3652;
  for ( i = 0LL; i < 0x200; ++i )
  {
    v6 = (unsigned int)*v4;
    if ( *v4 )
    {
      *(_QWORD *)v3 = v6;
      ++*((_WORD *)a1 + (unsigned __int8)v6 + 13325);
      ++*((_WORD *)a1 + (v6 >> 8) + 13582);
      *((_QWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 2) = i;
      v3 += 24;
    }
    ++v4;
  }
  memset_0(a1 + 3908, 0, 0x100uLL);
  v7 = a1 + 259;
  if ( v3 <= (char *)a1 + 2072 )
  {
    if ( v3 == v2 )
    {
      return 0LL;
    }
    else
    {
      v44 = a1[258];
      v45 = 16;
      if ( (v44 & 1) == 0 )
        v45 = 1;
      *((_BYTE *)a1 + (a1[258] >> 1) + 31264) = v45;
      *((_DWORD *)a1 + v44) = 1;
      return *(_QWORD *)v2;
    }
  }
  else
  {
    v8 = (_WORD *)a1 + 13325;
    v9 = 255LL;
    do
    {
      *v8 += *(v8 - 1);
      v8[257] += v8[256];
      ++v8;
      --v9;
    }
    while ( v9 );
    v10 = (char *)(a1 + 256);
    if ( v2 < v3 )
    {
      do
      {
        *((_WORD *)a1 + *((unsigned __int16 *)a1 + (unsigned __int8)*(_DWORD *)v10 + 13324) + 13838) = *((_WORD *)v10 + 8);
        v11 = *(_DWORD *)v10;
        v10 += 24;
        ++*((_WORD *)a1 + (unsigned __int8)v11 + 13324);
      }
      while ( v10 < v3 );
    }
    v12 = (v3 - (char *)a1 - 2048) / 24;
    if ( v12 )
    {
      v13 = (unsigned __int16 *)a1 + 13838;
      do
      {
        v14 = *v13++;
        v15 = *((unsigned int *)a1 + v14 + 7304);
        v16 = (char *)a1 + 2 * (v15 >> 8);
        v17 = *((unsigned __int16 *)v16 + 13581);
        *((_WORD *)v16 + 13581) = v17 + 1;
        a1[3 * v17 + 258] = v14;
        a1[3 * v17 + 256] = v15;
        --v12;
      }
      while ( v12 );
    }
    while ( 1 )
    {
      *((_QWORD *)v3 + 1) = v2;
      v18 = (char *)(a1 + 262);
      *((_QWORD *)v3 + 2) = v7;
      v19 = v3;
      v20 = v3;
      *(_QWORD *)v3 = *v7 + *(_QWORD *)v2;
      while ( 1 )
      {
        v21 = v19;
        if ( v18 == v3 && v20 == v19 )
          break;
        v19 += 24;
        if ( v18 == v3 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
        {
          v22 = (char **)(v21 + 40);
          *(v22 - 1) = v20;
          v23 = *(_QWORD *)v20;
          v20 += 24;
        }
        else
        {
          *((_QWORD *)v19 + 1) = v18;
          v22 = (char **)(v19 + 16);
          v23 = *(_QWORD *)v18;
          v18 += 24;
        }
        *(_QWORD *)v19 = v23;
        if ( v18 == v3 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
        {
          *v22 = v20;
          *(_QWORD *)v19 += *(_QWORD *)v20;
          v20 += 24;
        }
        else
        {
          *v22 = v18;
          *(_QWORD *)v19 += *(_QWORD *)v18;
          v18 += 24;
        }
      }
      v24 = 0LL;
      v25 = a1 + 3331;
      v26 = 0LL;
      for ( j = a1 + 3332; ; v24 = *j )
      {
        while ( *((_QWORD *)v19 + 1) )
        {
          ++v24;
          ++v26;
          *j = v24;
          j += 2;
          *v25 = *((_QWORD *)v19 + 1);
          v25 += 2;
          v19 = (char *)*((_QWORD *)v19 + 2);
        }
        v28 = *((_QWORD *)v19 + 2);
        *((_QWORD *)v19 + 1) = v24;
        *((_BYTE *)a1 + v28 + 28704) = v24;
        if ( !v26 )
          break;
        v19 = (char *)*(v25 - 2);
        j -= 2;
        --v26;
        v25 -= 2;
      }
      v29 = a1[257];
      if ( v29 <= 0xF )
        break;
      v30 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v31 = *v30 + 1;
          v30[1] = 0LL;
          *v30 = v31 >> 1;
          v30 += 3;
        }
        while ( v30 < (unsigned __int64 *)v3 );
      }
    }
    v32 = *((_QWORD *)v3 - 2);
    v33 = 0LL;
    for ( k = 0LL; v32 <= v29; k += v42 )
    {
      v35 = 0LL;
      v36 = a1 + 3908;
      v37 = 0LL;
      v38 = (unsigned __int8 *)(a1 + 3588);
      v39 = (unsigned int *)(a1 + 3652);
      v40 = (char *)a1 + 2;
      do
      {
        if ( *v38 == v32 )
        {
          v41 = *v39;
          *v36 |= v32;
          v35 += v41;
          *(_WORD *)&v40[2 * v37] = v33++;
          LOWORD(a1[v37]) = v32;
        }
        if ( v38[1] == v32 )
        {
          v35 += v39[1];
          *v36 |= 16 * (_BYTE)v32;
          *(_WORD *)&v40[2 * v37 + 4] = v33++;
          WORD2(a1[v37]) = v32;
        }
        else
        {
          v40 = (char *)a1 + 2;
        }
        ++v36;
        ++v37;
        v38 += 2;
        v39 += 2;
      }
      while ( v37 < 256 );
      v42 = v32 * v35;
      v33 *= 2LL;
      ++v32;
    }
    return k;
  }
}
