/*
 * XREFs of ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1805FB5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180055CEC (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18017872C (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x18022566C (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802A813C (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ??0CorrelationVector@@QEAA@XZ @ 0x1802BE4B4 (--0CorrelationVector@@QEAA@XZ.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802BF468 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802CE874 (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1805FA770 (--0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1805FBFB8 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 */

// Hidden C++ exception states: #wind=8
struct IInspectable __fastcall ApplicationFlyoutView::RegisterFlyoutWindow(
        ApplicationFlyoutView *this,
        HWND a2,
        const struct winrt::hstring *a3,
        _QWORD *a4)
{
  HWND v5; // rdi
  HWND v6; // r14
  const struct CorrelationVector *v7; // rbx
  WindowRegistration *v8; // rdi
  void **v9; // rcx
  __int64 **v10; // rbx
  const unsigned __int16 *v11; // rax
  int v12; // eax
  struct TraceLoggingCorrelationVector *v13; // rax
  const char *v14; // r9
  const char *v15; // r9
  WindowRegistration *v16; // rbx
  int v18[2]; // [rsp+20h] [rbp-128h] BYREF
  volatile signed __int32 *v19; // [rsp+28h] [rbp-120h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-118h] BYREF
  void *v21; // [rsp+38h] [rbp-110h] BYREF
  void *v22[2]; // [rsp+40h] [rbp-108h] BYREF
  void *v23; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v24[4]; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v25[5]; // [rsp+78h] [rbp-D0h] BYREF
  char Str[144]; // [rsp+A0h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v5 = (HWND)a3;
  v6 = a2;
  *(_QWORD *)v18 = a2;
  if ( *a4 )
  {
    CorrelationVector::CorrelationVector((CorrelationVector *)&v21);
    try
    {
      v24[0] = *a4;
      winrt::Windows::Foundation::Uri::Uri(
        (winrt::Windows::Foundation::Uri *)&v20,
        (const struct winrt::param::hstring *)v24);
      v10 = (__int64 **)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                          &v20,
                          v22);
      winrt::param::hstring::hstring((winrt::param::hstring *)v25, L"cv");
      winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
        v10,
        &v19,
        v25);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v22);
      v11 = winrt::hstring::c_str((winrt::hstring *)&v19);
      v12 = StringCchPrintfA(Str, 0x81uLL, "%ws", v11);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB2,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v12,
          v18[0]);
      v13 = TraceLoggingCorrelationVector::Set(Str, 0LL);
      v23 = 0LL;
      if ( !v13 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x10,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\CorrelationVector.h",
          v14);
      v22[0] = 0LL;
      std::unique_ptr<TraceLoggingCorrelationVector>::reset(&v21, v13);
      std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(v22);
      std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(&v23);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xB6,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v15);
      v5 = (HWND)a3;
      v6 = *(HWND *)v18;
    }
    v16 = (WindowRegistration *)operator new(0x38uLL);
    *(_QWORD *)v18 = v16;
    WindowRegistration::WindowRegistration(v16, v5, (const struct CorrelationVector *)&v21);
    *(_QWORD *)v16 = &WindowRegistration::`vftable';
    *(_QWORD *)v18 = 0LL;
    *(_QWORD *)v6 = (char *)v16 + 16;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v18);
    v9 = &v21;
  }
  else
  {
    v7 = CorrelationVector::CorrelationVector((CorrelationVector *)&v19);
    v8 = (WindowRegistration *)operator new(0x38uLL);
    *(_QWORD *)v18 = v8;
    WindowRegistration::WindowRegistration(v8, 0LL, v7);
    *(_QWORD *)v8 = &WindowRegistration::`vftable';
    v20 = 0LL;
    *(_QWORD *)v6 = (char *)v8 + 16;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
    v9 = (void **)&v19;
  }
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(v9);
  return (struct IInspectable)v6;
}
