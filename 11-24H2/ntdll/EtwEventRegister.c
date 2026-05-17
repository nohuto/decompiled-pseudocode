/*
 * XREFs of EtwEventRegister @ 0x18001D400
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F980C (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlInitializeHeapLogging @ 0x180107340 (RtlInitializeHeapLogging.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180131698 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180131740 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1801602F0 (LdrpLogFatalUserCallbackException.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 */

__int64 __fastcall EtwEventRegister(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
