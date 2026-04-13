/*
 * XREFs of ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x18008EF88
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18008EB08 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180002B2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4E0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180053964 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180057EE0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005E638 (-zInternalRelatedId@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMana.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008E268 (-Provider@CDMUtilsUnlockLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rdi
  const GUID *v6; // rax
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v7);
  v2 = *((_QWORD *)this + 34);
  if ( *(_DWORD *)CDMUtilsUnlockLogging::Provider(v3) <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  *(_DWORD *)v2 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  v5 = CDMUtilsUnlockLogging::Provider(v4);
  if ( *(_DWORD *)v5 > 5u )
  {
    LODWORD(v7) = GetCurrentThreadId();
    v8 = 0LL;
    v6 = (const GUID *)wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_180161C73,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v6,
      (__int64)&v8,
      (__int64)&v7);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)((char *)this + 288));
}
