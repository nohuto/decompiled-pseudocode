/*
 * XREFs of RtlActivateActivationContextUnsafeFast @ 0x18008CC80
 * Callers:
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004C370 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 *     LdrpInitializeNode @ 0x18008C3E0 (LdrpInitializeNode.c)
 *     RtlDispatchAPC @ 0x18008C740 (RtlDispatchAPC.c)
 *     LdrpQuerySxSMUIFile @ 0x18009A09C (LdrpQuerySxSMUIFile.c)
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpProcessDetachNode @ 0x1800DE6E4 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
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
