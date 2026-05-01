/*
 * XREFs of ?EnsureInstallManager@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUMeetAndChatInstallManager@MeetAndChat@3456@XZ @ 0x1805F3F8C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805F4B20 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1805F4B20.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$ActivateInstance@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@23@XZ @ 0x1805F1224 (--$ActivateInstance@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@IActiv.c)
 *     ??$call@P6A?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x1805F167C (--$call@P6A-AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@AEBUIActivatio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureInstallManager(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  RTL_SRWLOCK *v7[3]; // [rsp+28h] [rbp-18h] BYREF
  struct IUnknown v8; // [rsp+60h] [rbp+20h] BYREF
  RTL_SRWLOCK *v9; // [rsp+70h] [rbp+30h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v10)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+78h] [rbp+38h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v9, (RTL_SRWLOCK *)(a1 + 112));
  v4 = *(_QWORD *)(a1 + 232);
  if ( v4 )
  {
    *a2 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  }
  else
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
    v7[1] = (RTL_SRWLOCK *)&qword_1808CC7A8;
    _InterlockedIncrement64(&qword_1808CC7A8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager,winrt::Windows::Foundation::IActivationFactory> )
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager>(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager,winrt::Windows::Foundation::IActivationFactory>,
        &v8);
      _InterlockedDecrement64(&qword_1808CC7A8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CC7A8);
      v10 = _lambda_3ea6d66b8f4bee0c4c71a46825e5cf7e_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        v5,
        (__int64)&v8,
        (void (__fastcall **)(__int64, __int64 *))&v10);
    }
    wil::AcquireSRWLockExclusive(v7, (RTL_SRWLOCK *)(a1 + 112));
    if ( !*(_QWORD *)(a1 + 232) )
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 232), (__int64 *)&v8);
    *a2 = *(_QWORD *)(a1 + 232);
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v7);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  return a2;
}
