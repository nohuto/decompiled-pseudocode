/*
 * XREFs of ??1?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180010BD4
 * Callers:
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18000F628 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18000AC3C (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180010C14 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 312));
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
