/*
 * XREFs of RtlUserThreadStart @ 0x1800AAD40
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlDecodePointer @ 0x180046E40 (RtlDecodePointer.c)
 *     RtlExitUserThread @ 0x1800AADB0 (RtlExitUserThread.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011D880 (RtlUnhandledExceptionFilter2.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
