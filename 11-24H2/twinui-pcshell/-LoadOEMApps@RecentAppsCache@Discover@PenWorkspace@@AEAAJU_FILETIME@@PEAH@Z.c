/*
 * XREFs of ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1803F33AC
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803F3200 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1801358F8 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D3480 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801DB7F4 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211CD0 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1803F188C (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1803F241C (--0Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWorkspaceLayoutIte.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803F2DE0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWor.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1803F3B50 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x1803F5F4C (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct _FILETIME a2,
        int *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  LPVOID v7; // rbx
  void (__fastcall *v8)(LPVOID, __int64, __int64 *); // rdi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  int (__fastcall *v13)(__int64, HSTRING *); // r14
  HSTRING v14; // rdi
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  HSTRING *v17; // r8
  const unsigned __int16 *v18; // rax
  HSTRING v20; // [rsp+30h] [rbp-89h] BYREF
  HSTRING v21; // [rsp+38h] [rbp-81h] BYREF
  HSTRING string; // [rsp+40h] [rbp-79h] BYREF
  __int64 v23; // [rsp+48h] [rbp-71h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-69h] BYREF
  const unsigned __int16 *StringRawBuffer; // [rsp+58h] [rbp-61h] BYREF
  struct _FILETIME v26; // [rsp+60h] [rbp-59h] BYREF
  __int64 v27; // [rsp+68h] [rbp-51h] BYREF
  int v28; // [rsp+70h] [rbp-49h] BYREF
  __int64 v29; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v30; // [rsp+80h] [rbp-39h] BYREF
  __int64 v31[2]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v32[8]; // [rsp+98h] [rbp-21h] BYREF
  int v33; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v34[2]; // [rsp+A8h] [rbp-11h] BYREF
  HSTRING_HEADER v35; // [rsp+B8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *a3 = 0;
  v20 = (HSTRING)(*(_QWORD *)&a2 + 100000000LL);
  v26 = (struct _FILETIME)(*(_QWORD *)&a2 + 100000000LL);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  v5 = CoCreateInstance(
         &GUID_9280e842_f931_4d24_b074_739fb4da43f4,
         0LL,
         1u,
         &GUID_9302a129_7433_42a0_9cb8_5da5964f2756,
         &ppv);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v23 = 0LL;
    v7 = ppv;
    v8 = *(void (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v8(v7, 1LL, &v23);
    v9 = v23;
    if ( v23 )
    {
      v27 = v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
      v28 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 24LL))(v9, &v28);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10,
          (int)"desktop\\internal\\shell\\inc\\private\\objectarrayadapter.h",
          (const char *)(unsigned int)v10);
      details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
        (__int64)&v30,
        (__int64)&v27,
        0);
      details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
        (__int64)&v33,
        (__int64)&v27,
        v28);
      while ( v30 != v33 || v31[1] != v34[1] )
      {
        v11 = v31[0];
        v29 = v31[0];
        Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(&v29);
        string = 0LL;
        v20 = 0LL;
        v12 = *(_QWORD *)v11;
        string = 0LL;
        if ( (*(int (__fastcall **)(__int64, HSTRING *))(v12 + 24))(v11, &string) < 0 )
        {
          v13 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 32LL);
          v14 = v20;
          if ( v20 )
          {
            wil::last_error_context::last_error_context((wil::last_error_context *)v32);
            WindowsDeleteString(v14);
            wil::last_error_context::~last_error_context((wil::last_error_context *)v32);
          }
          v20 = 0LL;
          if ( v13(v11, &v20) >= 0 && v20 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(v20, 0LL);
            v21 = 0LL;
            WindowsDeleteString(0LL);
            v21 = 0LL;
            v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, &StringRawBuffer, v15);
            if ( (int)PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
                        (HSTRING)v16[1].Reserved.Reserved1,
                        (HSTRING)&v21,
                        v17) >= 0 )
            {
              v18 = WindowsGetStringRawBuffer(v21, 0LL);
              if ( PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, v18, &v26) >= 0 )
              {
                PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer);
                ++*a3;
              }
            }
            WindowsDeleteString(v21);
            v21 = 0LL;
          }
        }
        else
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          if ( PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, StringRawBuffer, &v26) >= 0 )
          {
            PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer);
            ++*a3;
          }
        }
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v20);
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v29);
        ++v30;
        details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::GetCurrentObject(&v30);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v34);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A9,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  return v6;
}
