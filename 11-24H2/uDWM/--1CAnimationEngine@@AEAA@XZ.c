/*
 * XREFs of ??1CAnimationEngine@@AEAA@XZ @ 0x1800A719C
 * Callers:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAnimationEngine::~CAnimationEngine(void **this)
{
  *this = &CAnimationEngine::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 9);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 5);
}
