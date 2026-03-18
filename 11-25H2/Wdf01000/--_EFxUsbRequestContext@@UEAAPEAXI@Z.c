/*
 * XREFs of ??_EFxUsbRequestContext@@UEAAPEAXI@Z @ 0x1400087E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 */

FxRequestContext *__fastcall FxUsbRequestContext::`vector deleting destructor'(FxRequestContext *this, char a2)
{
  this->__vftable = (FxRequestContext_vtbl *)FxRequestContext::`vftable';
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
