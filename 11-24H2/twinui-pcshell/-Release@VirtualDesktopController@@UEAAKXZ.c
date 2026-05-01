/*
 * XREFs of ?Release@VirtualDesktopController@@UEAAKXZ @ 0x18022C950
 * Callers:
 *     ?Release@VirtualDesktopController@@W7EAAKXZ @ 0x1804956B0 (-Release@VirtualDesktopController@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBA@EAAKXZ @ 0x1804956C0 (-Release@VirtualDesktopController@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBI@EAAKXZ @ 0x1804956D0 (-Release@VirtualDesktopController@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WCA@EAAKXZ @ 0x1804956E0 (-Release@VirtualDesktopController@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WCI@EAAKXZ @ 0x1804956F0 (-Release@VirtualDesktopController@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopController::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController3,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(this);
}
