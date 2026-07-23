/*
 * XREFs of RtlUserThreadStart @ 0x180008D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180008DE0 (RtlExitUserThread.c)
 *     RtlDecodePointer @ 0x180075450 (RtlDecodePointer.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180120F20 (RtlUnhandledExceptionFilter2.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl RtlUserThreadStart(PTHREAD_START_ROUTINE Function, PVOID Parameter)
{
  NTSTATUS v2; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v2 = ((__int64 (__fastcall *)(PVOID))Function)(Parameter);
    RtlExitUserThread(v2);
  }
  if ( Kernel32ThreadInitThunkFunction == RtlLeaveCriticalSection )
    RtlLeaveCriticalSection(0LL);
  else
    ((void (__fastcall *)(_QWORD, PTHREAD_START_ROUTINE, PVOID))Kernel32ThreadInitThunkFunction)(
      0LL,
      Function,
      Parameter);
}
