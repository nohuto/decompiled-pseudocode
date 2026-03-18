/*
 * XREFs of ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1400567E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140056A50 (--1FxObject@@UEAA@XZ.c)
 */

FxUsbUrb *__fastcall FxUsbUrb::`vector deleting destructor'(FxUsbUrb *this, char a2)
{
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
