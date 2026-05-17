/*
 * XREFs of RtlActivateActivationContextUnsafeFast @ 0x180074EB0
 * Callers:
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180040C30 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     LdrpInitializeNode @ 0x180073610 (LdrpInitializeNode.c)
 *     RtlDispatchAPC @ 0x180073970 (RtlDispatchAPC.c)
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpProcessDetachNode @ 0x1800DFDC4 (LdrpProcessDetachNode.c)
 *     LdrpQuerySxSMUIFile @ 0x1800EE464 (LdrpQuerySxSMUIFile.c)
 *     LdrShutdownProcess @ 0x1800FDE80 (LdrShutdownProcess.c)
 * Callees:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

void __fastcall RtlActivateActivationContextUnsafeFast(__int64 a1, __int64 a2)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r9
  unsigned __int64 ActiveFrame; // r8
  bool v4; // cf
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h]

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v4 = *(_QWORD *)a1 < 0x48uLL;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  if ( !v4 )
  {
    *(_QWORD *)(a1 + 40) = ~ActiveFrame;
    *(_QWORD *)(a1 + 48) = ~a2;
    *(_QWORD *)(a1 + 56) = retaddr;
  }
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  *(_QWORD *)(a1 + 16) = ActiveFrame;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == a2 )
      goto LABEL_8;
  }
  else if ( !a2 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 32) = 48;
    return;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)(a1 + 16);
}
