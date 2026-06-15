/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x180010C98
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800104EC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001C71C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800490E8 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x1800492E0 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x18004C305 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x18004C654 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  volatile signed __int32 *v1; // rdx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rdx

  v1 = (volatile signed __int32 *)(*((_QWORD *)this + 14) - 24LL);
  *(_QWORD *)this = &ATL::CSid::`vftable';
  if ( _InterlockedDecrement(v1 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  v3 = (volatile signed __int32 *)(*((_QWORD *)this + 13) - 24LL);
  if ( _InterlockedDecrement(v3 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 12) - 24LL);
  if ( _InterlockedDecrement(v4 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  v5 = (volatile signed __int32 *)(*((_QWORD *)this + 11) - 24LL);
  if ( _InterlockedDecrement(v5 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
}
