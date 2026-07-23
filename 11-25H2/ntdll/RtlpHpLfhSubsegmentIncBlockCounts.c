/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x180011CC0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180011E60 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        int a6,
        char *a7)
{
  int v7; // ebp
  char v10; // r11
  char v11; // cl
  __int64 v12; // r8
  __int64 v13; // r15
  signed __int16 *v14; // rbx
  unsigned int v15; // r14d
  int v16; // edi
  signed __int16 *v17; // r12
  signed __int16 v18; // ax
  signed __int16 v19; // tt
  __int64 v22; // [rsp+78h] [rbp+10h]
  char v23; // [rsp+98h] [rbp+30h]

  v7 = a6;
  if ( a6 )
    v10 = *a7;
  else
    v10 = -1;
  v11 = *(_BYTE *)(a2 + 38);
  v12 = a3 >> 12 >> v11;
  v23 = v10;
  v13 = 2 * v12;
  v14 = (signed __int16 *)(2 * v12 + a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v14);
  v15 = -1;
  LODWORD(v22) = 0;
  v16 = 0;
  if ( v14 >= &v14[((a3 + a4 - 1) >> 12 >> v11) - (unsigned int)v12 + 1] )
    goto LABEL_12;
  v17 = &v14[((a3 + a4 - 1) >> 12 >> v11) - (unsigned int)v12 + 1];
  do
  {
    while ( 1 )
    {
      v18 = *v14;
      while ( v18 > 0 )
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange16(v14, v18 + 1, v18);
        if ( v19 == v18 )
          goto LABEL_8;
      }
      if ( v7 )
        break;
      v7 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
      v10 = -1;
      v23 = -1;
    }
    if ( v18 )
    {
      ++v16;
      v22 = v13 >> 1;
      if ( v15 == -1 )
        v15 = v13 >> 1;
    }
    else
    {
      --v16;
    }
    *v14 = v18 + 1;
LABEL_8:
    ++v14;
    v13 += 2LL;
  }
  while ( v14 < v17 );
  if ( v16 )
  {
    RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v16 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
    v10 = v23;
  }
  if ( v15 == -1 )
  {
LABEL_12:
    if ( v7 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
  }
  else
  {
    *a7 = v10;
    *a5 = v22 - v15 + 1;
  }
  return v15;
}
