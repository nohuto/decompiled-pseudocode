/*
 * XREFs of ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000EA10
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000DEB8 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x14000E9B4 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     memset_0 @ 0x140005858 (memset_0.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x14000E6F8 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z @ 0x14000EADC (-copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z.c)
 */

bool __fastcall BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(HREPORT *phReportHandle)
{
  HREPORT v3; // r8
  const WCHAR *v4; // rcx
  _WER_REPORT_INFORMATION pReportInformation; // [rsp+20h] [rbp-8B8h] BYREF

  if ( !*phReportHandle )
  {
    if ( !*((_BYTE *)phReportHandle + 8) )
      return 0;
    memset_0(&pReportInformation, 0, sizeof(pReportInformation));
    v3 = phReportHandle[8];
    pReportInformation.dwSize = 2208;
    std::wstring::copy(phReportHandle + 6, pReportInformation.wzFriendlyEventName, v3);
    std::wstring::copy(phReportHandle + 10, pReportInformation.wzDescription, phReportHandle[12]);
    if ( std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged((__int64)(phReportHandle + 2)) )
      v4 = *(const WCHAR **)v4;
    if ( WerReportCreate(v4, WerReportCritical, &pReportInformation, phReportHandle) < 0 )
      *phReportHandle = 0LL;
  }
  return *phReportHandle != 0LL;
}
