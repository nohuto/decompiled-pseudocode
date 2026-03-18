/*
 * XREFs of ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x140099E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1400566BC (--1FxPagedObject@@UEAA@XZ.c)
 */

FxPagedObject *__fastcall FxPagedObject::`scalar deleting destructor'(FxPagedObject *this, char a2)
{
  FxPagedObject::~FxPagedObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
