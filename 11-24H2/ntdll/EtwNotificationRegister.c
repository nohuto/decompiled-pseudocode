/*
 * XREFs of EtwNotificationRegister @ 0x18001D450
 * Callers:
 *     EtwEventRegister @ 0x18001D400 (EtwEventRegister.c)
 *     SbSelectProcedure @ 0x1800A9EF0 (SbSelectProcedure.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     SbObtainTraceHandle @ 0x1800B8D90 (SbObtainTraceHandle.c)
 *     EtwRegisterTraceGuidsW @ 0x1800EA1B0 (EtwRegisterTraceGuidsW.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     ProviderHandleRemove @ 0x18001D2D0 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x18001D368 (EtwpFreeRegistration.c)
 *     ProviderHandleInsert @ 0x18001D670 (ProviderHandleInsert.c)
 *     EtwpInsertRegistration @ 0x18001D8C0 (EtwpInsertRegistration.c)
 *     EtwpCheckForPrivatePreEnable @ 0x18001D9C0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpRegisterProvider @ 0x18001DD30 (EtwpRegisterProvider.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpInterlockedPopEntrySList @ 0x180165A00 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall EtwNotificationRegister(
        _QWORD *a1,
        unsigned int a2,
        _SLIST_ENTRY *a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v9; // r15
  __int64 v10; // rax
  unsigned __int32 i; // edx
  signed __int32 v12; // eax
  PSLIST_ENTRY v13; // rbx
  __int64 Heap; // rax
  struct _SLIST_ENTRY v15; // xmm0
  __int16 Next_high; // cx
  signed __int16 v17; // ax
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rcx
  unsigned int v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = 0;
  if ( !a1 )
    goto LABEL_19;
  v9 = a5;
  if ( !a5 )
    goto LABEL_19;
  v10 = *a1 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
  if ( *a1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
    v10 = a1[1] - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
  if ( v10 || !PrivateLoggerNotificationEntry )
  {
    *a5 = 0LL;
    for ( i = EtwpRegistrationCount; ; i = v12 )
    {
      if ( i >= 0x800 )
        goto LABEL_21;
      v12 = _InterlockedCompareExchange(&EtwpRegistrationCount, i + 1, i);
      if ( i == v12 )
        break;
    }
    v13 = RtlpInterlockedPopEntrySList(&EtwpFreeRegistrationList);
    if ( !v13 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x100uLL);
      v13 = (PSLIST_ENTRY)Heap;
      if ( !Heap )
      {
        _InterlockedDecrement(&EtwpRegistrationCount);
LABEL_21:
        v19 = 14;
        RtlSetLastWin32Error(0xEu);
        return v19;
      }
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_QWORD *)(Heap + 72) = 0LL;
    }
    v15 = *(struct _SLIST_ENTRY *)a1;
    v13[3].Next = a3;
    *((_QWORD *)&v13[3].Next + 1) = a4;
    v13[2] = v15;
    Next_high = HIWORD(v13[5].Next);
    *((_DWORD *)&v13[15].Next + 2) = NtCurrentTeb()->SubProcessTag;
    HIWORD(v13[5].Next) = (HIWORD(v13[5].Next) ^ (a2 ^ Next_high) & 0x3FFF) & 0xBFFF;
    do
    {
      v17 = _InterlockedExchangeAdd16(&EtwpRegistrationSequence, 1u);
      WORD2(v13[5].Next) = v17 + 1;
    }
    while ( v17 == -1 );
    RtlAcquireSRWLockExclusive(&v13[4]);
    LODWORD(v13[5].Next) = NtCurrentTeb()->ClientId.UniqueThread;
    v19 = ProviderHandleInsert(v18, v13, &v22);
    if ( !v19 )
    {
      if ( a2 == 10 || (v19 = EtwpRegisterProvider(v13, a3, a2)) == 0 )
      {
        EtwpInsertRegistration(v13);
        EtwpCheckForPrivatePreEnable(v13);
        LODWORD(v13[5].Next) = 0;
        RtlReleaseSRWLockExclusive(&v13[4]);
        *v9 = v22 | ((unsigned __int64)WORD2(v13[5].Next) << 32);
        return v19;
      }
      ProviderHandleRemove(v20, v22);
    }
    LODWORD(v13[5].Next) = 0;
    RtlReleaseSRWLockExclusive(&v13[4]);
    EtwpFreeRegistration((__int64)v13);
    RtlSetLastWin32Error(v19);
  }
  else
  {
LABEL_19:
    v19 = 87;
    RtlSetLastWin32Error(0x57u);
  }
  return v19;
}
