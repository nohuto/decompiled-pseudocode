/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x1402BD2A0
 * Callers:
 *     MiPostInsertVad @ 0x1402BCBB0 (MiPostInsertVad.c)
 *     MiUnlockLoaderEntry @ 0x14036E408 (MiUnlockLoaderEntry.c)
 *     MiUnlockAweVadsExclusive @ 0x1404B4370 (MiUnlockAweVadsExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x14067788C (MiUnlockAwePagesExclusive.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1402BCAFC (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v3; // si
  int v4; // eax
  signed __int64 v5; // rax
  signed __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rtt
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // edx
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v15; // ett

  v3 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v4 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
  }
  else if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xF0000u) < 0xF0000 )
  {
    *(_DWORD *)(BugCheckParameter2 + 12) += 0x10000;
  }
  _m_prefetchw((const void *)BugCheckParameter2);
  v5 = *(_QWORD *)BugCheckParameter2;
  v6 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (v5 & 2) != 0
    || (v8 = *(_QWORD *)BugCheckParameter2,
        result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v6, v5),
        v8 != result) )
  {
    result = ExfReleasePushLock((_QWORD *)BugCheckParameter2);
  }
  if ( (v3 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v12 = (__int64)&KernelAbEntries->Entries[i];
      if ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(v12 + 10)
        && (*(_QWORD *)v12 & 1) == 0 )
      {
        *(_BYTE *)(v12 + 10) = 0;
        return KiAbEntryFreeAndEnableInterrupts(v12, (ULONG_PTR)CurrentThread, BugCheckParameter2, 1, 0LL);
      }
    }
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v15 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v15 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
