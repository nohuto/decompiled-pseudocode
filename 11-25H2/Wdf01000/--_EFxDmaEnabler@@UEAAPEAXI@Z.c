/*
 * XREFs of ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1400895B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxDmaEnabler@@UEAA@XZ @ 0x140089538 (--1FxDmaEnabler@@UEAA@XZ.c)
 */

FxDmaEnabler *__fastcall FxDmaEnabler::`vector deleting destructor'(FxDmaEnabler *this, char a2)
{
  FxDmaEnabler::~FxDmaEnabler(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
