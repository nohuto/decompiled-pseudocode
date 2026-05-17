/*
 * XREFs of RtlpHpVsSlotCompactChunks @ 0x18011B6CC
 * Callers:
 *     RtlpHpVsSlotCompact @ 0x18011B65C (RtlpHpVsSlotCompact.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHpVsSubsegmentFree @ 0x18004F2C4 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180051B80 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsChunkFree @ 0x180053BC0 (RtlpHpVsChunkFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 *__fastcall RtlpHpVsSlotCompactChunks(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  unsigned __int64 v17; // rdi
  unsigned int v18; // r13d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // r8d
  __int64 *v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r13d
  unsigned __int64 v26; // r10
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *result; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v40; // [rsp+38h] [rbp-60h]
  __int128 v41; // [rsp+40h] [rbp-58h] BYREF
  __int64 v42; // [rsp+50h] [rbp-48h]

  v33 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v3 = a2;
  v41 = 0LL;
  v42 = 0LL;
  v40 = &v39;
  v39 = (__int64)&v39;
  if ( v33 )
  {
    *((_QWORD *)&v41 + 1) = a2 + 8;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 8), (volatile signed __int32 **)a2, a3);
    v3 = a2;
  }
  v5 = (unsigned __int64 *)(v3 + 16);
  v6 = 0LL;
  v7 = *(_QWORD *)(v3 + 16);
  if ( (*(_BYTE *)(v3 + 24) & 1) == 0 )
    goto LABEL_6;
  if ( v7 )
  {
    v7 ^= (unsigned __int64)v5;
LABEL_6:
    while ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      v6 = v7;
      if ( (*(_BYTE *)(v3 + 24) & 1) != 0 && v8 )
        v7 ^= v8;
      else
        v7 = *(_QWORD *)(v7 + 8);
    }
  }
  v9 = RtlpHpHeapGlobals;
  while ( v6 )
  {
    v10 = v6 - 8;
    v11 = *(_QWORD *)(v6 - 8);
    v12 = v6 - 8;
    v13 = HIDWORD(v9) ^ HIDWORD(v11) ^ ((v6 - 8) >> 32);
    if ( (v13 & 0xFF0000) != 0 )
    {
      v14 = *(_DWORD *)v6 ^ v10;
      goto LABEL_19;
    }
    if ( (_WORD)v13 )
    {
      v12 -= 16LL * (unsigned __int16)(WORD2(v9) ^ HIDWORD(*(_QWORD *)(v6 - 8)) ^ ((v6 - 8) >> 32));
      v15 = HIDWORD(*(_QWORD *)v12) ^ HIDWORD(v9) ^ HIDWORD(v12);
      if ( (v15 & 0xFF0000) != 0 )
        goto LABEL_18;
      if ( (_WORD)v15 )
      {
        v12 -= 16LL * (unsigned __int16)(HIDWORD(*(_QWORD *)v12) ^ WORD2(v9) ^ WORD2(v12));
LABEL_18:
        v14 = *(_DWORD *)(v12 + 8) ^ v12;
LABEL_19:
        v16 = (unsigned __int8)(v9 ^ v14);
        goto LABEL_23;
      }
    }
    v16 = 0;
LABEL_23:
    v17 = (v12 - (unsigned int)(v16 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( ((HIDWORD(v10) ^ HIDWORD(v9) ^ HIDWORD(v11)) & 0xFF0000) != 0
      || (((unsigned __int16)(*(_WORD *)(v17 + 32) ^ *(_WORD *)(v17 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
    {
      RtlpLogHeapFailure(18, *(_QWORD *)(a1 + 8) ^ a1, v17, v6 - 8, 0LL, 0LL);
      break;
    }
    v18 = v9 ^ *(_DWORD *)v10 ^ v10;
    v19 = 16 * HIWORD(v18);
    if ( v19 < 0x1000 )
      break;
    v20 = (v10 + v19 - v17) & 0xFFFFF000;
    v21 = (v10 - v17 + 4127) & 0xFFFFF000;
    if ( v21 < v20
      && (*(_QWORD *)(v17 + 16) & (-1LL << (v21 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                   - (unsigned __int8)((unsigned __int64)(v20 - 1) >> 12)))) != 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, v3, v17, (_DWORD *)(v6 - 8));
      *(_BYTE *)(v10 + 6) = BYTE6(v10) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
      *(_DWORD *)v6 = (unsigned __int8)(RtlpHpHeapGlobals ^ v10 ^ ((unsigned int)(v10 - v17) >> 12));
      v22 = (__int64 *)RtlpHpVsChunkFree(a1, a2, v17, v6 - 8, 1, (__int64)&v41);
      if ( v22 )
      {
        v23 = v40;
        if ( (__int64 *)*v40 != &v39 )
LABEL_89:
          __fastfail(3u);
        v22[1] = (__int64)v40;
        *v22 = (__int64)&v39;
        *v23 = (__int64)v22;
        v40 = v22;
      }
      if ( *(_WORD *)(a1 + 6) )
        v24 = *(_QWORD *)(*(__int16 *)(a1 + 6) + a1 + 32);
      else
        v24 = *(_QWORD *)(a1 + 88);
      if ( !v24 )
        break;
      v25 = v18 + 1;
      if ( (v5[1] & 1) != 0 )
      {
        if ( *v5 )
          v6 = *v5 ^ (unsigned __int64)v5;
        else
          v6 = 0LL;
      }
      else
      {
        v6 = *v5;
      }
      v26 = 0LL;
      v9 = RtlpHpHeapGlobals;
      while ( v6 )
      {
        v27 = RtlpHpHeapGlobals ^ *(_DWORD *)(v6 - 8) ^ (v6 - 8);
        if ( v25 >= v27 )
        {
          if ( v25 <= v27 )
            goto LABEL_61;
          v28 = *(_QWORD *)(v6 + 8);
        }
        else
        {
          v28 = *(_QWORD *)v6;
          v26 = v6;
        }
        if ( (v5[1] & 1) != 0 && v28 )
          v6 ^= v28;
        else
          v6 = v28;
      }
      v6 = v26;
      v33 = v26 == 0;
      v3 = a2;
      if ( !v33 )
        continue;
      v6 = 0LL;
      if ( (v5[1] & 1) != 0 )
      {
        if ( !*v5 )
          goto LABEL_61;
        v29 = *v5 ^ (unsigned __int64)v5;
      }
      else
      {
        v29 = *v5;
      }
      while ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 8);
        v6 = v29;
        if ( (v5[1] & 1) != 0 && v30 )
          v29 ^= v30;
        else
          v29 = *(_QWORD *)(v29 + 8);
      }
LABEL_61:
      v3 = a2;
    }
    else
    {
      v31 = v6;
      v32 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 )
      {
        v33 = (*(_BYTE *)(a1 + 5) & 1) == 0;
LABEL_66:
        if ( !v33 )
        {
          v6 ^= v32;
          goto LABEL_69;
        }
        while ( 1 )
        {
          v6 = v32;
LABEL_69:
          if ( !*(_QWORD *)(v6 + 8) )
            break;
          v32 = *(_QWORD *)(v6 + 8);
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 )
          {
            v33 = v32 == 0;
            goto LABEL_66;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v35 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v35 )
            v6 ^= v35;
          else
            v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 )
            break;
          v34 = *(_QWORD *)(v6 + 8);
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v34 )
            v34 ^= v6;
          if ( v34 == v31 )
            break;
          v31 = v6;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(*((volatile signed __int64 **)&v41 + 1));
  while ( 1 )
  {
    v36 = v39;
    result = &v39;
    if ( (__int64 *)v39 == &v39 )
      return result;
    if ( *(__int64 **)(v39 + 8) != &v39 )
      goto LABEL_89;
    v38 = *(_QWORD *)v39;
    if ( *(_QWORD *)(*(_QWORD *)v39 + 8LL) != v39 )
      goto LABEL_89;
    v39 = *(_QWORD *)v39;
    *(_QWORD *)(v38 + 8) = &v39;
    RtlpHpVsSubsegmentFree(a1, v36);
  }
}
