/*
 * XREFs of ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800B62A0
 * Callers:
 *     ??1CCompositor@@MEAA@XZ @ 0x1800B6058 (--1CCompositor@@MEAA@XZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B84E0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositor::Shutdown(CCompositor *this)
{
  wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 3);
}
