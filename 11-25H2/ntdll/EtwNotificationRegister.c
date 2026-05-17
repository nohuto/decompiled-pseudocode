/*
 * XREFs of EtwNotificationRegister @ 0x180045640
 * Callers:
 *     SbSelectProcedure @ 0x180038D30 (SbSelectProcedure.c)
 *     EtwEventRegister @ 0x1800455F0 (EtwEventRegister.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     SbObtainTraceHandle @ 0x1800BE760 (SbObtainTraceHandle.c)
 *     EtwRegisterTraceGuidsW @ 0x1800EB570 (EtwRegisterTraceGuidsW.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpRegisterProvider @ 0x180045330 (EtwpRegisterProvider.c)
 *     ProviderHandleInsert @ 0x180045860 (ProviderHandleInsert.c)
 *     EtwpInsertRegistration @ 0x180045AB0 (EtwpInsertRegistration.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180045BB0 (EtwpCheckForPrivatePreEnable.c)
 *     ProviderHandleRemove @ 0x1800460B0 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x180046148 (EtwpFreeRegistration.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x180166F90 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall EtwNotificationRegister(_QWORD *a1, int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
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
  ULONG v19; // edi
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
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
      v13 = (PSLIST_ENTRY)Heap;
      if ( !Heap )
      {
        _InterlockedDecrement(&EtwpRegistrationCount);
LABEL_21:
        v19 = 14;
        RtlSetLastWin32Error(14LL);
        return v19;
      }
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_QWORD *)(Heap + 72) = 0LL;
    }
    v15 = *(struct _SLIST_ENTRY *)a1;
    v13[3].Next = (_SLIST_ENTRY *)a3;
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
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&v13[4]);
    LODWORD(v13[5].Next) = NtCurrentTeb()->ClientId.UniqueThread;
    v19 = ProviderHandleInsert(v18, v13, &v22);
    if ( !v19 )
    {
      if ( a2 == 10 || (v19 = EtwpRegisterProvider((__int64)v13, a3, a2)) == 0 )
      {
        EtwpInsertRegistration(v13);
        EtwpCheckForPrivatePreEnable(v13);
        LODWORD(v13[5].Next) = 0;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v13[4]);
        *v9 = v22 | ((unsigned __int64)WORD2(v13[5].Next) << 32);
        return v19;
      }
      ProviderHandleRemove(v20, v22);
    }
    LODWORD(v13[5].Next) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v13[4]);
    EtwpFreeRegistration(v13);
    RtlSetLastWin32Error(v19);
  }
  else
  {
LABEL_19:
    v19 = 87;
    RtlSetLastWin32Error(87LL);
  }
  return v19;
}
