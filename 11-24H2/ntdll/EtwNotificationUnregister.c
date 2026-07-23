/*
 * XREFs of EtwNotificationUnregister @ 0x180049B40
 * Callers:
 *     SbSelectProcedure @ 0x18000B080 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x1800A2E50 (SbObtainTraceHandle.c)
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwUnregisterTraceGuids @ 0x1800ED9B0 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x1800F2790 (EtwEventUnregister.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F44BC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015E6B0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     ProviderHandleLookup @ 0x180049C60 (ProviderHandleLookup.c)
 *     ProviderHandleRemove @ 0x180049CD0 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x180049D68 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180049DA8 (EtwpRemoveRegistrationFromTable.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180105730 (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x180160230 (NtClose.c)
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
