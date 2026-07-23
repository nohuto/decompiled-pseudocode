/*
 * XREFs of RtlpHpVsSlotCompactChunks @ 0x1404F021C
 * Callers:
 *     RtlpHpVsContextCompact @ 0x1403C7B4C (RtlpHpVsContextCompact.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140213800 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkFree @ 0x1402E1780 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1402E4990 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140320690 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentFree @ 0x1403CB9D4 (RtlpHpVsSubsegmentFree.c)
 */

__int64 *__fastcall RtlpHpVsSlotCompactChunks(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned __int64 *v4; // r15
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  unsigned __int64 v15; // rdi
  unsigned int v16; // r13d
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r8d
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r13d
  unsigned __int64 v25; // r9
  unsigned int v26; // eax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  bool v32; // zf
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *result; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v39; // [rsp+38h] [rbp-60h]
  __int128 v40; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+50h] [rbp-48h]

  v32 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v2 = a2;
  v40 = 0LL;
  v41 = 0LL;
  v39 = &v38;
  v38 = (__int64)&v38;
  if ( v32 )
  {
    RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(a1 + 3), (__int64)&v40);
    v2 = a2;
  }
  v4 = (unsigned __int64 *)(v2 + 16);
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 16);
  if ( (*(_BYTE *)(v2 + 24) & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_12;
    v6 ^= (unsigned __int64)v4;
  }
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    v5 = v6;
    if ( (*(_BYTE *)(v2 + 24) & 1) != 0 && v7 )
      v6 ^= v7;
    else
      v6 = *(_QWORD *)(v6 + 8);
  }
LABEL_12:
  while ( v5 )
  {
    v8 = v5 - 8;
    v9 = *(_QWORD *)(v5 - 8);
    v10 = v5 - 8;
    v11 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v9) ^ ((v5 - 8) >> 32);
    if ( (v11 & 0xFF0000) != 0 )
    {
      v12 = *(_DWORD *)v5 ^ v8;
      goto LABEL_18;
    }
    if ( (_WORD)v11 )
    {
      v10 -= 16LL * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)(v5 - 8)) ^ ((v5 - 8) >> 32));
      v13 = HIDWORD(*(_QWORD *)v10) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v10);
      if ( (v13 & 0xFF0000) != 0 )
        goto LABEL_17;
      if ( (_WORD)v13 )
      {
        v10 -= 16LL * (unsigned __int16)(HIDWORD(*(_QWORD *)v10) ^ WORD2(RtlpHpHeapGlobals) ^ WORD2(v10));
LABEL_17:
        v12 = *(_DWORD *)(v10 + 8) ^ v10;
LABEL_18:
        v14 = (unsigned __int8)(RtlpHpHeapGlobals ^ v12);
        goto LABEL_22;
      }
    }
    v14 = 0;
LABEL_22:
    v15 = (v10 - (unsigned int)(v14 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( ((HIDWORD(v8) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v9)) & 0xFF0000) != 0
      || (((unsigned __int16)(*(_WORD *)(v15 + 32) ^ *(_WORD *)(v15 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
    {
      RtlpLogHeapFailure(18, *(_QWORD *)(a1 + 8) ^ a1, v15, v5 - 8, 0LL, 0LL);
      break;
    }
    v16 = RtlpHpHeapGlobals ^ *(_DWORD *)v8 ^ v8;
    v17 = 16 * HIWORD(v16);
    if ( v17 < 0x1000 )
      break;
    v18 = (v8 + v17 - v15) & 0xFFFFF000;
    v19 = (v8 - v15 + 4127) & 0xFFFFF000;
    if ( v19 < v18
      && (*(_QWORD *)(v15 + 16) & (-1LL << (v19 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                   - (unsigned __int8)((unsigned __int64)(v18 - 1) >> 12)))) != 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, (_RTL_RB_TREE *)v2, v15, v5 - 8);
      *(_BYTE *)(v8 + 6) = BYTE6(v8) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
      *(_DWORD *)v5 = (unsigned __int8)(RtlpHpHeapGlobals ^ v8 ^ ((unsigned int)(v8 - v15) >> 12));
      v20 = (__int64 *)RtlpHpVsChunkFree(a1, a2, v15, v5 - 8, 1, (__int64)&v40);
      if ( v20 )
      {
        v21 = v39;
        if ( (__int64 *)*v39 != &v38 )
LABEL_88:
          __fastfail(3u);
        v20[1] = (__int64)v39;
        *v20 = (__int64)&v38;
        *v21 = (__int64)v20;
        v39 = v20;
      }
      v22 = *(__int16 *)(a1 + 6);
      if ( (_WORD)v22 )
        v23 = *(_QWORD *)(v22 + a1 + 32);
      else
        v23 = *(_QWORD *)(a1 + 88);
      if ( !v23 )
        break;
      v24 = v16 + 1;
      if ( (v4[1] & 1) != 0 )
      {
        if ( *v4 )
          v5 = *v4 ^ (unsigned __int64)v4;
        else
          v5 = 0LL;
      }
      else
      {
        v5 = *v4;
      }
      v25 = 0LL;
      while ( v5 )
      {
        v26 = RtlpHpHeapGlobals ^ *(_DWORD *)(v5 - 8) ^ (v5 - 8);
        if ( v24 >= v26 )
        {
          if ( v24 <= v26 )
            goto LABEL_60;
          v27 = *(_QWORD *)(v5 + 8);
        }
        else
        {
          v27 = *(_QWORD *)v5;
          v25 = v5;
        }
        if ( (v4[1] & 1) != 0 && v27 )
          v5 ^= v27;
        else
          v5 = v27;
      }
      v2 = a2;
      v5 = v25;
      if ( v25 )
        continue;
      v5 = 0LL;
      if ( (v4[1] & 1) != 0 )
      {
        if ( !*v4 )
          goto LABEL_60;
        v28 = *v4 ^ (unsigned __int64)v4;
      }
      else
      {
        v28 = *v4;
      }
      while ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 8);
        v5 = v28;
        if ( (v4[1] & 1) != 0 && v29 )
          v28 ^= v29;
        else
          v28 = *(_QWORD *)(v28 + 8);
      }
LABEL_60:
      v2 = a2;
    }
    else
    {
      v30 = v5;
      v31 = *(_QWORD *)v5;
      if ( *(_QWORD *)v5 )
      {
        v32 = (*(_BYTE *)(a1 + 5) & 1) == 0;
LABEL_65:
        if ( !v32 )
        {
          v5 ^= v31;
          goto LABEL_68;
        }
        while ( 1 )
        {
          v5 = v31;
LABEL_68:
          if ( !*(_QWORD *)(v5 + 8) )
            break;
          v31 = *(_QWORD *)(v5 + 8);
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 )
          {
            v32 = v31 == 0;
            goto LABEL_65;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v34 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v34 )
            v5 ^= v34;
          else
            v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v5 )
            break;
          v33 = *(_QWORD *)(v5 + 8);
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v33 )
            v33 ^= v5;
          if ( v33 == v30 )
            break;
          v30 = v5;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), (__int64)&v40);
  while ( 1 )
  {
    v35 = v38;
    result = &v38;
    if ( (__int64 *)v38 == &v38 )
      return result;
    if ( *(__int64 **)(v38 + 8) != &v38 )
      goto LABEL_88;
    v37 = *(_QWORD *)v38;
    if ( *(_QWORD *)(*(_QWORD *)v38 + 8LL) != v38 )
      goto LABEL_88;
    v38 = *(_QWORD *)v38;
    *(_QWORD *)(v37 + 8) = &v38;
    RtlpHpVsSubsegmentFree(a1, v35);
  }
}
