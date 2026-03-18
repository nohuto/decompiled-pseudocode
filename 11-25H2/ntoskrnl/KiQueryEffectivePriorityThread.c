/*
 * XREFs of KiQueryEffectivePriorityThread @ 0x1403188E0
 * Callers:
 *     KeAccumulateTicks @ 0x140273800 (KeAccumulateTicks.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140275710 (KiTransitionSchedulingGroupGeneration.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14028E760 (KeUpdateTotalCyclesCurrentThread.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402F6764 (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140318A40 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1403A9D6C (KiUpdateThreadSchedulingProperties.c)
 *     KiInitializePriorityState @ 0x1405BEF00 (KiInitializePriorityState.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
