/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x1403CA5D0
 * Callers:
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350 (RtlpHpLfhSubsegmentCommitBlock.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x1403C9338 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        int a6,
        unsigned __int8 *a7)
{
  int v7; // edi
  __int64 v10; // r11
  unsigned __int8 v11; // r13
  char v12; // cl
  __int64 v13; // r8
  __int64 v14; // r14
  signed __int16 *v15; // rbx
  unsigned int v16; // esi
  int v17; // ebp
  signed __int16 *v18; // r12
  signed __int16 v19; // ax
  signed __int16 v20; // tt
  char v22; // al
  __int64 v24; // [rsp+68h] [rbp+10h]

  v7 = a6;
  v10 = a1;
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
  LODWORD(v24) = 0;
  v17 = 0;
  v18 = &v15[((a3 + a4 - 1) >> 12 >> v12) - (unsigned int)v13 + 1];
  if ( v15 >= v18 )
    goto LABEL_11;
  do
  {
    while ( 1 )
    {
      v19 = *v15;
      while ( v19 > 0 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange16(v15, v19 + 1, v19);
        if ( v20 == v19 )
          goto LABEL_7;
      }
      if ( v7 )
        break;
      v7 = 1;
      v22 = RtlpHpAcquireLockExclusive((int *)(a2 + 56), *(unsigned __int8 *)(v10 + 65));
      v10 = a1;
      v11 = v22;
    }
    if ( v19 )
    {
      ++v17;
      v24 = v14 >> 1;
      if ( v16 == -1 )
        v16 = v14 >> 1;
    }
    else
    {
      --v17;
    }
    *v15 = v19 + 1;
LABEL_7:
    ++v15;
    v14 += 2LL;
  }
  while ( v15 < v18 );
  if ( v17 )
  {
    RtlpHpLfhContextUpdateFreeCommitCount((__int64 *)v10, a2, (v17 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
    v10 = a1;
  }
  if ( v16 == -1 )
  {
LABEL_11:
    if ( v7 )
      RtlpHpReleaseLockExclusive(a2 + 56, *(unsigned __int8 *)(v10 + 65), v11);
  }
  else
  {
    *a5 = v24 - v16 + 1;
    *a7 = v11;
  }
  return v16;
}
