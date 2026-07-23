/*
 * XREFs of RtlRaiseException @ 0x18008CDF0
 * Callers:
 *     RtlGetActiveActivationContext @ 0x18001DD70 (RtlGetActiveActivationContext.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x18001E160 (RtlpAllocateActivationContextStackFrame.c)
 *     RtlpPossibleDeadlock @ 0x180030A80 (RtlpPossibleDeadlock.c)
 *     LdrpLoadForwardedDll @ 0x180038380 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180051880 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 *     TppRaiseHandleStatus @ 0x1800870A8 (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     RtlpTpImpersonate @ 0x18008BBF0 (RtlpTpImpersonate.c)
 *     RtlDeactivateActivationContext @ 0x18008C7F0 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18008CA60 (RtlpFreeActivationContextStackFrame.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18008CC80 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCheckTerminateWorker @ 0x1800AAF00 (TpCheckTerminateWorker.c)
 *     PssNtValidateDescriptor @ 0x1800BC890 (PssNtValidateDescriptor.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800E6DDC (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlpAllocateHeapRaiseException @ 0x180110740 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportFatalFailure @ 0x18011215C (RtlReportFatalFailure.c)
 *     RaiseException @ 0x180128980 (RaiseException.c)
 *     _raise_exc_ex @ 0x180128F30 (_raise_exc_ex.c)
 *     KiRaiseUserExceptionDispatcher @ 0x180164120 (KiRaiseUserExceptionDispatcher.c)
 *     RtlRaiseExceptionForReturnAddressHijack @ 0x1801646A0 (RtlRaiseExceptionForReturnAddressHijack.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x180041B10 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180045620 (RtlVirtualUnwind.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x1800D2A60 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800D2FE0 (RtlGetExtendedContextLength2.c)
 *     RtlpCaptureContext2 @ 0x18011EEF0 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x18011F080 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x18011F5F0 (RtlpGuardSynchronizeRestorePc.c)
 *     ZwRaiseException @ 0x180162EC0 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180164700 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  ULONG v2; // r14d
  ULONG64 v3; // rbx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  NTSTATUS v9; // ebx
  ULONG64 v10; // r14
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v11; // rax
  ULONG64 v12; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // rax
  EXCEPTION_RECORD *v14; // rcx
  BOOLEAN v15; // r8
  unsigned __int64 ImageBase; // [rsp+40h] [rbp+0h] BYREF
  PCONTEXT_EX ContextLength; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+60h] [rbp+20h] BYREF
  ULONG64 v21; // [rsp+138h] [rbp+F8h]

  LODWORD(ContextLength) = 0;
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
  RtlGetExtendedContextLength2(v2, (PULONG)&ContextLength, v3);
  v5 = (unsigned int)ContextLength + 15LL;
  if ( v5 <= (unsigned int)ContextLength )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = alloca(v6);
  v8 = alloca(v6);
  v9 = RtlInitializeExtendedContext2((PCONTEXT)&ImageBase, v2, &ContextLength, v3);
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
  v14 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v15 = 1;
    goto LABEL_20;
  }
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ImageBase) )
  {
    v15 = 0;
    v14 = ExceptionRecord;
LABEL_20:
    v9 = ZwRaiseException(v14, (PCONTEXT)&ImageBase, v15);
    goto LABEL_21;
  }
  RtlRestoreContext((PCONTEXT)&ImageBase, ExceptionRecord);
}
