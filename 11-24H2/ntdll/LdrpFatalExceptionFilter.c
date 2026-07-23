/*
 * XREFs of LdrpFatalExceptionFilter @ 0x18015C750
 * Callers:
 *     LdrGetDllHandleByName @ 0x1800E8F90 (LdrGetDllHandleByName.c)
 *     LdrGetDllHandleByMapping @ 0x1800EA420 (LdrGetDllHandleByMapping.c)
 * Callees:
 *     RtlDecodePointer @ 0x180046E40 (RtlDecodePointer.c)
 *     RtlReportSilentProcessExit @ 0x1800AB9C0 (RtlReportSilentProcessExit.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011D880 (RtlUnhandledExceptionFilter2.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  struct _TEB *v2; // rcx
  NTSTATUS ExceptionCode; // edi
  void (__fastcall *v4)(PEXCEPTION_POINTERS); // rax

  v2 = NtCurrentTeb();
  ExceptionCode = ExceptionPointers->ExceptionRecord->ExceptionCode;
  if ( ExceptionCode == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741571);
  }
  else
  {
    v4 = (void (__fastcall *)(PEXCEPTION_POINTERS))RtlDecodePointer(RtlpUnhandledExceptionFilter);
    if ( v4 )
      v4(ExceptionPointers);
    else
      RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
  }
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionCode);
  return 0LL;
}
