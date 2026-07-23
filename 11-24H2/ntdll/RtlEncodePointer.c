/*
 * XREFs of RtlEncodePointer @ 0x1800314C0
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180106220 (RtlSetUnhandledExceptionFilter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180160370 (NtQueryInformationProcess.c)
 */

PVOID __cdecl RtlEncodePointer(PVOID Ptr)
{
  __int64 v2; // rax
  int v4; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  ProcessInformation = 0;
  v2 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return (PVOID)__ROR8__((unsigned __int64)Ptr ^ v2, v2 & 0x3F);
}
