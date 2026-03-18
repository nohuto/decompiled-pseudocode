/*
 * XREFs of MiSetVadDeleted @ 0x1402B94A0
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x1408DC33C (MiCoalescePlaceholderAllocations.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7084C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiSetVadFlags @ 0x1402B8D5C (MiSetVadFlags.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiSetVadDeleted(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rsi
  ULONG_PTR Masks; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  struct _KTHREAD *v8; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v10; // r9
  unsigned int i; // eax
  char *v12; // r10
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v17; // ett

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  Masks = (ULONG_PTR)Process[1].ActiveGroupsMask.Masks;
  v5 = KeAbPreAcquire(Masks, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Masks, 0LL) )
    ExfAcquirePushLockExclusiveEx(Masks, v5, Masks);
  if ( v6 )
    *(_BYTE *)(v6 + 10) = 1;
  MiSetVadFlags(a1, 2LL, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Masks, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Masks);
  v8 = KeGetCurrentThread();
  _disable();
  KernelAbEntries = v8->KernelAbEntries;
  v10 = Masks & 0x7FFFFFFFFFFFFFFCLL;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v12 = (char *)KernelAbEntries + 88 * i;
    v7 = *((_QWORD *)v12 + 2);
    if ( (v7 & 0x7FFFFFFFFFFFFFFCLL) == v10 && v12[26] && (v7 & 1) == 0 )
    {
      v12[26] = 0;
      result = KiAbEntryFreeAndEnableInterrupts((__int64)(v12 + 16), (ULONG_PTR)v8, Masks, 1, 0LL);
      goto LABEL_18;
    }
  }
  result = *((unsigned int *)&v8->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v8, Masks, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v7 = (unsigned int)result;
      LODWORD(v7) = result & 0xFFDFFFFF;
      v17 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v17 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_18:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentPrcb, v7, SchedulerAssist, v10);
  }
  return result;
}
