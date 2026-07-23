/*
 * XREFs of ExReleasePushLockSharedEx @ 0x14028E2D0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleasePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int v7; // eax
  ULONG_PTR v8; // r9
  char *v9; // r11
  __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v13; // rdx
  int v14; // ett

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    v7 = 0;
    v8 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v7 < KernelAbEntries->EntryCount )
    {
      v9 = (char *)KernelAbEntries + 88 * v7;
      v10 = *((_QWORD *)v9 + 2);
      if ( (v10 & 0x7FFFFFFFFFFFFFFCLL) == v8 && v9[26] && (v10 & 1) == 0 )
      {
        v9[26] = 0;
        return KiAbEntryFreeAndEnableInterrupts(
                 (__int64)(v9 + 16),
                 (ULONG_PTR)CurrentThread,
                 BugCheckParameter2,
                 1LL,
                 0LL);
      }
      ++v7;
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
        v13 = (unsigned int)result;
        LODWORD(v13) = result & 0xFFDFFFFF;
        v14 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v14 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v13, SchedulerAssist, v8);
    }
    _enable();
  }
  return result;
}
