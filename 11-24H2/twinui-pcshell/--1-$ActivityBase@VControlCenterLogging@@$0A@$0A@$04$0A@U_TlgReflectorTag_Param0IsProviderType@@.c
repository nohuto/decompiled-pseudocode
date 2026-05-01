/*
 * XREFs of ??1?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E513C
 * Callers:
 *     ??1EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1800E44A8 (--1EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1800E44D4 (--1EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18020509C (--1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x180226B10 (--1EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802365E4 (--1EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CC8D8 (--1EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@.c)
 *     ??1EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CC95C (--1EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CCAE8 (--1EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CCC48 (--1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CCE00 (--1EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@Q.c)
 *     ??1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x180373658 (--1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x180373684 (--1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1803736B0 (--1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1803736DC (--1EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E5174 (-reset@-$shared_object@V-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 */

__int64 __fastcall wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
