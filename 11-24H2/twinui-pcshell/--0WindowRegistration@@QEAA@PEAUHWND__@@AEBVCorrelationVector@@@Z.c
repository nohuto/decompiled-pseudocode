/*
 * XREFs of ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1805FA770
 * Callers:
 *     ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1805FB5C0 (-RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA-AUIInspectable@Foundation@Windows@winrt@@PEAUH.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805F6568 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805F83B4 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1805F8DF4 (-RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805FA640 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??0?$producers_base@VWindowRegistration@@V?$tuple@UIClosable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1805FA758 (--0-$producers_base@VWindowRegistration@@V-$tuple@UIClosable@Foundation@Windows@winrt@@@std@@@im.c)
 *     ??1FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805FA908 (--1FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1805FBC1C (-StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
WindowRegistration *__fastcall WindowRegistration::WindowRegistration(
        WindowRegistration *this,
        HWND a2,
        const struct CorrelationVector *a3)
{
  __int64 v4; // r8
  TraceLoggingCorrelationVector **v5; // r9
  HRESULT v6; // eax
  HWND v7; // rdx
  int pvAttribute; // [rsp+20h] [rbp-178h] BYREF
  WindowRegistration *v10; // [rsp+28h] [rbp-170h]
  __int64 v11[42]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v10 = this;
  winrt::impl::producers_base<WindowRegistration,std::tuple<winrt::Windows::Foundation::IClosable>>::producers_base<WindowRegistration,std::tuple<winrt::Windows::Foundation::IClosable>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &WindowRegistration::`vftable';
  *((_QWORD *)this + 3) = v4;
  CorrelationVector::Extend(v5, (void **)this + 4);
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  if ( *((_QWORD *)this + 3) )
  {
    wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
    v11[0] = (__int64)&MeetAndChatTelemetry::FlyoutWindowRegistered::`vftable';
    MeetAndChatTelemetry::FlyoutWindowRegistered::StartActivity(
      (MeetAndChatTelemetry::FlyoutWindowRegistered *)v11,
      (WindowRegistration *)((char *)this + 32));
    pvAttribute = 2;
    v6 = DwmSetWindowAttribute(*((HWND *)this + 3), 0x21u, &pvAttribute, 4u);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v6);
    LOBYTE(v7) = 1;
    Utils::RegisterFlyoutWindow(*((HWND *)this + 3), v7);
    *((_BYTE *)this + 48) = 1;
    wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
    MeetAndChatTelemetry::FlyoutWindowRegistered::~FlyoutWindowRegistered((MeetAndChatTelemetry::FlyoutWindowRegistered *)v11);
  }
  return this;
}
