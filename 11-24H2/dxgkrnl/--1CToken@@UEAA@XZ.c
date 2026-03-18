/*
 * XREFs of ??1CToken@@UEAA@XZ @ 0x14001F040
 * Callers:
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x14001F008 (--1CFlipContentToken@@UEAA@XZ.c)
 *     ??_GCToken@@UEAAPEAXI@Z @ 0x14009AE80 (--_GCToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
