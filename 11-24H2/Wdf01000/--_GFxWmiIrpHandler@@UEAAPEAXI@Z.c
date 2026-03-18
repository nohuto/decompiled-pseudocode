/*
 * XREFs of ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x14003FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxWmiIrpHandler@@UEAA@XZ @ 0x1400400B8 (--1FxWmiIrpHandler@@UEAA@XZ.c)
 */

FxWmiIrpHandler *__fastcall FxWmiIrpHandler::`scalar deleting destructor'(FxWmiIrpHandler *this, char a2)
{
  FxWmiIrpHandler::~FxWmiIrpHandler(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
