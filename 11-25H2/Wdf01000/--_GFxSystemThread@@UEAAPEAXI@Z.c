/*
 * XREFs of ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1400ABC80
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxSystemThread *__fastcall FxSystemThread::`scalar deleting destructor'(FxSystemThread *this, char a2)
{
  this->__vftable = (FxSystemThread_vtbl *)FxSystemThread::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
