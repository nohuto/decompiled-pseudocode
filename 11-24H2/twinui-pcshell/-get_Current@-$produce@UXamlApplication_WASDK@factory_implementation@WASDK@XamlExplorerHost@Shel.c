/*
 * XREFs of ?get_Current@?$produce@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication_WASDKStatics@345678@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804577E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     std::call_once__lambda_f5c7a19be5cc201203fc8ae0f408e847___ @ 0x1804560E0 (std--call_once__lambda_f5c7a19be5cc201203fc8ae0f408e847___.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics>::get_Current(
        unsigned __int64 a1,
        __int64 *a2)
{
  union _RTL_RUN_ONCE *v3; // rbx
  __int64 Ptr; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (union _RTL_RUN_ONCE *)((a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64));
  v6 = (__int64)v3;
  try
  {
    std::call_once__lambda_f5c7a19be5cc201203fc8ae0f408e847___(v3 + 4, (__int64)&v6);
    Ptr = (__int64)v3[5].Ptr;
    v6 = Ptr;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v6);
    v6 = 0LL;
    *a2 = Ptr;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
