/*
 * XREFs of StLcBucketsCopy @ 0x14060B6C0
 * Callers:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140377594 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     ?SmStEtwFillStoreStatsEvent@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14060CF54 (-SmStEtwFillStoreStatsEvent@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall StLcBucketsCopy(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // esi
  LARGE_INTEGER result; // rax
  __int64 v8; // r8
  unsigned int v9; // edx
  LARGE_INTEGER v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0].QuadPart = 0LL;
  v4 = a4;
  if ( a4 > 8 )
    v4 = 8;
  result = KeQueryPerformanceCounter(v10);
  if ( v4 )
  {
    v8 = v4;
    do
    {
      v9 = ((unsigned int)(1000000LL * *(_QWORD *)a3 / v10[0].QuadPart) + 9) / 0xA;
      *a1 = 10 * v9;
      if ( !(10 * v9) )
        *a1 = -1;
      result.QuadPart = *(unsigned int *)(a3 + 8);
      a3 += 16LL;
      a1[1] = result.LowPart;
      a1 += 2;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
