/*
 * XREFs of ??_EFxCallbackLock@@UEAAPEAXI@Z @ 0x140094800
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 */

FxCallbackLock *__fastcall FxCallbackLock::`vector deleting destructor'(FxCallbackLock *this, char a2)
{
  this->__vftable = (FxCallbackLock_vtbl *)FxCallbackLock::`vftable';
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
