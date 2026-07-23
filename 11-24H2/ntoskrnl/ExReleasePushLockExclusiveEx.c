/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x14028E4B0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  unsigned __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  ULONG_PTR v7; // r9
  unsigned int i; // eax
  char *v9; // r11
  __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v13; // rdx
  unsigned __int32 v14; // ett

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
    v7 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v9 = (char *)KernelAbEntries + 88 * i;
      v10 = *((_QWORD *)v9 + 2);
      if ( (v10 & 0x7FFFFFFFFFFFFFFCLL) == v7 && v9[26] && (v10 & 1) == 0 )
      {
        v9[26] = 0;
        LOBYTE(v4) = KiAbEntryFreeAndEnableInterrupts(
                       (__int64)(v9 + 16),
                       (ULONG_PTR)CurrentThread,
                       BugCheckParameter2,
                       1LL,
                       0LL);
        return v4;
      }
    }
    v4 = *(&CurrentThread->MiscFlags + 1);
    if ( (v4 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v4 = *SchedulerAssist;
      do
      {
        v13 = v4;
        LODWORD(v13) = v4 & 0xFFDFFFFF;
        v14 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v4 & 0xFFDFFFFF, v4);
      }
      while ( v14 != v4 );
      if ( (v4 & 0x200000) != 0 )
        LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v13, SchedulerAssist, v7);
    }
    _enable();
  }
  return v4;
}
