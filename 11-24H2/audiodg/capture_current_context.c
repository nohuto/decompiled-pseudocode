/*
 * XREFs of capture_current_context @ 0x140059B08
 * Callers:
 *     __report_securityfailure @ 0x140059A64 (__report_securityfailure.c)
 * Callees:
 *     <none>
 */

struct _RUNTIME_FUNCTION *__fastcall capture_current_context(PCONTEXT ContextRecord)
{
  DWORD64 Rip; // rdi
  struct _RUNTIME_FUNCTION *result; // rax
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp+18h] BYREF

  EstablisherFrame = 0LL;
  ImageBase = 0LL;
  HandlerData = 0LL;
  RtlCaptureContext(ContextRecord);
  Rip = ContextRecord->Rip;
  result = RtlLookupFunctionEntry(Rip, &ImageBase, 0LL);
  if ( result )
    return (struct _RUNTIME_FUNCTION *)RtlVirtualUnwind(
                                         0,
                                         ImageBase,
                                         Rip,
                                         result,
                                         ContextRecord,
                                         &HandlerData,
                                         &EstablisherFrame,
                                         0LL);
  return result;
}
