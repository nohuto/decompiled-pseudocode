/*
 * XREFs of RtlpHpVsSlotAllocate @ 0x18011B120
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1800ED0DC (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18004FC80 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsChunkSplit @ 0x180052BD0 (RtlpHpVsChunkSplit.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsSlotAddSubsegment @ 0x18011B354 (RtlpHpVsSlotAddSubsegment.c)
 */

_DWORD *__fastcall RtlpHpVsSlotAllocate(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r11d
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  _DWORD *v12; // r9
  unsigned int v13; // edx
  unsigned __int64 v14; // rax
  volatile signed __int32 **v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r15
  _DWORD *v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // ecx
  unsigned __int64 v27; // rdx
  int v28; // ecx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8

  v5 = a2 + 16;
  v6 = a4;
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
LABEL_24:
          v18 = v12 - 2;
          v19 = *((_QWORD *)v12 - 1) ^ RtlpHpHeapGlobals;
          v20 = HIDWORD(v19);
          v21 = (unsigned __int64)(v12 - 2) ^ v19;
          v22 = (unsigned __int64)(v12 - 2);
          if ( ((((unsigned __int64)(v12 - 2) >> 32) ^ (unsigned int)v20) & 0xFF0000) != 0 )
          {
            v23 = *v12 ^ RtlpHpHeapGlobals ^ (unsigned int)v18;
            goto LABEL_29;
          }
          v24 = HIDWORD(v21);
          if ( (_WORD)v24 )
          {
            v22 -= 16LL * (unsigned __int16)v24;
            v25 = RtlpHpHeapGlobals ^ *(_QWORD *)v22;
            v26 = HIDWORD(v22) ^ HIDWORD(v25);
            v27 = v22 ^ v25;
            if ( (v26 & 0xFF0000) != 0 )
            {
LABEL_28:
              v23 = RtlpHpHeapGlobals ^ *(_DWORD *)(v22 + 8) ^ v22;
LABEL_29:
              v28 = (unsigned __int8)v23;
LABEL_33:
              v30 = (v22 - (unsigned int)(v28 << 12)) & 0xFFFFFFFFFFFFF000uLL;
              if ( (((unsigned __int16)(*(_WORD *)(v30 + 32) ^ *(_WORD *)(v30 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
              {
                RtlpLogHeapFailure(18, *(_QWORD *)(a1 + 8) ^ a1, v30, (__int64)(v12 - 2), 0LL, 0LL);
              }
              else
              {
                if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((unsigned __int64)(v18 + 8) & 0xFFF) != 0 )
                  --a3;
                if ( (unsigned int)RtlpHpVsChunkSplit(a1, a2, v30, (unsigned __int64)(v12 - 2), a3, a5) )
                  return v18;
              }
              if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
              {
                RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(a5 + 8));
                *(_QWORD *)(a5 + 8) = 0LL;
              }
              return (_DWORD *)v10;
            }
            v29 = HIDWORD(v27);
            if ( (_WORD)v29 )
            {
              v22 -= 16LL * (unsigned __int16)v29;
              goto LABEL_28;
            }
          }
          v28 = 0;
          goto LABEL_33;
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
      goto LABEL_24;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    v17 = RtlpHpVsSubsegmentCreate(a1, a3);
    if ( v17 )
    {
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        *(_QWORD *)(a5 + 8) = a2 + 8;
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 8), v15, v16);
      }
      RtlpHpVsSlotAddSubsegment(a1, a2, v17);
      v6 = a4;
      continue;
    }
    return (_DWORD *)v10;
  }
}
