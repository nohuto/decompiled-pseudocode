/*
 * XREFs of ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402F6764
 * Callers:
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F61B0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F6544 (KeSetSchedulingGroupRankBias.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F6B24 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x140350788 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 * Callees:
 *     KiSetSchedulerAssistPriority @ 0x1402F6DA4 (KiSetSchedulerAssistPriority.c)
 *     KiQueryEffectivePriorityThread @ 0x1403188E0 (KiQueryEffectivePriorityThread.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(
        struct _KPRCB *a1,
        union _KISOLATION_UNIT_LOCK_HANDLE *a2,
        struct _KSCB *a3)
{
  _KTHREAD *NextThread; // rdi
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  struct _KSCB *v6; // rax
  _KPRIORITY_STATE *PriorityState; // r14
  unsigned __int8 AllFields; // bl
  char v9; // al
  unsigned __int8 v10; // al
  void *SchedulerAssist; // rcx
  __int64 v12; // rdx

  NextThread = a1->NextThread;
  if ( !NextThread )
    NextThread = a1->CurrentThread;
  SchedulingGroup = NextThread->SchedulingGroup;
  if ( !SchedulingGroup )
  {
    v6 = 0LL;
LABEL_5:
    if ( v6 != a3 )
      return;
    goto LABEL_11;
  }
  v6 = (struct _KSCB *)((char *)SchedulingGroup + a1->ScbOffset);
  if ( !v6 )
    goto LABEL_5;
  while ( v6 != a3 )
  {
    v6 = v6->Parent;
    if ( !v6 )
      goto LABEL_5;
  }
LABEL_11:
  PriorityState = a1->PriorityState;
  AllFields = PriorityState->AllFields;
  if ( (NextThread->Header.Size & 4) != 0 )
    v9 = AllFields ^ KiQueryEffectivePriorityThread(NextThread, a1);
  else
    v9 = NextThread->Priority ^ AllFields;
  v10 = AllFields ^ v9 & 0x7F;
  PriorityState->AllFields = v10;
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( NextThread == a1->IdleThread )
      v12 = (unsigned int)KiVpThreadSystemWorkPriority;
    else
      v12 = v10 & 0x7F;
    KiSetSchedulerAssistPriority(SchedulerAssist, v12, 0LL);
  }
}
