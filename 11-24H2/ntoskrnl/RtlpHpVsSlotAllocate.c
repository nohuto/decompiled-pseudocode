/*
 * XREFs of RtlpHpVsSlotAllocate @ 0x140367A10
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextAllocate @ 0x14036781C (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140336C60 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403628A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x140366900 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSubsegmentCreate @ 0x140367D08 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140367E64 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x140368020 (RtlpHpVsChunkAlignSplit.c)
 */

_DWORD *__fastcall RtlpHpVsSlotAllocate(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r15
  unsigned int v6; // r10d
  unsigned int v7; // r14d
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  _DWORD *v12; // r9
  __int64 v13; // r8
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  _DWORD *v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  int v24; // eax
  int v25; // ecx
  unsigned __int64 v26; // r8
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax

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
    v13 = *(_BYTE *)(v5 + 8) & 1;
    while ( v11 )
    {
      v14 = *(_DWORD *)(v11 - 8) ^ RtlpHpHeapGlobals ^ (v11 - 8);
      if ( v6 < v14 )
      {
        v15 = *(_QWORD *)v11;
        v12 = (_DWORD *)v11;
      }
      else
      {
        if ( v6 <= v14 )
        {
          v12 = (_DWORD *)v11;
          goto LABEL_12;
        }
        v15 = *(_QWORD *)(v11 + 8);
      }
      if ( (*(_BYTE *)(v5 + 8) & 1) != 0 && v15 )
        v11 ^= v15;
      else
        v11 = v15;
    }
    if ( v12 )
    {
LABEL_12:
      v16 = v12 - 2;
      v17 = *((_QWORD *)v12 - 1) ^ RtlpHpHeapGlobals;
      v18 = HIDWORD(v17);
      v19 = (unsigned __int64)(v12 - 2) ^ v17;
      v20 = (unsigned __int64)(v12 - 2);
      if ( ((((unsigned __int64)(v12 - 2) >> 32) ^ (unsigned int)v18) & 0xFF0000) != 0 )
      {
        v24 = *v12 ^ RtlpHpHeapGlobals ^ (unsigned int)v16;
        goto LABEL_18;
      }
      v21 = HIDWORD(v19);
      if ( (_WORD)v21 )
      {
        v20 -= 16LL * (unsigned __int16)v21;
        v22 = RtlpHpHeapGlobals ^ *(_QWORD *)v20;
        if ( ((HIDWORD(v22) ^ HIDWORD(v20)) & 0xFF0000) != 0 )
        {
LABEL_17:
          v24 = RtlpHpHeapGlobals ^ *(_DWORD *)(v20 + 8) ^ v20;
LABEL_18:
          v25 = (unsigned __int8)v24;
LABEL_19:
          v26 = (v20 - (unsigned int)(v25 << 12)) & 0xFFFFFFFFFFFFF000uLL;
          if ( (((unsigned __int16)(*(_WORD *)(v26 + 32) ^ *(_WORD *)(v26 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
          {
            RtlpLogHeapFailure(18, *(_QWORD *)(a1 + 8) ^ a1, v26, (__int64)(v12 - 2), 0LL, 0LL);
          }
          else
          {
            if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((unsigned __int64)(v16 + 8) & 0xFFF) != 0 )
              --v7;
            if ( (unsigned int)RtlpHpVsChunkSplit(a1, a2, v26, (__int64)(v12 - 2), v7, a5) )
              return v16;
          }
          if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
            RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), a5);
          return (_DWORD *)v10;
        }
        v23 = (v22 ^ v20) >> 32;
        if ( (_WORD)v23 )
        {
          v20 -= 16LL * (unsigned __int16)v23;
          goto LABEL_17;
        }
      }
      v25 = 0;
      goto LABEL_19;
    }
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), a5);
    v28 = RtlpHpVsSubsegmentCreate(a1, v7, v13);
    if ( v28 )
    {
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
        RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(a1 + 3), a5);
      *(_WORD *)(v28 + 34) = (unsigned __int64)(a2 - a1) >> 6;
      v29 = *(_QWORD *)(a2 + 40) ^ (a2 + 32);
      if ( (*(_QWORD *)v29 ^ v29) != a2 + 32 )
        __fastfail(3u);
      v30 = v28 ^ (a2 + 32);
      *(_QWORD *)v28 = v30;
      *(_QWORD *)(v28 + 8) = v28 ^ v29;
      *(_QWORD *)v29 = v28 ^ v29;
      *(_QWORD *)(a2 + 40) = v30;
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((v28 + 80) & 0xFFF) != 0 )
      {
        v31 = RtlpHpVsChunkAlignSplit(v30, v28, v28 + 48);
        if ( v31 )
          RtlpHpVsFreeChunkInsert(a1, a2, v28, v31);
      }
      RtlpHpVsFreeChunkInsert(a1, a2, v28, v28 + 48);
      v6 = a4;
      v7 = a3;
      continue;
    }
    return (_DWORD *)v10;
  }
}
