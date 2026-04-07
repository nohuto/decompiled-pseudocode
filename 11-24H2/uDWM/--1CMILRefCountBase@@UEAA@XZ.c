/*
 * XREFs of ??1CMILRefCountBase@@UEAA@XZ @ 0x1800849AC
 * Callers:
 *     ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x180073578 (--1CDWMDXGIAdapter@@EEAA@XZ.c)
 *     ??1CDWMDXGIEnumeration@@MEAA@XZ @ 0x180075F5C (--1CDWMDXGIEnumeration@@MEAA@XZ.c)
 *     ??_GCMILRefCountBase@@UEAAPEAXI@Z @ 0x1800F53F0 (--_GCMILRefCountBase@@UEAAPEAXI@Z.c)
 *     _CDWMDXGIAdapter::CDWMDXGIAdapter_::_1_::dtor$0 @ 0x1800F7351 (_CDWMDXGIAdapter--CDWMDXGIAdapter_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILRefCountBase::~CMILRefCountBase(CMILRefCountBase *this)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
