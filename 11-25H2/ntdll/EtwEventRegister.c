/*
 * XREFs of EtwEventRegister @ 0x1800455F0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800FB5AC (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlInitializeHeapLogging @ 0x180109C50 (RtlInitializeHeapLogging.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180133178 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180133220 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x180161840 (LdrpLogFatalUserCallbackException.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 * Callees:
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 */

NTSTATUS __cdecl EtwEventRegister(
        LPCGUID ProviderId,
        PENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  LONG v4; // eax
  NTSTATUS v5; // ebx

  if ( !EnableCallback && CallbackContext )
    return 87;
  v4 = EtwNotificationRegister(ProviderId, 3u, (PETW_NOTIFICATION_CALLBACK)EnableCallback, CallbackContext, RegHandle);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
