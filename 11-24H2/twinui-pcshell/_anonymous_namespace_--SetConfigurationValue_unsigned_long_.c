/*
 * XREFs of _anonymous_namespace_::SetConfigurationValue_unsigned_long_ @ 0x180339260
 * Callers:
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x18033A9D0 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@W.c)
 *     ?StoreSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@K@Z @ 0x18033BE10 (-StoreSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Int.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@Z @ 0x1803395BC (--$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@.c)
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18033A344 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18033A624 (--1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18033B884 (-Stop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall anonymous_namespace_::SetConfigurationValue_unsigned_long_(
        LPCWSTR lpValueName,
        unsigned int a2,
        _WORD *a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  const WCHAR *v8; // rdx
  int v9; // eax
  const char *v10; // r9
  int lpData; // [rsp+20h] [rbp-1C8h]
  unsigned int Data; // [rsp+30h] [rbp-1B8h] BYREF
  LPCWSTR lpSubKey[5]; // [rsp+38h] [rbp-1B0h] BYREF
  _QWORD v14[42]; // [rsp+60h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  std::wstring::wstring((char **)lpSubKey, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration");
  if ( a3 )
  {
    v6 = -1LL;
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    if ( v7 )
    {
      std::wstring::append(lpSubKey, (void *)L"\\", 1uLL);
      do
        ++v6;
      while ( a3[v6] );
      std::wstring::append(lpSubKey, a3, v6);
    }
  }
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v14);
  v14[0] = &GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::`vftable';
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<unsigned long>(v14, lpValueName, a2);
  try
  {
    v8 = (const WCHAR *)lpSubKey;
    if ( lpSubKey[3] > (LPCWSTR)7 )
      v8 = lpSubKey[0];
    Data = a2;
    v9 = RegSetKeyValueW(HKEY_CURRENT_USER, v8, lpValueName, 4u, &Data, 4u);
    if ( v9 > 0 )
      v9 = (unsigned __int16)v9 | 0x80070000;
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v9,
        lpData);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x115,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
      v10);
  }
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::~SetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity *)v14);
  std::wstring::_Tidy_deallocate((void **)lpSubKey);
}
