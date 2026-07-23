/*
 * XREFs of RtlpHpVsContextGrowInPlace @ 0x1800DAA64
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkSplit @ 0x1800687B0 (RtlpHpVsChunkSplit.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkSetUnusedBytes @ 0x1800DAD70 (RtlpHpVsChunkSetUnusedBytes.c)
 */

__int64 __fastcall RtlpHpVsContextGrowInPlace(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  char v6; // dl
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdi
  unsigned int v15; // r10d
  unsigned int v16; // edx
  _RTL_SRWLOCK *v17; // r12
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // edx
  unsigned int *v22; // r8
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // r8
  int v27; // ecx
  PRTL_SRWLOCK SRWLock[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-38h]
  unsigned int v30; // [rsp+80h] [rbp+8h]

  v5 = a3 - 16;
  v6 = *(_BYTE *)(a1 + 4);
  *(_OWORD *)SRWLock = 0LL;
  v29 = 0LL;
  if ( (v6 & 1) != 0 )
    return 0LL;
  if ( (((unsigned __int16)(a2[16] ^ a2[18]) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v24 = *(_QWORD *)(a1 + 8) ^ a1;
    v14 = 0LL;
    v25 = 0LL;
    v26 = (__int64)a2;
    v27 = 18;
    goto LABEL_26;
  }
  v9 = RtlpHpHeapGlobals;
  v10 = RtlpHpHeapGlobals ^ *(_QWORD *)v5;
  v11 = v5 ^ v10;
  if ( ((HIDWORD(v5) ^ HIDWORD(v10)) & 0xFF0000) == 0 )
  {
    v24 = *(_QWORD *)(a1 + 8) ^ a1;
    v25 = v5;
    v14 = 0LL;
    v26 = a3;
    v27 = 8;
LABEL_26:
    RtlpLogHeapFailure(v27, v24, v26, v25, 0LL, 0LL);
    return v14;
  }
  v12 = *(_DWORD *)(a4 + 32);
  v13 = v12 + 2;
  if ( *(_DWORD *)(a4 + 24) == v12 )
    v13 = *(_DWORD *)(a4 + 32);
  v14 = 0LL;
  v15 = 0;
  v16 = ((unsigned int)(v13 + 15) >> 4) + 1;
  if ( HIWORD(v11) <= v16 )
    v15 = v16 - HIWORD(v11);
  v30 = v15;
  if ( !v15 )
  {
    if ( 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16 == *(_DWORD *)(a4 + 24) )
      *(_DWORD *)(v5 + 8) &= ~0x100u;
    else
      RtlpHpVsChunkSetUnusedBytes(a3);
    return a3;
  }
  v17 = (_RTL_SRWLOCK *)(a1 + ((unsigned __int64)(unsigned __int16)a2[17] << 6));
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
  {
    SRWLock[1] = v17 + 1;
    RtlAcquireSRWLockExclusive(v17 + 1);
    v9 = RtlpHpHeapGlobals;
    v15 = v30;
  }
  v18 = v5 + 16 * ((unsigned __int64)v11 >> 16);
  if ( v18 < (unsigned __int64)&a2[8 * (unsigned __int16)a2[16] + 24] )
  {
    v19 = v18 ^ v9 ^ *(_QWORD *)v18;
    if ( (v19 & 0xFF000000000000LL) == 0 && WORD1(v19) >= v15 )
    {
      v20 = RtlpHpVsChunkSplit(a1, (__int64)v17, (unsigned __int64)a2, v18, v15, (__int64)SRWLock);
      if ( v20 )
      {
        *(_WORD *)(v5 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ (((v20 << 16) + (v11 & 0xFFFF0000)) >> 16);
        v21 = WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v5 ^ *(_DWORD *)v5) >> 16);
        v22 = (unsigned int *)(v5
                             + 16
                             * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v5 ^ (unsigned __int64)*(unsigned int *)v5) >> 16)));
        if ( v22 < (unsigned int *)&a2[8 * (unsigned __int16)a2[16] + 24] )
          *((_WORD *)v22 + 2) = WORD2(v22) ^ WORD2(RtlpHpHeapGlobals) ^ v21;
        if ( *(_QWORD *)(a4 + 24) < (unsigned __int64)(16 * v21 - 16) )
        {
          *(_DWORD *)(v5 + 8) |= 0x100u;
          RtlpHpVsChunkSetUnusedBytes(a3);
        }
        else
        {
          *(_DWORD *)(v5 + 8) &= ~0x100u;
        }
        if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
          RtlReleaseSRWLockExclusive(SRWLock[1]);
        return a3;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(SRWLock[1]);
  return v14;
}
