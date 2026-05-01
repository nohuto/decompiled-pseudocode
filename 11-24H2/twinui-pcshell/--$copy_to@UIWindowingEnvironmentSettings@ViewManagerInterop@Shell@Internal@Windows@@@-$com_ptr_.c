/*
 * XREFs of ??$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802219A4
 * Callers:
 *     ?AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Z @ 0x1804199B0 (-AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU-$IVectorView@PEAUISetti.c)
 *     ?GetWindowingSettings@ViewEventArgsForWindowingSettings@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIWindowingEnvironmentSettings@3456@@Z @ 0x18041FDF0 (-GetWindowingSettings@ViewEventArgsForWindowingSettings@@UEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?get_RelativePositionAnchorView@UwpWindowingEnvironmentSettings@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804261C0 (-get_RelativePositionAnchorView@UwpWindowingEnvironmentSettings@@UEAAJPEAPEAUIViewWrapper@ViewMa.c)
 *     ?get_WindowingEnvironmentSettings@ViewEventArgsForShowAsStandalone@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180426650 (-get_WindowingEnvironmentSettings@ViewEventArgsForShowAsStandalone@@UEAAJPEAPEAUIWindowingEnviro.c)
 *     ?get_WindowingEnvironmentSettings@ViewEventArgsForShowAsViewMode@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180426680 (-get_WindowingEnvironmentSettings@ViewEventArgsForShowAsViewMode@@UEAAJPEAPEAUIWindowingEnvironm.c)
 *     ?AddWindowingEnvironmentSettings@UwpWindowingEnvironmentSettings@@UEAAXPEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z@std@@@Z @ 0x1804282A0 (-AddWindowingEnvironmentSettings@UwpWindowingEnvironmentSettings@@UEAAXPEAU-$IVectorView@PEAUISe.c)
 *     ?FlushStashedWindowingEnvironmentSettings@WindowWrapperBase@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180440170 (-FlushStashedWindowingEnvironmentSettings@WindowWrapperBase@@UEAAJPEAPEAUIWindowingEnvironmentSe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::copy_to<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
