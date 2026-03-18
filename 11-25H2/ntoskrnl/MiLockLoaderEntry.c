/*
 * XREFs of MiLockLoaderEntry @ 0x14036E4C0
 * Callers:
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x14036E320 (MiEnumerateSystemImages.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiBackSystemImageWithPagefile @ 0x1407D7CFC (MiBackSystemImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407D8198 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A39550 (MmFreeDriverInitialization.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402BD440 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v3; // rbx
  ULONG_PTR v6; // rcx
  __int64 *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 232);
  v6 = a1 + 232;
  --CurrentThread->SpecialApcDisable;
  if ( !a2 )
  {
    v8 = KeAbPreAcquire(v6, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v8, (__int64)v3);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
LABEL_8:
    *(_QWORD *)(a1 + 240) = CurrentThread;
    return;
  }
  if ( a2 != 2 )
  {
    ExAcquireAutoExpandPushLockExclusive(v6, 0LL);
    if ( a2 > 1 )
      return;
    goto LABEL_8;
  }
  v7 = KeAbPreAcquire(v6, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v3, 0, v7, (unsigned __int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
}
