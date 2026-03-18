/*
 * XREFs of ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x140040360
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x140040398 (--1FxWorkItem@@UEAA@XZ.c)
 */

FxWorkItem *__fastcall FxWorkItem::`vector deleting destructor'(FxWorkItem *this, char a2)
{
  FxWorkItem::~FxWorkItem(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
