/*
 * XREFs of ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x14004C290
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxIoTargetRemote *__fastcall FxIoTargetRemote::`scalar deleting destructor'(FxIoTargetRemote *this, char a2)
{
  this->__vftable = (FxIoTargetRemote_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
