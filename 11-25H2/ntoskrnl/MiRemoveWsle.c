/*
 * XREFs of MiRemoveWsle @ 0x14038B0E4
 * Callers:
 *     MiTerminateWsle @ 0x140231080 (MiTerminateWsle.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 * Callees:
 *     MiLockWorkingSetCoreShared @ 0x1402146E0 (MiLockWorkingSetCoreShared.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetCoreShared @ 0x140323E80 (MiUnlockWorkingSetCoreShared.c)
 *     MiIsDriverPage @ 0x14036D6BC (MiIsDriverPage.c)
 *     MiWriteWsle @ 0x14037CA80 (MiWriteWsle.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1403851C0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiLogRemoveWsleEvent @ 0x1404CE838 (MiLogRemoveWsleEvent.c)
 */

volatile signed __int32 *__fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, char a3, int a4, int a5)
{
  int v5; // ebx
  __int64 v10; // rcx
  char v11; // bl
  unsigned __int8 v12; // bp
  int v13; // r15d
  BOOL v14; // r14d
  int *v15; // rcx
  volatile signed __int32 *result; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rax

  v5 = *(_DWORD *)(a1 + 184);
  MiLockWorkingSetCoreShared(a1);
  if ( a5 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 152));
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedDecrement64((volatile signed __int64 *)(a1 + 136));
  }
  v11 = v5 & 0xF;
  if ( v11 == 3 )
  {
    v18 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
    if ( v18 && (a2 >= v18 && a2 < PsNtosImageEnd || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      _InterlockedDecrement((volatile signed __int32 *)&xmmword_140E2D628);
    }
    else if ( (unsigned int)MiGetSystemRegionType(a2) == 11
           && MiIsDriverPage(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1) )
    {
      _InterlockedDecrement((_DWORD *)&xmmword_140E2D628 + 1);
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 144));
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 128));
    v12 = a3 & 0xF;
    if ( a4 == 9
      || (v13 = 1, v14 = v12 == 8, a4 == 10)
      && (MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
    {
      MiWriteWsle(v10, a2, a4 & 0xF);
      v13 = 1;
      v14 = v12 == 8;
    }
  }
  else
  {
    v12 = a3 & 0xF;
    v13 = 0;
    v14 = v11 != 0;
  }
  if ( !v14 )
    MiUpdateWorkingSetAgeDistribution(a1, a2, v12, 0xFFFFFFFFFFFFFFFFuLL, 0);
  v15 = &dword_140E38580;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v15 = 0LL;
  if ( v15 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)v15 + 1);
    if ( v13 )
      _InterlockedDecrement64((volatile signed __int64 *)v15 + 2);
  }
  result = MiUnlockWorkingSetCoreShared(a1);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
    return (volatile signed __int32 *)MiLogRemoveWsleEvent(a2, *(_DWORD *)(a1 + 184) & 0xF, v17);
  return result;
}
