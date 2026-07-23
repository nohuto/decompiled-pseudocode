/*
 * XREFs of MiMirrorOmitPagesFromCopy @ 0x14041D540
 * Callers:
 *     MiMirrorZeroFreeListsCallback @ 0x14041D1E0 (MiMirrorZeroFreeListsCallback.c)
 *     MiMirrorReduceBlackWrites @ 0x14041D3B0 (MiMirrorReduceBlackWrites.c)
 *     MiMirrorRemoveInactivePages @ 0x14049D2E8 (MiMirrorRemoveInactivePages.c)
 *     MiMirrorRemoveBlackChildPartitionPages @ 0x140673F40 (MiMirrorRemoveBlackChildPartitionPages.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x140B65858 (MiRemoveEnclavePagesFromMirror.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiMirrorOmitPagesFromCopy(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  volatile signed __int32 *v7; // r8
  unsigned __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 *v12; // rsi
  unsigned __int64 v13; // rax
  void *v14; // r8
  unsigned __int64 v15; // rdx

  v4 = a3;
  v5 = a3;
  v6 = a2;
  v7 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (a2 >> 5));
  v8 = a2 & 0x1F;
  if ( v8 + v4 > 0x20 )
  {
    if ( (a2 & 0x1F) != 0 )
    {
      _InterlockedAnd(v7, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v8));
      v4 = v5 - (32 - (unsigned int)(a2 & 0x1F));
      ++v7;
    }
    if ( v4 >= 0x20 )
    {
      v11 = v4 >> 5;
      v4 += -32LL * (v4 >> 5);
      do
      {
        *v7++ = 0;
        --v11;
      }
      while ( v11 );
    }
    if ( v4 )
    {
      v9 = -1 << v4;
      goto LABEL_4;
    }
  }
  else
  {
    if ( v4 != 32 )
    {
      v9 = ~(((1 << v4) - 1) << v8);
LABEL_4:
      _InterlockedAnd(v7, v9);
      goto LABEL_5;
    }
    *v7 = 0;
  }
LABEL_5:
  if ( *(_QWORD *)(a1 + 24) )
    RtlClearBitsEx((__int64)&xmmword_140E301D0, v6, v5);
  result = *(unsigned int *)(a1 + 32);
  if ( (result & 0x20) != 0 )
  {
    result = 48 * v6 + 40;
    if ( v5 )
    {
      v12 = (__int64 *)(48 * v6 - 0x21FFFFFFFFD8LL);
      do
      {
        if ( (((unsigned __int64)*v12 >> 60) & 7) != 3
          || *v12 >= 0
          || (result = *((unsigned int *)v12 - 6), (result & 0x400) == 0) )
        {
          v13 = MiMapPageInHyperSpaceWorker(v6, 0LL, 0);
          v14 = (void *)v13;
          v15 = 1024LL;
          if ( (v13 & 4) != 0 )
          {
            *(_DWORD *)v13 = -2;
            v14 = (void *)(v13 + 4);
            v15 = 1023LL;
          }
          memset64(v14, 0xFFFFFFFEFFFFFFFEuLL, v15 >> 1);
          if ( (v15 & 1) != 0 )
            *((_DWORD *)v14 + v15 - 1) = -2;
          result = MiUnmapPageInHyperSpaceWorker(v13, 0x11u, 0);
        }
        v12 += 6;
        ++v6;
        --v5;
      }
      while ( v5 );
    }
  }
  return result;
}
