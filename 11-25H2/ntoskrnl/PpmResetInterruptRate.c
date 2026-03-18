/*
 * XREFs of PpmResetInterruptRate @ 0x1404A8470
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmResetInterruptRate(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  _disable();
  a1[2921] = 0;
  a1[2920] = a1[8592];
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v4 = *SchedulerAssist;
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return 0LL;
}
