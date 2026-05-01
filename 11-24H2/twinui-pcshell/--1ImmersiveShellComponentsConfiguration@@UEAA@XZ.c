/*
 * XREFs of ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x1803DFFB8
 * Callers:
 *     ??_GImmersiveShellComponentsConfiguration@@UEAAPEAXI@Z @ 0x1803EBBB0 (--_GImmersiveShellComponentsConfiguration@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x18035FA40 (--1-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KURect@Foundat.c)
 *     ??1ComponentCreator@@QEAA@XZ @ 0x1803DFF80 (--1ComponentCreator@@QEAA@XZ.c)
 */

void __fastcall ImmersiveShellComponentsConfiguration::~ImmersiveShellComponentsConfiguration(
        ImmersiveShellComponentsConfiguration *this)
{
  ComponentCreator::~ComponentCreator((ImmersiveShellComponentsConfiguration *)((char *)this + 96));
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>((__int64)this + 72);
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>((__int64)this + 48);
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>((__int64)this + 24);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)this + 8);
}
