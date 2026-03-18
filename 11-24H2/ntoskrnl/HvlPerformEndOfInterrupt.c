/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x14047A2D0
 * Callers:
 *     HvlDummyInterruptCallback @ 0x1405827B0 (HvlDummyInterruptCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140543FC8 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlPerformEndOfInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v7; // ett

  _disable();
  result = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
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
      v7 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v7 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return result;
}
