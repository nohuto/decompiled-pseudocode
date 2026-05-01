/*
 * XREFs of ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x1806610CC
 * Callers:
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x180285054 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18063FDD8 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18063FFB0 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180641860 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180050E68 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AAAB0 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C4E14 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?NotifyDisplayInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@0@Z @ 0x18064ECE8 (-NotifyDisplayInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@wi.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x180660F7C (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@URegistrationData@Shell@Inter.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180661078 (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@URegistrationData@Shell@Intern.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(
        __int64 **a1,
        const bool *a2)
{
  int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 *v7; // rbx
  int v8; // edi
  __int64 v9; // rcx
  __int64 **v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rbx
  int v14; // edi
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 *v17; // rax
  char v18; // bl
  int v19; // eax
  __int64 *View; // rbx
  __int64 v21; // rcx
  __int64 **v22; // rax
  __int64 *v23; // rax
  int v24; // eax
  const struct winrt::hstring *v25; // rdi
  const struct winrt::hstring *v26; // rbx
  RTL_SRWLOCK **FactoryImplObj; // rax
  _BYTE v28[8]; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int32 *v29; // [rsp+28h] [rbp-48h] BYREF
  volatile signed __int32 *v30; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v31[8]; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v32; // [rsp+40h] [rbp-30h] BYREF
  RTL_SRWLOCK *v33; // [rsp+48h] [rbp-28h] BYREF
  int v34; // [rsp+50h] [rbp-20h] BYREF
  __int128 v35; // [rsp+58h] [rbp-18h]
  _QWORD *v36; // [rsp+B0h] [rbp+40h] BYREF
  volatile signed __int32 *v37; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  LODWORD(v36) = 0;
  wil::AcquireSRWLockExclusive(&v33, &winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_lock);
  v5 = 0;
  if ( !(unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::Size(v6) )
  {
LABEL_20:
    if ( !*a2 )
      goto LABEL_23;
    v34 = 0;
    v35 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                        + 104LL))(
            winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
            *a1);
LABEL_22:
    winrt::check_hresult((int *)&v36, v19, (__int64)&v34);
    goto LABEL_23;
  }
  while ( 1 )
  {
    v7 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
           a1,
           &v32);
    v8 = v4 | 1;
    LODWORD(v36) = v8;
    v10 = (__int64 **)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
                        v9,
                        (winrt *)v31,
                        v5);
    v8 |= 2u;
    LODWORD(v36) = v8;
    v11 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
            v10,
            &v30);
    v4 = v8 | 4;
    LODWORD(v36) = v4;
    if ( !winrt::operator==(v11, v7) )
      goto LABEL_5;
    v13 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
            a1,
            &v29);
    v14 = v4 | 8;
    LODWORD(v36) = v14;
    v16 = (__int64 **)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
                        v15,
                        (winrt *)v28,
                        v5);
    v14 |= 0x10u;
    LODWORD(v36) = v14;
    v17 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
            v16,
            &v37);
    v4 = v14 | 0x20;
    if ( winrt::operator==(v17, v13) )
      v18 = 1;
    else
LABEL_5:
      v18 = 0;
    if ( (v4 & 0x20) != 0 )
    {
      v4 &= ~0x20u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v4 &= ~0x10u;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v28);
    }
    if ( (v4 & 8) != 0 )
    {
      v4 &= ~8u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v29);
    }
    if ( (v4 & 4) != 0 )
    {
      v4 &= ~4u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
    }
    if ( (v4 & 2) != 0 )
    {
      v4 &= ~2u;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v31);
    }
    if ( (v4 & 1) != 0 )
    {
      v4 &= ~1u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
    }
    if ( v18 )
      break;
    if ( ++v5 >= (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::Size(v12) )
      goto LABEL_20;
  }
  if ( !*a2 )
  {
    v34 = 0;
    v35 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                     + 96LL))(
            winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
            v5);
    goto LABEL_22;
  }
  View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
           a1,
           &v32);
  v22 = (__int64 **)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
                      v21,
                      (winrt *)&v37,
                      v5);
  v23 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
          v22,
          &v36);
  LOBYTE(View) = winrt::operator==(v23, View);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v36);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v37);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
  if ( !(_BYTE)View )
  {
    v34 = 0;
    v35 = 0LL;
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                                + 80LL))(
            winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
            v5,
            *a1);
    winrt::check_hresult((int *)&v36, v24, (__int64)&v34);
    v25 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                                           a1,
                                           &v32);
    v26 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                                           a1,
                                           &v37);
    FactoryImplObj = (RTL_SRWLOCK **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v36);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::NotifyDisplayInfoChanged(
      *FactoryImplObj,
      v26,
      v25);
    if ( v36 )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v36);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
  }
LABEL_23:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v33);
}
