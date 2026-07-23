/*
 * XREFs of Xp10BuildAndWriteHuffmanEncodings @ 0x18014B818
 * Callers:
 *     Xp10ExecuteHuffmanEncode @ 0x18014D41C (Xp10ExecuteHuffmanEncode.c)
 * Callees:
 *     Xp10BuildAndWriteHuffmanTables @ 0x18014BBE8 (Xp10BuildAndWriteHuffmanTables.c)
 *     Xp10BuildHuffmanEncodings @ 0x18014C8E0 (Xp10BuildHuffmanEncodings.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanEncodings(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned int v8; // r9d
  int v10; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  _DWORD *v14; // rax
  __int64 v15; // r8
  int v16; // r8d
  int v17; // ebp
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  int v20; // ebp
  __int64 v21; // r12
  int v22; // r14d
  unsigned int v23; // edi
  unsigned int v24; // r9d
  unsigned int v25; // r15d
  _BYTE *v26; // r8
  unsigned int v27; // r10d
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE *v30; // r8
  unsigned int v31; // edx
  unsigned __int64 v32; // rcx
  __int64 result; // rax
  unsigned int v34; // r13d
  unsigned int v35; // r14d
  __int64 v36; // r8
  unsigned int *v37; // r14
  unsigned int v38; // edx
  unsigned int v39; // r9d
  unsigned int v40; // r11d
  __int64 v41; // r12
  __int64 v42; // rcx
  unsigned int *v43; // r11
  unsigned int v44; // edx
  unsigned int v45; // r10d
  unsigned int v46; // r9d
  __int64 v47; // r14
  __int64 v48; // rcx
  _BYTE *v49; // rbx
  void *v50; // rcx
  unsigned int v51; // ecx
  unsigned int v52; // edx
  __int64 v53; // rax
  _BYTE *v54; // rbx
  unsigned __int64 v55; // rcx
  unsigned int v56; // [rsp+30h] [rbp-58h]
  unsigned int v57; // [rsp+34h] [rbp-54h]
  unsigned int v58; // [rsp+A0h] [rbp+18h]

  _BitScanReverse(&v8, a3);
  v10 = 0;
  v58 = v8;
  v56 = v8 + 1;
  v12 = 0;
  v13 = (1 << (v8 + 1)) - a3;
  if ( v13 )
  {
    v14 = a2;
    v15 = v13;
    v12 = v13;
    do
    {
      v10 += *v14++;
      --v15;
    }
    while ( v15 );
  }
  v16 = 0;
  v17 = v10 * v8;
  if ( v12 < a3 )
  {
    v18 = &a2[v12];
    v19 = a3 - v12;
    do
    {
      v16 += *v18++;
      --v19;
    }
    while ( v19 );
  }
  v20 = v16 * (v8 + 1) + v17;
  v21 = a6;
  v22 = Xp10BuildHuffmanEncodings(a1, (_DWORD)a2, a3, 27, (__int64)a5);
  v23 = 2;
  v24 = 2;
  v25 = *(_DWORD *)(a6 + 8);
  v26 = (_BYTE *)(((unsigned __int64)v25 >> 3) + *(_QWORD *)a6);
  v27 = 8 - (v25 & 7);
  if ( v25 + 2 <= *(_DWORD *)(a6 + 12) || (v24 = *(_DWORD *)(a6 + 12) - v25) != 0 )
  {
    v28 = v27;
    if ( v27 >= v24 )
      v28 = v24;
    *v26 |= (byte_1801847A8[4 * v28] & 2) << (v25 & 7);
    v29 = v24 - (unsigned int)v28;
    v30 = v26 + 1;
    v31 = 2u >> v27;
    if ( (unsigned int)v29 >= 8 )
    {
      v32 = (unsigned __int64)(unsigned int)v29 >> 3;
      do
      {
        *v30 = v31;
        v29 = (unsigned int)(v29 - 8);
        v31 >>= 8;
        ++v30;
        --v32;
      }
      while ( v32 );
    }
    if ( (_DWORD)v29 )
      *v30 |= (unsigned __int8)v31 & byte_1801847A8[4 * v29];
    *(_DWORD *)(a6 + 8) = v25 + v24;
  }
  result = Xp10BuildAndWriteHuffmanTables(a1, a5, a3, a6);
  if ( (int)result >= 0 )
  {
    v34 = v20 + 2;
    v35 = *(_DWORD *)(a6 + 8) - v25 + v22;
    v57 = *(_DWORD *)(a6 + 8) - v25;
    if ( v20 + 2 > v35 )
    {
      v34 = v35;
    }
    else
    {
      v36 = 0LL;
      if ( v13 )
      {
        v37 = a5;
        do
        {
          v38 = 0;
          v39 = v58;
          v40 = v36;
          if ( v58 > 8 )
          {
            v41 = ((v58 - 9) >> 3) + 1;
            do
            {
              v42 = (unsigned __int8)v40;
              v39 -= 8;
              v40 >>= 8;
              v38 = byte_180196DE0[v42] | (v38 << 8);
              --v41;
            }
            while ( v41 );
          }
          if ( v39 )
            v38 = (byte_180196DE0[(unsigned __int8)v40] | (v38 << 8)) >> (8 - v39);
          v36 = (unsigned int)(v36 + 1);
          *v37++ = v58 & 0x1F | (32 * v38);
        }
        while ( (unsigned int)v36 < v13 );
        v21 = a6;
        v34 = v20 + 2;
      }
      if ( (unsigned int)v36 < a3 )
      {
        v43 = &a5[v36];
        do
        {
          v44 = 0;
          v45 = v36 + v13;
          v46 = v56;
          if ( v56 > 8 )
          {
            v47 = ((v56 - 9) >> 3) + 1;
            do
            {
              v48 = (unsigned __int8)v45;
              v46 -= 8;
              v45 >>= 8;
              v44 = byte_180196DE0[v48] | (v44 << 8);
              --v47;
            }
            while ( v47 );
          }
          if ( v46 )
            v44 = (byte_180196DE0[(unsigned __int8)v45] | (v44 << 8)) >> (8 - v46);
          LODWORD(v36) = v36 + 1;
          *v43++ = v56 & 0x1F | (32 * v44);
        }
        while ( (unsigned int)v36 < a3 );
        v21 = a6;
        v34 = v20 + 2;
      }
      v49 = (_BYTE *)(*(_QWORD *)v21 + ((unsigned __int64)v25 >> 3));
      v50 = (void *)(*(_QWORD *)v21 + ((unsigned __int64)(v25 + 7) >> 3));
      *v49 &= byte_1801847A8[4 * (v25 & 7)];
      memset_thunk_772440563353939046(v50, 0, (unsigned __int64)(v57 + 7) >> 3);
      *(_DWORD *)(v21 + 8) = v25;
      if ( v25 + 2 <= *(_DWORD *)(v21 + 12) || (v23 = *(_DWORD *)(v21 + 12) - v25) != 0 )
      {
        v51 = 8 - (v25 & 7);
        if ( v51 >= v23 )
          v51 = v23;
        v52 = 0;
        v53 = v23 - v51;
        v54 = v49 + 1;
        if ( (unsigned int)v53 >= 8 )
        {
          v55 = (unsigned __int64)(unsigned int)v53 >> 3;
          do
          {
            *v54 = v52;
            v53 = (unsigned int)(v53 - 8);
            v52 >>= 8;
            ++v54;
            --v55;
          }
          while ( v55 );
        }
        if ( (_DWORD)v53 )
          *v54 |= (unsigned __int8)v52 & byte_1801847A8[4 * v53];
        *(_DWORD *)(v21 + 8) = v23 + v25;
      }
    }
    *a7 = v34;
    return 0LL;
  }
  return result;
}
