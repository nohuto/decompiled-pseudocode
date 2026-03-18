/*
 * XREFs of ??1DMMVIDPNTARGET@@UEAA@XZ @ 0x14001BC04
 * Callers:
 *     ??_EDMMVIDPNTARGET@@UEAAPEAXI@Z @ 0x14001BBC0 (--_EDMMVIDPNTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DMMVIDPNTARGET::~DMMVIDPNTARGET(DMMVIDPNTARGET *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 96) > 1u )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 13), this);
      WdLogGlobalForLineNumber = 813;
    }
    *(_QWORD *)(*((_QWORD *)this + 13) + 112LL) = 0LL;
  }
  if ( *((_QWORD *)this + 14) )
  {
    WdLogSingleEntry1(2LL, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 824;
  }
  ReferenceCounted::Release((ReferenceCounted *)(*((_QWORD *)this + 12) + 64LL));
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, 1LL);
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
    ReferenceCounted::Release((ReferenceCounted *)(v4 + 88));
  *((_QWORD *)this + 14) = 0LL;
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 88));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
