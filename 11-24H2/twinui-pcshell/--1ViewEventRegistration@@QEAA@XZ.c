/*
 * XREFs of ??1ViewEventRegistration@@QEAA@XZ @ 0x180214E90
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UViewEventRegistration@@@std@@EEAAXXZ @ 0x180228860 (-_Destroy@-$_Ref_count_obj2@UViewEventRegistration@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ViewEventRegistration::~ViewEventRegistration(ViewEventRegistration *this)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)this + 3);
  Windows::Internal::String::~String((HSTRING *)this + 1);
  Windows::Internal::String::~String((HSTRING *)this);
}
