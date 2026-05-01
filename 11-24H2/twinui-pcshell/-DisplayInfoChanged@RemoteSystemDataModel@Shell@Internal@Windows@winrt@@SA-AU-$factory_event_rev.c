/*
 * XREFs of ?DisplayInfoChanged@RemoteSystemDataModel@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@5@Uauto_revoke_t@5@AEBU?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@45@@Z @ 0x18064BB18
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802AC14C (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$as@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802A7808 (--$as@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@.c)
 *     ??$make@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1802CD9F8 (--$make@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@Y.c)
 *     ?DisplayInfoChanged@?$consume_Windows_Internal_Shell_IRemoteSystemDataModelStatics@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x18064BAC4 (-DisplayInfoChanged@-$consume_Windows_Internal_Shell_IRemoteSystemDataModelStatics@UIRemoteSyste.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall winrt::Windows::Internal::Shell::RemoteSystemDataModel::DisplayInfoChanged(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF
  __int64 *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a1;
  v5 = winrt::make<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,>(&v10);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>(
    v5,
    (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  v6 = *winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemDataModelStatics<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::DisplayInfoChanged(
          &v9,
          &v8,
          a3);
  *a1 = (__int64)v9;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a1;
}
