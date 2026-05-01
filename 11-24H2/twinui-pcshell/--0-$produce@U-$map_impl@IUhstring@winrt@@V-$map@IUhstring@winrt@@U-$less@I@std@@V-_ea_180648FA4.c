/*
 * XREFs of ??0?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@XZ @ 0x180648FA4
 * Callers:
 *     ??0?$producer@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@IUhstring@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@QEAA@XZ @ 0x18064919C (--0-$producer@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V_ea_18064919C.c)
 * Callees:
 *     ??0?$produce_base@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@34567@X@impl@winrt@@QEAA@XZ @ 0x18029985C (--0-$produce_base@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@W_ea_18029985C.c)
 */

_QWORD *__fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned int,winrt::hstring>>::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned int,winrt::hstring>>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow,void>::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow,void>(a1);
  result = v1;
  *v1 = &winrt::impl::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned int,winrt::hstring>>::`vftable';
  return result;
}
