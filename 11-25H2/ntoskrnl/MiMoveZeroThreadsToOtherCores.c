/*
 * XREFs of MiMoveZeroThreadsToOtherCores @ 0x140480B04
 * Callers:
 *     MiReduceZeroingThreads @ 0x140437994 (MiReduceZeroingThreads.c)
 * Callees:
 *     MiEngineAffinity @ 0x14020D884 (MiEngineAffinity.c)
 *     MiZeroThreadContending @ 0x140480BC0 (MiZeroThreadContending.c)
 *     MiGetIdleProcessorCount @ 0x140480C94 (MiGetIdleProcessorCount.c)
 */

__int64 __fastcall MiMoveZeroThreadsToOtherCores(__int64 a1)
{
  unsigned int v2; // r15d
  unsigned int v3; // ebp
  unsigned int v4; // r12d
  _QWORD **v5; // rdi
  int IdleProcessorCount; // eax
  _QWORD *v7; // rsi
  int v8; // r14d

  v2 = 0;
  v3 = 0;
  v4 = *((_DWORD *)MiEngineAffinity(a1) + 2);
  if ( v4 )
  {
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 136) + 16LL);
    do
    {
      IdleProcessorCount = MiGetIdleProcessorCount(a1, v3);
      v7 = *v5;
      v8 = IdleProcessorCount;
      while ( v7 != v5 )
      {
        if ( (unsigned int)MiZeroThreadContending(v7 - 52) )
        {
          ++*(_DWORD *)(a1 + 224);
          if ( v8 )
          {
            ++*(_DWORD *)(a1 + 232);
            --v8;
            *(v7 - 6) = 0LL;
            v2 = 1;
          }
        }
        v7 = (_QWORD *)*v7;
      }
      v5 += 6;
      ++v3;
    }
    while ( v3 < v4 );
  }
  return v2;
}
