/*
 * XREFs of ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x1400956C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNPagedLookasideList@@MEAA@XZ @ 0x140056558 (--1FxNPagedLookasideList@@MEAA@XZ.c)
 */

FxNPagedLookasideList *__fastcall FxNPagedLookasideList::`vector deleting destructor'(
        FxNPagedLookasideList *this,
        char a2)
{
  FxNPagedLookasideList::~FxNPagedLookasideList(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
