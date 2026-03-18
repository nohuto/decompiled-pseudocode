/*
 * XREFs of ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C005CF9C
 * Callers:
 *     ?Delete@CRecalcProp@@UEAAXXZ @ 0x1C005BD80 (-Delete@CRecalcProp@@UEAAXXZ.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C005BDFC (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C005D564 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 * Callees:
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1C005CFCC (--1CRecalcProp@@AEAA@XZ.c)
 */

CRecalcProp *__fastcall CRecalcProp::`scalar deleting destructor'(CRecalcProp *this)
{
  CRecalcProp::~CRecalcProp(this);
  Win32FreePool(this);
  return this;
}
