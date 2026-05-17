/*
 * XREFs of RtlEncodePointer @ 0x1800EBB00
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180024C88 (RtlpAddVectoredHandler.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlSetUnhandledExceptionFilter @ 0x1800EBAE0 (RtlSetUnhandledExceptionFilter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
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
      RtlRaiseStatus(v4);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return __ROR8__(a1 ^ v2, v2 & 0x3F);
}
