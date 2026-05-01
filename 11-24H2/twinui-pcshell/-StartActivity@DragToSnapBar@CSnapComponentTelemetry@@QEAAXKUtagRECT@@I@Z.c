/*
 * XREFs of ?StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z @ 0x1805A119C
 * Callers:
 *     ?SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1805A0980 (-SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV-$com_ptr_t@UIAp.c)
 *     ?SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRECT@@AEBV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x1805A0A7C (-SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3444444@Z @ 0x18000F0F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

void __fastcall CSnapComponentTelemetry::DragToSnapBar::StartActivity(
        CSnapComponentTelemetry::DragToSnapBar *this,
        __int64 a2,
        struct tagRECT *a3,
        int a4)
{
  __int64 v6; // rdi
  const struct _tlgProvider_t *v7; // rax
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rdi
  RTL_SRWLOCK *v10; // [rsp+C8h] [rbp+67h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v10);
  v6 = *((_QWORD *)this + 34);
  v7 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v7 > 5u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  else
    *(_OWORD *)(v6 + 8) = 0LL;
  *(_DWORD *)v6 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
  v8 = WindowManagementLogging::Provider();
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
  {
    LODWORD(v10) = a4;
    GetCurrentThreadId();
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (__int64)&unk_180812A97);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CSnapComponentTelemetry::DragToSnapBar *)((char *)this + 288));
}
