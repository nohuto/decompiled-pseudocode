/*
 * XREFs of TppCallbackCheckThreadAfterCallback @ 0x180024E80
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCallbackCheckThreadAfterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v5; // rax
  __int64 v6; // rdi
  void *SubProcessTag; // rdx
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _TEB *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v14[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v15; // [rsp+100h] [rbp+0h]

  v12 = 0LL;
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
      v5 = NtCurrentTeb();
      v6 = 2147353488LL;
      SubProcessTag = v5->SubProcessTag;
      v5->SubProcessTag = 0LL;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v9 = (__int64)NtCurrentPeb()->SharedData + 566;
      else
        v9 = 2147353488LL;
      if ( *(_BYTE *)v9 && SubProcessTag )
      {
        memset(v14, 0, sizeof(v14));
        WORD3(v14[0]) = 1349;
        v15 = (unsigned int)SubProcessTag;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, SubProcessTag, a3, a4) )
          v6 = (__int64)NtCurrentPeb()->SharedData + 566;
        NtTraceEvent(*(unsigned __int8 *)v6, 1026LL, 8LL, v14);
      }
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    v10 = *(_QWORD *)(a1 + 128);
    if ( v10 && (*(_BYTE *)(v10 + 436) & 1) == 0 )
    {
      if ( NtCurrentTeb()->IsImpersonating && (*(_BYTE *)(a1 + 104) & 4) == 0 )
      {
        memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
        ExceptionRecord.ExceptionInformation[0] = *(_QWORD *)(a1 + 88);
        ExceptionRecord.ExceptionInformation[1] = *(_QWORD *)(a1 + 96);
        ExceptionRecord.ExceptionCode = -1073740016;
        ExceptionRecord.NumberParameters = 2;
        RtlRaiseException(&ExceptionRecord);
        v12 = 0LL;
        NtSetInformationThread(-2LL, 5LL, &v12);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 )
      {
        v11 = NtCurrentTeb();
        if ( (((unsigned __int64)v11->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
          || v11->TxnScopeEnterCallback
          || v11->TxnScopeExitCallback
          || v11->TxnScopeContext
          || v11->TxFsContext != 65534 )
        {
          DbgPrintEx(
            84LL,
            0LL,
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
          84LL,
          0LL,
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
          84LL,
          0LL,
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
            84LL,
            0LL,
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
