/*
 * XREFs of KxReenterRetpolinedCode @ 0x14043F7F4
 * Callers:
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 *     KeReenterRetpolinedCode @ 0x14043F7D0 (KeReenterRetpolinedCode.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 */

char KxReenterRetpolinedCode()
{
  signed __int32 v0; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v2; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // ett

  LOBYTE(v0) = KeDisableInterrupts();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->BpbRetpolineState.AllFlags &= ~1u;
  if ( (_BYTE)v0 )
  {
    v2 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v2->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v0 = *SchedulerAssist;
      do
      {
        v4 = v0;
        v0 = _InterlockedCompareExchange(SchedulerAssist, v0 & 0xFFDFFFFF, v0);
      }
      while ( v4 != v0 );
      if ( (v0 & 0x200000) != 0 )
        LOBYTE(v0) = KiRemoveSystemWorkPriorityKick((__int64)v2);
    }
    _enable();
  }
  return v0;
}
