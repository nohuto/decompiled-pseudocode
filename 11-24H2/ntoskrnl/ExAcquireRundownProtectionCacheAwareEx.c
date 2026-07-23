/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x140405330
 * Callers:
 *     EtwpFailLogging @ 0x1403FABA0 (EtwpFailLogging.c)
 *     RawBeginOperation @ 0x1404052F0 (RawBeginOperation.c)
 *     EtwpCompressionDpc @ 0x14064F860 (EtwpCompressionDpc.c)
 *     EtwInitialize @ 0x1407A65A0 (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1407ADE10 (PeriodicCaptureStateTimerCallback.c)
 *     EtwpUpdateEnableMask @ 0x14083745C (EtwpUpdateEnableMask.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
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
