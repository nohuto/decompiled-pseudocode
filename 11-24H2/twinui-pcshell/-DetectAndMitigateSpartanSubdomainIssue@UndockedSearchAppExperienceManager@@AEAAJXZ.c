/*
 * XREFs of ?DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B7EAC
 * Callers:
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1802439A0 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??$UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected@PEBGAEAIAEA_NAEA_N@SearchAppExperienceManagerTelemetry@@SAX$$QEAPEBGAEAIAEA_N2@Z @ 0x1803AFB64 (--$UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected@PEBGAEAIAEA_NAEA_N@SearchAppE.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::DetectAndMitigateSpartanSubdomainIssue(
        UndockedSearchAppExperienceManager *this)
{
  bool v2; // di
  bool v3; // bl
  LSTATUS DWORD; // eax
  LSTATUS v5; // eax
  const unsigned __int16 *v7; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  v9 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CLASSES_ROOT,
            L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.client"
             ".cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\bing.com",
            L"NumberOfSubdomains",
            &v9);
  if ( DWORD < 0 )
  {
    if ( DWORD != -2147024894 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3AB,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)DWORD);
  }
  else
  {
    v2 = v9 >= 0x3E8;
  }
  v5 = SHRegGetDWORD(
         HKEY_CLASSES_ROOT,
         L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.client.cb"
          "s_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\client.cbs",
         L"NumberOfSubdomains",
         &v9);
  if ( v5 < 0 )
  {
    if ( v5 != -2147024894 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v3 = v9 >= 0x3E8;
  }
  if ( v2 || v3 )
  {
    v7 = winrt::hstring::c_str((UndockedSearchAppExperienceManager *)((char *)this + 848));
    SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected<unsigned short const *,unsigned int &,bool &,bool &>((__int64 *)&v7);
  }
  return 0LL;
}
