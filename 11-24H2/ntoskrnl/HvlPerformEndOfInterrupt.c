/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x140475A40
 * Callers:
 *     HvlDummyInterruptCallback @ 0x14057FB30 (HvlDummyInterruptCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140541918 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlPerformEndOfInterrupt(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v5; // ett

  _disable();
  result = guard_dispatch_icall_no_overrides(a1, a2);
  if ( HalpInterruptDirectedEoiModeEnabled )
    result = HalpInterruptPerformDirectedEndOfInterrupt(0LL);
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
  return result;
}
