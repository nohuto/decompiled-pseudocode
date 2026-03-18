/*
 * XREFs of ExInsertPoolTag @ 0x1402FD6B4
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpRemovePoolTrackerExpansion @ 0x1402E0260 (ExpRemovePoolTrackerExpansion.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402E0770 (ExpPoolTrackerReturnLimit.c)
 *     ExpAddTagForBigPages @ 0x1402FCDC0 (ExpAddTagForBigPages.c)
 *     ExpInsertPoolTracker @ 0x1402FD7BC (ExpInsertPoolTracker.c)
 *     EtwTracePool @ 0x1402FE3D8 (EtwTracePool.c)
 *     ExpCleanupBigTag @ 0x140648934 (ExpCleanupBigTag.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B64240 (ExpPoolFlagsToPoolType.c)
 */

__int64 ExInsertPoolTag(unsigned int a1, ULONG_PTR a2, unsigned __int64 a3, ...)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  char v7; // bl
  unsigned __int16 v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // r9
  void *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  int v15; // r10d
  __int64 v16; // rbx
  unsigned int v17; // edx
  unsigned int v18; // r11d
  __int64 v19; // r8
  int v20; // [rsp+70h] [rbp+18h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v23; // [rsp+80h] [rbp+28h] BYREF
  va_list va1; // [rsp+80h] [rbp+28h]
  va_list va2; // [rsp+88h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v3 = 0;
  v4 = a1;
  v7 = 0;
  v8 = 0;
  if ( (v23 & 1) != 0 )
  {
    v12 = (void *)(a2 + a3);
    if ( (((_DWORD)a2 + (_DWORD)a3) & 0xFFF) != 0 )
    {
      v8 = 4096 - ((unsigned __int16)v12 & 0xFFF);
      v7 = MEMORY[0xFFFFF78000000320] | 1;
      memset_0(v12, MEMORY[0xFFFFF78000000320] | 1, v8);
    }
  }
  if ( a3 < a3 + 4095 )
  {
    v9 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned int)ExpAddTagForBigPages(a2, v4, v9, 136, v8, v7) )
    {
      if ( (unsigned int)ExpInsertPoolTracker((unsigned int)v4, v9, 136LL, a2) )
      {
        return 1;
      }
      else
      {
        v20 = 0;
        LOBYTE(v23) = 0;
        LOBYTE(v21) = 0;
        if ( (_DWORD)v4 == PoolHitTag )
          __debugbreak();
        v13 = DWORD1(PerfGlobalGroupMask);
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
        {
          v13 = ExpPoolFlagsToPoolType(136, 0, (unsigned int)&v20, (unsigned int)va1, (__int64)va);
          if ( (int)v13 >= 0 )
          {
            v14 = v20;
            if ( (_BYTE)v23 )
            {
              v14 = v20 | 8;
              v20 |= 8u;
            }
            v13 = EtwTracePool(3618, v14, v4, a2, v9);
          }
        }
        LODWORD(v13) = KeGetPcr()->Prcb.Number;
        v15 = PoolTrackTableMask;
        v16 = (__int64)*(&ExPoolTagTables + v13);
        v17 = PoolTrackTableMask & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
        v18 = v17;
        while ( 1 )
        {
          v19 = v16 + 80LL * v17;
          if ( *(_DWORD *)v19 == (_DWORD)v4 )
            break;
          if ( *(_DWORD *)v19 || (v10 = *(unsigned int *)(PoolTrackTable + 80LL * v17), !(_DWORD)v10) )
          {
            v17 = v15 & (v17 + 1);
            if ( v17 == v18 )
            {
              ExpRemovePoolTrackerExpansion(v4, v9, 136LL, v10);
              goto LABEL_25;
            }
          }
          else
          {
            *(_DWORD *)v19 = v10;
            v10 = *(_QWORD *)(PoolTrackTable + 80LL * v17 + 72);
            if ( v10 )
              *(_QWORD *)(v19 + 72) = v10;
          }
        }
        ExpPoolTrackerReturnLimit(1, v9, v19);
LABEL_25:
        ExpCleanupBigTag(a2);
      }
    }
  }
  return v3;
}
