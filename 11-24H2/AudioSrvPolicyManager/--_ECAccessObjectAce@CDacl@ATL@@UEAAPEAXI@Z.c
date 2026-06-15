/*
 * XREFs of ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180046960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAccessObjectAce@CDacl@ATL@@UEAA@XZ @ 0x180046874 (--1CAccessObjectAce@CDacl@ATL@@UEAA@XZ.c)
 */

void **__fastcall ATL::CDacl::CAccessObjectAce::`vector deleting destructor'(void **this, char a2)
{
  ATL::CDacl::CAccessObjectAce::~CAccessObjectAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
