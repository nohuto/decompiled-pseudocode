/*
 * XREFs of RtlDecodePointer @ 0x180075450
 * Callers:
 *     RtlpPossibleDeadlock @ 0x1800072A0 (RtlpPossibleDeadlock.c)
 *     RtlUserThreadStart @ 0x180008D70 (RtlUserThreadStart.c)
 *     RtlpCallVectoredHandlers @ 0x180075B30 (RtlpCallVectoredHandlers.c)
 *     RtlpNotOwnerCriticalSection @ 0x18007C310 (RtlpNotOwnerCriticalSection.c)
 *     TppExceptionFilter @ 0x18015DCDC (TppExceptionFilter.c)
 *     LdrpFatalExceptionFilter @ 0x18015F850 (LdrpFatalExceptionFilter.c)
 *     LdrpLogFatalUserCallbackException @ 0x180161840 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlDecodePointer(__int64 a1)
{
  unsigned int v1; // edx
  NTSTATUS v4; // eax
  int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = `RtlpGetCookieValue'::`2'::CookieValue;
  ProcessInformation = 0;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus((unsigned int)v4);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return __ROR8__(a1, 64 - (v1 & 0x3F)) ^ v1;
}
