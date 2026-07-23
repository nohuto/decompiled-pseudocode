/*
 * XREFs of ExInsertPoolTag @ 0x14021B9D0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpAddTagForBigPages @ 0x14021A4A0 (ExpAddTagForBigPages.c)
 *     ExpInsertPoolTracker @ 0x14021BE10 (ExpInsertPoolTracker.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14035B760 (ExpRemovePoolTrackerExpansion.c)
 *     ExpPoolTrackerReturnLimit @ 0x14035BA20 (ExpPoolTrackerReturnLimit.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     ExpCleanupBigTag @ 0x140652F34 (ExpCleanupBigTag.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 */

__int64 ExInsertPoolTag(unsigned int a1, ULONG_PTR a2, unsigned __int64 a3, ...)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  char v7; // bl
  unsigned __int16 v8; // r12
  unsigned __int64 v9; // rsi
  void *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  int v14; // r10d
  __int64 v15; // rbx
  unsigned int v16; // edx
  unsigned int v17; // r11d
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // r9
  int v21; // [rsp+70h] [rbp+18h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v24; // [rsp+80h] [rbp+28h] BYREF
  va_list va1; // [rsp+80h] [rbp+28h]
  va_list va2; // [rsp+88h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  v3 = 0;
  v4 = a1;
  v7 = 0;
  v8 = 0;
  if ( (v24 & 1) != 0 )
  {
    v11 = (void *)(a2 + a3);
    if ( (((_DWORD)a2 + (_DWORD)a3) & 0xFFF) != 0 )
    {
      v8 = 4096 - ((unsigned __int16)v11 & 0xFFF);
      v7 = MEMORY[0xFFFFF78000000320] | 1;
      memset_0(v11, MEMORY[0xFFFFF78000000320] | 1, v8);
    }
  }
  if ( a3 < a3 + 4095 )
  {
    v9 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned int)ExpAddTagForBigPages(a2, (unsigned int)v4, v9, (char *)0x88, v8, v7) )
    {
      if ( (unsigned int)ExpInsertPoolTracker((unsigned int)v4, v9, 136LL, a2) )
      {
        return 1;
      }
      else
      {
        v21 = 0;
        LOBYTE(v24) = 0;
        LOBYTE(v22) = 0;
        if ( (_DWORD)v4 == PoolHitTag )
          __debugbreak();
        v12 = DWORD1(PerfGlobalGroupMask);
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
        {
          v12 = ExpPoolFlagsToPoolType(136, 0, (unsigned int)&v21, (unsigned int)va1, (__int64)va);
          if ( (int)v12 >= 0 )
          {
            v13 = v21;
            if ( (_BYTE)v24 )
            {
              v13 = v21 | 8;
              v21 |= 8u;
            }
            v12 = EtwTracePool(3618, v13, v4, a2, v9);
          }
        }
        LODWORD(v12) = KeGetPcr()->Prcb.Number;
        v14 = PoolTrackTableMask;
        v15 = (__int64)*(&ExPoolTagTables + v12);
        v16 = PoolTrackTableMask & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
        v17 = v16;
        while ( 1 )
        {
          v18 = v15 + 80LL * v16;
          if ( *(_DWORD *)v18 == (_DWORD)v4 )
            break;
          if ( *(_DWORD *)v18 || (v19 = *(_DWORD *)(PoolTrackTable + 80LL * v16)) == 0 )
          {
            v16 = v14 & (v16 + 1);
            if ( v16 == v17 )
            {
              ExpRemovePoolTrackerExpansion((unsigned int)v4, v9, 136LL);
              goto LABEL_25;
            }
          }
          else
          {
            *(_DWORD *)v18 = v19;
            v20 = *(_QWORD *)(PoolTrackTable + 80LL * v16 + 72);
            if ( v20 )
              *(_QWORD *)(v18 + 72) = v20;
          }
        }
        ExpPoolTrackerReturnLimit(1LL, v9);
LABEL_25:
        ExpCleanupBigTag(a2);
      }
    }
  }
  return v3;
}
