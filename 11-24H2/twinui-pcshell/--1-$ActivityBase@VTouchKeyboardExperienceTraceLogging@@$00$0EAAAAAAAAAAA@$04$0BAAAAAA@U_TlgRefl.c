/*
 * XREFs of ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801DA5F0
 * Callers:
 *     ??1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180211620 (--1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18021E450 (--1InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18022EB34 (--1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180236560 (--1InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18023658C (--1InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCB14 (--1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BA90 (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BABC (--1OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BAE8 (--1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BB14 (--1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18048869C (--1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026B54 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_180026B54.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 280));
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)(a1 + 8));
}
