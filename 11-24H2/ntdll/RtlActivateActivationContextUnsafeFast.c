/*
 * XREFs of RtlActivateActivationContextUnsafeFast @ 0x1800703A0
 * Callers:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18001F970 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 *     LdrpInitializeNode @ 0x18006FB00 (LdrpInitializeNode.c)
 *     RtlDispatchAPC @ 0x18006FE60 (RtlDispatchAPC.c)
 *     LdrpQuerySxSMUIFile @ 0x1800D11A0 (LdrpQuerySxSMUIFile.c)
 *     LdrpProcessDetachNode @ 0x1800E3114 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
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
