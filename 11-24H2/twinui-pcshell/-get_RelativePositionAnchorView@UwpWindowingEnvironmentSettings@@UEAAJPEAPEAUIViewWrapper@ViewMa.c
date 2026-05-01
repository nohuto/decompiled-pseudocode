/*
 * XREFs of ?get_RelativePositionAnchorView@UwpWindowingEnvironmentSettings@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804261C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802219A4 (--$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_.c)
 */

__int64 __fastcall UwpWindowingEnvironmentSettings::get_RelativePositionAnchorView(
        UwpWindowingEnvironmentSettings *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  *a2 = 0LL;
  if ( !*((_BYTE *)this + 92) )
    return 2147943568LL;
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::copy_to<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings>(
    (__int64 *)this + 13,
    a2);
  return 0LL;
}
