/*
 * XREFs of ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3668
 * Callers:
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3550 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D09B8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1801BBE20 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BBE20.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E290 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCLauncherUIMode@@@WRL@Microsoft@@@012@$$QEAW4EC_HOST_UI_MODE@@@Z @ 0x1803A14E0 (--$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV-$ComPt.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_cbf01a40321e9ff125f683f9a48deaf4___ @ 0x1803A15A4 (Windows--Internal--ComTaskPool--QueueTask__lambda_cbf01a40321e9ff125f683f9a48deaf4___.c)
 *     ?ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A4430 (-ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA-AV-$basic_string@GU-$ch.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_38931291@@@details@wil@@QEAA_NXZ @ 0x1803A47EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_38931291@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAA_NXZ @ 0x1803A4868 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58642880@@@details@wil@@QEAA_NXZ @ 0x1803A48A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58642880@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CScreenClippingExperienceManager::LaunchSnippingToolApp(__int64 a1, unsigned int a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  wchar_t *v7; // rdx
  int StringW; // ebx
  __int64 v9; // rcx
  const WCHAR *v10; // rax
  const char *v11; // r9
  const char *v12; // r9
  __int64 v13; // rdx
  const WCHAR *v14; // r8
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  DWORD pcchOut[4]; // [rsp+40h] [rbp-C0h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+50h] [rbp-B0h] BYREF
  LPCWSTR lpFile[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+D8h] [rbp-28h]
  void *v22[4]; // [rsp+E0h] [rbp-20h] BYREF
  void *v23[4]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR String1[40]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3 = SingleViewExperienceLogging::Provider(a1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v16 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_1807F06E0,
      0LL,
      v5,
      (__int64)&v16);
  }
  CScreenClippingExperienceManager::ScreenClipInvocationTypeToString(v4, v23, a2);
  std::operator+<unsigned short>(lpFile, (__int64)L"ms-screenclip://?source=", v23);
  if ( a2 == 7 )
  {
    v6 = 15LL;
    v7 = L"&type=recording";
  }
  else
  {
    if ( a2 != 8 )
      goto LABEL_8;
    v6 = 19LL;
    v7 = L"&type=textExtractor";
  }
  std::wstring::append(lpFile, v7, v6);
LABEL_8:
  memset_0(String1, 0, 0x4CuLL);
  pcchOut[0] = 38;
  StringW = AssocQueryStringW(0x1000u, ASSOCSTR_MAX, L"ms-screenclip", 0LL, String1, pcchOut);
  if ( StringW >= 0 )
  {
    if ( CompareStringOrdinal(String1, -1, L"AppXarkze06z7pvhtc0xch943brvx8pbb8xa", -1, 1) == 2
      || CompareStringOrdinal(String1, -1, L"AppXbemgape21yns3k5pd4ah40jz06yq6xrk", -1, 1) == 2 )
    {
      StringW = -2147019873;
      goto LABEL_34;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_38931291>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_38931291>::GetImpl'::`2'::impl) )
    {
      std::wstring::wstring((__int64)v22, (__int64)lpFile);
      StringW = Windows::Internal::ComTaskPool::QueueTask__lambda_cbf01a40321e9ff125f683f9a48deaf4___(v9, (__int64)v22);
      std::wstring::_Tidy_deallocate(v22);
      if ( StringW < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B3,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)StringW);
        goto LABEL_34;
      }
LABEL_25:
      StringW = 0;
      goto LABEL_34;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57984728>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57984728>::GetImpl'::`2'::impl) )
    {
      memset_0(&pExecInfo, 0, sizeof(pExecInfo));
      pExecInfo.cbSize = 112;
      pExecInfo.fMask = 0x4000000;
      pExecInfo.hwnd = 0LL;
      pExecInfo.lpVerb = L"open";
      v10 = (const WCHAR *)lpFile;
      if ( v21 > 7 )
        v10 = lpFile[0];
      pExecInfo.lpFile = v10;
      *(_OWORD *)&pExecInfo.lpParameters = 0LL;
      pExecInfo.nShow = 1;
      pExecInfo.hInstApp = 0LL;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_58642880>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58642880>::GetImpl'::`2'::impl) )
      {
        v17 = 0LL;
        v16 = 0;
        if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CLauncherUIMode,CLauncherUIMode,enum EC_HOST_UI_MODE>(
                    &v17,
                    &v16) >= 0 )
        {
          pExecInfo.fMask |= 0x8000000u;
          if ( v17 )
            pExecInfo.hInstApp = (HINSTANCE)(v17 + 40);
          else
            pExecInfo.hInstApp = 0LL;
        }
        if ( !ShellExecuteExW(&pExecInfo) )
        {
          StringW = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x1D7,
                      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                      v11);
          Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v17);
          goto LABEL_34;
        }
        Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v17);
        goto LABEL_25;
      }
      if ( ShellExecuteExW(&pExecInfo) )
        goto LABEL_25;
      v13 = 476LL;
    }
    else
    {
      v14 = (const WCHAR *)lpFile;
      if ( v21 > 7 )
        v14 = lpFile[0];
      if ( (__int64)ShellExecuteW(0LL, L"open", v14, 0LL, 0LL, 1) > 32 )
        goto LABEL_25;
      v13 = 484LL;
    }
    StringW = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v13,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                v12);
  }
LABEL_34:
  std::wstring::_Tidy_deallocate((void **)lpFile);
  std::wstring::_Tidy_deallocate(v23);
  return (unsigned int)StringW;
}
