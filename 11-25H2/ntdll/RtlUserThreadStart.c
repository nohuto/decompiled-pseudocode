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

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( Kernel32ThreadInitThunkFunction )
  {
    if ( (char *)Kernel32ThreadInitThunkFunction == (char *)RtlLeaveCriticalSection )
      return RtlLeaveCriticalSection(0LL);
    else
      return Kernel32ThreadInitThunkFunction(0LL, a1, a2);
  }
  else
  {
    v3 = a1(a2);
    v4 = RtlExitUserThread(v3);
    return ZwTerminateProcess(-1LL, v4);
  }
}
