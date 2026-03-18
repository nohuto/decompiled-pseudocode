/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x140320840
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiUserFaultAllowed @ 0x14024ACD0 (MiUserFaultAllowed.c)
 *     MiCleanCfg @ 0x1402A62C8 (MiCleanCfg.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402A77E4 (MiReturnLockedVadOrNextVa.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiQueryImageExtensionInformation @ 0x140479334 (MiQueryImageExtensionInformation.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5F34 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x1406753B8 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
 *     MiHandleEnclaveFault @ 0x1406ED838 (MiHandleEnclaveFault.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     MmGetImageInformation @ 0x140898318 (MmGetImageInformation.c)
 *     MmGetFileNameForAddress @ 0x140899218 (MmGetFileNameForAddress.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8E90 (NtAreMappedFilesTheSame.c)
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCheckShadowStackOverflow @ 0x140A299E0 (MiCheckShadowStackOverflow.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7248C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(PVOID P)
{
  signed __int32 v2; // eax
  struct _KTHREAD *CurrentThread; // rdi
  BOOL v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v4 = v2 == 0;
  LODWORD(CurrentThread[1].Queue) &= ~0x4000u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)P + 5);
  KeAbPostRelease((ULONG_PTR)P + 40);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
