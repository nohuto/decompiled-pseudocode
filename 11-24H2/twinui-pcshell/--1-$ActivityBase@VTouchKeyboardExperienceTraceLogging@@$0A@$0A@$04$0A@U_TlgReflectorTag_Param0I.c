/*
 * XREFs of ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E27D8
 * Callers:
 *     ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800E289C (--1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800E28C8 (--1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCB6C (--1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCC74 (--1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCCCC (--1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046CAFC (--1TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BA64 (--1DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BB40 (--1PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E2810 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_1800E2810.c)
 */

__int64 __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
