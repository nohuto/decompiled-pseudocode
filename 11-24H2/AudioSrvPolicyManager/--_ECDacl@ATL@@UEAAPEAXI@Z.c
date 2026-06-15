/*
 * XREFs of ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x180046A30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18001D068 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ATL::CDacl *__fastcall ATL::CDacl::`vector deleting destructor'(ATL::CDacl *this, char a2)
{
  ATL::CDacl::~CDacl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
