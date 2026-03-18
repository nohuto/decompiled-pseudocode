/*
 * XREFs of ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x14004B240
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x14004C528 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 */

FxCallbackSpinLock *__fastcall FxCallbackSpinLock::`vector deleting destructor'(FxCallbackSpinLock *this, char a2)
{
  FxCallbackSpinLock::~FxCallbackSpinLock(this);
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
