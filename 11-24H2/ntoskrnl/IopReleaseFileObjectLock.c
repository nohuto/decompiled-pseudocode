/*
 * XREFs of IopReleaseFileObjectLock @ 0x1402C60B0
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1403FB3F0 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403FB9B0 (IopAllocateAndPopulateWriteIrp.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopWriteFile @ 0x1408BEFF0 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     NtQueryEaFile @ 0x140956950 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140957794 (IopFlushBuffersFile.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     NtUnlockFile @ 0x14095AC90 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     IopAllocateIrpCleanup @ 0x140A0B2A4 (IopAllocateIrpCleanup.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140288400 (ObGetCurrentIrql.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeAbPreWakeupThread @ 0x1402DFF50 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
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
  __int64 i; // rdx
  __int64 v15; // rcx
  char v16; // cl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v18; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int64 v20; // rbx
  signed __int64 v21; // rax
  bool v22; // cc
  signed __int64 BugCheckParameter4; // rax
  unsigned __int32 v25; // eax
  unsigned __int32 v26; // ett
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
  for ( i = 0LL; (unsigned int)i < KernelAbEntries->EntryCount; i = (unsigned int)(i + 1) )
  {
    v15 = (__int64)&KernelAbEntries->Entries[(unsigned int)i];
    if ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_BYTE *)(v15 + 10)
      && (*(_QWORD *)v15 & 1) == 0 )
    {
      *(_BYTE *)(v15 + 10) = 0;
      KiAbEntryFreeAndEnableInterrupts(v15, (ULONG_PTR)CurrentThread, v1, 1LL, 0LL);
      goto LABEL_36;
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, 0LL, 0LL);
  v18 = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)v18->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v25 = *SchedulerAssist;
    do
    {
      i = v25;
      LODWORD(i) = v25 & 0xFFDFFFFF;
      v26 = v25;
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v25 & 0xFFDFFFFF, v25);
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
        if ( ObGetCurrentIrql(0LL, i) > 2u )
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
