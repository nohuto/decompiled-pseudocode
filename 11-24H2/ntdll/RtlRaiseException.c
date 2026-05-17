/*
 * XREFs of RtlRaiseException @ 0x180070510
 * Callers:
 *     TpCheckTerminateWorker @ 0x180004410 (TpCheckTerminateWorker.c)
 *     LdrpLoadForwardedDll @ 0x18000B980 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180024E80 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlGetActiveActivationContext @ 0x18003DAF0 (RtlGetActiveActivationContext.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x18003DEE0 (RtlpAllocateActivationContextStackFrame.c)
 *     TppRaiseHandleStatus @ 0x18006A9B8 (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     RtlpTpImpersonate @ 0x18006F310 (RtlpTpImpersonate.c)
 *     RtlDeactivateActivationContext @ 0x18006FF10 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180070180 (RtlpFreeActivationContextStackFrame.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800703A0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpPossibleDeadlock @ 0x18009BC30 (RtlpPossibleDeadlock.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     PssNtValidateDescriptor @ 0x1800C4CD0 (PssNtValidateDescriptor.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EBACC (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801154C4 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportFatalFailure @ 0x18011716C (RtlReportFatalFailure.c)
 *     RaiseException @ 0x18012A750 (RaiseException.c)
 *     _raise_exc_ex @ 0x18012AD00 (_raise_exc_ex.c)
 *     KiRaiseUserExceptionDispatcher @ 0x180165D60 (KiRaiseUserExceptionDispatcher.c)
 *     RtlRaiseExceptionForReturnAddressHijack @ 0x1801662E0 (RtlRaiseExceptionForReturnAddressHijack.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x180015110 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180018C20 (RtlVirtualUnwind.c)
 *     RtlDispatchException @ 0x180019060 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x1800D76F0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800D7C70 (RtlGetExtendedContextLength2.c)
 *     RtlpCaptureContext2 @ 0x180120CC0 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x180120E50 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1801213C0 (RtlpGuardSynchronizeRestorePc.c)
 *     ZwRaiseException @ 0x180164B00 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180166340 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  int v9; // ebx
  ULONG64 v10; // r14
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v11; // rax
  ULONG64 v12; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // rax
  __int64 v14; // r8
  PEXCEPTION_RECORD v15; // rcx
  unsigned __int64 ImageBase; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v17; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+60h] [rbp+20h] BYREF
  ULONG64 v21; // [rsp+138h] [rbp+F8h]

  v17 = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  memset_thunk_772440563353939046(HistoryTable.Entry, 0, 0xC0uLL);
  ExceptionRecord->ExceptionFlags |= 0x80u;
  v2 = 1048587;
  v3 = 0LL;
  if ( !NtCurrentPeb()->BeingDebugged || ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3) == 1 )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v2 = 1048651;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v4 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
        if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800LL) != 0
          && ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3) != 1 )
        {
          v4 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x7FFFFFFFFFFFF7FFLL | 0x8000000000000000uLL;
        }
        v3 = v4 & 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  RtlGetExtendedContextLength2(v2, &v17, v3);
  v5 = v17 + 15LL;
  if ( v5 <= v17 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = alloca(v6);
  v8 = alloca(v6);
  v9 = RtlInitializeExtendedContext2(&ImageBase, v2, &v17, v3);
  RtlpCaptureContext2(&ImageBase);
  v10 = v21;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  v11 = RtlLookupFunctionEntry(v21, &ImageBase, &HistoryTable);
  if ( !v11 )
LABEL_21:
    RtlRaiseStatus(v9);
  RtlVirtualUnwind(0, ImageBase, v10, v11, (PCONTEXT)&ImageBase, &HandlerData, &EstablisherFrame, 0LL);
  if ( ExceptionRecord->ExceptionCode == -2147483597 )
  {
    v12 = v21;
    v13 = RtlLookupFunctionEntry(v21, &ImageBase, &HistoryTable);
    if ( v13 )
      RtlVirtualUnwind(0, ImageBase, v12, v13, (PCONTEXT)&ImageBase, &HandlerData, &EstablisherFrame, 0LL);
  }
  ExceptionRecord->ExceptionAddress = (void *)v21;
  RtlpGuardSynchronizeRestorePc(v21);
  v15 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    LOBYTE(v14) = 1;
    goto LABEL_20;
  }
  if ( !(unsigned __int8)RtlDispatchException((__int64)ExceptionRecord, (__int64)&ImageBase) )
  {
    v14 = 0LL;
    v15 = ExceptionRecord;
LABEL_20:
    v9 = ZwRaiseException(v15, &ImageBase, v14);
    goto LABEL_21;
  }
  RtlRestoreContext((PCONTEXT)&ImageBase, ExceptionRecord);
}
