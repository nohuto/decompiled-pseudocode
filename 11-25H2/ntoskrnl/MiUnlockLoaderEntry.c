/*
 * XREFs of MiUnlockLoaderEntry @ 0x14036E408
 * Callers:
 *     MmUnlockLoadedDataTableEntryShared @ 0x14036CEEC (MmUnlockLoadedDataTableEntryShared.c)
 *     MiUnlockLoadedDataTableEntry @ 0x14036DE44 (MiUnlockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14036E278 (MmUnlockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x14036E320 (MiEnumerateSystemImages.c)
 *     KasaniGetModuleFromAddress @ 0x1405A6640 (KasaniGetModuleFromAddress.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiBackSystemImageWithPagefile @ 0x1407D7CFC (MiBackSystemImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407D8198 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A39550 (MmFreeDriverInitialization.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x140205BC0 (ExReleaseAutoExpandPushLockShared.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402BD2A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MiUnlockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v3; // rbx
  _QWORD *result; // rax
  ULONG_PTR v6; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( a2 <= 1 )
    *(_QWORD *)(a1 + 240) = 0LL;
  v3 = (volatile signed __int64 *)(a1 + 232);
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 232);
    goto LABEL_7;
  }
  if ( a2 == 2 )
  {
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 232));
LABEL_7:
    result = (_QWORD *)KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_8;
  }
  v6 = a1 + 232;
  if ( a2 == 3 )
    result = (_QWORD *)ExReleaseAutoExpandPushLockShared(v6, 0LL);
  else
    result = (_QWORD *)ExReleaseAutoExpandPushLockExclusive(v6, 0LL);
LABEL_8:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
