/*
 * XREFs of ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x14004C020
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x14004C058 (--1FxSystemWorkItem@@UEAA@XZ.c)
 */

FxSystemWorkItem *__fastcall FxSystemWorkItem::`scalar deleting destructor'(FxSystemWorkItem *this, char a2)
{
  FxSystemWorkItem::~FxSystemWorkItem(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
