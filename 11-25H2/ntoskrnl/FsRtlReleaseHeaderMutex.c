/*
 * XREFs of FsRtlReleaseHeaderMutex @ 0x140286C50
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140376284 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlReleaseEofLock @ 0x1403F96E0 (FsRtlReleaseEofLock.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x14027FB04 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall FsRtlReleaseHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // r15
  signed __int32 v4; // eax
  int v5; // ecx
  int v6; // edx
  signed __int32 v7; // ett
  char Priority; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v11; // rsi
  _QWORD *v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r9
  unsigned int i; // edx
  _KLOCK_ENTRY *v19; // rcx
  __int64 result; // rax
  char v21; // cl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v23; // rcx
  _DWORD *SchedulerAssist; // r8
  int v25; // ett
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v27; // [rsp+78h] [rbp+10h]

  v27 = a2;
  if ( a2 )
    _InterlockedIncrement(v27);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v3 = *(unsigned __int8 *)(v2 + 48);
  *(_QWORD *)(v2 + 8) = 0LL;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)v2, 1, 0);
  if ( !v4 )
    goto LABEL_19;
  v26 = 0LL;
  do
  {
    v5 = -1;
    v6 = v4 & 2;
    if ( (v4 & 2) != 0 )
      v5 = 1;
    v7 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)v2, v4 + v5, v4);
  }
  while ( v7 != v4 );
  if ( v6 )
    goto LABEL_19;
  Priority = KeGetCurrentThread()->Priority;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v2 + 24);
  *(_DWORD *)(v2 + 28) = 1;
  v11 = *(_QWORD **)(v2 + 32);
  while ( v11 != (_QWORD *)(v2 + 32) )
  {
    v12 = (_QWORD *)*v11;
    v13 = (__int64)v11;
    v11 = v12;
    v14 = *(_QWORD **)(v13 + 8);
    if ( v12[1] != v13 || *v14 != v13 )
      __fastfail(3u);
    *v14 = v12;
    v12[1] = v14;
    v21 = *(_BYTE *)(v13 + 16);
    switch ( v21 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v13, *(unsigned __int16 *)(v13 + 18), &v26) )
          goto LABEL_16;
        break;
      case 2:
        *(_BYTE *)(v13 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v13 + 24), (__int64 *)v13);
LABEL_16:
        if ( (*(_DWORD *)(v2 + 28))-- == 1 )
          goto LABEL_17;
        break;
      case 4:
        *(_BYTE *)(v13 + 17) = 5;
        *(_DWORD *)(v2 + 28) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v13 + 24), (PVOID)(v2 + 24), (PVOID)v13);
        break;
      default:
        KiTryUnwaitThread((__int64)CurrentPrcb, v13, 256LL, 0LL);
        break;
    }
  }
LABEL_17:
  _InterlockedAnd((volatile signed __int32 *)(v2 + 24), 0xFFFFFF7F);
  if ( Priority )
  {
    Next = CurrentPrcb->DeferredReadyListHead.Next;
    if ( Next )
      KeAbPreWakeupThread((ULONG_PTR)&Next[-27], v2);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
LABEL_19:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
  __writecr8(v3);
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v19 = &KernelAbEntries->Entries[i];
    if ( (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->AcquiredByte
      && (*(_QWORD *)&v19->LockState.0 & 1) == 0 )
    {
      v19->AcquiredByte = 0;
      return KiAbEntryFreeAndEnableInterrupts(v19, CurrentThread, v2, 1LL, 0LL);
    }
  }
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, 0LL, 0LL);
  v23 = KeGetCurrentPrcb();
  SchedulerAssist = v23->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v25 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v25 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(v23);
  }
  _enable();
  return result;
}
