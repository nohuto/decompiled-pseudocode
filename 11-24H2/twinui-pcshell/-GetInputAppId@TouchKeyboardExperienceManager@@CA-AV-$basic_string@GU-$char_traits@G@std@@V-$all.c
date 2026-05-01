/*
 * XREFs of ?GetInputAppId@TouchKeyboardExperienceManager@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18007C1B0
 * Callers:
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::operator() @ 0x18046DF94 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--operator().c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x1800490A8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetNamedArray@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18007C3F4 (-GetNamedArray@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C577C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801953E8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$InputAppIdInitialized@PEBGAEAY07$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAY07$$CBG@Z @ 0x18023A384 (--$InputAppIdInitialized@PEBGAEAY07$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEA.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@Z @ 0x1803A1A00 (--$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 *     ??$InputAppIdInitialized@PEBGAEAY08$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAY08$$CBG@Z @ 0x180468B50 (--$InputAppIdInitialized@PEBGAEAY08$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEA.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall TouchKeyboardExperienceManager::GetInputAppId(_OWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v4; // rax
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rax
  __int64 *v7; // [rsp+48h] [rbp-B8h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v9; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD **v10; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v11; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v12[4]; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v13; // [rsp+80h] [rbp-80h]
  void *v14[5]; // [rsp+88h] [rbp-78h] BYREF
  _WORD Src[264]; // [rsp+B0h] [rbp-50h] BYREF

  v14[2] = a1;
  *a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 7LL;
  *(_WORD *)a1 = 0;
  memset_0(Src, 0, 0x208uLL);
  pcbData = 520;
  if ( RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Input", L"InputAppId", 2u, 0LL, Src, &pcbData)
    || pcbData <= 2 )
  {
    if ( aComMicrosoftWi_9[35] )
      abort();
    v12[0] = 1;
    v12[1] = 35;
    v13 = L"com.microsoft.windows.app.textinput";
    v11 = v12;
    v10 = &v11;
    v14[3] = &qword_1808CAD48;
    _InterlockedIncrement64(&qword_1808CAD48);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
    {
      winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::GetNamedArray(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
        &v7,
        &v11);
      _InterlockedDecrement64(&qword_1808CAD48);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CAD48);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_e84bcefeb7ed3703767eef0b25e91c21_ &>(
        v2,
        &v7,
        &v10);
    }
    if ( v7 )
    {
      v5 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
             &v7,
             &v9);
      winrt::hstring::operator std::basic_string_view<unsigned short>(v5, v14);
      std::wstring::assign(a1, v14[0]);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
      v6 = (volatile signed __int32 *)a1;
      if ( *((_QWORD *)a1 + 3) > 7uLL )
        v6 = *(volatile signed __int32 **)a1;
      v9 = v6;
      TouchKeyboardExperienceTelemetryLogger::InputAppIdInitialized<unsigned short const *,unsigned short const (&)[8]>(&v9);
    }
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
  }
  else
  {
    std::wstring::operator=((void **)a1, Src);
    v4 = (__int64 *)a1;
    if ( *((_QWORD *)a1 + 3) > 7uLL )
      v4 = *(__int64 **)a1;
    v7 = v4;
    TouchKeyboardExperienceTelemetryLogger::InputAppIdInitialized<unsigned short const *,unsigned short const (&)[9]>(&v7);
  }
  return a1;
}
