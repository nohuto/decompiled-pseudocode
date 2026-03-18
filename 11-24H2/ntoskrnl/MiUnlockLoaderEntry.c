/*
 * XREFs of MiUnlockLoaderEntry @ 0x1402C7468
 * Callers:
 *     MiUnlockLoadedDataTableEntry @ 0x1402C6EA4 (MiUnlockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402C72D8 (MmUnlockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1402C7380 (MiEnumerateSystemImages.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1404B4344 (MmUnlockLoadedDataTableEntryShared.c)
 *     KasaniGetModuleFromAddress @ 0x1405A9FD0 (KasaniGetModuleFromAddress.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E7BB4 (MiBackSystemImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407E8058 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A3D86C (MmFreeDriverInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14025DFF0 (ExReleaseAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14025F390 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

$81B80DCEA5A02D890AB7B2872B48AC01 *__fastcall MiUnlockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v3; // rbx
  $81B80DCEA5A02D890AB7B2872B48AC01 *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG_PTR v8; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( a2 <= 1 )
    *(_QWORD *)(a1 + 240) = 0LL;
  v3 = (volatile signed __int64 *)(a1 + 232);
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 232));
    goto LABEL_9;
  }
  if ( a2 == 2 )
  {
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 232));
LABEL_9:
    result = ($81B80DCEA5A02D890AB7B2872B48AC01 *)KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_10;
  }
  v8 = a1 + 232;
  if ( a2 == 3 )
    result = ($81B80DCEA5A02D890AB7B2872B48AC01 *)ExReleaseAutoExpandPushLockShared(v8, 0LL);
  else
    result = ($81B80DCEA5A02D890AB7B2872B48AC01 *)ExReleaseAutoExpandPushLockExclusive(v8, 0LL);
LABEL_10:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($81B80DCEA5A02D890AB7B2872B48AC01 *)KiCheckForKernelApcDelivery(v6, v5);
  }
  return result;
}
