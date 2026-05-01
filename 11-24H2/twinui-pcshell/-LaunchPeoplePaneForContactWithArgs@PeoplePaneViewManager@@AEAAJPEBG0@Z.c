/*
 * XREFs of ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x180412820
 * Callers:
 *     _lambda_fc6cce9727cf9f8deae1663544b26742_::operator() @ 0x18040FF54 (_lambda_fc6cce9727cf9f8deae1663544b26742_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fb1d73188a4d99ee1a3e1b09221d397___::Run @ 0x1804132D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7fb1d73188a4d99ee1a3e1b09221d397___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x180112A64 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18016BEF8 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x1803C4B10 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ @ 0x180413880 (-TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v8; // eax
  PeoplePaneViewManager *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  wil::details::in1diag3 *v15; // rcx
  LPVOID v16; // rbx
  __int64 (__fastcall *v17)(LPVOID, const unsigned __int16 *, _QWORD, _QWORD, PeoplePaneViewManager **); // rdi
  const unsigned __int16 *AppId; // rax
  _QWORD v20[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  PeoplePaneViewManager *v22; // [rsp+70h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+38h] BYREF

  v22 = this;
  memset(v20, 0, 24);
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         v20,
         (__int64)L"Windows.Internal.ShellExperience.PeoplePane",
         0x2BuLL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 245LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_21;
  }
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         v20,
         (__int64)L" ",
         1uLL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 246LL;
    goto LABEL_5;
  }
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(v20, (__int64)a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 247LL;
    goto LABEL_5;
  }
  if ( a3 )
  {
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
           v20,
           (__int64)L" ",
           1uLL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 251LL;
      goto LABEL_5;
    }
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(v20, (__int64)a3);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 252LL;
      goto LABEL_5;
    }
  }
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v8 = CoCreateInstance(&CLSID_ApplicationActivationClient, 0LL, 1u, &GUID_2e941141_7f97_4756_ba1d_9decde894a3d, &ppv);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v11 = PeoplePaneViewManager::TrySendFocusToTray(v9);
    v15 = retaddr;
    if ( !v11 )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x106,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        v14);
    LODWORD(v22) = 0;
    v16 = ppv;
    v17 = *(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD, _QWORD, PeoplePaneViewManager **))(*(_QWORD *)ppv + 24LL);
    AppId = PeoplePaneViewManager::s_GetAppId((__int64)v15, v12, v13, (unsigned int)v14);
    v8 = v17(v16, AppId, v20[0], 0LL, &v22);
    v6 = v8;
    if ( v8 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      v6 = 0;
      goto LABEL_21;
    }
    v10 = 269LL;
  }
  else
  {
    v10 = 260LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
LABEL_21:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v20);
  return v6;
}
