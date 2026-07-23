/*
 * XREFs of RtlDecodePointer @ 0x180046E40
 * Callers:
 *     RtlpPossibleDeadlock @ 0x180030A80 (RtlpPossibleDeadlock.c)
 *     RtlpNotOwnerCriticalSection @ 0x180041700 (RtlpNotOwnerCriticalSection.c)
 *     RtlpCallVectoredHandlers @ 0x1800467C0 (RtlpCallVectoredHandlers.c)
 *     RtlUserThreadStart @ 0x1800AAD40 (RtlUserThreadStart.c)
 *     TppExceptionFilter @ 0x18015AB3C (TppExceptionFilter.c)
 *     LdrpFatalExceptionFilter @ 0x18015C750 (LdrpFatalExceptionFilter.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015E6B0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180160370 (NtQueryInformationProcess.c)
 */

PVOID __cdecl RtlDecodePointer(PVOID Ptr)
{
  unsigned int v1; // edx
  int v4; // eax
  int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = `RtlpGetCookieValue'::`2'::CookieValue;
  ProcessInformation = 0;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return (PVOID)(__ROR8__(Ptr, 64 - (v1 & 0x3F)) ^ v1);
}
