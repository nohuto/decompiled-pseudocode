/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1402F0F0C
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140270C08 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     KiSetPriorityBoost @ 0x140326B50 (KiSetPriorityBoost.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 *a3)
{
  int v5; // r8d
  int v6; // ecx
  __int64 result; // rax

  v5 = 15;
  v6 = KiLockQuantumTarget;
  if ( KiSchedulerForegroundBoostDecayPolicy || a2 < 8 )
  {
    if ( a2 <= 0 )
      goto LABEL_6;
    goto LABEL_3;
  }
  if ( a2 > 9 )
  {
LABEL_3:
    if ( a2 >= 15 )
      goto LABEL_6;
    goto LABEL_4;
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks) >= *(_DWORD *)(a1 + 436) )
  {
    v5 = 11;
    v6 = KiLockQuantumTarget * KiNormalPriorityBoostingPeriodMultiplier;
    goto LABEL_5;
  }
LABEL_4:
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= *(_DWORD *)(a1 + 436) )
LABEL_5:
    KiSetPriorityBoost(0, a1, v5, *(_QWORD *)(a1 + 72), v6);
LABEL_6:
  KiEnterDeferredReadyState(a1);
  result = *a3;
  *(_QWORD *)(a1 + 216) = *a3;
  *a3 = a1 + 216;
  return result;
}
