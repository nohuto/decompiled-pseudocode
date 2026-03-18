/*
 * XREFs of ??_ECShadowMaskProducer@@EEAAPEAXI@Z @ 0x1802E4690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CShadowMaskProducer@@EEAA@XZ @ 0x1802E4628 (--1CShadowMaskProducer@@EEAA@XZ.c)
 */

CRectanglesShape **__fastcall CShadowMaskProducer::`vector deleting destructor'(CRectanglesShape **this, char a2)
{
  CShadowMaskProducer::~CShadowMaskProducer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
