/*
 * XREFs of Endpoint_SetLogIdentifier @ 0x140031FAC
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140004BB8 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

void __fastcall Endpoint_SetLogIdentifier(__int64 a1)
{
  char pszDest[24]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 80) )
  {
    if ( RtlStringCchPrintfA(
           pszDest,
           0x18uLL,
           "%02d SLT%02d DCI%02d",
           *(_DWORD *)(*(_QWORD *)a1 + 176LL),
           *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 143LL),
           *(_DWORD *)(a1 + 152)) >= 0 )
      imp_WppRecorderLogSetIdentifier(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 80), pszDest);
  }
}
