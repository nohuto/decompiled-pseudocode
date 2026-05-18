/*
 * XREFs of sub_18000B8E0 @ 0x18000B8E0
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000AF88 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18000B0A0 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 *     __scrt_initialize_onexit_tables @ 0x18000B58C (__scrt_initialize_onexit_tables.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x18000C720 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     sub_18000B8D0 @ 0x18000B8D0 (sub_18000B8D0.c)
 *     memset @ 0x18000C088 (memset.c)
 */

void __fastcall sub_18000B8E0(unsigned int a1)
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v3; // rax
  BOOL v4; // ebx
  _EXCEPTION_POINTERS ExceptionInfo; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v6[20]; // [rsp+50h] [rbp-B0h] BYREF
  _CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  DWORD64 retaddr; // [rsp+5C8h] [rbp+4C8h]
  __int64 v9; // [rsp+5D0h] [rbp+4D0h] BYREF
  unsigned __int64 ImageBase; // [rsp+5D8h] [rbp+4D8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+5E0h] [rbp+4E0h] BYREF
  PVOID HandlerData; // [rsp+5E8h] [rbp+4E8h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a1);
  sub_18000B8D0();
  memset(&ContextRecord, 0, sizeof(ContextRecord));
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
  ContextRecord.Rsp = (DWORD64)&v9;
  memset(v6, 0, 0x98uLL);
  v6[2] = retaddr;
  v6[0] = 0x140000015LL;
  v4 = IsDebuggerPresent();
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v6;
  ExceptionInfo.ContextRecord = &ContextRecord;
  SetUnhandledExceptionFilter(0LL);
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v4 )
    sub_18000B8D0();
}
