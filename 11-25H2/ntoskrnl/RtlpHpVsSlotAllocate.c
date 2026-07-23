/*
 * XREFs of RtlpHpVsSlotAllocate @ 0x1404F074C
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1403CA760 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsContextMultiAlloc @ 0x14043C778 (RtlpHpVsContextMultiAlloc.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140213800 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkSplit @ 0x1402E3A80 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSubsegmentCreate @ 0x1402F8374 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140320690 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkAlignSplit @ 0x140429620 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140435308 (RtlpHpVsFreeChunkInsert.c)
 */

_DWORD *__fastcall RtlpHpVsSlotAllocate(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r15
  unsigned int v6; // r10d
  unsigned int v7; // r14d
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  _DWORD *v12; // r9
  unsigned int v13; // edx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _DWORD *v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8

  v5 = a2 + 16;
  v6 = a4;
  v7 = a3;
  v10 = 0LL;
  while ( 2 )
  {
    v11 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
    {
      if ( v11 )
        v11 ^= v5;
      else
        v11 = 0LL;
    }
    v12 = 0LL;
    while ( v11 )
    {
      v13 = *(_DWORD *)(v11 - 8) ^ RtlpHpHeapGlobals ^ (v11 - 8);
      if ( v6 >= v13 )
      {
        if ( v6 <= v13 )
        {
          v12 = (_DWORD *)v11;
LABEL_29:
          v19 = v12 - 2;
          v20 = *((_QWORD *)v12 - 1) ^ RtlpHpHeapGlobals;
          v21 = HIDWORD(v20);
          v22 = (unsigned __int64)(v12 - 2) ^ v20;
          v23 = (unsigned __int64)(v12 - 2);
          if ( ((((unsigned __int64)(v12 - 2) >> 32) ^ (unsigned int)v21) & 0xFF0000) != 0 )
          {
            v24 = *v12 ^ RtlpHpHeapGlobals ^ (unsigned int)v19;
            goto LABEL_35;
          }
          v25 = HIDWORD(v22);
          if ( (_WORD)v25 )
          {
            v23 -= 16LL * (unsigned __int16)v25;
            v26 = RtlpHpHeapGlobals ^ *(_QWORD *)v23;
            if ( ((HIDWORD(v26) ^ HIDWORD(v23)) & 0xFF0000) != 0 )
            {
LABEL_34:
              v24 = RtlpHpHeapGlobals ^ *(_DWORD *)(v23 + 8) ^ v23;
LABEL_35:
              v27 = (unsigned __int8)v24;
LABEL_39:
              v29 = (v23 - (unsigned int)(v27 << 12)) & 0xFFFFFFFFFFFFF000uLL;
              if ( (((unsigned __int16)(*(_WORD *)(v29 + 32) ^ *(_WORD *)(v29 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
              {
                RtlpLogHeapFailure(18, *(_QWORD *)(a1 + 8) ^ a1, v29, (__int64)(v12 - 2), 0LL, 0LL);
              }
              else
              {
                if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((unsigned __int64)(v19 + 8) & 0xFFF) != 0 )
                  --v7;
                if ( (unsigned int)RtlpHpVsChunkSplit(a1, a2, v29, (__int64)(v12 - 2), v7, a5) )
                  return v19;
              }
              if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
                RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), a5);
              return (_DWORD *)v10;
            }
            v28 = (v26 ^ v23) >> 32;
            if ( (_WORD)v28 )
            {
              v23 -= 16LL * (unsigned __int16)v28;
              goto LABEL_34;
            }
          }
          v27 = 0;
          goto LABEL_39;
        }
        v14 = *(_QWORD *)(v11 + 8);
      }
      else
      {
        v14 = *(_QWORD *)v11;
        v12 = (_DWORD *)v11;
      }
      if ( (*(_BYTE *)(v5 + 8) & 1) != 0 && v14 )
        v11 ^= v14;
      else
        v11 = v14;
    }
    if ( v12 )
      goto LABEL_29;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), a5);
    v15 = RtlpHpVsSubsegmentCreate(a1, v7);
    if ( v15 )
    {
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
        RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(a1 + 3), a5);
      *(_WORD *)(v15 + 34) = (unsigned __int64)(a2 - a1) >> 6;
      v16 = *(_QWORD *)(a2 + 40) ^ (a2 + 32);
      if ( (*(_QWORD *)v16 ^ v16) != a2 + 32 )
        __fastfail(3u);
      v17 = v15 ^ (a2 + 32);
      *(_QWORD *)v15 = v17;
      *(_QWORD *)(v15 + 8) = v15 ^ v16;
      *(_QWORD *)v16 = v15 ^ v16;
      *(_QWORD *)(a2 + 40) = v17;
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((v15 + 80) & 0xFFF) != 0 )
      {
        v18 = RtlpHpVsChunkAlignSplit(v17, v15, v15 + 48);
        if ( v18 )
          RtlpHpVsFreeChunkInsert(a1, a2, v15, v18);
      }
      RtlpHpVsFreeChunkInsert(a1, a2, v15, v15 + 48);
      v6 = a4;
      v7 = a3;
      continue;
    }
    return (_DWORD *)v10;
  }
}
