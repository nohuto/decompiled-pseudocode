/*
 * XREFs of ??_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x140095760
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNPagedLookasideListFromPool@@MEAA@XZ @ 0x1400956B0 (--1FxNPagedLookasideListFromPool@@MEAA@XZ.c)
 */

FxNPagedLookasideListFromPool *__fastcall FxNPagedLookasideListFromPool::`vector deleting destructor'(
        FxNPagedLookasideListFromPool *this,
        char a2)
{
  FxNPagedLookasideListFromPool::~FxNPagedLookasideListFromPool(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
