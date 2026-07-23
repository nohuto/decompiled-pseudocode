/*
 * XREFs of MiRemoveWsle @ 0x1402007F4
 * Callers:
 *     MiTerminateWsle @ 0x140201850 (MiTerminateWsle.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 * Callees:
 *     MiWriteWsle @ 0x140203470 (MiWriteWsle.c)
 *     MiLockWorkingSetCoreShared @ 0x140240A40 (MiLockWorkingSetCoreShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsDriverPage @ 0x1402BA964 (MiIsDriverPage.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetCoreShared @ 0x1403030A0 (MiUnlockWorkingSetCoreShared.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1403923F0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiLogRemoveWsleEvent @ 0x1404C5590 (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, char a3, int a4, int a5)
{
  int v5; // ebx
  __int64 v10; // rcx
  char v11; // bl
  __int64 v12; // r8
  char v13; // bp
  int v14; // r15d
  BOOL v15; // r14d
  int *v16; // rcx
  __int64 result; // rax
  __int64 IsDriverPage; // rax

  v5 = *(_DWORD *)(a1 + 184);
  MiLockWorkingSetCoreShared();
  if ( a5 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 152));
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedDecrement64((volatile signed __int64 *)(a1 + 136));
  }
  v11 = v5 & 0xF;
  v12 = 0x7FFFFFFFF8LL;
  if ( v11 == 3 )
  {
    if ( PsNtosImageBase
      && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
       || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      _InterlockedDecrement((volatile signed __int32 *)&xmmword_140E2D9A8);
    }
    else if ( (unsigned int)MiGetSystemRegionType(a2, 0LL, 0x7FFFFFFFF8LL) == 11 )
    {
      IsDriverPage = MiIsDriverPage(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
      v12 = 0x7FFFFFFFF8LL;
      if ( IsDriverPage )
        _InterlockedDecrement((_DWORD *)&xmmword_140E2D9A8 + 1);
    }
    else
    {
      v12 = 0x7FFFFFFFF8LL;
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 144));
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 128));
    v13 = a3 & 0xF;
    if ( a4 == 9
      || (v14 = 1, v15 = v13 == 8, a4 == 10)
      && (MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, 0x7FFFFFFFF8LL) & 1) != 0 )
    {
      LOBYTE(v12) = a4;
      MiWriteWsle(v10, a2, v12);
      v14 = 1;
      v15 = v13 == 8;
    }
  }
  else
  {
    v13 = a3 & 0xF;
    v14 = 0;
    v15 = v11 != 0;
  }
  if ( !v15 )
  {
    LOBYTE(v12) = v13;
    MiUpdateWorkingSetAgeDistribution(a1, a2, v12, -1, 0);
  }
  v16 = &dword_140E38900;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v16 = 0LL;
  if ( v16 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)v16 + 1);
    if ( v14 )
      _InterlockedDecrement64((volatile signed __int64 *)v16 + 2);
  }
  result = MiUnlockWorkingSetCoreShared(a1, 0LL, v12);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
    return MiLogRemoveWsleEvent(a2, *(_DWORD *)(a1 + 184) & 0xF);
  return result;
}
