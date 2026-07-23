/*
 * XREFs of IopLiveDumpGetExtraMergePages @ 0x140598408
 * Callers:
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B7D0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     <none>
 */

char __fastcall IopLiveDumpGetExtraMergePages(_QWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rbp
  _DWORD *v8; // rax
  __int64 v9; // r11
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  __int64 v18; // r11
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r13
  unsigned int v22; // r8d
  char v23; // r9
  int v24; // esi
  int v25; // r14d
  bool v26; // cf
  signed __int64 *v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+0h] [rbp-68h]
  __int64 v32; // [rsp+8h] [rbp-60h]
  unsigned __int64 v33; // [rsp+18h] [rbp-50h]

  v5 = a1[30];
  v6 = a1 + 25;
  v7 = a1[24];
  v8 = a4;
  v9 = a1[34];
  if ( v5 == v7 && v9 == *v6 )
  {
LABEL_36:
    *v8 = 0;
    return 0;
  }
  v11 = a1[28];
  v12 = v7 - v5;
  v13 = a1[27];
  v14 = 0LL;
  v15 = *v6;
  v16 = 0LL;
  v17 = v15 - v9;
  v18 = 0LL;
  v19 = v11 % BufferChunkSizeInBytes;
  v33 = v19;
  v20 = a1[32] % (unsigned __int64)BufferChunkSizeInBytes;
  v31 = v13 + v11 / BufferChunkSizeInBytes;
  v32 = v13 + a1[32] / (unsigned __int64)BufferChunkSizeInBytes;
  v21 = BufferChunkSizeInBytes;
  v22 = 0;
  if ( (BufferChunkSizeInBytes - v19) >> 12 <= v12 )
    v12 = (BufferChunkSizeInBytes - v19) >> 12;
  v23 = 1;
  if ( (BufferChunkSizeInBytes - v20) >> 12 <= v17 )
    v17 = (BufferChunkSizeInBytes - v20) >> 12;
  while ( 1 )
  {
    if ( v17 )
    {
      v24 = 1;
      if ( v22 <= 1 )
        v16 = *(_QWORD *)((a1[33] + 8 * v18) % v21 + *(_QWORD *)(a1[94] + 8 * ((a1[33] + 8 * v18) / v21 + a1[27]))) >> 12;
    }
    else
    {
      v24 = 0;
    }
    if ( v12 )
    {
      v25 = 1;
      if ( (v22 & 0xFFFFFFFD) != 0 )
        goto LABEL_19;
      v14 = *(_QWORD *)((a1[29] + 8 * v18) % v21 + *(_QWORD *)(a1[94] + 8 * ((a1[29] + 8 * v18) / v21 + a1[27]))) >> 12;
    }
    else
    {
      v25 = 0;
    }
    if ( !v22 )
    {
      if ( !v25 )
      {
        if ( !v24 )
          goto LABEL_34;
        v22 = 1;
        goto LABEL_30;
      }
      if ( !v24 )
      {
        v22 = 2;
        goto LABEL_30;
      }
      v22 = 2 - (v16 < v14);
    }
LABEL_19:
    if ( v22 != 1 )
      break;
    if ( !v24 )
      goto LABEL_34;
    if ( v25 )
    {
      v26 = v14 < v16;
      goto LABEL_29;
    }
LABEL_30:
    if ( v22 == 1 )
    {
      *(_QWORD *)(a2 + 8 * v18) = v16;
      --v17;
      v27 = (signed __int64 *)a1[80];
      v28 = v16;
    }
    else
    {
      *(_QWORD *)(a2 + 8 * v18) = v14;
      --v12;
      v27 = (signed __int64 *)a1[78];
      v28 = v14;
    }
    _bittestandset64(v27, v28);
    v18 = (unsigned int)(v18 + 1);
  }
  if ( !v25 )
    goto LABEL_34;
  if ( !v24 )
    goto LABEL_30;
  v26 = v16 < v14;
LABEL_29:
  if ( !v26 )
    goto LABEL_30;
LABEL_34:
  if ( !(_DWORD)v18 )
  {
    v8 = a4;
    goto LABEL_36;
  }
  v30 = a1[94];
  if ( v22 == 1 )
  {
    *a5 = v32;
    *a3 = *(_QWORD *)(v30 + 8 * v32) + v20;
    if ( v17 || a1[35] == v32 )
      v23 = 0;
    a1[34] += (unsigned int)v18;
    a1[32] += (unsigned int)((_DWORD)v18 << 12);
    a1[33] += 8 * v18;
  }
  else
  {
    *a5 = v31;
    *a3 = *(_QWORD *)(v30 + 8 * v31) + v33;
    if ( v12 || a1[31] == v31 )
      v23 = 0;
    a1[30] += (unsigned int)v18;
    a1[28] += (unsigned int)((_DWORD)v18 << 12);
    a1[29] += 8 * v18;
  }
  *a4 = v18;
  return v23;
}
