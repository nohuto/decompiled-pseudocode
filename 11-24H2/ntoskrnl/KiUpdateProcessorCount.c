/*
 * XREFs of KiUpdateProcessorCount @ 0x140B57928
 * Callers:
 *     KiUpdateNumberProcessorsIpi @ 0x140B59820 (KiUpdateNumberProcessorsIpi.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiGetCurrentGroupCount @ 0x1405B8DA4 (KiGetCurrentGroupCount.c)
 */

__int64 __fastcall KiUpdateProcessorCount(__int64 a1, int a2)
{
  unsigned int v3; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  volatile CCHAR v8; // al
  __int64 result; // rax

  KiActiveGroups = KiGetCurrentGroupCount();
  _disable();
  LODWORD(KeNumberProcessors_0) = KeNumberProcessors_0 + 1;
  KeAddProcessorAffinityEx(&KeActiveProcessors.Count, v3);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v6 = *SchedulerAssist;
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
    }
    while ( v7 != v6 );
    if ( (v6 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  if ( !a2 )
  {
    v8 = KeNumberProcessorsGroup0[0];
    KeNumberProcessorsGroup0[0] = v8 + 1;
  }
  ++*(_DWORD *)(MmWriteableSharedUserData + 960);
  ++*(_WORD *)(MmWriteableSharedUserData + 874);
  result = MmWriteableSharedUserData;
  *(_BYTE *)(MmWriteableSharedUserData + 964) = KiActiveGroups;
  return result;
}
