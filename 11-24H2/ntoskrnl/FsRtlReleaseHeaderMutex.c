/*
 * XREFs of FsRtlReleaseHeaderMutex @ 0x1402C6D00
 * Callers:
 *     FsRtlReleaseEofLock @ 0x1402E0940 (FsRtlReleaseEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402E1598 (FsRtlpWaitForIoAtEof.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x1402DFF50 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall FsRtlReleaseHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // rbp
  signed __int32 v4; // eax
  int v5; // ecx
  int v6; // edx
  signed __int32 v7; // ett
  char Priority; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  _QWORD *v11; // rsi
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // eax
  char *v19; // r11
  __int64 v20; // rdx
  __int64 result; // rax
  char v22; // cl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *SchedulerAssist; // r8
  int v26; // ett
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v28; // [rsp+78h] [rbp+10h]

  v28 = a2;
  if ( a2 )
    _InterlockedIncrement(v28);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v3 = *(unsigned __int8 *)(v2 + 48);
  *(_QWORD *)(v2 + 8) = 0LL;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)v2, 1, 0);
  if ( !v4 )
    goto LABEL_19;
  v27 = 0LL;
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v2 + 24);
  *(_DWORD *)(v2 + 28) = 1;
  v11 = *(_QWORD **)(v2 + 32);
  while ( v11 != (_QWORD *)(v2 + 32) )
  {
    v12 = (_QWORD *)*v11;
    v13 = v11;
    v11 = v12;
    v14 = (_QWORD *)v13[1];
    if ( (_QWORD *)v12[1] != v13 || (_QWORD *)*v14 != v13 )
      __fastfail(3u);
    *v14 = v12;
    v12[1] = v14;
    v22 = *((_BYTE *)v13 + 16);
    switch ( v22 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v13, *((unsigned __int16 *)v13 + 9), &v27) )
          goto LABEL_16;
        break;
      case 2:
        *((_BYTE *)v13 + 17) = 5;
        KiInsertQueueInternal(v13[3], v13);
LABEL_16:
        if ( (*(_DWORD *)(v2 + 28))-- == 1 )
          goto LABEL_17;
        break;
      case 4:
        *((_BYTE *)v13 + 17) = 5;
        *(_DWORD *)(v2 + 28) = 0;
        KeInsertQueueDpc((PRKDPC)v13[3], (PVOID)(v2 + 24), v13);
        break;
      default:
        KiTryUnwaitThread(CurrentPrcb, v13, 256LL, 0LL);
        break;
    }
  }
LABEL_17:
  _InterlockedAnd((volatile signed __int32 *)(v2 + 24), 0xFFFFFF7F);
  if ( Priority )
  {
    Next = CurrentPrcb->DeferredReadyListHead.Next;
    if ( Next )
      KeAbPreWakeupThread(&Next[-27], v2);
  }
  KiExitDispatcher(CurrentPrcb, CurrentIrql);
LABEL_19:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
  __writecr8(v3);
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v19 = (char *)KernelAbEntries + 88 * i;
    v20 = *((_QWORD *)v19 + 2);
    if ( (v20 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL) && v19[26] && (v20 & 1) == 0 )
    {
      v19[26] = 0;
      return KiAbEntryFreeAndEnableInterrupts((__int64)(v19 + 16), (ULONG_PTR)CurrentThread, v2, 1LL, 0LL);
    }
  }
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, 0LL, 0LL);
  v24 = KeGetCurrentPrcb();
  SchedulerAssist = v24->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v26 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v26 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)v24);
  }
  _enable();
  return result;
}
