/*
 * XREFs of ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x180187A48
 * Callers:
 *     ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x180187860 (-__abi_Release@-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 *     ?__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180187910 (-__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
Platform::Details::__abi_CapturePtr *__fastcall Platform::Details::__abi_CapturePtr::`scalar deleting destructor'(
        Platform::Details::__abi_CapturePtr *this)
{
  Platform::Details::__abi_CapturePtr *v2; // rbx

  v2 = (Platform::Details::__abi_CapturePtr *)*((_QWORD *)this + 32);
  (**(void (__fastcall ***)(void *, _QWORD))v2)(v2, 0LL);
  if ( v2 != this )
    Platform::Details::Heap::Free(v2);
  return this;
}
