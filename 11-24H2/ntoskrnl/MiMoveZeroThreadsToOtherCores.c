/*
 * XREFs of MiMoveZeroThreadsToOtherCores @ 0x14046C120
 * Callers:
 *     MiReduceZeroingThreads @ 0x140413BFC (MiReduceZeroingThreads.c)
 * Callees:
 *     MiZeroThreadContending @ 0x14046C1DC (MiZeroThreadContending.c)
 *     MiEngineAffinity @ 0x14046C2B0 (MiEngineAffinity.c)
 *     MiGetIdleProcessorCount @ 0x14046C2E8 (MiGetIdleProcessorCount.c)
 */

__int64 __fastcall MiMoveZeroThreadsToOtherCores(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  _QWORD **v7; // rdi
  int IdleProcessorCount; // eax
  _QWORD *v9; // rsi
  int v10; // r14d

  v4 = 0;
  v5 = 0;
  v6 = *(_DWORD *)(MiEngineAffinity(a1, a2, a3) + 8);
  if ( v6 )
  {
    v7 = (_QWORD **)(*(_QWORD *)(a1 + 136) + 16LL);
    do
    {
      IdleProcessorCount = MiGetIdleProcessorCount(a1, v5);
      v9 = *v7;
      v10 = IdleProcessorCount;
      while ( v9 != v7 )
      {
        if ( (unsigned int)MiZeroThreadContending(v9 - 52) )
        {
          ++*(_DWORD *)(a1 + 224);
          if ( v10 )
          {
            ++*(_DWORD *)(a1 + 232);
            --v10;
            *(v9 - 6) = 0LL;
            v4 = 1;
          }
        }
        v9 = (_QWORD *)*v9;
      }
      v7 += 6;
      ++v5;
    }
    while ( v5 < v6 );
  }
  return v4;
}
