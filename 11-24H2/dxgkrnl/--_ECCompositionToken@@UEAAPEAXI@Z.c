/*
 * XREFs of ??_ECCompositionToken@@UEAAPEAXI@Z @ 0x140099DF0
 * Callers:
 *     ??_ECCompositionToken@@W7EAAPEAXI@Z @ 0x140099DE0 (--_ECCompositionToken@@W7EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

CCompositionToken *__fastcall CCompositionToken::`vector deleting destructor'(CCompositionToken *this)
{
  *((_QWORD *)this + 1) = &CTokenBase::`vftable';
  return this;
}
