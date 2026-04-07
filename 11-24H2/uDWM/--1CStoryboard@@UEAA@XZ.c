/*
 * XREFs of ??1CStoryboard@@UEAA@XZ @ 0x18007D858
 * Callers:
 *     ??_GCCrossFade@@UEAAPEAXI@Z @ 0x18007D820 (--_GCCrossFade@@UEAAPEAXI@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800D17BC (--1CGroupingStoryboard@@UEAA@XZ.c)
 *     ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800D1838 (--1CVirtualDesktopSwitch@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CStoryboard::~CStoryboard(CStoryboard *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 12);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 10);
  CBaseObject::~CBaseObject(this);
}
