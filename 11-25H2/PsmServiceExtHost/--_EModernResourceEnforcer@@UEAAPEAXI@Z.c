/*
 * XREFs of ??_EModernResourceEnforcer@@UEAAPEAXI@Z @ 0x180084C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180071EDC (--3@YAXPEAX@Z.c)
 *     ??1ModernResourceEnforcer@@UEAA@XZ @ 0x180084BB8 (--1ModernResourceEnforcer@@UEAA@XZ.c)
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::`vector deleting destructor'(
        ModernResourceEnforcer *this,
        char a2)
{
  ModernResourceEnforcer::~ModernResourceEnforcer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
