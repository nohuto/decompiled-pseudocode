/*
 * XREFs of ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18007DE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800A6AA0 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ATL::CDacl::CAccessAce *__fastcall ATL::CDacl::CAccessAce::`vector deleting destructor'(
        ATL::CDacl::CAccessAce *this,
        char a2)
{
  *(_QWORD *)this = &ATL::CDacl::CAccessAce::`vftable';
  ATL::CAcl::CAce::~CAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
