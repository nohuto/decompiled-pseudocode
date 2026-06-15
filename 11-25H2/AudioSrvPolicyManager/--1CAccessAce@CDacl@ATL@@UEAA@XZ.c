/*
 * XREFs of ??1CAccessAce@CDacl@ATL@@UEAA@XZ @ 0x18004907C
 * Callers:
 *     _ATL::CDacl::CAccessObjectAce::CAccessObjectAce_::_1_::dtor$0 @ 0x18004E0CE (_ATL--CDacl--CAccessObjectAce--CAccessObjectAce_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CDacl::CAccessAce::~CAccessAce(ATL::CDacl::CAccessAce *this)
{
  *(_QWORD *)this = &ATL::CDacl::CAccessAce::`vftable';
  ATL::CAcl::CAce::~CAce(this);
}
