/*
 * XREFs of ??_EFxPkgPnp@@MEAAPEAXI@Z @ 0x1400A5B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003FD1C (--1FxPkgPnp@@MEAA@XZ.c)
 */

FxPkgPnp *__fastcall FxPkgPnp::`vector deleting destructor'(FxPkgPnp *this, char a2)
{
  FxPkgPnp::~FxPkgPnp(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
