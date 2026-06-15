/*
 * XREFs of ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180049130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800490E8 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 */

void **__fastcall ATL::CDacl::CAccessAce::`vector deleting destructor'(void **this, char a2)
{
  *this = &ATL::CDacl::CAccessAce::`vftable';
  ATL::CAcl::CAce::~CAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
