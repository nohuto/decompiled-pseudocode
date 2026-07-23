/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1402DE7C8
 * Callers:
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     KiSetPriorityBoost @ 0x1402DFE70 (KiSetPriorityBoost.c)
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
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - KiPriorityBoostReadyTimeTicks) >= *(_DWORD *)(a1 + 436) )
LABEL_5:
    KiSetPriorityBoost(0, a1, v5, *(_QWORD *)(a1 + 72), v6);
LABEL_6:
  KiEnterDeferredReadyState(a1);
  result = *a3;
  *(_QWORD *)(a1 + 216) = *a3;
  *a3 = a1 + 216;
  return result;
}
