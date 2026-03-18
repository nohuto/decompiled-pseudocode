/*
 * XREFs of ??1CNaturalAnimationScalarForceAdapater@@EEAA@XZ @ 0x1802B99D0
 * Callers:
 *     ??_GCNaturalAnimationScalarForceAdapater@@EEAAPEAXI@Z @ 0x1802A9BE0 (--_GCNaturalAnimationScalarForceAdapater@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CNaturalAnimationScalarForceAdapater::~CNaturalAnimationScalarForceAdapater(
        CNaturalAnimationScalarForceAdapater *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CNaturalAnimationScalarForceAdapater::`vftable';
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
