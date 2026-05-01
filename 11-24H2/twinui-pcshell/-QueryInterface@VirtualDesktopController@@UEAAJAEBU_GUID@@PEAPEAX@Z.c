/*
 * XREFs of ?QueryInterface@VirtualDesktopController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18023B410
 * Callers:
 *     ?QueryInterface@VirtualDesktopController@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804955C0 (-QueryInterface@VirtualDesktopController@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804955D0 (-QueryInterface@VirtualDesktopController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804955E0 (-QueryInterface@VirtualDesktopController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804955F0 (-QueryInterface@VirtualDesktopController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180495600 (-QueryInterface@VirtualDesktopController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopController::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController3,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>>(
           this,
           a2,
           a3);
}
