/*
 * XREFs of ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x1803639C4
 * Callers:
 *     ?FindWindowW@GamingOverlayExperienceManager@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@Uread_lock_required@wil@@AEBI@Z @ 0x18034CD80 (-FindWindowW@GamingOverlayExperienceManager@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple.c)
 * Callees:
 *     ?ViewInstanceId@?$consume_Windows_Internal_Shell_ViewManagerInterop_IViewWrapper@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180364CB4 (-ViewInstanceId@-$consume_Windows_Internal_Shell_ViewManagerInterop_IViewWrapper@UIViewWrapper@V.c)
 */

bool __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *this,
        int a2)
{
  bool result; // al
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return 0;
  try
  {
    result = (unsigned int)winrt::impl::consume_Windows_Internal_Shell_ViewManagerInterop_IViewWrapper<winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::ViewInstanceId() == a2;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCC,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
                           v3) != 0;
  }
  return result;
}
