/*
 * XREFs of ??1?$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180347634
 * Callers:
 *     ??1?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803475C4 (--1-$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?reset@?$shared_object@V?$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180361280 (-reset@-$shared_object@V-$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProvid.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18002694C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1800269B0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 232));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  return _TlgActivityBase<wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>,0,5>(a1);
}
