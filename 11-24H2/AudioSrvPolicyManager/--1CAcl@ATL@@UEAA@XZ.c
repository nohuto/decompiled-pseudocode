/*
 * XREFs of ??1CAcl@ATL@@UEAA@XZ @ 0x18001F550
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$6 @ 0x180049A57 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::~CAcl(void **this)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
}
