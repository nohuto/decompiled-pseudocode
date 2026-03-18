/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x1403F83E0 (EtwpFailLogging.c)
 *     RawBeginOperation @ 0x140405F18 (RawBeginOperation.c)
 *     EtwpCompressionDpc @ 0x140645160 (EtwpCompressionDpc.c)
 *     EtwInitialize @ 0x140797090 (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x14079E5F0 (PeriodicCaptureStateTimerCallback.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpUpdateEnableMask @ 0x140896F0C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpTrackProviderRegistration @ 0x14089E6D0 (EtwpTrackProviderRegistration.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                        + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v2);
  v3 = *v2;
  while ( (v3 & 1) == 0 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, v3 + 2 * Count, v3);
    if ( v4 == v3 )
      return 1;
  }
  return 0;
}
