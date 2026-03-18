/*
 * XREFs of ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1400644B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxObject::SelfDestruct(FxObject *this)
{
  if ( this )
    ((void (__fastcall *)(FxObject *, __int64))this->~FxObject)(this, 1LL);
}
