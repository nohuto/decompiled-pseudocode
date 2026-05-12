/*
 * XREFs of BuildNvmeConnectData @ 0x140119190
 * Callers:
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400E40C0 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 * Callees:
 *     GetNvmeHostId @ 0x14006DEFC (GetNvmeHostId.c)
 *     GetNvmeHostNQN @ 0x14006E10C (GetNvmeHostNQN.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall BuildNvmeConnectData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int NvmeHostId; // edx
  _OWORD *v5; // rcx
  __int64 v6; // r8
  _OWORD *v7; // rax
  __int128 v8; // xmm1

  v2 = *(_QWORD *)(a1 + 88);
  memset_0((void *)a2, 0, 0x400uLL);
  NvmeHostId = GetNvmeHostId((_OWORD *)a2);
  if ( NvmeHostId >= 0 )
  {
    *(_WORD *)(a2 + 16) = *(_WORD *)(v2 + 4);
    NvmeHostId = GetNvmeHostNQN(0, (char *)(a2 + 512));
    if ( NvmeHostId >= 0 )
    {
      v5 = (_OWORD *)(a2 + 256);
      v6 = 2LL;
      v7 = (_OWORD *)(*(_QWORD *)(v2 + 96) + 60LL);
      do
      {
        *v5 = *v7;
        v5[1] = v7[1];
        v5[2] = v7[2];
        v5[3] = v7[3];
        v5[4] = v7[4];
        v5[5] = v7[5];
        v5[6] = v7[6];
        v5 += 8;
        v8 = v7[7];
        v7 += 8;
        *(v5 - 1) = v8;
        --v6;
      }
      while ( v6 );
    }
  }
  return (unsigned int)NvmeHostId;
}
