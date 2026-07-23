/*
 * XREFs of KeCpuSetQueryUnparkRecommendationEx @ 0x1405BCF7C
 * Callers:
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     RtlBeginReadTickLock @ 0x1402ABCF0 (RtlBeginReadTickLock.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeCpuSetQueryUnparkRecommendationEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v3; // r13
  int v5; // ebp
  __int16 v6; // r8
  unsigned __int16 v7; // bx
  __int64 *v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi

  v3 = KiActiveGroups;
  v5 = 0;
  memset_0(a2 + 4, 0, 8LL * *a2);
  v6 = 1;
  v7 = 0;
  *a2 = 1;
  if ( v3 )
  {
    v8 = KiSystemAllowedCpuSets;
    v9 = a1 + 4;
    do
    {
      if ( v7 < *a1 && *v9 )
      {
        while ( KiCpuSetSequence != RtlBeginReadTickLock(&KiCpuSetSequence) )
          ;
        v11 = v10 & ~*v8;
        if ( v11 )
        {
          KeAddGroupAffinityEx(a2, v7, v11);
          v5 += __popcnt(v11);
          v6 = 1;
        }
      }
      v7 += v6;
      ++v9;
      v8 += 2;
    }
    while ( v7 < v3 );
  }
  return (unsigned __int16)v5;
}
