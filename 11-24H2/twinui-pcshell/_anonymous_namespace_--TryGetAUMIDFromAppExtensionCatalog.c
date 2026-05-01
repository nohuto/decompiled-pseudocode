/*
 * XREFs of _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x18007C03C
 * Callers:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x1802C4920 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetNamedArray@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18007C3F4 (-GetNamedArray@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18007CC04 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$try_get_activation_factory@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@winrt@@YA?A_PXZ @ 0x1802C306C (--$try_get_activation_factory@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIA.c)
 *     ??$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@Z @ 0x1803A1A00 (--$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog(__int64 *a1, volatile signed __int32 **a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  char v6; // bl
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  _QWORD v13[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v14[6]; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v15; // [rsp+A0h] [rbp+38h] BYREF
  volatile signed __int32 *v16; // [rsp+A8h] [rbp+40h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v4 = winrt::try_get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::Windows::Foundation::IActivationFactory>(&v15);
  v6 = winrt::Windows::Foundation::operator!=(v4, &v16);
  if ( v15 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v15);
  if ( v6 )
  {
    v7 = SingleViewExperienceLogging::Provider(v5);
    if ( *(_DWORD *)v7 > 5u )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v7,
        &unk_1807F09A9,
        0LL);
    v14[0] = *a2;
    v13[0] = v14;
    v13[1] = &qword_1808CAD48;
    _InterlockedIncrement64(&qword_1808CAD48);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
    {
      winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::GetNamedArray(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
        &v15,
        v14);
      _InterlockedDecrement64(&qword_1808CAD48);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CAD48);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_e84bcefeb7ed3703767eef0b25e91c21_ &>(
        v8,
        &v15,
        v13);
    }
    v9 = v15;
    if ( v15 )
    {
      v10 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
              &v15,
              &v16);
      if ( a1 != v10 )
      {
        v11 = *v10;
        *v10 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::attach(a1, v11);
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
    }
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v15);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  return a1;
}
