/*
 * XREFs of ExPoolCleanupExpansionTable @ 0x1406482CC
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x1402FE0E0 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     ExpRemovePoolTrackerExpansion @ 0x1402E0260 (ExpRemovePoolTrackerExpansion.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402E0770 (ExpPoolTrackerReturnLimit.c)
 *     ExFreeHeapPages @ 0x1402F72DC (ExFreeHeapPages.c)
 *     EtwTracePool @ 0x1402FE3D8 (EtwTracePool.c)
 *     ExpPoolFlagsToPoolType @ 0x140B64240 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExPoolCleanupExpansionTable(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int16 v7; // dx
  int v8; // r10d
  __int64 v9; // rcx
  int v10; // r11d
  __int64 v11; // rsi
  __int64 v12; // r8
  int v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v6 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v6 = ExpPoolFlagsToPoolType(64, 0, (unsigned int)&v14, (unsigned int)&v15, (__int64)&v16);
    if ( (int)v6 >= 0 )
    {
      v7 = v14;
      if ( v15 )
      {
        v7 = v14 | 8;
        v14 |= 8u;
      }
      EtwTracePool(0xE22u, v7, 0x6C6F6F50u, a1, a2);
    }
  }
  LODWORD(v6) = KeGetPcr()->Prcb.Number;
  v8 = PoolTrackTableMask;
  v9 = PoolTrackTableMask & 0x40DEDA5;
  v10 = PoolTrackTableMask & 0x40DEDA5;
  v11 = (__int64)*(&ExPoolTagTables + v6);
  while ( 1 )
  {
    v12 = v11 + 80 * v9;
    if ( *(_DWORD *)v12 == 1819242320 )
      break;
    if ( *(_DWORD *)v12 || (a4 = *(unsigned int *)(PoolTrackTable + 80 * v9), !(_DWORD)a4) )
    {
      v9 = v8 & (unsigned int)(v9 + 1);
      if ( (_DWORD)v9 == v10 )
      {
        ExpRemovePoolTrackerExpansion(1819242320, a2, 64LL, a4);
        return ExFreeHeapPages(a1);
      }
    }
    else
    {
      *(_DWORD *)v12 = a4;
      a4 = *(_QWORD *)(PoolTrackTable + 80 * v9 + 72);
      if ( a4 )
        *(_QWORD *)(v12 + 72) = a4;
    }
  }
  ExpPoolTrackerReturnLimit(1, a2, v12);
  return ExFreeHeapPages(a1);
}
