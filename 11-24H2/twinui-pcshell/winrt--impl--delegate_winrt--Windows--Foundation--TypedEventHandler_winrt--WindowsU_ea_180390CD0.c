/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs___lambda_01b8ae2d9cbe4889d05ea36904e58758___::Invoke @ 0x180390CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_query@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStartExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801EA840 (--$try_query@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIWeakRefe.c)
 *     ?OnDisplayMonitorInfoChangedAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801FEF28 (-OnDisplayMonitorInfoChangedAsync@CStartExperienceManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs___lambda_01b8ae2d9cbe4889d05ea36904e58758___::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IStartExperienceManager>(
    (__int64 *)(a1 + 24),
    &v4);
  try
  {
    if ( v4 )
      CStartExperienceManager::OnDisplayMonitorInfoChangedAsync(*(_QWORD *)(a1 + 16), (__int64)&v3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
