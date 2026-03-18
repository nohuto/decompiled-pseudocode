/*
 * XREFs of ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18025475C
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x1800AE180 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003313C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     BreakOnUnexpectedErrors @ 0x180254800 (BreakOnUnexpectedErrors.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall MilUnexpectedError(unsigned int a1, const unsigned __int16 *a2)
{
  unsigned __int16 v2[256]; // [rsp+30h] [rbp-218h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  StringCchPrintfW(v2, 256LL, L"MIL FAILURE: Unexpected HRESULT 0x%08x in caller: %s", a1);
  DbgPrintEx(0x65u, 0, "%S\n", v2);
  if ( (unsigned __int8)BreakOnUnexpectedErrors() )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xAA,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\util\\utillib\\debugbreak.cpp",
      (const char *)0x8007029CLL,
      (int)L"batch processing error");
}
