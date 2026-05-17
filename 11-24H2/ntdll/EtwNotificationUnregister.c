/*
 * XREFs of EtwNotificationUnregister @ 0x18001D140
 * Callers:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 *     SbSelectProcedure @ 0x1800A9EF0 (SbSelectProcedure.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     SbObtainTraceHandle @ 0x1800B8D90 (SbObtainTraceHandle.c)
 *     EtwUnregisterTraceGuids @ 0x1800F30C0 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x1800F7C20 (EtwEventUnregister.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F980C (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogFatalUserCallbackException @ 0x1801602F0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     ProviderHandleLookup @ 0x18001D260 (ProviderHandleLookup.c)
 *     ProviderHandleRemove @ 0x18001D2D0 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x18001D368 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18001D3A8 (EtwpRemoveRegistrationFromTable.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010ABC0 (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall EtwNotificationUnregister(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = ProviderHandleLookup(a1, (unsigned int)a1);
  v5 = v4;
  if ( !v4 || WORD2(a1) != *(_WORD *)(v4 + 84) || !WORD2(a1) || v4 == PrivateLoggerNotificationEntry )
    goto LABEL_3;
  RtlAcquireSRWLockExclusive(v4 + 72);
  if ( v5 != ProviderHandleLookup(v7, (unsigned int)a1)
    || WORD2(a1) != _InterlockedCompareExchange16((volatile signed __int16 *)(v5 + 84), 0, SWORD2(a1)) )
  {
    RtlReleaseSRWLockExclusive(v5 + 72);
LABEL_3:
    RtlSetLastWin32Error(6u);
    return 6LL;
  }
  ProviderHandleRemove(v8, (unsigned int)a1);
  EtwpRemoveRegistrationFromTable(v5);
  RtlReleaseSRWLockExclusive(v5 + 72);
  if ( (*(_WORD *)(v5 + 86) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v5 + 88));
  if ( *(_QWORD *)(v5 + 240) )
  {
    EtwpDereferenceUmGuidEntry();
    *(_QWORD *)(v5 + 240) = 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v5 + 56);
  EtwpFreeRegistration(v5);
  return 0LL;
}
