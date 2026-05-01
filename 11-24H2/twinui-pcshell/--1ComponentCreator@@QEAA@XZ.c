/*
 * XREFs of ??1ComponentCreator@@QEAA@XZ @ 0x1803DFF80
 * Callers:
 *     ??1CImmersiveShellCreationBehavior@@EEAA@XZ @ 0x1803DFF34 (--1CImmersiveShellCreationBehavior@@EEAA@XZ.c)
 *     ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x1803DFFB8 (--1ImmersiveShellComponentsConfiguration@@UEAA@XZ.c)
 *     _ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration_::_1_::dtor$4 @ 0x1806E71C7 (_ImmersiveShellComponentsConfiguration--ImmersiveShellComponentsConfiguration_--_1_--dtor$4.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall ComponentCreator::~ComponentCreator(ComponentCreator *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this);
}
