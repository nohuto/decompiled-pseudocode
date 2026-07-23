/*
 * XREFs of EtwNotificationUnregister @ 0x180045F20
 * Callers:
 *     SbSelectProcedure @ 0x180038D30 (SbSelectProcedure.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     SbObtainTraceHandle @ 0x1800BE760 (SbObtainTraceHandle.c)
 *     EtwUnregisterTraceGuids @ 0x1800F4C30 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x1800F97B0 (EtwEventUnregister.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800FB5AC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrShutdownProcess @ 0x1800FDE80 (LdrShutdownProcess.c)
 *     LdrpLogFatalUserCallbackException @ 0x180161840 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     ProviderHandleLookup @ 0x180046040 (ProviderHandleLookup.c)
 *     ProviderHandleRemove @ 0x1800460B0 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x180046148 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180046188 (EtwpRemoveRegistrationFromTable.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010D324 (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _RTL_BALANCED_NODE *v9; // rcx

  v4 = ProviderHandleLookup(RegHandle, (unsigned int)RegHandle);
  v5 = v4;
  if ( !v4 || WORD2(RegHandle) != *(_WORD *)(v4 + 84) || !WORD2(RegHandle) || v4 == PrivateLoggerNotificationEntry )
    goto LABEL_3;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( v5 != ProviderHandleLookup(v7, (unsigned int)RegHandle)
    || WORD2(RegHandle) != _InterlockedCompareExchange16((volatile signed __int16 *)(v5 + 84), 0, SWORD2(RegHandle)) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v5 + 72));
LABEL_3:
    RtlSetLastWin32Error(6);
    return 6;
  }
  ProviderHandleRemove(v8, (unsigned int)RegHandle);
  EtwpRemoveRegistrationFromTable((PRTL_BALANCED_NODE)v5);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v5 + 72));
  if ( (*(_WORD *)(v5 + 86) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v5 + 88));
  v9 = *(_RTL_BALANCED_NODE **)(v5 + 240);
  if ( v9 )
  {
    EtwpDereferenceUmGuidEntry(v9);
    *(_QWORD *)(v5 + 240) = 0LL;
  }
  if ( Context )
    *Context = *(PVOID *)(v5 + 56);
  EtwpFreeRegistration(v5);
  return 0;
}
