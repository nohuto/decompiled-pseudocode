/*
 * XREFs of EtwpStopLoggerInstance @ 0x1800A9930
 * Callers:
 *     EtwpStopUmLogger @ 0x1800A7F74 (EtwpStopUmLogger.c)
 *     EtwpLogger @ 0x1800A9700 (EtwpLogger.c)
 * Callees:
 *     EtwpDisableTraceProviders @ 0x1800A7944 (EtwpDisableTraceProviders.c)
 *     EtwpSendSessionNotification @ 0x1800A7C18 (EtwpSendSessionNotification.c)
 *     RtlWakeAllConditionVariable @ 0x1800A9F40 (RtlWakeAllConditionVariable.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  void *v3; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 312), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(_DWORD *)(a1 + 20));
  v3 = *(void **)(a1 + 544);
  if ( v3 )
  {
    NtClose(v3);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 64));
  EtwpSendSessionNotification(a1, 2, *(_DWORD *)(a1 + 40));
  return 0LL;
}
