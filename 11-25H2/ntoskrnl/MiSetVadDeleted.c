/*
 * XREFs of MiSetVadDeleted @ 0x14031F8D0
 * Callers:
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7248C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiSetVadDeleted(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r14
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rcx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rdx
  struct _KTHREAD *v12; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int v14; // eax
  __int64 v15; // r9
  char *v16; // r10
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v21; // ett
  unsigned int v22; // esi

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((__int64)&Process[1].ActiveGroupsMask, 0LL);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[1].ActiveGroupsMask, 0LL) )
    ExfAcquirePushLockExclusiveEx(Process[1].ActiveGroupsMask.Masks, v4, (__int64)&Process[1].ActiveGroupsMask);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( MmVadEventBlockFixEnabled )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  }
  else
  {
    CurrentIrql = MiLockVadCore(a1, 0);
  }
  MiLockVadTree(3, v5);
  if ( MmVadEventBlockFixEnabled )
  {
    v9 = *(_DWORD *)(a1 + 48);
    do
    {
      while ( (v9 & 1) != 0 )
      {
        if ( (v9 & 2) != 0 )
        {
          v22 = 0;
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
            {
              HvlNotifyLongSpinWait(v22);
            }
            else
            {
              _mm_pause();
            }
            v9 = *(_DWORD *)(a1 + 48);
          }
          while ( (v9 & 1) != 0 );
        }
        else
        {
          v8 = v9 | 2u;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v8, v9);
        }
      }
      v8 = v9 & 0xFFFFFFFC | 1;
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v8, v9);
    }
    while ( v10 != v9 );
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 48), 4u);
  if ( MmVadEventBlockFixEnabled )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0x7FFFFFFCu);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  else
  {
    MiUnlockVadTree(3, 0x11u);
    MiUnlockVadCore(a1, CurrentIrql);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ActiveGroupsMask, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].ActiveGroupsMask);
  v12 = KeGetCurrentThread();
  _disable();
  KernelAbEntries = v12->KernelAbEntries;
  v14 = 0;
  v15 = (unsigned __int64)Process[1].ActiveGroupsMask.Masks & 0x7FFFFFFFFFFFFFFCLL;
  while ( v14 < KernelAbEntries->EntryCount )
  {
    v16 = (char *)KernelAbEntries + 88 * v14;
    v11 = *((_QWORD *)v16 + 2);
    if ( (v11 & 0x7FFFFFFFFFFFFFFCLL) == v15 && v16[26] && (v11 & 1) == 0 )
    {
      v16[26] = 0;
      result = KiAbEntryFreeAndEnableInterrupts(
                 (__int64)(v16 + 16),
                 (ULONG_PTR)v12,
                 (__int64)&Process[1].ActiveGroupsMask,
                 1,
                 0LL);
      goto LABEL_24;
    }
    ++v14;
  }
  result = *((unsigned int *)&v12->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v12, (ULONG_PTR)Process[1].ActiveGroupsMask.Masks, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v11 = (unsigned int)result;
      LODWORD(v11) = result & 0xFFDFFFFF;
      v21 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v21 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_24:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentPrcb, v11, SchedulerAssist, v15);
  }
  return result;
}
