/*
 * XREFs of ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x18001F73C
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$0 @ 0x180049A0F (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::~CSecurityDesc(ATL::CSecurityDesc *this)
{
  *(_QWORD *)this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
}
