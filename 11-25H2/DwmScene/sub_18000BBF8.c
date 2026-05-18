/*
 * XREFs of sub_18000BBF8 @ 0x18000BBF8
 * Callers:
 *     __report_gsfailure @ 0x18000BB20 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

struct _IMAGE_RUNTIME_FUNCTION_ENTRY *__fastcall sub_18000BBF8(PCONTEXT ContextRecord)
{
  ULONG64 Rip; // rsi
  int i; // edi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *result; // rax
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+68h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+70h] [rbp+18h] BYREF

  EstablisherFrame = 0LL;
  ImageBase = 0LL;
  HandlerData = 0LL;
  RtlCaptureContext(ContextRecord);
  Rip = ContextRecord->Rip;
  for ( i = 0; i < 2; ++i )
  {
    result = RtlLookupFunctionEntry(Rip, &ImageBase, 0LL);
    if ( !result )
      break;
    result = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlVirtualUnwind(
                                                       0,
                                                       ImageBase,
                                                       Rip,
                                                       result,
                                                       ContextRecord,
                                                       &HandlerData,
                                                       &EstablisherFrame,
                                                       0LL);
  }
  return result;
}
