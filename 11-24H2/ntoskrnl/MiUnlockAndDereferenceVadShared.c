/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x1402BB330
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402FC120 (MiReturnLockedVadOrNextVa.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiQueryImageExtensionInformation @ 0x140474954 (MiQueryImageExtensionInformation.c)
 *     MiCleanCfg @ 0x14048643C (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x14049A424 (MiWaitForRotateToComplete.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5620 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140680BD8 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 *     MiHandleEnclaveFault @ 0x1406F95A8 (MiHandleEnclaveFault.c)
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 *     MmGetImageInformation @ 0x140837878 (MmGetImageInformation.c)
 *     MmGetFileNameForAddress @ 0x140838768 (MmGetFileNameForAddress.c)
 *     NtAreMappedFilesTheSame @ 0x1408E8130 (NtAreMappedFilesTheSame.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x140A28288 (MiCheckShadowStackOverflow.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7084C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v5; // eax
  __int64 v6; // rcx
  __int64 i; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  bool v10; // zf
  unsigned __int32 v11; // eax
  unsigned __int32 v12; // ett
  struct _KTHREAD *CurrentThread; // rdi
  BOOL v14; // esi
  struct _KTHREAD *v15; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8

  v5 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 36));
  if ( v5 == -1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v14 = v5 == 0;
  LODWORD(CurrentThread[1].Queue) &= ~0x4000u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 40));
  v15 = KeGetCurrentThread();
  _disable();
  KernelAbEntries = v15->KernelAbEntries;
  for ( i = 0LL; (unsigned int)i < KernelAbEntries->EntryCount; i = (unsigned int)(i + 1) )
  {
    v6 = (__int64)&KernelAbEntries->Entries[(unsigned int)i];
    a4 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 40) & 0x7FFFFFFFFFFFFFFCLL)
      && *(_BYTE *)(v6 + 10)
      && (a4 & 1) == 0 )
    {
      *(_BYTE *)(v6 + 10) = 0;
      KiAbEntryFreeAndEnableInterrupts(v6, (ULONG_PTR)v15, a1 + 40, 1, 0LL);
      goto LABEL_13;
    }
  }
  if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, a1 + 40, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v11 = *SchedulerAssist;
    do
    {
      i = v11;
      LODWORD(i) = v11 & 0xFFDFFFFF;
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v11 & 0xFFDFFFFF, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_13:
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(CurrentPrcb, i, SchedulerAssist, a4);
  if ( v14 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
