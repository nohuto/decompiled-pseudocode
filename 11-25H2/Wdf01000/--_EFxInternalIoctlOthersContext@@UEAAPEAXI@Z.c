/*
 * XREFs of ??_EFxInternalIoctlOthersContext@@UEAAPEAXI@Z @ 0x14006C830
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 */

FxInternalIoctlOthersContext *__fastcall FxInternalIoctlOthersContext::`vector deleting destructor'(
        FxInternalIoctlOthersContext *this,
        char a2)
{
  this->__vftable = (FxInternalIoctlOthersContext_vtbl *)FxRequestContext::`vftable';
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
