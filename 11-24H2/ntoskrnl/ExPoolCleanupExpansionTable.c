/*
 * XREFs of ExPoolCleanupExpansionTable @ 0x1406528C4
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     ExpRemovePoolTrackerExpansion @ 0x14035B760 (ExpRemovePoolTrackerExpansion.c)
 *     ExpPoolTrackerReturnLimit @ 0x14035BA20 (ExpPoolTrackerReturnLimit.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     ExFreeHeapPages @ 0x1403E931C (ExFreeHeapPages.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExPoolCleanupExpansionTable(ULONG_PTR a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int16 v5; // dx
  int v6; // r10d
  __int64 v7; // rcx
  int v8; // r11d
  __int64 v9; // rsi
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r9
  int v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v4 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v4 = ExpPoolFlagsToPoolType(64, 0, (unsigned int)&v14, (unsigned int)&v15, (__int64)&v16);
    if ( (int)v4 >= 0 )
    {
      v5 = v14;
      if ( v15 )
      {
        v5 = v14 | 8;
        v14 |= 8u;
      }
      EtwTracePool(3618, v5, 0x6C6F6F50u, a1, a2);
    }
  }
  LODWORD(v4) = KeGetPcr()->Prcb.Number;
  v6 = PoolTrackTableMask;
  v7 = PoolTrackTableMask & 0x40DEDA5;
  v8 = PoolTrackTableMask & 0x40DEDA5;
  v9 = (__int64)*(&ExPoolTagTables + v4);
  while ( 1 )
  {
    v10 = v9 + 80 * v7;
    if ( *(_DWORD *)v10 == 1819242320 )
      break;
    if ( *(_DWORD *)v10 || (v11 = *(_DWORD *)(PoolTrackTable + 80 * v7)) == 0 )
    {
      v7 = v6 & (unsigned int)(v7 + 1);
      if ( (_DWORD)v7 == v8 )
      {
        ExpRemovePoolTrackerExpansion(1819242320, a2, 64);
        return ExFreeHeapPages(a1);
      }
    }
    else
    {
      *(_DWORD *)v10 = v11;
      v12 = *(_QWORD *)(PoolTrackTable + 80 * v7 + 72);
      if ( v12 )
        *(_QWORD *)(v10 + 72) = v12;
    }
  }
  ExpPoolTrackerReturnLimit(1, a2, v10);
  return ExFreeHeapPages(a1);
}
