/*
 * XREFs of ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x14004BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxCommonBuffer *__fastcall FxDmaSystemTransaction::`vector deleting destructor'(FxCommonBuffer *this, char a2)
{
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
