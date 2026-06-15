/*
 * XREFs of ??1CRegObject@ATL@@UEAA@XZ @ 0x1400895D4
 * Callers:
 *     ??_ECRegObject@ATL@@UEAAPEAXI@Z @ 0x1400898A0 (--_ECRegObject@ATL@@UEAAPEAXI@Z.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x14008C694 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     ??1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140007B00 (--1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ.c)
 *     ?ClearReplacements@CRegObject@ATL@@UEAAJXZ @ 0x14008A780 (-ClearReplacements@CRegObject@ATL@@UEAAJXZ.c)
 */

void __fastcall ATL::CRegObject::~CRegObject(ATL::CRegObject *this)
{
  *(_QWORD *)this = &ATL::CRegObject::`vftable';
  ATL::CRegObject::ClearReplacements(this);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((ATL::CRegObject *)((char *)this + 32));
  ATL::CExpansionVector::~CExpansionVector((ATL::CRegObject *)((char *)this + 8));
}
