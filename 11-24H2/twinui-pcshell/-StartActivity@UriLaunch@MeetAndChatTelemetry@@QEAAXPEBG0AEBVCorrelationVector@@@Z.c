/*
 * XREFs of ?StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805F8F98
 * Callers:
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805F886C (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@6@Z @ 0x180010DA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U4@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x180178670 (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ?Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1802B2C54 (-Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall MeetAndChatTelemetry::UriLaunch::StartActivity(
        MeetAndChatTelemetry::UriLaunch *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        TraceLoggingCorrelationVector **a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v15; // rax
  RTL_SRWLOCK *v16; // [rsp+50h] [rbp-B0h] BYREF
  const unsigned __int16 *v17; // [rsp+58h] [rbp-A8h] BYREF
  const unsigned __int16 *v18; // [rsp+60h] [rbp-A0h] BYREF
  char *v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  char v21[129]; // [rsp+80h] [rbp-80h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v16);
  v8 = *((_QWORD *)this + 34);
  v10 = MeetAndChatTelemetryLogging::Provider(v9);
  if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  else
    *(_OWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)v8 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
  v12 = MeetAndChatTelemetryLogging::Provider(v11);
  v13 = (__int64)v12;
  if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x200000000000LL) )
  {
    v17 = a3;
    v18 = a2;
    v19 = CorrelationVector::ToString(a4, (char (*)[129])v21);
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0x1000000LL;
    LODWORD(v16) = CurrentThreadId;
    v15 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v13,
      (__int64)&unk_1808198EA,
      *((_QWORD *)this + 34) + 8LL,
      v15,
      (__int64)&v20,
      (__int64)&v16,
      &v19,
      &v18,
      &v17);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MeetAndChatTelemetry::UriLaunch *)((char *)this + 288));
}
