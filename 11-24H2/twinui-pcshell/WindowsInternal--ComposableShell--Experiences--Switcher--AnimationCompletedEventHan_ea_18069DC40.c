/*
 * XREFs of WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_d0a1935d0729a9f12d8e79c8432e6d28___ @ 0x18069DC40
 * Callers:
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18069F6B0 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x180118944 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??0?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVXamlGamingTaskViewHost@@@Z @ 0x18069E05C (--0-$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVXamlGamingTask.c)
 *     ??1?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18069EA20 (--1-$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_d0a1935d0729a9f12d8e79c8432e6d28___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
      &v6,
      *a2);
    *v4 = &off_1808C0D40;
    wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
      a1 + 6,
      v6);
    wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::~com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(&v6);
  }
  a1[37] = v4;
  wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::~com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(a2);
  return a1;
}
