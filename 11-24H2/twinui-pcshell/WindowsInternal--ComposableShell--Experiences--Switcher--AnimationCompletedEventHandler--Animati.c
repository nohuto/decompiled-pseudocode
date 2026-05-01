/*
 * XREFs of WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___ @ 0x1801BAC40
 * Callers:
 *     ?DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x1801BA9E0 (-DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x180118944 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_ @ 0x1801BACF4 (_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_--_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_.c)
 *     _lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::__lambda_c4c5c4b54f46ee55e98247dc2d6953d1_ @ 0x1802BE82C (_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_--__lambda_c4c5c4b54f46ee55e98247dc2d6953d1_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___(
        _QWORD *a1,
        void *a2)
{
  _QWORD *v4; // rdi
  void *v5; // rbx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = (void *)lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(v7, a2);
    *v4 = &off_1808C3340;
    lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(a1 + 6, v5);
    lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::__lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(v5);
  }
  a1[37] = v4;
  lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::__lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(a2);
  return a1;
}
