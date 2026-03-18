/*
 * XREFs of IopReleaseFileObjectLock @ 0x14031D520
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x140400A70 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140401030 (IopAllocateAndPopulateWriteIrp.c)
 *     IoSetInformation @ 0x140714820 (IoSetInformation.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopWriteFile @ 0x1408C1630 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     IopQueryXxxInformation @ 0x14096A530 (IopQueryXxxInformation.c)
 *     IopFlushBuffersFile @ 0x14096E4A4 (IopFlushBuffersFile.c)
 *     NtQueryEaFile @ 0x14096E890 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x14096EFA0 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     NtUnlockFile @ 0x140972480 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 *     IopAllocateIrpCleanup @ 0x140A0C064 (IopAllocateIrpCleanup.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140257DF0 (ObGetCurrentIrql.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     KeAbPreWakeupThread @ 0x1403D8DF0 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
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
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // edx
  __int64 v15; // rcx
  char v16; // cl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v18; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int64 v20; // rbx
  signed __int64 v21; // rax
  bool v22; // cc
  signed __int64 BugCheckParameter4; // rax
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v1, 7u) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
            KeAbPreWakeupThread(&Next[-27], v1);
        }
        KiExitDispatcher(CurrentPrcb, CurrentIrql);
        break;
      }
      v8 = (_QWORD *)*v7;
      v9 = v7;
      v7 = v8;
      v10 = (_QWORD *)v9[1];
      if ( (_QWORD *)v8[1] != v9 || (_QWORD *)*v10 != v9 )
        __fastfail(3u);
      *v10 = v8;
      v8[1] = v10;
      v16 = *((_BYTE *)v9 + 16);
      switch ( v16 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v9, *((unsigned __int16 *)v9 + 9), &v29) )
            goto LABEL_10;
          break;
        case 2:
          *((_BYTE *)v9 + 17) = 5;
          KiInsertQueueInternal(v9[3], v9);
LABEL_10:
          if ( (*(_DWORD *)(v1 + 4))-- == 1 )
            goto LABEL_11;
          break;
        case 4:
          *((_BYTE *)v9 + 17) = 5;
          *(_DWORD *)(v1 + 4) = 0;
          KeInsertQueueDpc((PRKDPC)v9[3], (PVOID)v1, v9);
          break;
        default:
          KiTryUnwaitThread(CurrentPrcb, v9, 256LL, 0LL);
          break;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v15 = (__int64)&KernelAbEntries->Entries[i];
    if ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_BYTE *)(v15 + 10)
      && (*(_QWORD *)v15 & 1) == 0 )
    {
      *(_BYTE *)(v15 + 10) = 0;
      KiAbEntryFreeAndEnableInterrupts(v15, (ULONG_PTR)CurrentThread, v1, 1, 0LL);
      goto LABEL_36;
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, 0LL, 0LL);
  v18 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v18->SchedulerAssist;
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
      KiRemoveSystemWorkPriorityKick((__int64)v18);
  }
  _enable();
LABEL_36:
  v20 = BugCheckParameter2 - 48;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48);
  v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL);
  v22 = v21 <= 1;
  BugCheckParameter4 = v21 - 1;
  if ( v22 )
  {
    if ( *(_QWORD *)(v20 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v20 + 24) ^ (unsigned __int64)BYTE1(v20)],
        BugCheckParameter2,
        1uLL,
        *(_QWORD *)(v20 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      _m_prefetchw(&ObpRemoveObjectList);
      v27 = ObpRemoveObjectList;
      *(_QWORD *)(v20 + 8) = ObpRemoveObjectList;
      for ( j = _InterlockedCompareExchange64(&ObpRemoveObjectList, v20, v27);
            j != v27;
            j = _InterlockedCompareExchange64(&ObpRemoveObjectList, v20, j) )
      {
        v27 = j;
        *(_QWORD *)(v20 + 8) = j;
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
      if ( (*(_BYTE *)(v20 + 26) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)(v20 - ObpInfoMaskToOffset[*(_BYTE *)(v20 + 26) & 0x7F]) + 24LL) )
      {
        ObpHandleRevocationBlockRemoveObject();
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(BugCheckParameter2 - 48);
      ObpRemoveObjectRoutine(BugCheckParameter2 - 48, 0LL);
    }
  }
  return KeLeaveCriticalRegionThread();
}
