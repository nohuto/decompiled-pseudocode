/*
 * XREFs of ?HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A7210
 * Callers:
 *     ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A74B0 (-OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x1800E6768 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall CInsightsExperienceManager::HandleNotifyWindowName(
        CInsightsExperienceManager *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  const struct _tlgProvider_t *v7; // rax
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // rdx
  ExperienceManagerUtils *v17; // rcx
  __int64 v18; // rdi
  const struct _tlgProvider_t *v19; // rax
  const WCHAR *StringRawBuffer; // rax
  HSTRING string; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v23; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v4,
      byte_1807F0C86,
      0LL);
  v6 = -2147024809;
  if ( a2 )
  {
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
      a2);
    WindowsDeleteString(0LL);
    string = 0LL;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)&off_18075D1B8, v9);
    v12 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
            (HSTRING)v10[1].Reserved.Reserved1,
            v11,
            &string);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = (unsigned int)v12;
      v15 = 481LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
        (const char *)v14);
LABEL_20:
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      return v13;
    }
    if ( string && WindowsGetStringLen(string) )
    {
      v17 = (ExperienceManagerUtils *)*((_QWORD *)this + 11);
      if ( !v17 )
      {
        v13 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F6,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
          (const char *)0x8000FFFFLL);
LABEL_14:
        v14 = v13;
        v15 = 486LL;
        goto LABEL_15;
      }
      v18 = ExperienceManagerUtils::WindowFromViewWrapper(v17, v16);
      v13 = v18 == 0 ? 0x80004005 : 0;
      if ( !v18 )
        goto LABEL_14;
      v19 = SingleViewExperienceLogging::Provider(-v18);
      if ( *(_DWORD *)v19 > 5u )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (__int64)v19,
          byte_1807F0BCF,
          0LL);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      SetWindowTextW((HWND)v18, StringRawBuffer);
      v6 = 0;
    }
    v13 = v6;
    goto LABEL_20;
  }
  v7 = SingleViewExperienceLogging::Provider(v5);
  if ( *(_DWORD *)v7 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v7,
      byte_1807F0C27,
      0LL);
  return 2147942487LL;
}
