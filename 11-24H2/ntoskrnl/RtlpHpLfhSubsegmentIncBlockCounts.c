/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x1403605B0
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14035FCA0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x140360750 (RtlpHpLfhSubsegmentCommitBlock.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x140360B18 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        int a6,
        char *a7)
{
  int v7; // r14d
  char v11; // r12
  char v12; // cl
  __int64 v13; // r8
  __int64 v14; // r13
  signed __int16 *v15; // rbx
  unsigned int v16; // ebp
  int v17; // edi
  signed __int16 v18; // ax
  signed __int16 v19; // tt
  signed __int16 *v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+68h] [rbp+10h]

  v7 = a6;
  if ( a6 )
    v11 = *a7;
  else
    v11 = -1;
  v12 = *(_BYTE *)(a2 + 38);
  v13 = a3 >> 12 >> v12;
  v14 = 2 * v13;
  v15 = (signed __int16 *)(2 * v13 + a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v15);
  v16 = -1;
  LODWORD(v22) = 0;
  v17 = 0;
  v21 = &v15[((a3 + (_DWORD)a4 - 1) >> 12 >> v12) - (unsigned int)v13 + 1];
  if ( v15 >= v21 )
    goto LABEL_11;
  do
  {
    while ( 1 )
    {
      v18 = *v15;
      while ( v18 > 0 )
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange16(v15, v18 + 1, v18);
        if ( v19 == v18 )
          goto LABEL_7;
      }
      if ( v7 )
        break;
      v7 = 1;
      v11 = RtlpHpAcquireLockExclusive((int *)(a2 + 56), *(unsigned __int8 *)(a1 + 65));
    }
    if ( v18 )
    {
      ++v17;
      v22 = v14 >> 1;
      if ( v16 == -1 )
        v16 = v14 >> 1;
    }
    else
    {
      --v17;
    }
    *v15 = v18 + 1;
LABEL_7:
    ++v15;
    v14 += 2LL;
  }
  while ( v15 < v21 );
  if ( v17 )
    RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v17 << 12 << *(_BYTE *)(a2 + 38)) / 4096, a4);
  if ( v16 == -1 )
  {
LABEL_11:
    if ( v7 )
      RtlpHpReleaseLockExclusive(a2 + 56);
  }
  else
  {
    *a5 = v22 - v16 + 1;
    *a7 = v11;
  }
  return v16;
}
