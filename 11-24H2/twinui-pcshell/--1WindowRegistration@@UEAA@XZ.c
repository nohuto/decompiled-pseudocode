/*
 * XREFs of ??1WindowRegistration@@UEAA@XZ @ 0x1805FA934
 * Callers:
 *     ??_G?$heap_implements@VWindowRegistration@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805FA980 (--_G-$heap_implements@VWindowRegistration@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802CE874 (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1805FAA3C (-CloseNoLock@WindowRegistration@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowRegistration::~WindowRegistration(WindowRegistration *this)
{
  const char *v1; // r9
  WindowRegistration *v2; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v2 = this;
    *(_QWORD *)this = &WindowRegistration::`vftable';
    WindowRegistration::CloseNoLock(this);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x33,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      v1);
    v2 = this;
  }
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>((void **)v2 + 4);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)v2);
}
