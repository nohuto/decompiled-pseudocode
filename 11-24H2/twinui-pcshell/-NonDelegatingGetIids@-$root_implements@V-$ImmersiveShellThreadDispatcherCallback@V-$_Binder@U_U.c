/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x18033B440
 * Callers:
 *     ?GetIids@?$produce_base@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18033ADC0 (-GetIids@-$produce_base@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperie.c)
 *     ?GetIids@?$produce_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18033ADE0 (-GetIids@-$produce_base@U-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring@winrt@@U12@U-$less@Uhstr.c)
 *     ?GetIids@?$produce_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18033DA70 (-GetIids@-$produce_base@U-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring@winrt@@U12@_ea_18033DA70.c)
 *     ?GetIids@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@winrt@@QEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803BBD3C (-GetIids@-$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAp.c)
 *     ?GetIids@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost5@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1803BBDB0 (-GetIids@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_1803BBDB0.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x1802D2C0D (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 32LL))(a1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *a2 = v8;
    v6 = _Platform_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    memmove_0(v6, Src, 16LL * v8);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
