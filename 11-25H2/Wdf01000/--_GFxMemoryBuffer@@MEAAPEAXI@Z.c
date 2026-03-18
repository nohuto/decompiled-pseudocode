/*
 * XREFs of ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x140056990
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140056A50 (--1FxObject@@UEAA@XZ.c)
 */

FxMemoryBuffer *__fastcall FxMemoryBuffer::`scalar deleting destructor'(FxMemoryBuffer *this, char a2)
{
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBuffer_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
