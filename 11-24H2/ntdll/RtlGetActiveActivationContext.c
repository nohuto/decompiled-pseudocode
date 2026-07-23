/*
 * XREFs of RtlGetActiveActivationContext @ 0x18001DD70
 * Callers:
 *     LdrpAllocateModuleEntry @ 0x18003D080 (LdrpAllocateModuleEntry.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x18001E700 (RtlAddRefActivationContext.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlGetActiveActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rsi
  unsigned __int64 ActiveFrame; // rdi
  int v4; // ecx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  if ( !ActivationContext )
    return -1073741811;
  *(_QWORD *)&ActivationContext->RefCount = 0LL;
  if ( ActivationContextStackPointer )
  {
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    if ( ActivationContextStackPointer->ActiveFrame )
    {
      v4 = *(_DWORD *)(ActiveFrame + 16);
      if ( (v4 & 0x70) != 0x20
        || (v4 & 8) == 0
        && *(_QWORD *)(ActiveFrame - 16) >= 0x48uLL
        && (*(_QWORD *)(ActiveFrame + 24) != ~*(_QWORD *)ActiveFrame
         || *(_QWORD *)(ActiveFrame + 32) != ~*(_QWORD *)(ActiveFrame + 8)) )
      {
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
        ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
        ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
        ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
        ExceptionRecord.ExceptionCode = -1072365548;
        ExceptionRecord.ExceptionFlags = 1;
        RtlRaiseException(&ExceptionRecord);
        return -1073741595;
      }
      RtlAddRefActivationContext(*(PACTIVATION_CONTEXT *)(ActiveFrame + 8));
      *(_QWORD *)&ActivationContext->RefCount = *(_QWORD *)(ActiveFrame + 8);
    }
    return 0;
  }
  return 0;
}
