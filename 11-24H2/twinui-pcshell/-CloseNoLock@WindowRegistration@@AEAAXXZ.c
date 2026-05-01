/*
 * XREFs of ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1805FAA3C
 * Callers:
 *     ??1WindowRegistration@@UEAA@XZ @ 0x1805FA934 (--1WindowRegistration@@UEAA@XZ.c)
 *     ?Close@?$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1805FA9C0 (-Close@-$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ.c)
 * Callees:
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x18017817C (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180178518 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x18020A874 (--1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B44CC (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1805F8DF4 (-RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowRegistration::CloseNoLock(WindowRegistration *this)
{
  __int64 v2; // rdx
  DWORD v3; // edx
  _QWORD v4[42]; // [rsp+20h] [rbp-168h] BYREF

  if ( *((_BYTE *)this + 48) )
  {
    wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v4);
    v4[0] = &MeetAndChatTelemetry::MeetAndChatManagerOperation::`vftable';
    LOBYTE(v2) = 2;
    MeetAndChatTelemetry::MeetAndChatManagerOperation::StartActivity(
      (__int64)v4,
      v2,
      (TraceLoggingCorrelationVector **)this + 4);
    Utils::RegisterFlyoutWindow(*((HWND *)this + 3), 0LL);
    *((_BYTE *)this + 48) = 0;
    wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v4, v3);
    MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation((MeetAndChatTelemetry::MeetAndChatManagerOperation *)v4);
  }
}
