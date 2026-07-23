/*
 * XREFs of MiZeroThreadContending @ 0x14046C1DC
 * Callers:
 *     MiFindReductionContendingThread @ 0x14046BFE0 (MiFindReductionContendingThread.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x14046C120 (MiMoveZeroThreadsToOtherCores.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiZeroThreadContending(__int64 a1)
{
  int v1; // eax
  _DWORD *v3; // rdx
  int v4; // r10d
  unsigned __int64 v5; // rcx
  __int64 v6; // r11
  __int64 v7; // r9
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int128 v11; // [rsp+0h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 384);
  if ( (v1 & 1) != 0 && (v1 & 2) == 0 )
  {
    v11 = *(_OWORD *)(a1 + 368);
    if ( (_QWORD)v11 )
    {
      v3 = *(_DWORD **)(a1 + 336);
      v4 = 0;
      _BitScanForward64(&v5, v11);
      v6 = *((unsigned int *)qword_140F22998 + 64 * WORD4(v11) + (int)v5);
      v7 = *(_QWORD *)(KiProcessorBlock[v6] + 200) | v11 & *(_QWORD *)(KiProcessorBlock[v6] + 36448);
      while ( v7 )
      {
        v9 = (_QWORD *)KiProcessorBlock[v6];
        v10 = v9[1];
        if ( v10 != v9[3] )
        {
          if ( v10 != *(_QWORD *)(a1 + 328) )
          {
            ++v3[56];
            return 1LL;
          }
          ++v4;
        }
        v7 &= ~v9[25];
        v6 = (unsigned int)(v6 + 1);
      }
      if ( v4 )
        ++v3[57];
      else
        ++v3[55];
    }
  }
  return 0LL;
}
