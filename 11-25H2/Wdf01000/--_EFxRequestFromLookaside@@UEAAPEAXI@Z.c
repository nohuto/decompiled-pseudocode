/*
 * XREFs of ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x140094520
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x140032A20 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 */

FxRequestBase *__fastcall FxRequestFromLookaside::`vector deleting destructor'(FxRequestBase *this, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  FxRequestBase::~FxRequestBase(this, a2);
  if ( (v2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
