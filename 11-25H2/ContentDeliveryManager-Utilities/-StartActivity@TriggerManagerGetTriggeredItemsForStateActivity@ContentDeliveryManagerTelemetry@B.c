/*
 * XREFs of ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x18007DD58
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18007C250 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@_W@@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@_W@@5AEBU?$_tlgWrapSz@D@@@Z @ 0x18000399C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@_W@@U3@U-$_tlgWrapSz@D@.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044480 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005E638 (-zInternalRelatedId@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMana.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007FC08 (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDel_ea_18007FC08.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rdi
  const GUID *v10; // rax
  const wchar_t *v11; // [rsp+50h] [rbp-38h] BYREF
  const wchar_t *v12; // [rsp+58h] [rbp-30h] BYREF
  const wchar_t *v13; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h] BYREF
  DWORD CurrentThreadId; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v8);
  if ( *(_DWORD *)v9 > 5u )
  {
    v11 = a4;
    v12 = a3;
    v13 = a2;
    v14 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v10 = (const GUID *)wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<char>>(
      (__int64)v9,
      byte_180160976,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v10,
      (__int64)&v14,
      (__int64)&CurrentThreadId,
      &v13,
      &v12,
      &v11);
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
