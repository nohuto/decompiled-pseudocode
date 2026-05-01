/*
 * XREFs of WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_874ff214a0b646fdadc64ee948f17e8a___ @ 0x18029E50C
 * Callers:
 *     ?AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18029E3E0 (-AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18003FC58 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x180118944 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_874ff214a0b646fdadc64ee948f17e8a___(
        _QWORD *a1,
        Platform::WeakReference *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF
  Platform::WeakReference *v8; // [rsp+48h] [rbp+10h]

  v8 = a2;
  v7 = a1;
  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = *(_QWORD **)a2;
    v7 = v5;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
    *v4 = &off_1808C13F8;
    a1[6] = v5;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
    Platform::WeakReference::InternalRelease((Platform::WeakReference *)&v7);
  }
  a1[37] = v4;
  Platform::WeakReference::InternalRelease(a2);
  return a1;
}
