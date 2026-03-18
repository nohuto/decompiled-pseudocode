/*
 * XREFs of ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x140094580
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14000BC50 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 */

FxRequestBase *__fastcall FxRequestFromLookaside::`vector deleting destructor'(FxRequestBase *this, char a2)
{
  FxRequestBase::~FxRequestBase(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
