/*
 * XREFs of ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x1800AF268
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800AE5E0 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C8C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180002650 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4B0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180053D14 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ @ 0x180055870 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180058380 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005EB18 (-zInternalRelatedId@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMana.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *this,
        const wchar_t *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v11; // rax
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+8h] BYREF
  const wchar_t *v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v12);
  v4 = *((_QWORD *)this + 34);
  v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider(v5);
  if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  v8 = CreativeFramework::Logging::ShellPlacementLogging::Provider(v7);
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
  {
    v13 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v14 = 0LL;
    LODWORD(v12) = CurrentThreadId;
    v11 = (const GUID *)wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v9,
      byte_18016428B,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v11,
      (__int64)&v14,
      (__int64)&v12,
      &v13);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)((char *)this + 288));
}
