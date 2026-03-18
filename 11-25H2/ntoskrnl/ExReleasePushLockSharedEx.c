/*
 * XREFs of ExReleasePushLockSharedEx @ 0x14029B310
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleasePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // eax
  char *v8; // r10
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v12; // ett

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
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v8 = (char *)KernelAbEntries + 88 * i;
      v9 = *((_QWORD *)v8 + 2);
      if ( (v9 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL) && v8[26] && (v9 & 1) == 0 )
      {
        v8[26] = 0;
        return KiAbEntryFreeAndEnableInterrupts(v8 + 16, CurrentThread, BugCheckParameter2, 1LL, 0LL);
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
        v12 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v12 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
