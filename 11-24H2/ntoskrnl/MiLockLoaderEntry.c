/*
 * XREFs of MiLockLoaderEntry @ 0x1402BC0A0
 * Callers:
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1402BBF00 (MiEnumerateSystemImages.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E8184 (MiBackSystemImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407E8628 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A3317C (MmFreeDriverInitialization.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14031D9A0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v3; // rbx
  ULONG_PTR v6; // rcx
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int32 *)(a1 + 232);
  v6 = a1 + 232;
  --CurrentThread->SpecialApcDisable;
  if ( !a2 )
  {
    result = KeAbPreAcquire(v6, 0LL, 0LL);
    v9 = result;
    if ( _interlockedbittestandset64(v3, 0LL) )
      result = ExfAcquirePushLockExclusiveEx(v3, result, v3);
    if ( v9 )
      *(_BYTE *)(v9 + 10) = 1;
LABEL_8:
    *(_QWORD *)(a1 + 240) = CurrentThread;
    return result;
  }
  if ( a2 != 2 )
  {
    result = ExAcquireAutoExpandPushLockExclusive(v6, 0LL);
    if ( a2 > 1 )
      return result;
    goto LABEL_8;
  }
  v7 = KeAbPreAcquire(v6, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v3, 0LL, v7, v3);
  if ( v7 )
    *(_BYTE *)(v7 + 10) = 1;
  return result;
}
