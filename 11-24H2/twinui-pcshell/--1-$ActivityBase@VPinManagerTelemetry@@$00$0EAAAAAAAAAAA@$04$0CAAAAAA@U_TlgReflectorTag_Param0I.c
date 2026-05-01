/*
 * XREFs of ??1?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802A7058
 * Callers:
 *     ??1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ @ 0x1802B6EBC (--1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ @ 0x1805E38EC (--1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3918 (--1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3944 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3970 (--1PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805E399C (--1PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802A7090 (-reset@-$shared_object@V-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderT.c)
 */

__int64 __fastcall wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
