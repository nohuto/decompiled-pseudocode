/*
 * XREFs of RtlRaiseException @ 0x180075020
 * Callers:
 *     RtlpPossibleDeadlock @ 0x1800072A0 (RtlpPossibleDeadlock.c)
 *     TpCheckTerminateWorker @ 0x180008F30 (TpCheckTerminateWorker.c)
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpTpImpersonate @ 0x18003DE10 (RtlpTpImpersonate.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContext @ 0x180073A20 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180073C90 (RtlpFreeActivationContextStackFrame.c)
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18007F260 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlGetActiveActivationContext @ 0x1800914E0 (RtlGetActiveActivationContext.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x1800918D0 (RtlpAllocateActivationContextStackFrame.c)
 *     PssNtValidateDescriptor @ 0x1800C9A80 (PssNtValidateDescriptor.c)
 *     TppRaiseHandleStatus @ 0x1800D71E8 (TppRaiseHandleStatus.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EC7EC (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801186A8 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportFatalFailure @ 0x18011A3AC (RtlReportFatalFailure.c)
 *     RaiseException @ 0x18012C230 (RaiseException.c)
 *     _raise_exc_ex @ 0x18012C7E0 (_raise_exc_ex.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1801672F0 (KiRaiseUserExceptionDispatcher.c)
 *     RtlRaiseExceptionForReturnAddressHijack @ 0x180167870 (RtlRaiseExceptionForReturnAddressHijack.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x180074C40 (RtlGetExtendedContextLength2.c)
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlpSanitizeContext @ 0x180076770 (RtlpSanitizeContext.c)
 *     RtlInitializeExtendedContext2 @ 0x1800768C0 (RtlInitializeExtendedContext2.c)
 *     RtlLookupFunctionEntry @ 0x180076C90 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x180078D20 (RtlpxVirtualUnwind.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x1800D5260 (RtlVirtualUnwind.c)
 *     RtlpCaptureContext2 @ 0x1801227A0 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x180122930 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x180122EA0 (RtlpGuardSynchronizeRestorePc.c)
 *     ZwRaiseException @ 0x180166090 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  ULONG v2; // r14d
  ULONG64 v3; // rsi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  void *v6; // rsp
  NTSTATUS v7; // r15d
  int v8; // esi
  PRUNTIME_FUNCTION v9; // r14
  EXCEPTION_RECORD *v10; // rcx
  BOOLEAN v11; // r8
  ULONG64 v12; // rsi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // rax
  ULONG ContextLength[2]; // [rsp+60h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+68h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+70h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+78h] [rbp+18h] BYREF
  _QWORD v18[4]; // [rsp+80h] [rbp+20h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+A0h] [rbp+40h] BYREF

  ContextLength[0] = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  memset_thunk_772440563353939046(HistoryTable.Entry, 0, 0xC0uLL);
  ExceptionRecord->ExceptionFlags |= 0x80u;
  v2 = 1048587;
  v3 = 0LL;
  if ( !NtCurrentPeb()->BeingDebugged || ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v2 = 1048651;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v4 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
        if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800LL) != 0
          && ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
        {
          v4 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x7FFFFFFFFFFFF7FFLL | 0x8000000000000000uLL;
        }
        v3 = v4 & 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  RtlGetExtendedContextLength2(v2, ContextLength, v3);
  v5 = ContextLength[0] + 15LL;
  if ( v5 <= ContextLength[0] )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = alloca(v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v7 = RtlInitializeExtendedContext2((PCONTEXT)ContextLength, v2, (PCONTEXT_EX *)ContextLength, v3);
  RtlpCaptureContext2(ContextLength);
  v8 = HistoryTable.Entry[10].ImageBase;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  v9 = RtlLookupFunctionEntry(HistoryTable.Entry[10].ImageBase, &ImageBase, &HistoryTable);
  if ( !v9 )
LABEL_13:
    RtlRaiseStatus(v7);
  *(_QWORD *)ContextLength = 0LL;
  v18[0] = 0LL;
  v18[1] = 0LL;
  RtlpSanitizeContext(ContextLength);
  v18[2] = 0LL;
  RtlpxVirtualUnwind(
    0,
    ImageBase,
    v8,
    (_DWORD)v9,
    (__int64)ContextLength,
    0LL,
    (__int64)&HandlerData,
    (__int64)&EstablisherFrame,
    (__int64)ContextLength,
    (__int64)v18,
    0);
  if ( ExceptionRecord->ExceptionCode == -2147483597 )
  {
    v12 = HistoryTable.Entry[10].ImageBase;
    v13 = RtlLookupFunctionEntry(HistoryTable.Entry[10].ImageBase, &ImageBase, &HistoryTable);
    if ( v13 )
      RtlVirtualUnwind(0, ImageBase, v12, v13, (PCONTEXT)ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  }
  ExceptionRecord->ExceptionAddress = (void *)HistoryTable.Entry[10].ImageBase;
  RtlpGuardSynchronizeRestorePc(HistoryTable.Entry[10].ImageBase);
  v10 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v11 = 1;
LABEL_12:
    v7 = ZwRaiseException(v10, (PCONTEXT)ContextLength, v11);
    goto LABEL_13;
  }
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)ContextLength) )
  {
    v11 = 0;
    v10 = ExceptionRecord;
    goto LABEL_12;
  }
  RtlRestoreContext((PCONTEXT)ContextLength, ExceptionRecord);
}
