/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x140420A88
 * Callers:
 *     ExInterlockedAddLargeInteger @ 0x14041FF40 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedAddUlong @ 0x14041FFA0 (ExInterlockedAddUlong.c)
 *     ExInterlockedInsertHeadList @ 0x1404208B0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x140420930 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x1404209E0 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedPopEntryList @ 0x140656A70 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x140656AC0 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  unsigned int v1; // ebx
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
        HvlNotifyLongSpinWait(v1);
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
