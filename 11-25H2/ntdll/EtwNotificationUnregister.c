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

__int64 __fastcall EtwNotificationUnregister(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = ProviderHandleLookup(a1, (unsigned int)a1);
  v5 = v4;
  if ( !v4 || WORD2(a1) != *(_WORD *)(v4 + 84) || !WORD2(a1) || v4 == PrivateLoggerNotificationEntry )
    goto LABEL_3;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v4 + 72));
  if ( v5 != ProviderHandleLookup(v7, (unsigned int)a1)
    || WORD2(a1) != _InterlockedCompareExchange16((volatile signed __int16 *)(v5 + 84), 0, SWORD2(a1)) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 72));
LABEL_3:
    RtlSetLastWin32Error(6LL);
    return 6LL;
  }
  ProviderHandleRemove(v8, (unsigned int)a1);
  EtwpRemoveRegistrationFromTable(v5);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 72));
  if ( (*(_WORD *)(v5 + 86) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v5 + 88));
  v9 = *(_QWORD *)(v5 + 240);
  if ( v9 )
  {
    EtwpDereferenceUmGuidEntry(v9);
    *(_QWORD *)(v5 + 240) = 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v5 + 56);
  EtwpFreeRegistration(v5);
  return 0LL;
}
