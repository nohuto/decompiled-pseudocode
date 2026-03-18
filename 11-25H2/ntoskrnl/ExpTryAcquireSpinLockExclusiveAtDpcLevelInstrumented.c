/*
 * XREFs of ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14034E284
 * Callers:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPerfectColorHeadPage @ 0x14022C2A0 (MiGetPerfectColorHeadPage.c)
 *     MiLockSectionControlArea @ 0x14034CE80 (MiLockSectionControlArea.c)
 *     PopPepWork @ 0x14034D020 (PopPepWork.c)
 * Callees:
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x14034D580 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     PerfLogSpinLockAcquire @ 0x14041FC48 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1)
{
  int v1; // ecx
  __int64 v2; // r8
  char v3; // r9
  int v4; // r10d
  int v5; // r11d
  unsigned __int64 v7; // rax

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
