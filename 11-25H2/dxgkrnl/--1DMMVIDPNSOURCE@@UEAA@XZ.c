/*
 * XREFs of ??1DMMVIDPNSOURCE@@UEAA@XZ @ 0x14001C314
 * Callers:
 *     ??_GDMMVIDPNSOURCE@@UEAAPEAXI@Z @ 0x14001C2D0 (--_GDMMVIDPNSOURCE@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAA@XZ @ 0x14001C450 (--1-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAA@XZ.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ @ 0x14001C4AC (--1-$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ.c)
 */

void __fastcall DMMVIDPNSOURCE::~DMMVIDPNSOURCE(DMMVIDPNSOURCE *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 96) > 1u )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 13), this);
      WdLogGlobalForLineNumber = 802;
    }
    *(_QWORD *)(*((_QWORD *)this + 13) + 112LL) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    WdLogSingleEntry1(2LL, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 813;
  }
  DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::~AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>((char *)this + 128);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    ReferenceCounted::Release((ReferenceCounted *)(v3 + 88));
  *((_QWORD *)this + 15) = 0LL;
  auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>((char *)this + 112);
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    ReferenceCounted::Release((ReferenceCounted *)(v4 + 88));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
