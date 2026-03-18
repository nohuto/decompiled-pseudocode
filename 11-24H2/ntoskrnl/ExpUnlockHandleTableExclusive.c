/*
 * XREFs of ExpUnlockHandleTableExclusive @ 0x140458444
 * Callers:
 *     ExDisableHandleTracing @ 0x140653D0C (ExDisableHandleTracing.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140A52E88 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspApplyMitigationOptions @ 0x140A5333C (PspApplyMitigationOptions.c)
 *     ExEnableHandleExceptions @ 0x140A5D86C (ExEnableHandleExceptions.c)
 *     ExEnableHandleTracing @ 0x140AB9D28 (ExEnableHandleTracing.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpUnlockHandleTableExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 56;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread();
}
