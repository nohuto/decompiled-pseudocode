/*
 * XREFs of ?LaunchUriWithForeground@GamingOverlayExperienceManager@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x180354290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180223D9C (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E290 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ @ 0x1802DDD64 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ.c)
 *     wcscmp_0 @ 0x1806CA2C4 (wcscmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall GamingOverlayExperienceManager::LaunchUriWithForeground(
        GamingOverlayExperienceManager *this,
        struct Windows::Foundation::IUriRuntimeClass *a2)
{
  int v4; // eax
  __int64 (__fastcall *v5)(struct Windows::Foundation::IUriRuntimeClass *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  const wchar_t *StringRawBuffer; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, SID *, GUID *, __int64 *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, struct Windows::Foundation::IUriRuntimeClass *, _QWORD); // rdi
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 (__fastcall *v22)(struct Windows::Foundation::IUriRuntimeClass *, HSTRING *); // rbx
  int v23; // eax
  unsigned int v24; // ebx
  const char *v25; // r9
  unsigned int LastError; // ebx
  SHELLEXECUTEINFOW pExecInfo; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v28[8]; // [rsp+A0h] [rbp-48h] BYREF
  HSTRING string; // [rsp+A8h] [rbp-40h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-30h] BYREF
  HSTRING v32; // [rsp+C0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 24LL))(*((_QWORD *)this + 37));
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x630,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v4);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl) )
  {
    string = 0LL;
    v5 = *(__int64 (__fastcall **)(struct Windows::Foundation::IUriRuntimeClass *, HSTRING *))(*(_QWORD *)a2 + 136LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = v5(a2, &string);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x636,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v6);
      WindowsDeleteString(string);
      return v7;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( !wcscmp_0(StringRawBuffer, L"windows.gaming") )
    {
      v31 = 0LL;
      v10 = *((_QWORD *)this + 39);
      v11 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL);
      Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v31);
      v12 = v11(v10, &SID_GamingPostureController, &GUID_b525603c_e3b6_51fa_bdfc_1ac36cf03dc8, &v31);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v30 = 0LL;
        v14 = v31;
        v15 = *(__int64 (__fastcall **)(__int64, struct Windows::Foundation::IUriRuntimeClass *, _QWORD))(*(_QWORD *)v31 + 64LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
        v16 = v15(v14, a2, &v30);
        v17 = v16;
        if ( v16 >= 0 )
        {
          v18 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v30);
          v19 = v18;
          if ( v18 >= 0 )
          {
            v28[0] = 0;
            v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _BYTE *))(*v30)[8])(
                    v30,
                    v28);
            v21 = v20;
            if ( v20 >= 0 )
            {
              if ( v28[0] )
              {
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
                Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v31);
                WindowsDeleteString(string);
                return 0LL;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x642,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                  (const char *)0x80004005LL);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
                Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v31);
                WindowsDeleteString(string);
                return 2147500037LL;
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x641,
                (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                (const char *)(unsigned int)v20);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
              Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v31);
              WindowsDeleteString(string);
              return v21;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x63E,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
              (const char *)(unsigned int)v18);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
            Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v31);
            WindowsDeleteString(string);
            return v19;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x63D,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v16);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
          Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v31);
          WindowsDeleteString(string);
          return v17;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x63A,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v31);
        WindowsDeleteString(string);
        return v13;
      }
    }
    WindowsDeleteString(string);
  }
  v32 = 0LL;
  v22 = *(__int64 (__fastcall **)(struct Windows::Foundation::IUriRuntimeClass *, HSTRING *))(*(_QWORD *)a2 + 48LL);
  WindowsDeleteString(0LL);
  v32 = 0LL;
  v23 = v22(a2, &v32);
  v24 = v23;
  if ( v23 >= 0 )
  {
    memset_0(&pExecInfo, 0, sizeof(pExecInfo));
    pExecInfo.cbSize = 112;
    pExecInfo.fMask = 67109888;
    pExecInfo.lpVerb = L"open";
    pExecInfo.lpFile = WindowsGetStringRawBuffer(v32, 0LL);
    pExecInfo.nShow = 1;
    if ( ShellExecuteExW(&pExecInfo) )
    {
      WindowsDeleteString(v32);
      return 0LL;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x655,
                    (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                    v25);
      WindowsDeleteString(v32);
      return LastError;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64A,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v23);
    WindowsDeleteString(v32);
    return v24;
  }
}
