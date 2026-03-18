/*
 * XREFs of ExpReleaseSpinLockDisabled @ 0x14042EE08
 * Callers:
 *     ExInterlockedAddLargeInteger @ 0x14042E210 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedAddUlong @ 0x14042E270 (ExInterlockedAddUlong.c)
 *     ExInterlockedInsertHeadList @ 0x14042EB80 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedPopEntryList @ 0x140658370 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x1406583C0 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpReleaseSpinLockDisabled(volatile signed __int64 *a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  _InterlockedAnd64(a1, 0LL);
  if ( a2 )
  {
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
  }
}
