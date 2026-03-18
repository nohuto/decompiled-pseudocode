/*
 * XREFs of KiSuspendClockTimer @ 0x1404BEE34
 * Callers:
 *     KeSuspendClockTimer @ 0x1404BEE1C (KeSuspendClockTimer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiSuspendClockTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v6; // edi

  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned int)KiClockState;
  v6 = KiClockTimerOwner;
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    result = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    CurrentPrcb->ClockTimerState.ClockActive = 0;
    CurrentPrcb->PendingTickFlags &= ~1u;
  }
  if ( CurrentPrcb->Number == v6 )
    ++dword_140F21764;
  if ( CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 0;
  return result;
}
