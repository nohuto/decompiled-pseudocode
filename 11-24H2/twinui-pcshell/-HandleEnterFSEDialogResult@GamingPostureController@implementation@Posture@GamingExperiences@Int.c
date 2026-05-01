/*
 * XREFs of ?HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@AEAAJUhstring@7@AEAVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@Z @ 0x180330D48
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801C9A54 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z @ 0x180298A38 (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802BF468 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ??$FailedToRestart@AEAJ@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXAEAJ@Z @ 0x180329EA8 (--$FailedToRestart@AEAJ@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXA.c)
 *     ?SetPrivilegeAttribute@@YAKPEBGKPEAK@Z @ 0x180675224 (-SetPrivilegeAttribute@@YAKPEBGKPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::HandleEnterFSEDialogResult(
        __int64 a1,
        volatile signed __int32 **a2,
        __int64 a3)
{
  const unsigned __int16 *v5; // rcx
  __int64 v6; // r11
  int v7; // eax
  int v9; // eax
  signed int v10; // ebx
  signed int v11; // eax
  const unsigned __int16 *v12; // rcx
  unsigned int v13; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  if ( winrt::operator==((__int64 *)a2, (char *)L"EnterGamingPostureConfirmation_Config") )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 144) + 24LL))(*(_QWORD *)(v6 + 144));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C3,
        (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
        (const char *)(unsigned int)v7);
    winrt::param::hstring::hstring((winrt::param::hstring *)v14, L"ms-settings:gaming-fullscreen");
    winrt::Windows::Foundation::Uri::Uri(
      (winrt::Windows::Foundation::Uri *)&v16,
      (const struct winrt::param::hstring *)v14);
    winrt::Windows::System::Launcher::LaunchUriAsync((const struct winrt::Windows::Foundation::Uri *)&v13, &v16);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
    return 2147500036LL;
  }
  else
  {
    v13 = 0;
    v9 = SetPrivilegeAttribute(v5, 2u, &v13);
    v10 = v9;
    if ( v9 > 0 )
      v10 = (unsigned __int16)v9 | 0x80070000;
    LODWORD(v16) = v10;
    if ( v10 < 0 )
      goto LABEL_8;
    v11 = InitiateShutdownW(0LL, 0LL, 0, 4u, 0x80000000);
    v10 = v11;
    if ( v11 > 0 )
      v10 = (unsigned __int16)v11 | 0x80070000;
    LODWORD(v16) = v10;
    if ( v10 < 0 )
    {
LABEL_8:
      GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::FailedToRestart<long &>(a3, (int *)&v16);
      winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
      return (unsigned int)v10;
    }
    else
    {
      SetPrivilegeAttribute(v12, v13, 0LL);
      winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
      return 2147942750LL;
    }
  }
}
