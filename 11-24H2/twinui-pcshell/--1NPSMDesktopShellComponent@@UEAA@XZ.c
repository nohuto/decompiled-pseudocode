/*
 * XREFs of ??1NPSMDesktopShellComponent@@UEAA@XZ @ 0x18021ACB8
 * Callers:
 *     ??1?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ @ 0x1802C3C54 (--1-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ.c)
 *     ??_ENPSMDesktopShellComponent@@UEAAPEAXI@Z @ 0x18060EDE0 (--_ENPSMDesktopShellComponent@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_NPSMDesktopShellComponent___::heap_implements_wil::details::module_count_wrapper_NPSMDesktopShellComponent____::_1_::dtor$1 @ 0x1806FF631 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_NPSMDesktopShellComponent___--h.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800C0A54 (--1SmartCookie@@QEAA@XZ.c)
 */

void __fastcall NPSMDesktopShellComponent::~NPSMDesktopShellComponent(NPSMDesktopShellComponent *this)
{
  SmartCookie::~SmartCookie((NPSMDesktopShellComponent *)((char *)this + 160));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 18);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  winrt::immersive_shell_component::~immersive_shell_component((NPSMDesktopShellComponent *)((char *)this + 8));
}
