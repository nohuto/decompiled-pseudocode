/*
 * XREFs of ??1FallbackFlyoutView@@QEAA@XZ @ 0x1805F9C24
 * Callers:
 *     ??1?$unique_ptr@VFallbackFlyoutView@@U?$default_delete@VFallbackFlyoutView@@@std@@@std@@QEAA@XZ @ 0x1805F9BF4 (--1-$unique_ptr@VFallbackFlyoutView@@U-$default_delete@VFallbackFlyoutView@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall FallbackFlyoutView::~FallbackFlyoutView(FallbackFlyoutView *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 1);
}
