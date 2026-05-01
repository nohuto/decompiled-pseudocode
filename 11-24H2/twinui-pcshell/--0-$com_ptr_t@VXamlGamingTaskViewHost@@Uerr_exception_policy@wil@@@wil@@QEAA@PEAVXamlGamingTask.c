/*
 * XREFs of ??0?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVXamlGamingTaskViewHost@@@Z @ 0x18069E05C
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_d0a1935d0729a9f12d8e79c8432e6d28___ @ 0x18069DC40 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHan_ea_18069DC40.c)
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18069F6B0 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

volatile int **__fastcall wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
        volatile int **a1,
        volatile int *a2)
{
  volatile int **v2; // r8

  *a1 = a2;
  v2 = a1;
  if ( a2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 33), a2);
  return v2;
}
