/*
 * XREFs of ?GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA?AU13456@XZ @ 0x180670530
 * Callers:
 *     ?GetInstance@?$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtilsStatics@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1806704C0 (-GetInstance@-$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18067057C (-GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1806707D8 (-RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils::GetInstance(
        __int64 a1,
        __int64 *a2)
{
  winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::RegisterEvents((winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *)((*(_QWORD *)(a1 + 32) - 16LL) & -(__int64)(*(_QWORD *)(a1 + 32) != 0LL)));
  *a2 = *(_QWORD *)(a1 + 32);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
