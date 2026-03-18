/*
 * XREFs of ??_ECShadowMaskProducer@@EEAAPEAXI@Z @ 0x1802DB3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CShadowMaskProducer@@EEAA@XZ @ 0x1802DB388 (--1CShadowMaskProducer@@EEAA@XZ.c)
 */

CRectanglesShape **__fastcall CShadowMaskProducer::`vector deleting destructor'(CRectanglesShape **this, char a2)
{
  CShadowMaskProducer::~CShadowMaskProducer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
