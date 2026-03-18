/*
 * XREFs of ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x140095D10
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052A60 (--1FxObject@@UEAA@XZ.c)
 */

FxLookasideList *__fastcall FxLookasideList::`scalar deleting destructor'(FxLookasideList *this, char a2)
{
  this->__vftable = (FxLookasideList_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
