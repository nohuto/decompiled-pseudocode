/*
 * XREFs of KiQueryEffectivePriorityThread @ 0x14036A4C0
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1402D6DAC (KiUpdateThreadSchedulingProperties.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402DBCD0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1403693A0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140369BE0 (KiReduceByEffectiveIdleSmtSet.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14045D564 (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KeQueryEffectivePriorityThread @ 0x1404DD960 (KeQueryEffectivePriorityThread.c)
 *     KiInitializePriorityState @ 0x1405C05B0 (KiInitializePriorityState.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiQueryEffectivePriorityThread(__int64 a1, struct _KPRCB *a2)
{
  int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return (unsigned int)*(char *)(a1 + 195);
  v4 = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
  {
    v8 = v7 + CurrentPrcb->ScbOffset;
    if ( a2 )
    {
      if ( *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0 )
      {
        v9 = v7 + CurrentPrcb->ScbOffset;
        do
        {
          if ( (*(_BYTE *)(v9 + 112) & 2) != 0 )
          {
            v4 = -1;
            goto LABEL_16;
          }
          v9 = *(_QWORD *)(v9 + 416);
        }
        while ( v9 );
        do
        {
          v4 = *(_DWORD *)(v8 + 124);
          if ( v4 )
            break;
          v8 = *(_QWORD *)(v8 + 416);
        }
        while ( v8 );
      }
    }
    else
    {
      do
      {
        v4 = (*(unsigned __int16 *)(v8 + 112) >> 3) & 1;
        if ( v4 )
          break;
        v8 = *(_QWORD *)(v8 + 416);
      }
      while ( v8 );
    }
  }
LABEL_16:
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v4 )
    return 1LL;
  else
    return (unsigned int)*(char *)(a1 + 195);
}
