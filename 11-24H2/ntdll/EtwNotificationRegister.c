/*
 * XREFs of EtwNotificationRegister @ 0x180049E50
 * Callers:
 *     SbSelectProcedure @ 0x18000B080 (SbSelectProcedure.c)
 *     EtwEventRegister @ 0x180049E00 (EtwEventRegister.c)
 *     SbObtainTraceHandle @ 0x1800A2E50 (SbObtainTraceHandle.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwRegisterTraceGuidsW @ 0x1800E5940 (EtwRegisterTraceGuidsW.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     ProviderHandleRemove @ 0x180049CD0 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x180049D68 (EtwpFreeRegistration.c)
 *     ProviderHandleInsert @ 0x18004A070 (ProviderHandleInsert.c)
 *     EtwpInsertRegistration @ 0x18004A2C0 (EtwpInsertRegistration.c)
 *     EtwpCheckForPrivatePreEnable @ 0x18004A3C0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpRegisterProvider @ 0x18004A730 (EtwpRegisterProvider.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpInterlockedPopEntrySList @ 0x180163DC0 (RtlpInterlockedPopEntrySList.c)
 */

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  PREGHANDLE v9; // r15
  __int64 v10; // rax
  unsigned __int32 i; // edx
  signed __int32 v12; // eax
  PSLIST_ENTRY v13; // rbx
  _SLIST_ENTRY *Heap; // rax
  GUID v15; // xmm0
  __int16 Next_high; // cx
  signed __int16 v17; // ax
  __int64 v18; // rcx
  unsigned __int32 v19; // edi
  __int64 v20; // rcx
  unsigned int v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = 0;
  if ( !Guid )
    goto LABEL_19;
  v9 = RegHandle;
  if ( !RegHandle )
    goto LABEL_19;
  v10 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
  if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
    v10 = *(_QWORD *)Guid->Data4 - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
  if ( v10 || !PrivateLoggerNotificationEntry )
  {
    *RegHandle = 0LL;
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
      Heap = (_SLIST_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x100uLL);
      v13 = Heap;
      if ( !Heap )
      {
        _InterlockedDecrement(&EtwpRegistrationCount);
LABEL_21:
        v19 = 14;
        RtlSetLastWin32Error(14);
        return v19;
      }
      Heap[4].Next = 0LL;
      *((_QWORD *)&Heap[4].Next + 1) = 0LL;
    }
    v15 = *Guid;
    v13[3].Next = (_SLIST_ENTRY *)Callback;
    *((_QWORD *)&v13[3].Next + 1) = Context;
    v13[2] = (_SLIST_ENTRY)v15;
    Next_high = HIWORD(v13[5].Next);
    *((_DWORD *)&v13[15].Next + 2) = NtCurrentTeb()->SubProcessTag;
    HIWORD(v13[5].Next) = (HIWORD(v13[5].Next) ^ (Type ^ Next_high) & 0x3FFF) & 0xBFFF;
    do
    {
      v17 = _InterlockedExchangeAdd16(&EtwpRegistrationSequence, 1u);
      WORD2(v13[5].Next) = v17 + 1;
    }
    while ( v17 == -1 );
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v13[4]);
    LODWORD(v13[5].Next) = NtCurrentTeb()->ClientId.UniqueThread;
    v19 = ProviderHandleInsert(v18, v13, &v22);
    if ( !v19 )
    {
      if ( Type == 10 || (v19 = EtwpRegisterProvider(v13, Callback, Type)) == 0 )
      {
        EtwpInsertRegistration((PRTL_BALANCED_NODE)v13);
        EtwpCheckForPrivatePreEnable(v13);
        LODWORD(v13[5].Next) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&v13[4]);
        *v9 = v22 | ((unsigned __int64)WORD2(v13[5].Next) << 32);
        return v19;
      }
      ProviderHandleRemove(v20, v22);
    }
    LODWORD(v13[5].Next) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&v13[4]);
    EtwpFreeRegistration((__int64)v13);
    RtlSetLastWin32Error(v19);
  }
  else
  {
LABEL_19:
    v19 = 87;
    RtlSetLastWin32Error(87);
  }
  return v19;
}
