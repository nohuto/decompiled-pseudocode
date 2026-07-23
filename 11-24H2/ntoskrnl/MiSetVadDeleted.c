/*
 * XREFs of MiSetVadDeleted @ 0x140360BE0
 * Callers:
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A69CDC (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiSetVadFlags @ 0x14036049C (MiSetVadFlags.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiSetVadDeleted(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rsi
  ULONG_PTR Masks; // rsi
  char *v5; // rax
  __int64 v6; // r9
  char *v7; // rdi
  __int64 v8; // rdx
  struct _KTHREAD *v9; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v11; // r9
  unsigned int i; // eax
  char *v13; // r10
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v18; // ett

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  Masks = (ULONG_PTR)Process[1].ActiveGroupsMask.Masks;
  v5 = (char *)KeAbPreAcquire(Masks, 0LL);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Masks, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Masks, v5, Masks);
  if ( v7 )
    v7[10] = 1;
  MiSetVadFlags(a1, 2LL, 1LL, v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Masks, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Masks);
  v9 = KeGetCurrentThread();
  _disable();
  KernelAbEntries = v9->KernelAbEntries;
  v11 = Masks & 0x7FFFFFFFFFFFFFFCLL;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v13 = (char *)KernelAbEntries + 88 * i;
    v8 = *((_QWORD *)v13 + 2);
    if ( (v8 & 0x7FFFFFFFFFFFFFFCLL) == v11 && v13[26] && (v8 & 1) == 0 )
    {
      v13[26] = 0;
      result = KiAbEntryFreeAndEnableInterrupts((__int64)(v13 + 16), (ULONG_PTR)v9, Masks, 1LL, 0LL);
      goto LABEL_18;
    }
  }
  result = *((unsigned int *)&v9->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, Masks, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v8 = (unsigned int)result;
      LODWORD(v8) = result & 0xFFDFFFFF;
      v18 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v18 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_18:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentPrcb, v8, SchedulerAssist, v11);
  }
  return result;
}
