/*
 * XREFs of ??1LegacyUwpWindowWrapper@@UEAA@XZ @ 0x1804376A0
 * Callers:
 *     ??_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z @ 0x180437720 (--_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ @ 0x180438F14 (--1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ.c)
 */

void __fastcall LegacyUwpWindowWrapper::~LegacyUwpWindowWrapper(LegacyUwpWindowWrapper *this)
{
  LegacyUwpWindowWrapper::NavigationLevelHelper::~NavigationLevelHelper((LegacyUwpWindowWrapper *)((char *)this + 624));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 76);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>((__int64)this);
}
