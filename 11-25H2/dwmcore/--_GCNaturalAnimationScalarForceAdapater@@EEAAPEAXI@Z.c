/*
 * XREFs of ??_GCNaturalAnimationScalarForceAdapater@@EEAAPEAXI@Z @ 0x1802A9BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CNaturalAnimationScalarForceAdapater@@EEAA@XZ @ 0x1802B99D0 (--1CNaturalAnimationScalarForceAdapater@@EEAA@XZ.c)
 */

CNaturalAnimationScalarForceAdapater *__fastcall CNaturalAnimationScalarForceAdapater::`scalar deleting destructor'(
        CNaturalAnimationScalarForceAdapater *this,
        char a2)
{
  CNaturalAnimationScalarForceAdapater::~CNaturalAnimationScalarForceAdapater(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
