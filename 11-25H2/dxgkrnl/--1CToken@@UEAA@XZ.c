/*
 * XREFs of ??1CToken@@UEAA@XZ @ 0x14000FBB0
 * Callers:
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x14000FB78 (--1CFlipContentToken@@UEAA@XZ.c)
 *     ??_GCToken@@UEAAPEAXI@Z @ 0x140098D30 (--_GCToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CToken::~CToken(CToken *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  *(_QWORD *)this = &CToken::`vftable';
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 12);
  if ( v2 )
    (**v2)(v2);
  ObfDereferenceObject(*((PVOID *)this + 6));
  *(_QWORD *)this = &CTokenBase::`vftable';
}
