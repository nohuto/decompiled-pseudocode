/*
 * XREFs of ??1?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803F244C
 * Callers:
 *     ??1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ @ 0x1803F2554 (--1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803F4D20 (-reset@-$shared_object@V-$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsPro.c)
 */

__int64 __fastcall wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
