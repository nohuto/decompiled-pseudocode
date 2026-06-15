/*
 * XREFs of ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x1800A6F60
 * Callers:
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$0 @ 0x180161EB4 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::~CSecurityDesc(ATL::CSecurityDesc *this)
{
  *(_QWORD *)this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
}
