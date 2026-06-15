/*
 * XREFs of __scrt_fastfail @ 0x1800A87FC
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800A7788 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x1800A78A0 (dllmain_crt_process_detach.c)
 *     __scrt_initialize_onexit_tables @ 0x1800A7D8C (__scrt_initialize_onexit_tables.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800A8210 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __crt_debugger_hook @ 0x1800A87EC (__crt_debugger_hook.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 */

void __fastcall _scrt_fastfail(unsigned int a1)
{
  ULONG64 Rip; // rbx
  struct _RUNTIME_FUNCTION *v3; // rax
  BOOL v4; // ebx
  _EXCEPTION_POINTERS ExceptionInfo; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v6[4]; // [rsp+50h] [rbp-B0h] BYREF
  DWORD64 v7; // [rsp+60h] [rbp-A0h]
  CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  DWORD64 retaddr; // [rsp+5C8h] [rbp+4C8h]
  __int64 v10; // [rsp+5D0h] [rbp+4D0h] BYREF
  unsigned __int64 ImageBase; // [rsp+5D8h] [rbp+4D8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+5E0h] [rbp+4E0h] BYREF
  PVOID HandlerData; // [rsp+5E8h] [rbp+4E8h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a1);
  _crt_debugger_hook();
  memset_0(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  ImageBase = 0LL;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v3 )
  {
    EstablisherFrame = 0LL;
    HandlerData = 0LL;
    RtlVirtualUnwind(0, ImageBase, Rip, v3, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v10;
  memset_0(v6, 0, 0x98uLL);
  v7 = retaddr;
  v6[0] = 1073741845;
  v6[1] = 1;
  v4 = IsDebuggerPresent();
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v6;
  ExceptionInfo.ContextRecord = &ContextRecord;
  SetUnhandledExceptionFilter(0LL);
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v4 )
    _crt_debugger_hook();
}
