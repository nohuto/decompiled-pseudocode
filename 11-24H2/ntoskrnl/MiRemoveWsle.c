/*
 * XREFs of MiRemoveWsle @ 0x1402C8340
 * Callers:
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetCoreShared @ 0x1402327A0 (MiUnlockWorkingSetCoreShared.c)
 *     MiWriteWsle @ 0x140232940 (MiWriteWsle.c)
 *     MiIsDriverPage @ 0x1402C80A4 (MiIsDriverPage.c)
 *     MiLockWorkingSetCoreShared @ 0x1402DF160 (MiLockWorkingSetCoreShared.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1402E2910 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiLogRemoveWsleEvent @ 0x1404CC120 (MiLogRemoveWsleEvent.c)
 */

volatile signed __int32 *__fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // ebx
  int v6; // r13d
  char v7; // bp
  __int64 v10; // rcx
  char v11; // bl
  int v12; // r8d
  char v13; // bp
  int v14; // r15d
  BOOL v15; // r14d
  int *v16; // rcx
  volatile signed __int32 *result; // rax
  __int64 v18; // r8
  __int64 *v19; // rax

  v5 = *(_DWORD *)(a1 + 184);
  v6 = a4;
  v7 = a3;
  MiLockWorkingSetCoreShared(a1, a2, a3, a4);
  if ( a5 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 152));
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedDecrement64((volatile signed __int64 *)(a1 + 136));
  }
  v11 = v5 & 0xF;
  v12 = -8;
  if ( v11 == 3 )
  {
    if ( PsNtosImageBase && (a2 >= PsNtosImageBase && a2 < PsNtosImageEnd || a2 >= PsHalImageBase && a2 < PsHalImageEnd) )
    {
      _InterlockedDecrement((volatile signed __int32 *)&xmmword_140E2D868);
    }
    else if ( (unsigned int)MiGetSystemRegionType(a2) == 11 )
    {
      v19 = MiIsDriverPage(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1);
      v12 = -8;
      if ( v19 )
        _InterlockedDecrement((_DWORD *)&xmmword_140E2D868 + 1);
    }
    else
    {
      v12 = -8;
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 144));
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 128));
    v13 = v7 & 0xF;
    if ( v6 == 9
      || (v14 = 1, v15 = v13 == 8, v6 == 10)
      && (MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
    {
      MiWriteWsle(v10, a2, v6 & 0xF);
      v14 = 1;
      v15 = v13 == 8;
    }
  }
  else
  {
    v13 = v7 & 0xF;
    v14 = 0;
    v15 = v11 != 0;
  }
  if ( !v15 )
  {
    LOBYTE(v12) = v13;
    MiUpdateWorkingSetAgeDistribution(a1, a2, v12, -1, 0);
  }
  v16 = &dword_140E387C0;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v16 = 0LL;
  if ( v16 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)v16 + 1);
    if ( v14 )
      _InterlockedDecrement64((volatile signed __int64 *)v16 + 2);
  }
  result = MiUnlockWorkingSetCoreShared(a1);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
    return (volatile signed __int32 *)MiLogRemoveWsleEvent(a2, *(_DWORD *)(a1 + 184) & 0xF, v18);
  return result;
}
