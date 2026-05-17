/*
 * XREFs of RtlEncodePointer @ 0x180004AC0
 * Callers:
 *     RtlSetUnhandledExceptionFilter @ 0x180003BB0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlEncodePointer(__int64 a1)
{
  __int64 v2; // rax
  NTSTATUS v4; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  ProcessInformation = 0;
  v2 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus((unsigned int)v4);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return __ROR8__(a1 ^ v2, v2 & 0x3F);
}
