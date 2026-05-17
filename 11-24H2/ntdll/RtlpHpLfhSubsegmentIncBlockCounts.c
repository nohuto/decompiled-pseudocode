/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x180056080
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180056220 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
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
  unsigned __int64 v12; // r8
  __int64 v13; // r15
  signed __int16 *v14; // rbx
  unsigned int v15; // r14d
  volatile signed __int32 **v16; // rdx
  int v17; // edi
  signed __int16 *v18; // r12
  signed __int16 v19; // ax
  signed __int16 v20; // tt
  __int64 v23; // [rsp+78h] [rbp+10h]
  char v24; // [rsp+98h] [rbp+30h]

  v7 = a6;
  if ( a6 )
    v10 = *a7;
  else
    v10 = -1;
  v11 = *(_BYTE *)(a2 + 38);
  v12 = a3 >> 12 >> v11;
  v24 = v10;
  v13 = 2 * v12;
  v14 = (signed __int16 *)(2 * v12 + a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v14);
  v15 = -1;
  v16 = (volatile signed __int32 **)&v14[((a3 + a4 - 1) >> 12 >> v11) - (unsigned int)v12 + 1];
  LODWORD(v23) = 0;
  v17 = 0;
  if ( v14 >= (signed __int16 *)v16 )
    goto LABEL_12;
  v18 = &v14[((a3 + a4 - 1) >> 12 >> v11) - (unsigned int)v12 + 1];
  do
  {
    while ( 1 )
    {
      v19 = *v14;
      while ( v19 > 0 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange16(v14, v19 + 1, v19);
        if ( v20 == v19 )
          goto LABEL_8;
      }
      if ( v7 )
        break;
      v7 = 1;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 56), v16, v12);
      v10 = -1;
      v24 = -1;
    }
    if ( v19 )
    {
      ++v17;
      v23 = v13 >> 1;
      if ( v15 == -1 )
        v15 = v13 >> 1;
    }
    else
    {
      --v17;
    }
    *v14 = v19 + 1;
LABEL_8:
    ++v14;
    v13 += 2LL;
  }
  while ( v14 < v18 );
  if ( v17 )
  {
    RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v17 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
    v10 = v24;
  }
  if ( v15 == -1 )
  {
LABEL_12:
    if ( v7 )
      RtlReleaseSRWLockExclusive(a2 + 56);
  }
  else
  {
    *a7 = v10;
    *a5 = v23 - v15 + 1;
  }
  return v15;
}
