/*
 * XREFs of ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x14021EEF8
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021D9E8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::MarshalSync::WaitForCallout(
        CMouseProcessor::MouseInterceptState::MarshalSync *this,
        struct _KTHREAD *a2)
{
  void *v4; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( !*(_QWORD *)this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8722);
  v4 = *(void **)this;
  Object[0] = a2;
  Object[1] = v4;
  return KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL) >= 1;
}
