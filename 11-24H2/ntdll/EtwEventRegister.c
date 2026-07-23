/*
 * XREFs of EtwEventRegister @ 0x180049E00
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F44BC (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlInitializeHeapLogging @ 0x180102270 (RtlInitializeHeapLogging.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x18012F8C8 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x18012F970 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015E6B0 (LdrpLogFatalUserCallbackException.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180170498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
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
