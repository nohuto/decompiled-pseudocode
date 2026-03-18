/*
 * XREFs of ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x140040030
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxWmiProvider *__fastcall FxWmiProvider::`vector deleting destructor'(FxWmiProvider *this, char a2)
{
  this->__vftable = (FxWmiProvider_vtbl *)FxWmiProvider::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
