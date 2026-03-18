/*
 * XREFs of ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140315720
 * Callers:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPerfectColorHeadPage @ 0x1402F59B0 (MiGetPerfectColorHeadPage.c)
 *     MiLockSectionControlArea @ 0x140316190 (MiLockSectionControlArea.c)
 *     PopPepWork @ 0x140316330 (PopPepWork.c)
 * Callees:
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x140316850 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     PerfLogSpinLockAcquire @ 0x14040D6FC (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r8
  int v5; // ecx
  __int64 v6; // r8
  char v7; // r9
  int v8; // r10d
  int v9; // r11d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    LOBYTE(a4) = 0;
  }
  else
  {
    LOBYTE(a4) = 1;
    v11 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v11) << 32;
  }
  if ( !(unsigned int)TRY_ACQUIRE_EXLOCK_EXCLUSIVE(a1, a2, CurrentPrcb, a4) )
    return 0LL;
  ++*(_DWORD *)(v6 + 36544);
  if ( v7 )
  {
    v12 = __rdtsc();
    PerfLogSpinLockAcquire(v5, v12, v12 - v9, 0, v8, 3);
  }
  return 1LL;
}
