/*
 * XREFs of MiUnlockLoaderEntry @ 0x1402BBFE8
 * Callers:
 *     MiUnlockLoadedDataTableEntry @ 0x1402BBA24 (MiUnlockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402BBE58 (MmUnlockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1402BBF00 (MiEnumerateSystemImages.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1404AEB90 (MmUnlockLoadedDataTableEntryShared.c)
 *     KasaniGetModuleFromAddress @ 0x1405A6F40 (KasaniGetModuleFromAddress.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E8184 (MiBackSystemImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407E8628 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A3317C (MmFreeDriverInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14028E600 (ExReleaseAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14028F9A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

$727077A9B6E167EAE1398C74674DC5A5 *__fastcall MiUnlockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v3; // rbx
  $727077A9B6E167EAE1398C74674DC5A5 *result; // rax
  ULONG_PTR v6; // rcx

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
    result = ($727077A9B6E167EAE1398C74674DC5A5 *)KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_10;
  }
  v6 = a1 + 232;
  if ( a2 == 3 )
    result = ($727077A9B6E167EAE1398C74674DC5A5 *)ExReleaseAutoExpandPushLockShared(v6, 0LL);
  else
    result = ($727077A9B6E167EAE1398C74674DC5A5 *)ExReleaseAutoExpandPushLockExclusive(v6, 0LL);
LABEL_10:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($727077A9B6E167EAE1398C74674DC5A5 *)KiCheckForKernelApcDelivery();
  }
  return result;
}
