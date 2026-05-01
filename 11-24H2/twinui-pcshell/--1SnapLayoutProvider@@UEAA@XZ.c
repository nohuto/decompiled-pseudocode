/*
 * XREFs of ??1SnapLayoutProvider@@UEAA@XZ @ 0x18059D24C
 * Callers:
 *     ??_E?$heap_implements@VSnapLayoutProvider@@@impl@winrt@@UEAAPEAXI@Z @ 0x18059D8FC (--_E-$heap_implements@VSnapLayoutProvider@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1801701F4 (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ??1SnapRegionCalculationMonitorData@@QEAA@XZ @ 0x18059D2C0 (--1SnapRegionCalculationMonitorData@@QEAA@XZ.c)
 */

void __fastcall SnapLayoutProvider::~SnapLayoutProvider(SnapLayoutProvider *this)
{
  std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>((__int64 (__fastcall ****)(_QWORD, __int64))this + 17);
  SnapRegionCalculationMonitorData::~SnapRegionCalculationMonitorData((SnapLayoutProvider *)((char *)this + 48));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 4);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)this + 8);
}
