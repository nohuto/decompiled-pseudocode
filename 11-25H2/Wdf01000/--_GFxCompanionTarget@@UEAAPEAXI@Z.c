/*
 * XREFs of ??_GFxCompanionTarget@@UEAAPEAXI@Z @ 0x14008F320
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxCompanionTarget *__fastcall FxCompanionTarget::`scalar deleting destructor'(FxCompanionTarget *this, char a2)
{
  this->FxNonPagedObject::FxObject::__vftable = (FxCompanionTarget_vtbl *)FxCompanionTarget::`vftable'{for `FxNonPagedObject'};
  this->IDeviceCompanionCallbacks::__vftable = (IDeviceCompanionCallbacks_vtbl *)FxCompanionTarget::`vftable'{for `IDeviceCompanionCallbacks'};
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
