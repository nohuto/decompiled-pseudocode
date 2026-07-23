/*
 * XREFs of RtlpHpVsSlotAllocate @ 0x18011C9B8
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18002DD2C (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsSubsegmentCreate @ 0x18000B8C0 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsChunkSplit @ 0x18000E810 (RtlpHpVsChunkSplit.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHpVsSlotAddSubsegment @ 0x18011CBEC (RtlpHpVsSlotAddSubsegment.c)
 */

_DWORD *__fastcall RtlpHpVsSlotAllocate(__int64 a1, _RTL_SRWLOCK *a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // rdi
  unsigned int v6; // r11d
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  _DWORD *v12; // r9
  unsigned int v13; // edx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r15
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // ecx
  unsigned __int64 v25; // rdx
  int v26; // ecx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8

  v5 = (unsigned __int64)&a2[2];
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
          v16 = v12 - 2;
          v17 = *((_QWORD *)v12 - 1) ^ RtlpHpHeapGlobals;
          v18 = HIDWORD(v17);
          v19 = (unsigned __int64)(v12 - 2) ^ v17;
          v20 = (unsigned __int64)(v12 - 2);
          if ( ((((unsigned __int64)(v12 - 2) >> 32) ^ (unsigned int)v18) & 0xFF0000) != 0 )
          {
            v21 = *v12 ^ RtlpHpHeapGlobals ^ (unsigned int)v16;
            goto LABEL_29;
          }
          v22 = HIDWORD(v19);
          if ( (_WORD)v22 )
          {
            v20 -= 16LL * (unsigned __int16)v22;
            v23 = RtlpHpHeapGlobals ^ *(_QWORD *)v20;
            v24 = HIDWORD(v20) ^ HIDWORD(v23);
            v25 = v20 ^ v23;
            if ( (v24 & 0xFF0000) != 0 )
            {
LABEL_28:
              v21 = RtlpHpHeapGlobals ^ *(_DWORD *)(v20 + 8) ^ v20;
LABEL_29:
              v26 = (unsigned __int8)v21;
LABEL_33:
              v28 = (v20 - (unsigned int)(v26 << 12)) & 0xFFFFFFFFFFFFF000uLL;
              if ( (((unsigned __int16)(*(_WORD *)(v28 + 32) ^ *(_WORD *)(v28 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
              {
                RtlpLogHeapFailure(18, *(_QWORD *)(a1 + 8) ^ a1, v28, (__int64)(v12 - 2), 0LL, 0LL);
              }
              else
              {
                if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((unsigned __int64)(v16 + 8) & 0xFFF) != 0 )
                  --a3;
                if ( (unsigned int)RtlpHpVsChunkSplit(a1, (__int64)a2, v28, (unsigned __int64)(v12 - 2), a3, a5) )
                  return v16;
              }
              if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
              {
                RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
                *(_QWORD *)(a5 + 8) = 0LL;
              }
              return (_DWORD *)v10;
            }
            v27 = HIDWORD(v25);
            if ( (_WORD)v27 )
            {
              v20 -= 16LL * (unsigned __int16)v27;
              goto LABEL_28;
            }
          }
          v26 = 0;
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
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    v15 = RtlpHpVsSubsegmentCreate(a1, a3);
    if ( v15 )
    {
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        *(_QWORD *)(a5 + 8) = a2 + 1;
        RtlAcquireSRWLockExclusive(a2 + 1);
      }
      RtlpHpVsSlotAddSubsegment(a1, a2, v15);
      v6 = a4;
      continue;
    }
    return (_DWORD *)v10;
  }
}
