/*
 * XREFs of _anonymous_namespace_::GetScreenClippingAUMID @ 0x180133B1C
 * Callers:
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180133A38 (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180455BE4 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1801334E0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x180133BE8 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 *     ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x180455AF0 (--4hstring@winrt@@QEAAAEAU01@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall anonymous_namespace_::GetScreenClippingAUMID(volatile signed __int32 **this)
{
  winrt::hstring *v2; // rax
  winrt::hstring *AUMIDFromAppExtensionCatalog; // rax
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF
  volatile signed __int32 *v10; // [rsp+60h] [rbp+18h] BYREF

  v8 = (__int64)this;
  *this = 0LL;
  if ( IsActiveSessionCountLimited() )
  {
    v2 = winrt::hstring::hstring((winrt::hstring *)&v9, L"com.microsoft.windows.app.screenclip");
    AUMIDFromAppExtensionCatalog = (winrt::hstring *)anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog(&v10, v2);
    if ( this != (volatile signed __int32 **)AUMIDFromAppExtensionCatalog )
    {
      v4 = *(volatile signed __int32 **)AUMIDFromAppExtensionCatalog;
      *(_QWORD *)AUMIDFromAppExtensionCatalog = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(this);
      winrt::handle_type<winrt::impl::hstring_traits>::close(this);
      *this = v4;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  }
  else
  {
    winrt::hstring::operator=(this, L"MicrosoftWindows.Client.CBS_cw5n1h2txyewy!ScreenClipping");
  }
  if ( *(_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                    v5,
                    (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1] > 5u )
  {
    v8 = (__int64)winrt::hstring::c_str((winrt::hstring *)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v6,
      (int)&dword_180851B15,
      0,
      v6,
      (const WCHAR **)&v8);
  }
  return this;
}
