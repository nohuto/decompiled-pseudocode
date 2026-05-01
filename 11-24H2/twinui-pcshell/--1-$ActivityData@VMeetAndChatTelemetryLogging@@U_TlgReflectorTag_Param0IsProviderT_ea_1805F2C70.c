/*
 * XREFs of ??1?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1805F2C70
 * Callers:
 *     ??1?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1805F2C38 (--1-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?reset@?$shared_object@V?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1805F7718 (-reset@-$shared_object@V-$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflector_ea_1805F7718.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18002694C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1800269B0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 232));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  return _TlgActivityBase<wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::~_TlgActivityBase<wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>(a1);
}
