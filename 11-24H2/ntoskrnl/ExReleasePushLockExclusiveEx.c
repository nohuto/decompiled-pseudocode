/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x14025DEA0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  signed __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // eax
  char *v8; // r11
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // ett

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  LOBYTE(v4) = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( (_BYTE)v4 == 2 )
    LOBYTE(v4) = ExfTryToWakePushLock(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v8 = (char *)KernelAbEntries + 88 * i;
      v9 = *((_QWORD *)v8 + 2);
      if ( (v9 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL) && v8[26] && (v9 & 1) == 0 )
      {
        v8[26] = 0;
        LOBYTE(v4) = KiAbEntryFreeAndEnableInterrupts(
                       (__int64)(v8 + 16),
                       (ULONG_PTR)CurrentThread,
                       BugCheckParameter2,
                       1,
                       0LL);
        return v4;
      }
    }
    v4 = *(&CurrentThread->MiscFlags + 1);
    if ( (v4 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v4 = *SchedulerAssist;
      do
      {
        v12 = v4;
        v4 = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
      }
      while ( v12 != v4 );
      if ( (v4 & 0x200000) != 0 )
        LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return v4;
}
