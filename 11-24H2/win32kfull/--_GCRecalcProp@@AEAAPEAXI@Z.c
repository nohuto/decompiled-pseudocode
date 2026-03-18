/*
 * XREFs of ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1401E072C
 * Callers:
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1401BF578 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?Delete@CRecalcProp@@UEAAXXZ @ 0x1401E0650 (-Delete@CRecalcProp@@UEAAXXZ.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1402C3C60 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1402C1F0C (--1CRecalcProp@@AEAA@XZ.c)
 */

CRecalcProp *__fastcall CRecalcProp::`scalar deleting destructor'(CRecalcProp *this)
{
  CRecalcProp::~CRecalcProp(this);
  Win32FreePool(this);
  return this;
}
