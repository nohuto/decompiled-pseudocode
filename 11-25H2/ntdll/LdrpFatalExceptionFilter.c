/*
 * XREFs of LdrpFatalExceptionFilter @ 0x18015F850
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18006CD70 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x1800711A0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlDecodePointer @ 0x180075450 (RtlDecodePointer.c)
 *     RtlReportSilentProcessExit @ 0x1800CF190 (RtlReportSilentProcessExit.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180120F20 (RtlUnhandledExceptionFilter2.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(const void **a1)
{
  struct _TEB *v2; // rcx
  unsigned int v3; // edi
  void (__fastcall *v4)(const void **); // rax

  v2 = NtCurrentTeb();
  v3 = *(_DWORD *)*a1;
  if ( v3 == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit(-1LL, -1073741571);
  }
  else
  {
    v4 = (void (__fastcall *)(const void **))RtlDecodePointer(RtlpUnhandledExceptionFilter);
    if ( v4 )
      v4(a1);
    else
      RtlUnhandledExceptionFilter2(a1);
  }
  ZwTerminateProcess(-1LL, v3);
  return 0LL;
}
