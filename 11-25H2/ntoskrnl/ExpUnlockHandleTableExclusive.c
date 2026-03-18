/*
 * XREFs of ExpUnlockHandleTableExclusive @ 0x1403D7690
 * Callers:
 *     ExDisableHandleTracing @ 0x140647E0C (ExDisableHandleTracing.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1408BA0E4 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspApplyMitigationOptions @ 0x140A521AC (PspApplyMitigationOptions.c)
 *     ExEnableHandleExceptions @ 0x140A5BB80 (ExEnableHandleExceptions.c)
 *     ExEnableHandleTracing @ 0x140AB59E8 (ExEnableHandleTracing.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpUnlockHandleTableExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 56;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
