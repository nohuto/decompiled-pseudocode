/*
 * XREFs of PpmGetThroughputInfoCallback @ 0x14036FE50
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x140370500 (PoGetPerfStateAndParkingInfo.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x14036E610 (PpmSnapPerformanceAccumulation.c)
 */

__int64 __fastcall PpmGetThroughputInfoCallback(LARGE_INTEGER *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  char v7; // r9
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v6 = 0;
  if ( PpmSnapPerformanceAccumulation(a1, 0, a1 != (LARGE_INTEGER *)KeGetCurrentPrcb(), 0, (__int64)&v11, 0LL) )
  {
    v7 = PpmPerformanceCounterShift;
    if ( a1[4388].LowPart == 3 )
      v7 = PpmHvPerformanceCounterShift;
    v8 = *((_QWORD *)&v12 + 1);
    *(_QWORD *)(a2 + 8) = (unsigned __int64)v13 >> v7;
    if ( !v8 || a3 == 100LL )
    {
      v9 = v8;
    }
    else if ( is_mul_ok(v8, a3) )
    {
      v9 = v8 * a3 / 0x64;
    }
    else
    {
      v9 = a3 * (v8 / 0x64) + a3 * (v8 % 0x64) / 0x64;
    }
    *(_QWORD *)(a2 + 16) = *((_QWORD *)&v13 + 1) >> v7;
    *(_DWORD *)a2 = (unsigned __int64)v11 >> v7;
    *(_DWORD *)(a2 + 4) = *((_QWORD *)&v11 + 1) >> v7;
    *(_QWORD *)(a2 + 24) = v9 >> v7;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
