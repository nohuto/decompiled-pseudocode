/*
 * XREFs of RtlActivateActivationContext @ 0x18001DEA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18001C980 (RtlCaptureStackBackTrace.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x18001E160 (RtlpAllocateActivationContextStackFrame.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlActivateActivationContext(ULONG Flags, PACTIVATION_CONTEXT ActivationContext, PULONG_PTR Cookie)
{
  PACTIVATION_CONTEXT v4; // rsi
  struct _TEB *v5; // r14
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r14
  NTSTATUS result; // eax
  bool v8; // zf
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v9; // rdi
  unsigned int v10; // edx
  __int64 NextCookieSequenceNumber; // rcx
  unsigned __int64 v12; // rdx
  ULONG BackTraceHash; // [rsp+50h] [rbp+8h] BYREF
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v14; // [rsp+60h] [rbp+18h] BYREF

  if ( Cookie )
    *Cookie = 0LL;
  if ( Flags || !Cookie )
    return -1073741811;
  v4 = (PACTIVATION_CONTEXT)&unk_1801721D8;
  v5 = NtCurrentTeb();
  if ( ActivationContext != (PACTIVATION_CONTEXT)-3LL )
    v4 = ActivationContext;
  v14 = 0LL;
  *Cookie = 0LL;
  if ( !v5 || v4 == (PACTIVATION_CONTEXT)-1LL )
    return -1073741811;
  ActivationContextStackPointer = v5->ActivationContextStackPointer;
  result = RtlpAllocateActivationContextStackFrame(Flags, ActivationContextStackPointer, &v14);
  if ( result >= 0 )
  {
    v8 = RtlpCaptureActivationContextActivationStacks == 0;
    v9 = v14;
    v14->Flags = 40;
    if ( v8 )
    {
      v10 = 0;
    }
    else
    {
      v10 = RtlCaptureStackBackTrace(2u, 8u, (PVOID *)&v9[1].ActivationContext, &BackTraceHash);
      if ( v10 >= 8 )
        goto LABEL_13;
    }
    memset_thunk_772440563353939046(&v9[1].ActivationContext + v10, 0, 8LL * (8 - v10));
LABEL_13:
    v9->Previous = ActivationContextStackPointer->ActiveFrame;
    result = 0;
    v9->ActivationContext = v4;
    NextCookieSequenceNumber = ActivationContextStackPointer->NextCookieSequenceNumber;
    v12 = NextCookieSequenceNumber | ((unsigned __int64)(ActivationContextStackPointer->StackId & 0xFFFFFFF) << 32) | 0x1000000000000000LL;
    ActivationContextStackPointer->NextCookieSequenceNumber = NextCookieSequenceNumber + 1;
    v9[1].Previous = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v12;
    *Cookie = v12;
    ActivationContextStackPointer->ActiveFrame = v9;
  }
  return result;
}
