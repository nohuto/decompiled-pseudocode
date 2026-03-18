/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x14040CCA0
 * Callers:
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x14032A9F0 (EtwpFailLogging.c)
 *     RawBeginOperation @ 0x14040CC60 (RawBeginOperation.c)
 *     EtwpCompressionDpc @ 0x140651160 (EtwpCompressionDpc.c)
 *     EtwInitialize @ 0x1407A6460 (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1407AD9C0 (PeriodicCaptureStateTimerCallback.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpUpdateEnableMask @ 0x14083658C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     EtwpTrackProviderRegistration @ 0x14083DAD0 (EtwpTrackProviderRegistration.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
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
