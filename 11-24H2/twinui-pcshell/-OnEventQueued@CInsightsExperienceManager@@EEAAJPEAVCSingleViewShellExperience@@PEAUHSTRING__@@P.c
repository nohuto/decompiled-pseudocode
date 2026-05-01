/*
 * XREFs of ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A74B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180164DB8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180165044 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1801FFF34 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x1802CF14C (-CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1803A6E70 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@.c)
 *     ?CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ @ 0x1803A6F94 (-CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x1803A70B4 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A7210 (-HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation.c)
 *     ?RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x1803A79C8 (-RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnEventQueued(
        HWND *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  const struct _tlgProvider_t *v8; // rsi
  unsigned int v9; // r8d
  __int64 v10; // r9
  HSTRING_HEADER *v11; // rax
  HSTRING v12; // r8
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  HSTRING_HEADER *v16; // rax
  HSTRING v17; // r8
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  HSTRING v20; // r8
  unsigned int v21; // r8d
  HSTRING_HEADER *v22; // rax
  HSTRING v23; // r8
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v24; // rdx
  unsigned int v25; // r8d
  HWND v26; // rcx
  HSTRING_HEADER *v27; // rax
  HSTRING v28; // r8
  int v30[2]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER v31; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v8 > 5u )
  {
    *(_QWORD *)v30 = WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (__int64)v8,
      byte_1807F0B09,
      0LL,
      v10,
      (const WCHAR **)v30);
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&off_18075D1B0, v9);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a3,
                       (HSTRING)v11[1].Reserved.Reserved1,
                       v12) )
  {
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&off_18075D1C0, v13);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a3,
                         (HSTRING)v16[1].Reserved.Reserved1,
                         v17) )
    {
      v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&off_18075D1D8, v18);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           a3,
                           (HSTRING)v19[1].Reserved.Reserved1,
                           v20) )
      {
        v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&off_18075D1D0, v21);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                             a3,
                             (HSTRING)v22[1].Reserved.Reserved1,
                             v23) )
        {
          v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&off_18075D1C8, v25);
          if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                a3,
                                (HSTRING)v27[1].Reserved.Reserved1,
                                v28)
            && !*((_BYTE *)this + 240) )
          {
            CInsightsExperienceManager::RegisterWithLightDismiss((CInsightsExperienceManager *)(this - 7), a2);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::operator=(this + 33);
            *((_BYTE *)this + 240) = 1;
          }
        }
        else
        {
          if ( *((_BYTE *)this + 240) )
          {
            SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(this + 28));
            *((_BYTE *)this + 240) = 0;
          }
          if ( !this[33] )
          {
            CInsightsExperienceManager::CreateAltTabProxyWindow((CInsightsExperienceManager *)(this - 7), v24);
            v26 = this[33];
            if ( v26 )
              ShowWindow(v26, 4);
          }
        }
      }
      else
      {
        CInsightsExperienceManager::CloseExperienceIfRunning((CInsightsExperienceManager *)(this - 7));
      }
    }
    else
    {
      v14 = CInsightsExperienceManager::HandleNotifyWindowName((CInsightsExperienceManager *)(this - 7), a4);
      if ( v14 < 0 )
      {
        v15 = 325LL;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v14 = CInsightsExperienceManager::DestroyExperience(this - 7);
    if ( v14 < 0 )
    {
      v15 = 321LL;
LABEL_9:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    }
  }
  return 0LL;
}
