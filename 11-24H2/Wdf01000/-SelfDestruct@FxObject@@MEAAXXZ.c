/*
 * XREFs of ?SelfDestruct@FxObject@@MEAAXXZ @ 0x140062E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxObject::SelfDestruct(FxObject *this)
{
  if ( this )
    ((void (__fastcall *)(FxObject *, __int64))this->~FxObject)(this, 1LL);
}
