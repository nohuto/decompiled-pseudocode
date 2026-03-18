/*
 * XREFs of FsRtlAcquireAutoExpandPushLockExclusive @ 0x1402A2500
 * Callers:
 *     FsRtlRemovePerStreamContext @ 0x1402A20A0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1402A21D0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402A22A0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402A2410 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x14045C4E0 (FsRtlInsertPerFileContextWithReserve.c)
 *     FsRtlRemovePerFileContext @ 0x14057CBF0 (FsRtlRemovePerFileContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x14099F8D0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1409FF0A0 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1402A257C (ExpAcquireFannedOutPushLockExclusive.c)
 */

__int64 *__fastcall FsRtlAcquireAutoExpandPushLockExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v4; // rdi
  int v5; // ecx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire(a1, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, result, a1);
  v5 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 1) != 0 )
    result = (__int64 *)ExpAcquireFannedOutPushLockExclusive(v5 & 0xFFFFFFF8, v4, a1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
