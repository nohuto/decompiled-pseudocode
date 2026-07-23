/*
 * XREFs of TppCallbackCheckThreadAfterCallback @ 0x180051880
 * Callers:
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCallbackCheckThreadAfterCallback(__int64 a1)
{
  struct _TEB *v2; // rax
  __int64 v3; // rdi
  void *SubProcessTag; // rdx
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _TEB *v8; // rcx
  __int64 ThreadInformation; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD Fields[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v12; // [rsp+100h] [rbp+0h]

  ThreadInformation = 0LL;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  if ( a1 )
  {
    NtCurrentTeb()->ActivityId = *(_GUID *)(a1 + 232);
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_DWORD *)(a1 + 228) |= 2u;
    if ( (*(_BYTE *)(a1 + 76) & 1) != 0 && (*(_BYTE *)(a1 + 104) & 1) == 0 )
    {
      RtlDeactivateActivationContextUnsafeFast(a1);
      *(_BYTE *)(a1 + 76) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 80) && (*(_BYTE *)(a1 + 104) & 2) == 0 )
    {
      v2 = NtCurrentTeb();
      v3 = 2147353488LL;
      SubProcessTag = v2->SubProcessTag;
      v2->SubProcessTag = 0LL;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v6 = (__int64)NtCurrentPeb()->SharedData + 566;
      else
        v6 = 2147353488LL;
      if ( *(_BYTE *)v6 && SubProcessTag )
      {
        memset(Fields, 0, sizeof(Fields));
        WORD3(Fields[0]) = 1349;
        v12 = (unsigned int)SubProcessTag;
        if ( RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->SharedData + 566;
        NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 8u, Fields);
      }
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 128);
    if ( v7 && (*(_BYTE *)(v7 + 436) & 1) == 0 )
    {
      if ( NtCurrentTeb()->IsImpersonating && (*(_BYTE *)(a1 + 104) & 4) == 0 )
      {
        memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
        ExceptionRecord.ExceptionInformation[0] = *(_QWORD *)(a1 + 88);
        ExceptionRecord.ExceptionInformation[1] = *(_QWORD *)(a1 + 96);
        ExceptionRecord.ExceptionCode = -1073740016;
        ExceptionRecord.NumberParameters = 2;
        RtlRaiseException(&ExceptionRecord);
        ThreadInformation = 0LL;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 )
      {
        v8 = NtCurrentTeb();
        if ( (((unsigned __int64)v8->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
          || v8->TxnScopeEnterCallback
          || v8->TxnScopeExitCallback
          || v8->TxnScopeContext
          || v8->TxFsContext != 65534 )
        {
          DbgPrintEx(
            0x54u,
            0,
            "ThreadPool: callback %p(%p) returned with a transaction uncleared\n",
            *(const void **)(a1 + 88),
            *(const void **)(a1 + 96));
          memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
          ExceptionRecord.ExceptionCode = -1073740003;
          ExceptionRecord.NumberParameters = 0;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0
        && NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with the loader lock held\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
        ExceptionRecord.ExceptionCode = -1073740002;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 && NtCurrentTeb()->PreferredLanguages )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with preferred languages set\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
        ExceptionRecord.ExceptionCode = -1073740001;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( *(char *)(a1 + 104) >= 0 )
      {
        if ( NtCurrentTeb()->SavedPriorityState )
        {
          DbgPrintEx(
            0x54u,
            0,
            "ThreadPool: callback %p(%p) returned with background priorities set\n",
            *(const void **)(a1 + 88),
            *(const void **)(a1 + 96));
          memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
          ExceptionRecord.ExceptionCode = -1073740000;
          ExceptionRecord.NumberParameters = 0;
          RtlRaiseException(&ExceptionRecord);
        }
      }
    }
  }
}
