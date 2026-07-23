/*
 * XREFs of PspUnlockProcessListShared @ 0x1403625A0
 * Callers:
 *     PsGetPreviousProcess @ 0x1408618BC (PsGetPreviousProcess.c)
 *     PsChangeQuantumTable @ 0x140A261A0 (PsChangeQuantumTable.c)
 *     PsGetNextProcessEx @ 0x140A30430 (PsGetNextProcessEx.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int v5; // eax
  unsigned __int64 v6; // r9
  char *v7; // r10
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v12; // ett

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  v5 = 0;
  v6 = (unsigned __int64)&PspActiveProcessLock & 0x7FFFFFFFFFFFFFFCLL;
  while ( v5 < KernelAbEntries->EntryCount )
  {
    v7 = (char *)KernelAbEntries + 88 * v5;
    a2 = *((_QWORD *)v7 + 2);
    if ( (a2 & 0x7FFFFFFFFFFFFFFCLL) == v6 && v7[26] && (a2 & 1) == 0 )
    {
      v7[26] = 0;
      result = KiAbEntryFreeAndEnableInterrupts(
                 (__int64)(v7 + 16),
                 (ULONG_PTR)CurrentThread,
                 (__int64)&PspActiveProcessLock,
                 1LL,
                 0LL);
      goto LABEL_14;
    }
    ++v5;
  }
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      a2 = (unsigned int)result;
      LODWORD(a2) = result & 0xFFDFFFFF;
      v12 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v12 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_14:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentPrcb, a2, SchedulerAssist, v6);
  }
  return result;
}
