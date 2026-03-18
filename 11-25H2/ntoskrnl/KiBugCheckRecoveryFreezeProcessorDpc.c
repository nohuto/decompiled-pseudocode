/*
 * XREFs of KiBugCheckRecoveryFreezeProcessorDpc @ 0x1405C1A20
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 KiBugCheckRecoveryFreezeProcessorDpc()
{
  bool v0; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v5; // ett

  v0 = KeDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  _InterlockedIncrement(&KiFreezeInDpcCount);
  while ( KiFreezeInDpc )
    _mm_pause();
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v5 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v5 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
