/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x140362A70
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x140345020 (MiReturnLockedVadOrNextVa.c)
 *     MiQueryImageExtensionInformation @ 0x140470764 (MiQueryImageExtensionInformation.c)
 *     MiCleanCfg @ 0x140481A2C (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x140494E48 (MiWaitForRotateToComplete.c)
 *     MiPrefetchPreallocatePages @ 0x1404CEA68 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140681DD8 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14068E20C (MiProcessVaContiguityInformation.c)
 *     MiHandleEnclaveFault @ 0x1406F71E8 (MiHandleEnclaveFault.c)
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8910 (NtAreMappedFilesTheSame.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 *     MmGetImageInformation @ 0x1409F9444 (MmGetImageInformation.c)
 *     MmGetFileNameForAddress @ 0x140A15B1C (MmGetFileNameForAddress.c)
 *     MiCheckShadowStackOverflow @ 0x140A1CD08 (MiCheckShadowStackOverflow.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A69CDC (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
      KiAbEntryFreeAndEnableInterrupts(v6, (ULONG_PTR)v15, a1 + 40, 1LL, 0LL);
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
  if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(CurrentPrcb, i, SchedulerAssist, a4);
  if ( v14 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
