/*
 * XREFs of ExpUnlockHandleTableExclusive @ 0x14044D754
 * Callers:
 *     ExDisableHandleTracing @ 0x14065246C (ExDisableHandleTracing.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1408EB4BC (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspApplyMitigationOptions @ 0x140A4B32C (PspApplyMitigationOptions.c)
 *     ExEnableHandleExceptions @ 0x140A55C8C (ExEnableHandleExceptions.c)
 *     ExEnableHandleTracing @ 0x140AB4D44 (ExEnableHandleTracing.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
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
