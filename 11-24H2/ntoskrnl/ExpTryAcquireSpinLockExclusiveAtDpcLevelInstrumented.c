/*
 * XREFs of ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1404627C0
 * Callers:
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 *     PopPepWork @ 0x1402BEEE0 (PopPepWork.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPerfectColorHeadPage @ 0x14033D740 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x1402BF400 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     PerfLogSpinLockAcquire @ 0x14040594C (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  char v3; // r9
  int v4; // r10d
  int v5; // r11d
  __int64 v7; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    __rdtsc();
  if ( !(unsigned int)TRY_ACQUIRE_EXLOCK_EXCLUSIVE(a1) )
    return 0LL;
  ++*(_DWORD *)(v2 + 36544);
  if ( v3 )
  {
    v7 = __rdtsc();
    PerfLogSpinLockAcquire(v1, v7, v7 - v5, 0, v4, 3);
  }
  return 1LL;
}
