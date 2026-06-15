/*
 * XREFs of ?SetNull@CAcl@ATL@@QEAAXXZ @ 0x18001CA1C
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800104EC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001C71C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CAcl::SetNull(ATL::CAcl *this)
{
  (*(void (__fastcall **)(ATL::CAcl *))(*(_QWORD *)this + 16LL))(this);
  *((_BYTE *)this + 16) = 1;
}
