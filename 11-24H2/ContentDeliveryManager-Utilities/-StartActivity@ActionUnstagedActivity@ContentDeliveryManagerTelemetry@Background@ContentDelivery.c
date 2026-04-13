/*
 * XREFs of ?StartActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18006FA88
 * Callers:
 *     _lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator() @ 0x18006DA4C (_lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C8C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@55@Z @ 0x180002BA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U3@@-$_tlgWriteTe.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044660 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005EB18 (-zInternalRelatedId@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMana.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006511C (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rdi
  const GUID *v11; // rax
  const wchar_t *v12; // [rsp+50h] [rbp-38h] BYREF
  const wchar_t *v13; // [rsp+58h] [rbp-30h] BYREF
  const wchar_t *v14; // [rsp+60h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h] BYREF
  DWORD CurrentThreadId; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v8);
  v10 = (__int64)v9;
  if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
  {
    v12 = a4;
    v13 = a3;
    v14 = a2;
    v15 = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v11 = (const GUID *)wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v10,
      byte_18016233A,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v11,
      (__int64)&v15,
      (__int64)&CurrentThreadId,
      &v14,
      &v13,
      &v12);
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
