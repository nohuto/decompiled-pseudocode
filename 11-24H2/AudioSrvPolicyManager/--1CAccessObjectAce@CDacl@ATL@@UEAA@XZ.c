/*
 * XREFs of ??1CAccessObjectAce@CDacl@ATL@@UEAA@XZ @ 0x180046874
 * Callers:
 *     ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180046960 (--_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CDacl::CAccessObjectAce::~CAccessObjectAce(void **this)
{
  *this = &ATL::CDacl::CAccessObjectAce::`vftable';
  operator delete(this[19], (const struct std::nothrow_t *)0x10);
  operator delete(this[20], (const struct std::nothrow_t *)0x10);
  *this = &ATL::CDacl::CAccessAce::`vftable';
  ATL::CAcl::CAce::~CAce((ATL::CAcl::CAce *)this);
}
