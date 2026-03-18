/*
 * XREFs of ??_ECFlipToken@@MEAAPEAXI@Z @ 0x140034A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x140034AD0 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

PVOID __fastcall CFlipToken::`vector deleting destructor'(PVOID P, char a2)
{
  bool v2; // zf
  void (__fastcall ***v5)(_QWORD); // rcx

  v2 = *((_DWORD *)P + 6) == 6;
  *(_QWORD *)P = &CFlipToken::`vftable';
  if ( !v2 )
    CFlipToken::Discard((CFlipToken *)P);
  v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)P + 12);
  *(_QWORD *)P = &CToken::`vftable';
  if ( v5 )
    (**v5)(v5);
  ObfDereferenceObject(*((PVOID *)P + 6));
  *(_QWORD *)P = &CTokenBase::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
