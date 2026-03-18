/*
 * XREFs of IopReleaseFileObjectLock @ 0x140285FF0
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1402D3880 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1402D4D60 (IopAllocateAndPopulateWriteIrp.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     IopWriteFile @ 0x1408C3790 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     NtQueryEaFile @ 0x140935870 (NtQueryEaFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x140936F60 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140938E14 (IopFlushBuffersFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 *     IopAllocateIrpCleanup @ 0x14098A8E4 (IopAllocateIrpCleanup.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x14027FB04 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 */

__int64 __fastcall IopReleaseFileObjectLock(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  char Priority; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v6; // esi
  _QWORD *v7; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r9
  unsigned int i; // edx
  _KLOCK_ENTRY *v15; // rcx
  signed __int64 v16; // rbx
  signed __int64 v17; // rax
  bool v18; // cc
  signed __int64 BugCheckParameter4; // rax
  char v21; // cl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v23; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  signed __int64 v27; // rcx
  signed __int64 j; // rax
  __int64 v29; // [rsp+80h] [rbp+18h] BYREF

  v1 = BugCheckParameter2 + 128;
  v29 = 0LL;
  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange((volatile __int32 *)(BugCheckParameter2 + 116), 0);
  if ( *(_DWORD *)(BugCheckParameter2 + 112) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v1, 7u) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter2) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v1, 7u) );
    }
    v7 = *(_QWORD **)(v1 + 8);
    *(_DWORD *)(v1 + 4) = 1;
    while ( 1 )
    {
      if ( v7 == (_QWORD *)(v1 + 8) )
      {
LABEL_11:
        _InterlockedAnd((volatile signed __int32 *)v1, 0xFFFFFF7F);
        if ( Priority )
        {
          Next = CurrentPrcb->DeferredReadyListHead.Next;
          if ( Next )
            KeAbPreWakeupThread((ULONG_PTR)&Next[-27], v1);
        }
        KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
        break;
      }
      v8 = (_QWORD *)*v7;
      v9 = (__int64)v7;
      v7 = v8;
      v10 = *(_QWORD **)(v9 + 8);
      if ( v8[1] != v9 || *v10 != v9 )
        __fastfail(3u);
      *v10 = v8;
      v8[1] = v10;
      v21 = *(_BYTE *)(v9 + 16);
      switch ( v21 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v9, *(unsigned __int16 *)(v9 + 18), &v29) )
            goto LABEL_10;
          break;
        case 2:
          *(_BYTE *)(v9 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v9 + 24), (__int64 *)v9);
LABEL_10:
          if ( (*(_DWORD *)(v1 + 4))-- == 1 )
            goto LABEL_11;
          break;
        case 4:
          *(_BYTE *)(v9 + 17) = 5;
          *(_DWORD *)(v1 + 4) = 0;
          KeInsertQueueDpc(*(PRKDPC *)(v9 + 24), (PVOID)v1, (PVOID)v9);
          break;
        default:
          KiTryUnwaitThread((__int64)CurrentPrcb, v9, 256LL, 0LL);
          break;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v15 = &KernelAbEntries->Entries[i];
    if ( (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
      && v15->AcquiredByte
      && (*(_QWORD *)&v15->LockState.0 & 1) == 0 )
    {
      v15->AcquiredByte = 0;
      KiAbEntryFreeAndEnableInterrupts(v15, CurrentThread, v1, 1LL, 0LL);
      goto LABEL_19;
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, 0LL, 0LL);
  v23 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v23->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v25 = *SchedulerAssist;
    do
    {
      v26 = v25;
      v25 = _InterlockedCompareExchange(SchedulerAssist, v25 & 0xFFDFFFFF, v25);
    }
    while ( v26 != v25 );
    if ( (v25 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v23);
  }
  _enable();
LABEL_19:
  v16 = BugCheckParameter2 - 48;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48);
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL);
  v18 = v17 <= 1;
  BugCheckParameter4 = v17 - 1;
  if ( v18 )
  {
    if ( *(_QWORD *)(v16 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v16 + 24) ^ (unsigned __int64)BYTE1(v16)],
        BugCheckParameter2,
        1uLL,
        *(_QWORD *)(v16 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      _m_prefetchw(&ObpRemoveObjectList);
      v27 = ObpRemoveObjectList;
      *(_QWORD *)(v16 + 8) = ObpRemoveObjectList;
      for ( j = _InterlockedCompareExchange64(&ObpRemoveObjectList, v16, v27);
            j != v27;
            j = _InterlockedCompareExchange64(&ObpRemoveObjectList, v16, j) )
      {
        v27 = j;
        *(_QWORD *)(v16 + 8) = j;
      }
      if ( !v27 )
      {
        if ( ObGetCurrentIrql() > 2u )
          KeInsertQueueDpc(&ObpRemoveObjectDpc, 0LL, 0LL);
        else
          ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
      }
    }
    else
    {
      if ( (*(_BYTE *)(v16 + 26) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)(v16 - ObpInfoMaskToOffset[*(_BYTE *)(v16 + 26) & 0x7F]) + 24LL) )
      {
        ObpHandleRevocationBlockRemoveObject();
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(BugCheckParameter2 - 48);
      ObpRemoveObjectRoutine(BugCheckParameter2 - 48, 0LL);
    }
  }
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
