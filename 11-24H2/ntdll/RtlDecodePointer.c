/*
 * XREFs of RtlDecodePointer @ 0x18001A440
 * Callers:
 *     RtlUserThreadStart @ 0x180004250 (RtlUserThreadStart.c)
 *     RtlpNotOwnerCriticalSection @ 0x180014D00 (RtlpNotOwnerCriticalSection.c)
 *     RtlpCallVectoredHandlers @ 0x180019DC0 (RtlpCallVectoredHandlers.c)
 *     RtlpPossibleDeadlock @ 0x18009BC30 (RtlpPossibleDeadlock.c)
 *     TppExceptionFilter @ 0x18015C77C (TppExceptionFilter.c)
 *     LdrpFatalExceptionFilter @ 0x18015E390 (LdrpFatalExceptionFilter.c)
 *     LdrpLogFatalUserCallbackException @ 0x1801602F0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
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
      RtlRaiseStatus(v4);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return __ROR8__(a1, 64 - (v1 & 0x3F)) ^ v1;
}
