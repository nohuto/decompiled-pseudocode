/*
 * XREFs of ??_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x140095700
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNPagedLookasideListFromPool@@MEAA@XZ @ 0x140095650 (--1FxNPagedLookasideListFromPool@@MEAA@XZ.c)
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
