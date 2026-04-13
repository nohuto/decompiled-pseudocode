/*
 * XREFs of ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800B2630
 * Callers:
 *     ?GetDiagTrackFolder@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAAJPEA_W_K@Z @ 0x18008998C (-GetDiagTrackFolder@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAAJPEA_W_K@Z.c)
 * Callees:
 *     IsOpenStateExplicitPresent @ 0x180023C68 (IsOpenStateExplicitPresent.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003A0B0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180056B0C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AHPEAX@Z$1?CloseState@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A3CEC (--1-$unique_storage@U-$resource_policy@PEAXP6AHPEAX@Z$1-CloseState@@YAH0@ZU-$integral_constant@_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetSoftLandingFolderForUser(HANDLE hToken, WCHAR *lpPathName, __int64 a3)
{
  __int64 v5; // rax
  const char *v6; // r9
  unsigned int LastError; // ebx
  const char *v9; // r9
  HRESULT v10; // eax
  unsigned int v11; // edi
  const char *v12; // r9
  DWORD v13; // ebx
  const char *v14; // r9
  const char *v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v17; // [rsp+50h] [rbp+30h] BYREF
  __int64 v18; // [rsp+58h] [rbp+38h] BYREF

  v17 = a3;
  if ( !IsOpenStateExplicitPresent() || !IsOpenStateExplicitPresent() )
    return 2147942527LL;
  v5 = OpenStateExplicit(hToken, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy");
  v17 = v5;
  if ( !v5 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x16,
                  (unsigned int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                  v6);
    wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
    return LastError;
  }
  v18 = 260LL;
  if ( !(unsigned int)GetStateFolder(v5, 1LL, lpPathName, &v18) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x19,
                  (unsigned int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                  v9);
    wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
    return LastError;
  }
  v18 = 260LL;
  v10 = PathCchCombine(lpPathName, 0x104uLL, lpPathName, L"Tips");
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( !ImpersonateLoggedOnUser(hToken) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1F,
                    (unsigned int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                    v12);
      wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
      return LastError;
    }
    if ( CreateDirectoryW(lpPathName, 0LL) || (v13 = GetLastError(), v13 == 183) )
    {
      if ( !RevertToSelf() )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x2B,
                      (unsigned int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                      v15);
        wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
        return LastError;
      }
    }
    else
    {
      if ( !RevertToSelf() )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x26,
                      (unsigned int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                      v14);
        wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
        return LastError;
      }
      if ( v13 )
      {
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      39LL,
                      (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                      (const char *)v13);
        wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
        return LastError;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
      (const char *)(unsigned int)v10);
    wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
    return v11;
  }
}
