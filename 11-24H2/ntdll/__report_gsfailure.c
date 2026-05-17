/*
 * XREFs of __report_gsfailure @ 0x1801208B0
 * Callers:
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180015110 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180018C20 (RtlVirtualUnwind.c)
 *     RtlCaptureContext @ 0x180120C00 (RtlCaptureContext.c)
 *     RtlUnhandledExceptionFilter @ 0x180147170 (RtlUnhandledExceptionFilter.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *FunctionEntry; // [rsp+40h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-40h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-30h] BYREF
  PVOID HandlerData[5]; // [rsp+60h] [rbp-28h] BYREF
  DWORD64 retaddr; // [rsp+88h] [rbp+0h]
  uintptr_t v7; // [rsp+90h] [rbp+8h] BYREF

  v7 = StackCookie;
  EstablisherFrame = 0LL;
  HandlerData[0] = 0LL;
  ImageBase = 0LL;
  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&v7;
  }
  qword_1801CD860 = ContextRecord.Rip;
  ContextRecord.Rcx = v7;
  dword_1801CD850 = -1073740791;
  dword_1801CD854 = 1;
  dword_1801CD868 = 1;
  unk_1801CD870 = 2LL;
  HandlerData[2] = (PVOID)_security_cookie_complement;
  RtlUnhandledExceptionFilter(&off_1801740F0);
  ZwTerminateProcess(-1LL, 3221226505LL);
}
