/*
 * XREFs of RtlpHpLfhSubsegmentDecBlockCounts @ 0x1403FE590
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14035FCA0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x140360750 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403D8DE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 * Callees:
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x140360B18 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDecBlockCounts(__int64 *a1, __int64 a2, unsigned int a3, int a4)
{
  char v6; // cl
  __int64 v7; // r10
  __int64 v8; // rbx
  char *v9; // rdx
  __int64 v10; // rdi
  unsigned int v11; // eax
  int v12; // r8d
  char *v13; // rcx
  signed __int16 v14; // ax

  v6 = *(_BYTE *)(a2 + 38);
  v7 = a3 >> 12 >> v6;
  v8 = 2 * v7;
  v9 = (char *)(2 * v7 + a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v9);
  LODWORD(v10) = -1;
  v11 = a4 + a3 - 1;
  v12 = 0;
  v13 = &v9[2 * ((v11 >> 12 >> v6) - (unsigned int)v7) + 2];
  if ( v9 < v13 )
  {
    do
    {
      v14 = _InterlockedDecrement16((volatile signed __int16 *)v9);
      if ( v14 )
      {
        if ( v14 == -1 )
          --v12;
      }
      else
      {
        ++v12;
        if ( (_DWORD)v10 == -1 )
          v10 = v8 >> 1;
      }
      v9 += 2;
      v8 += 2LL;
    }
    while ( v9 < v13 );
    if ( v12 )
      RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v12 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
  }
  return (unsigned int)v10;
}
