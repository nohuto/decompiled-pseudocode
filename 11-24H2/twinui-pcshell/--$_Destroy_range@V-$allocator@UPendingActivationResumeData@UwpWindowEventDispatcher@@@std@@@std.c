/*
 * XREFs of ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18009B8B4
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009B0F4 (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 *     ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x18014A45C (--$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@-$vector@UPending.c)
 *     ??$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@0PEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18014A5B8 (--$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UP.c)
 *     ?UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1801DCD00 (-UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifec.c)
 *     ??1UwpWindowEventDispatcher@@UEAA@XZ @ 0x180427924 (--1UwpWindowEventDispatcher@@UEAA@XZ.c)
 *     _std::vector_UwpWindowEventDispatcher::PendingActivationResumeData_std::allocator_UwpWindowEventDispatcher::PendingActivationResumeData___::_Emplace_reallocate_UwpWindowEventDispatcher::PendingActivationResumeData__::_1_::catch$1 @ 0x1806D4857 (_std--vector_UwpWindowEventDispatcher--PendingActivationResumeData_std--allocator_UwpWindowEvent.c)
 * Callees:
 *     ??1?$pair@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@QEAA@XZ @ 0x1800D6120 (--1-$pair@V-$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_p.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(
        char *a1,
        char *a2)
{
  char *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::pair<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>>::~pair<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>>(v3);
      v3 += 32;
    }
    while ( v3 != a2 );
  }
  return result;
}
