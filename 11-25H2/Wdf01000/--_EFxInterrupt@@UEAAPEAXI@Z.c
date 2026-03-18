/*
 * XREFs of ??_EFxInterrupt@@UEAAPEAXI@Z @ 0x1400A90E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1400A9034 (--1FxInterrupt@@UEAA@XZ.c)
 */

FxInterrupt *__fastcall FxInterrupt::`vector deleting destructor'(FxInterrupt *this, char a2)
{
  FxInterrupt::~FxInterrupt(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
