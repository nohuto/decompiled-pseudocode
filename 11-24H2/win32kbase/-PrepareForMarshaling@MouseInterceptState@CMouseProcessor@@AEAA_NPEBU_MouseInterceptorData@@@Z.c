/*
 * XREFs of ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x14021E4A0
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021D9E8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     CreateKernelEvent @ 0x140131DB0 (CreateKernelEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::PrepareForMarshaling(
        CMouseProcessor::MouseInterceptState *this,
        const struct _MouseInterceptorData *a2)
{
  char v4; // di
  struct _KEVENT *KernelEvent; // rax
  _BYTE v7[20]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 6) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8676);
  if ( *((_DWORD *)this + 7) != (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8679);
  memset(v7, 0, sizeof(v7));
  v4 = 1;
  *((_OWORD *)this + 5) = *(_OWORD *)v7;
  *((_QWORD *)this + 12) = 0LL;
  if ( !*((_QWORD *)this + 13) )
  {
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    *((_QWORD *)this + 13) = KernelEvent;
    if ( !KernelEvent )
      return 0;
  }
  *((_OWORD *)this + 2) = *(_OWORD *)a2;
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 2);
  return v4;
}
