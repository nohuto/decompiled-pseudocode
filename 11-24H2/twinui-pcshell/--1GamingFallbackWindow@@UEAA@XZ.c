/*
 * XREFs of ??1GamingFallbackWindow@@UEAA@XZ @ 0x1804F8E70
 * Callers:
 *     ??_GGamingFallbackWindow@@UEAAPEAXI@Z @ 0x1804FA088 (--_GGamingFallbackWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$DestructedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F4C24 (--$DestructedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAU.c)
 */

void __fastcall GamingFallbackWindow::~GamingFallbackWindow(GamingFallbackWindow *this)
{
  char *v1; // rbx
  __int64 *v2; // rdi

  *(_QWORD *)this = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::producers_base<GamingFallbackWindow,std::tuple<IInspectable>>'};
  v1 = (char *)this + 8;
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::root_implements<GamingFallbackWindow,IInspectable>'};
  v2 = (__int64 *)((char *)this + 24);
  DestroyWindow(*((HWND *)this + 3));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    GamingPosturePositionerTelemetryProvider::DestructedFallbackWindow<HWND__ * &>(v2);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)v1);
}
