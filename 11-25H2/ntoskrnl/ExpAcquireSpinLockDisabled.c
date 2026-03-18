/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x140354784
 * Callers:
 *     ExInterlockedAddLargeInteger @ 0x140353C40 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedAddUlong @ 0x140353CA0 (ExInterlockedAddUlong.c)
 *     ExInterlockedInsertHeadList @ 0x1403545B0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x140354630 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x1403546E0 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedPopEntryList @ 0x14064C410 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14064C460 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  int v1; // ebx
  bool v3; // si
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  v1 = 0;
  v3 = KeDisableInterrupts();
  while ( _interlockedbittestandset64(a1, 0LL) )
  {
    if ( v3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v7 = *SchedulerAssist;
        do
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
        }
        while ( v8 != v7 );
        if ( (v7 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return v3;
}
